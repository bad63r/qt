// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

import QtQuick
import HeartRateGame

GamePage {
    id: statsPage

    required property DeviceHandler deviceHandler

    Column {
        anchors.centerIn: parent
        width: parent.width

        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: ReAmpedSettings.hugeFontSize
            color: ReAmpedSettings.textColor
            text: qsTr("RESULT")
        }

        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: ReAmpedSettings.giganticFontSize * 3
            color: ReAmpedSettings.textColor
            text: (statsPage.deviceHandler.maxHR - statsPage.deviceHandler.minHR).toFixed(0)
        }

        Item {
            height: ReAmpedSettings.fieldHeight
            width: 1
        }

        StatsLabel {
            title: qsTr("MIN")
            value: statsPage.deviceHandler.minHR.toFixed(0)
        }

        StatsLabel {
            title: qsTr("MAX")
            value: statsPage.deviceHandler.maxHR.toFixed(0)
        }

        StatsLabel {
            title: qsTr("AVG")
            value: statsPage.deviceHandler.average.toFixed(1)
        }

        StatsLabel {
            title: qsTr("CALORIES")
            value: statsPage.deviceHandler.calories.toFixed(3)
        }
    }
}
