import QtQuick
import QtQuick.Controls.Material 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("ReAmped")
    property int counter: 1

    Rectangle{
        color:"gray"
        anchors.fill: parent

        RButton{
            id: forwordArrow
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.topMargin: 60
            anchors.top:parent.top
            source: "qrc:/images/forwordArrow.png"
        }

        RButton{
            id:backwordArrow
            anchors.bottom:parent.bottom
            anchors.bottomMargin: 70
            anchors.horizontalCenter: parent.horizontalCenter
            source: "qrc:/images/backwordArrow.png"
        }
    }
}
    // Button{
    //     id:buttonTest
    //     width:200
    //     height: 100
    //     text:"Click me!"
    //     anchors.centerIn: parent
    //     onClicked: counter = counter + 1
    // }

    // Rectangle{
    //     color: "steelblue"
    //     width: myText.implicitWidth
    //     height: myText.implicitHeight
    //     visible: counter % 2 == 0 ? true: false

    //     anchors.top: buttonTest.bottom
    //     anchors.topMargin: 20
    //     Label{
    //         id: myText

    //         text: "Tomi Ljubi Mejku!"
    //         font.pixelSize: 40
    //         visible: counter % 2 == 0 ? true: false
    //     }
    // }

