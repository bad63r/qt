import QtQuick
import QtQuick.Controls 2.12


Switch {
    id: switchButton

    property string checkSource: "qrc:/images/icons/switch/check.png"
    property string uncheckSource: "qrc:/images/icons/switch/uncheck.png"
    property bool displayImages: true


    indicator: Item {
        id: indicatorItem
        implicitWidth: 104
        implicitHeight: 60
        x: switchButton.leftPadding
        y: parent.height / 2 - height / 2

        Rectangle {
            id: background
            anchors.fill: parent
            radius: height / 2

            transitions: Transition {
                reversible: true
                NumberAnimation { properties: "opacity"; duration: 200 }
                ColorAnimation { duration: 200 }
            }
        }

        Rectangle {
            property int offset: background.height * (8 / 44)
            id: knob
            width: height
            height: background.height - background.height * (16 / 44)
            radius: width / 2
            anchors.verticalCenter: indicatorItem.verticalCenter
        } //Rectangle

        Image {
            id: checkMark
            visible: checkSource.length > 0 && displayImages
            source: checkSource
            anchors {
                left: background.left
                leftMargin: knob.offset + sourceSize.width / 3
                verticalCenter: knob.verticalCenter
            }

            fillMode: Image.PreserveAspectFit
            sourceSize.height: knob.width * 2 / 3
            sourceSize.width: knob.width * 2 / 3
        }


        Image {
            id: uncheckMark
            visible: uncheckSource.length > 0 && displayImages
            source: uncheckSource
            anchors {
                right: background.right
                rightMargin: knob.offset + sourceSize.width / 3
                verticalCenter: knob.verticalCenter
            }

            fillMode: Image.PreserveAspectFit
            sourceSize.height: knob.width * 2 / 3
            sourceSize.width: knob.width * 2 / 3
        }

        states: [
            State {
                when: switchButton.checked
                PropertyChanges { target: knob;       x:       background.width - width - knob.offset  }
                PropertyChanges { target: knob;       color:   "#7393B3"                               }
                PropertyChanges { target: background; color:   "#FFFFFF"                               }
                PropertyChanges { target: checkMark;  opacity: 1.0                                     }
                PropertyChanges { target: uncheckMark;opacity: 0.0                                     }
            },
            State {
                when: !switchButton.checked
                PropertyChanges { target: knob;       x: knob.offset                                     }
                PropertyChanges { target: knob;       color:   "#7393B3"                                 }
                PropertyChanges { target: background; color:   "#FFFFFF"                                 }
                PropertyChanges { target: checkMark;  opacity: 0.0                                       }
                PropertyChanges { target: uncheckMark;opacity: 1.0                                       }
            }
        ]

        transitions: Transition {
            reversible: true
            NumberAnimation { properties: "x"; easing.type: Easing.InOutQuad; duration: 200 }
            NumberAnimation { properties: "opacity"; duration: 200 }
            ColorAnimation { duration: 200 }
        }
    } //indicator
} //Switch
