// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

import QtQuick
import HeartRateGame

GamePage {
    id: measurePage

    required property DeviceHandler deviceHandler

    errorMessage: deviceHandler.error
    infoMessage: deviceHandler.info

    // property real __timeCounter: 0
    // property real __maxTimeCount: 60
    property string relaxText: qsTr("Relax!\nWhen you are ready, start driving. \nGood luck!")

    signal showStatsPage

    function close() {
        deviceHandler.stopMeasurement()
        deviceHandler.disconnectService()
    }

    // function start() {
    //     if (!deviceHandler.measuring) {
    //         __timeCounter = 0
    //         deviceHandler.startMeasurement()
    //     }
    // }

    // function stop() {
    //     if (deviceHandler.measuring)
    //         deviceHandler.stopMeasurement()

    //     measurePage.showStatsPage()
    // }

    // Timer {
    //     id: measureTimer
    //     interval: 1000
    //     running: measurePage.deviceHandler.measuring
    //     repeat: true
    //     onTriggered: {
    //         measurePage.__timeCounter++
    //         if (measurePage.__timeCounter >= measurePage.__maxTimeCount)
    //             measurePage.stop()
    //     }
    // }

    Column {
        anchors.centerIn: parent
        spacing: ReAmpedSettings.fieldHeight * 0.5

        // Rectangle {
        //     id: circle
        //     anchors.horizontalCenter: parent.horizontalCenter
        //     width: Math.min(measurePage.width, measurePage.height - ReAmpedSettings.fieldHeight * 4)
        //            - 2 * ReAmpedSettings.fieldMargin
        //     height: width
        //     radius: width * 0.5
        //     color: ReAmpedSettings.viewColor

        //     Text {
        //         id: hintText
        //         anchors.centerIn: parent
        //         anchors.verticalCenterOffset: -parent.height * 0.1
        //         horizontalAlignment: Text.AlignHCenter
        //         verticalAlignment: Text.AlignVCenter
        //         width: parent.width * 0.8
        //         height: parent.height * 0.6
        //         wrapMode: Text.WordWrap
        //         text: measurePage.relaxText
        //         visible: !measurePage.deviceHandler.measuring
        //         color: ReAmpedSettings.textColor
        //         fontSizeMode: Text.Fit
        //         minimumPixelSize: 10
        //         font.pixelSize: ReAmpedSettings.mediumFontSize
        //     }

        //     Text {
        //         id: text
        //         anchors.centerIn: parent
        //         anchors.verticalCenterOffset: -parent.height * 0.15
        //         font.pixelSize: parent.width * 0.45
        //         text: measurePage.deviceHandler.hr
        //         visible: measurePage.deviceHandler.measuring
        //         color: ReAmpedSettings.textColor
        //     }

        //     Item {
        //         id: minMaxContainer
        //         anchors.horizontalCenter: parent.horizontalCenter
        //         width: parent.width * 0.7
        //         height: parent.height * 0.15
        //         anchors.bottom: parent.bottom
        //         anchors.bottomMargin: parent.height * 0.16
        //         visible: measurePage.deviceHandler.measuring

        //         Text {
        //             anchors.left: parent.left
        //             anchors.verticalCenter: parent.verticalCenter
        //             text: measurePage.deviceHandler.minHR
        //             color: ReAmpedSettings.textColor
        //             font.pixelSize: ReAmpedSettings.hugeFontSize

        //             Text {
        //                 anchors.left: parent.left
        //                 anchors.bottom: parent.top
        //                 font.pixelSize: parent.font.pixelSize * 0.8
        //                 color: parent.color
        //                 text: "MIN"
        //             }
        //         }

        //         Text {
        //             anchors.right: parent.right
        //             anchors.verticalCenter: parent.verticalCenter
        //             text: measurePage.deviceHandler.maxHR
        //             color: ReAmpedSettings.textColor
        //             font.pixelSize: ReAmpedSettings.hugeFontSize

        //             Text {
        //                 anchors.right: parent.right
        //                 anchors.bottom: parent.top
        //                 font.pixelSize: parent.font.pixelSize * 0.8
        //                 color: parent.color
        //                 text: "MAX"
        //             }
        //         }
        //     }

        //     Image {
        //         id: heart
        //         anchors.horizontalCenter: minMaxContainer.horizontalCenter
        //         anchors.verticalCenter: minMaxContainer.bottom
        //         width: parent.width * 0.2
        //         height: width
        //         source: "images/heart.png"
        //         smooth: true
        //         antialiasing: true

        //         SequentialAnimation {
        //             id: heartAnim
        //             running: measurePage.deviceHandler.alive
        //             loops: Animation.Infinite
        //             alwaysRunToEnd: true
        //             PropertyAnimation {
        //                 target: heart
        //                 property: "scale"
        //                 to: 1.2
        //                 duration: 500
        //                 easing.type: Easing.InQuad
        //             }
        //             PropertyAnimation {
        //                 target: heart
        //                 property: "scale"
        //                 to: 1.0
        //                 duration: 500
        //                 easing.type: Easing.OutQuad
        //             }
        //         }
        //     }
        // }

        // Rectangle {
        //     id: timeSlider
        //     color: ReAmpedSettings.viewColor
        //     anchors.horizontalCenter: parent.horizontalCenter
        //     width: circle.width
        //     height: ReAmpedSettings.fieldHeight
        //     radius: ReAmpedSettings.buttonRadius

        //     Rectangle {
        //         height: parent.height
        //         radius: parent.radius
        //         color: ReAmpedSettings.sliderColor
        //         width: Math.min(
        //                    1.0,
        //                    measurePage.__timeCounter / measurePage.__maxTimeCount) * parent.width
        //     }

        //     Text {
        //         anchors.centerIn: parent
        //         color: "gray"
        //         text: (measurePage.__maxTimeCount - measurePage.__timeCounter).toFixed(0) + " s"
        //         font.pixelSize: ReAmpedSettings.bigFontSize
        //     }
        // }

        RButton{
            id:forwordArrow
            source: "images/forwordArrow.png"
            onClicked: measurePage.deviceHandler.moveForword()
            onMySignal: console.log("hello")


        }

        RButton{
            id:backwordArrow
            source: "images/backwordArrow.png"
            onClicked: measurePage.deviceHandler.moveBackword()
        }
    }

    GameButton {
        id: startButton
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: ReAmpedSettings.fieldMargin
        width: 2*backwordArrow.width
        height: ReAmpedSettings.fieldHeight
        enabled: true
        radius: ReAmpedSettings.buttonRadius

        onClicked: measurePage.showStatsPage()

        Text {
            anchors.centerIn: parent
            font.pixelSize: ReAmpedSettings.tinyFontSize
            text: qsTr("STATS")
            color: startButton.enabled ? ReAmpedSettings.textColor : ReAmpedSettings.disabledTextColor
        }
    }
}
