import QtQuick
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0

Item {
    id:root

    RowLayout{
        id: layout
        anchors.fill: parent
        spacing: 0

        Rectangle {
            id:rectangleSideBar
            Layout.preferredWidth: 355
            Layout.fillHeight: true
                SideBar{
                    anchors.fill: parent
                }

        }

        Item {
            id: selectedWorkspace
            Layout.fillWidth: true
            Layout.fillHeight: true
            Rectangle {
                id: blueRectangle
                anchors.fill: parent
                color: selectedWorkspace.palette.window

                Item {
                    id: powerItem
                    x:150
                    y:200
                    USwitch{
                        id: powerSwitch
                        x: powerText.width + 20

                    } //USwitch

                    Text {
                        id: powerText
                        y: 8
                        text: qsTr("Power")
                        font.pixelSize: 33
                    } //Text
                }

                Item {
                    id: blinkItem
                    x:150
                    y:400
                    USwitch{
                        id: blinkSwitch
                        x: powerText.width + 20

                    } //USwitch

                    Text {
                        id: blinkText
                        y: 8
                        text: qsTr("Blink")
                        font.pixelSize: 33
                    } //Text
                }




//                USwitch{
//                    id: powerSwitch
//                    x: blueRectangle.width/2 - powerSwitch.width +50
//                    y: 200
//                } //USwitch

//                Text {
//                    id: powerText
//                    x: blueRectangle.width/2 - 2*powerSwitch.width +50
//                    y: 210
//                    text: qsTr("Power")
//                    font.pixelSize: 33
//                } //Text
            } //Rectangle
        } //Item


    }
}
