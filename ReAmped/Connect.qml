// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

pragma ComponentBehavior: Bound
import QtQuick
import ReAmpedURI

GamePage {
    id: connectPage

    required property ConnectionHandler connectionHandler
    required property DeviceFinder deviceFinder
    required property DeviceHandler deviceHandler

    signal showMeasurePage

    errorMessage: deviceFinder.error
    infoMessage: deviceFinder.info

    Rectangle {
        id: viewContainer
        anchors.top: parent.top
        // only BlueZ platform has address type selection
        anchors.bottom: connectPage.connectionHandler.requiresAddressType ? addressTypeButton.top
                                                                          : searchButton.top
        anchors.topMargin: ReAmpedSettings.fieldMargin + connectPage.messageHeight
        anchors.bottomMargin: ReAmpedSettings.fieldMargin
        anchors.horizontalCenter: parent.horizontalCenter
        width: parent.width - ReAmpedSettings.fieldMargin * 2
        color: ReAmpedSettings.viewColor
        radius: ReAmpedSettings.buttonRadius

        Text {
            id: title
            width: parent.width
            height: ReAmpedSettings.fieldHeight
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            color: ReAmpedSettings.textColor
            font.pixelSize: ReAmpedSettings.mediumFontSize
            text: qsTr("FOUND DEVICES")

            BottomLine {
                height: 1
                width: parent.width
                color: "#898989"
            }
        }

        ListView {
            id: devices
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            anchors.top: title.bottom
            model: connectPage.deviceFinder.devices
            clip: true

            delegate: Rectangle {
                id: box

                required property int index
                required property var modelData

                height: ReAmpedSettings.fieldHeight * 1.2
                width: devices.width
                color: index % 2 === 0 ? ReAmpedSettings.delegate1Color : ReAmpedSettings.delegate2Color

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        connectPage.deviceFinder.connectToService(box.modelData.deviceAddress)
                        connectPage.showMeasurePage()
                    }
                }

                Text {
                    id: device
                    font.pixelSize: ReAmpedSettings.smallFontSize
                    text: box.modelData.deviceName
                    anchors.top: parent.top
                    anchors.topMargin: parent.height * 0.1
                    anchors.leftMargin: parent.height * 0.1
                    anchors.left: parent.left
                    color: ReAmpedSettings.textColor
                }

                Text {
                    id: deviceAddress
                    font.pixelSize: ReAmpedSettings.smallFontSize
                    text: box.modelData.deviceAddress
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: parent.height * 0.1
                    anchors.rightMargin: parent.height * 0.1
                    anchors.right: parent.right
                    color: Qt.darker(ReAmpedSettings.textColor)
                }
            }
        }
    }

    GameButton {
        id: addressTypeButton
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: searchButton.top
        anchors.bottomMargin: ReAmpedSettings.fieldMargin * 0.5
        width: viewContainer.width
        height: ReAmpedSettings.fieldHeight
        visible: connectPage.connectionHandler.requiresAddressType // only required on BlueZ
        state: "public"
        onClicked: state === "public" ? state = "random" : state = "public"

        states: [
            State {
                name: "public"
                PropertyChanges {
                    addressTypeText.text: qsTr("Public Address")
                }
                PropertyChanges {
                    connectPage.deviceHandler.addressType: DeviceHandler.PublicAddress
                }
            },
            State {
                name: "random"
                PropertyChanges {
                    addressTypeText.text: qsTr("Random Address")
                }
                PropertyChanges {
                    connectPage.deviceHandler.addressType: DeviceHandler.RandomAddress
                }
            }
        ]

        Text {
            id: addressTypeText
            anchors.centerIn: parent
            font.pixelSize: ReAmpedSettings.tinyFontSize
            color: ReAmpedSettings.textColor
        }
    }

    GameButton {
        id: searchButton
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: ReAmpedSettings.fieldMargin
        width: viewContainer.width
        height: ReAmpedSettings.fieldHeight
        enabled: !connectPage.deviceFinder.scanning
        onClicked: connectPage.deviceFinder.startSearch()

        Text {
            anchors.centerIn: parent
            font.pixelSize: ReAmpedSettings.tinyFontSize
            text: qsTr("START SEARCH")
            color: searchButton.enabled ? ReAmpedSettings.textColor : ReAmpedSettings.disabledTextColor
        }
    }
}
