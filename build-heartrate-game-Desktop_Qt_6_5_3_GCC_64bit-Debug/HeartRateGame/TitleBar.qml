// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

pragma ComponentBehavior: Bound
import QtQuick

Rectangle {
    id: titleBar

    property var __titles: ["CONNECT", "DRIVE", "STATS"]
    property int currentIndex: 0

    signal titleClicked(int index)

    height: ReAmpedSettings.fieldHeight
    color: ReAmpedSettings.viewColor

    Repeater {
        model: 3
        Text {
            id: caption
            required property int index
            width: titleBar.width / 3
            height: titleBar.height
            x: index * width
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            text: titleBar.__titles[index]
            font.pixelSize: ReAmpedSettings.tinyFontSize
            color: titleBar.currentIndex === index ? ReAmpedSettings.textColor
                                                   : ReAmpedSettings.disabledTextColor

            MouseArea {
                anchors.fill: parent
                onClicked: titleBar.titleClicked(caption.index)
            }
        }
    }

    Item {
        anchors.bottom: parent.bottom
        width: parent.width / 3
        height: parent.height
        x: titleBar.currentIndex * width

        BottomLine {}

        Behavior on x {
            NumberAnimation {
                duration: 200
            }
        }
    }
}
