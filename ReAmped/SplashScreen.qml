// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

import QtQuick
import ReAmpedURI

Item {
    id: root

    property bool appIsReady: false
    property bool splashIsReady: false
    property bool ready: appIsReady && splashIsReady

    anchors.fill: parent

    Image {
        anchors.centerIn: parent
        width: Math.min(parent.height, parent.width) * 0.6
        height: ReAmpedSettings.heightForWidth(width, sourceSize)
        source: "images/smart-car.png"
    }

    Timer {
        id: splashTimer
        interval: 1000
        onTriggered: splashIsReady = true
    }

    Component.onCompleted: splashTimer.start()
}
