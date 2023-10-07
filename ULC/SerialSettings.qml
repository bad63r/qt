import QtQuick
import QtQuick.Layouts 1.0
import QtQuick.Controls.Material 2.3

Drawer {
    id:root
    width:500
    height: 500
    visible:true
    edge:Qt.TopEdge
    interactive: false

    Rectangle{
        id:drawerBackground
        anchors.fill: parent
        color:drawerBackground.palette.window

        ColumnLayout{
            id:rootLayout
            anchors{
                fill:parent
                leftMargin: 20
                rightMargin: 20
                bottomMargin: 60
            }

            Item {
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.preferredHeight: 1
                Text{
                    id:titleConfig
                    y:5
                    anchors.horizontalCenter: parent.horizontalCenter
                    text:"Configuration"
                    font.pixelSize: 35
                } //Text
            }

            Item {
                id:options
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.preferredHeight: 4

                GroupBox {
                    anchors.fill: parent
                    title: qsTr("Serial Port")
                    font.pixelSize: 20
                    RowLayout{
                        anchors.fill: parent
                        spacing: 30

                        ColumnLayout{
                            id:firstColumn
                            Layout.fillWidth: true
                            Layout.fillHeight: true

                            Item {
                                id: uartPortOption
                                Layout.fillWidth: true
                                Layout.fillHeight: true

                                Text {
                                    id: portNameTitle
                                    text: qsTr("Port:")
                                    font.pixelSize: 20
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    anchors{
                                        top: parent.top
                                        topMargin: 20
                                    }
                                }

                                ComboBox {
                                    anchors{
                                        left: parent.left
                                        right: parent.right
                                        top:portNameTitle.bottom
                                        topMargin: 5
                                    }
                                    editable: true
                                    model: ListModel {
                                        id: portNamesModel
                                        ListElement { text: "/dev/ttyACM0" }
                                        ListElement { text: "/dev/ttyACM1" }
                                        ListElement { text: "/dev/ttyUSB0" }
                                        ListElement { text: "COM3" }
                                    }
                                    onAccepted: {
                                        if (find(editText) === -1) {
                                            portNamesModel.append({text: editText})
                                            console.log("Hi there")
                                            console.log("Currently selected:",currentValue)
                                        } else {
                                            console.log("Currently selected:",currentValue)
                                        }
                                    }
                                    onCurrentIndexChanged: {
                                        console.log("text is:",portNamesModel.get(currentIndex).text)

                                    }
                                    onActivated: console.log("this is when selected")

                                } //ComboBox
                            } //Item

                            Item {
                                id: uartBitsOption
                                Layout.fillWidth: true
                                Layout.fillHeight: true

                                Text {
                                    id: bitsTitle
                                    text: qsTr("Bits:")
                                    font.pixelSize: 20
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    anchors{
                                        top: parent.top
                                        topMargin: 20
                                    }
                                }

                                ComboBox {
                                    anchors{
                                        left: parent.left
                                        right: parent.right
                                        top:bitsTitle.bottom
                                        topMargin: 5
                                    }
                                    editable: true
                                    model: ListModel {
                                        id: bitsModel
                                        ListElement { text: "8" }
                                        ListElement { text: "9" }
                                        ListElement { text: "10" }
                                        ListElement { text: "11" }
                                        ListElement { text: "12" }
                                        ListElement { text: "13" }
                                        ListElement { text: "14" }
                                        ListElement { text: "15" }
                                    }
                                    onAccepted: {
                                        if (find(editText) === -1) {
                                            bitsModel.append({text: editText})
                                            console.log("Hi there")
                                            console.log("Currently selected:",currentValue)
                                        } else {
                                            console.log("Currently selected:",currentValue)
                                        }
                                    }
                                    onCurrentIndexChanged: {
                                        console.log("text is:",bitsModel.get(currentIndex).text)

                                    }
                                    onActivated: console.log("this is when selected")

                                } //ComboBox
                            } //Item
                        } //ColumnLayout


                        ColumnLayout{
                            id:secondColumn
                            Layout.fillWidth: true
                            Layout.fillHeight: true

                            Item {
                                id: baudRateOption
                                Layout.fillWidth: true
                                Layout.fillHeight: true

                                Text {
                                    id: baudRateTitle
                                    text: qsTr("Baud Rate:")
                                    font.pixelSize: 20
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    anchors{
                                        top: parent.top
                                        topMargin: 20
                                    }
                                }

                                ComboBox {
                                    anchors{
                                        left: parent.left
                                        right: parent.right
                                        top:baudRateTitle.bottom
                                        topMargin: 5
                                    }
                                    editable: true
                                    model: ListModel {
                                        id: baudRateModel
                                        ListElement { text: "9600" }
                                        ListElement { text: "14400" }
                                        ListElement { text: "19200" }
                                        ListElement { text: "38400" }
                                        ListElement { text: "57600" }
                                        ListElement { text: "115200" }
                                        ListElement { text: "128000" }
                                        ListElement { text: "256000" }
                                    }
                                    onAccepted: {
                                        if (find(editText) === -1) {
                                            baudRateModel.append({text: editText})
                                            console.log("Hi there")
                                            console.log("Currently selected:",currentValue)
                                        } else {
                                            console.log("Currently selected:",currentValue)
                                        }
                                    }
                                    onCurrentIndexChanged: {
                                        console.log("text is:",baudRateModel.get(currentIndex).text)

                                    }
                                    onActivated: console.log("this is when selected")

                                } //ComboBox
                            } //Item

                            Item {
                                id: stopbitsOption
                                Layout.fillWidth: true
                                Layout.fillHeight: true

                                Text {
                                    id: stopbitsTitle
                                    text: qsTr("Stopbits:")
                                    font.pixelSize: 20
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    anchors{
                                        top: parent.top
                                        topMargin: 20
                                    }
                                }

                                ComboBox {
                                    anchors{
                                        left: parent.left
                                        right: parent.right
                                        top:stopbitsTitle.bottom
                                        topMargin: 5
                                    }
                                    editable: true
                                    model: ListModel {
                                        id: stopbitsModel
                                        ListElement { text: "1" }
                                        ListElement { text: "1.5" }
                                        ListElement { text: "2" }
                                    }
                                    onAccepted: {
                                        if (find(editText) === -1) {
                                            stopbitsModel.append({text: editText})
                                            console.log("Hi there")
                                            console.log("Currently selected:",currentValue)
                                        } else {
                                            console.log("Currently selected:",currentValue)
                                        }
                                    }
                                    onCurrentIndexChanged: {
                                        console.log("text is:",stopbitsModel.get(currentIndex).text)

                                    }
                                    onActivated: console.log("this is when selected")

                                } //ComboBox
                            } //Item
                        } //ColumnLayout


                        ColumnLayout{
                            id:thirdColumn
                            Layout.fillWidth: true
                            Layout.fillHeight: true

                            Item {
                                id: parityOption
                                Layout.fillWidth: true
                                Layout.fillHeight: true

                                Text {
                                    id: parityTitle
                                    text: qsTr("Parity:")
                                    font.pixelSize: 20
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    anchors{
                                        top: parent.top
                                        topMargin: 20
                                    }
                                }

                                ComboBox {
                                    anchors{
                                        left: parent.left
                                        right: parent.right
                                        top:parityTitle.bottom
                                        topMargin: 5
                                    }
                                    editable: true
                                    model: ListModel {
                                        id: parityModel
                                        ListElement { text: "none" }
                                        ListElement { text: "even" }
                                        ListElement { text: "odd" }
                                    }
                                    onAccepted: {
                                        if (find(editText) === -1) {
                                            parityModel.append({text: editText})
                                            console.log("Hi there")
                                            console.log("Currently selected:",currentValue)
                                        } else {
                                            console.log("Currently selected:",currentValue)
                                        }
                                    }
                                    onCurrentIndexChanged: {
                                        console.log("text is:",parityModel.get(currentIndex).text)

                                    }
                                    onActivated: console.log("this is when selected")

                                } //ComboBox
                            } //Item

                            Item {
                                id: flowControlOption
                                Layout.fillWidth: true
                                Layout.fillHeight: true

                                Text {
                                    id: flowcontrolTitle
                                    text: qsTr("Flow control:")
                                    font.pixelSize: 20
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    anchors{
                                        top: parent.top
                                        topMargin: 20
                                    }
                                }

                                ComboBox {
                                    anchors{
                                        left: parent.left
                                        right: parent.right
                                        top:flowcontrolTitle.bottom
                                        topMargin: 5
                                    }
                                    editable: true
                                    model: ListModel {
                                        id: flowcontrolModel
                                        ListElement { text: "none" }
                                        ListElement { text: "hardware" }
                                        ListElement { text: "software" }
                                    }
                                    onAccepted: {
                                        if (find(editText) === -1) {
                                            flowcontrolModel.append({text: editText})
                                            console.log("Hi there")
                                            console.log("Currently selected:",currentValue)
                                        } else {
                                            console.log("Currently selected:",currentValue)
                                        }
                                    }
                                    onCurrentIndexChanged: {
                                        console.log("text is:",stopbitsModel.get(currentIndex).text)

                                    }
                                    onActivated: console.log("this is when selected")

                                } //ComboBox
                            } //Item
                        } //ColumnLayout
                    } //RowLayout

                    ColumnLayout {
                        anchors.fill: parent
                    } //ColumnLayout

                } //GroupBox
            } //Item
        } //ColumnLayout
    } //Rectangle

    Button{
        id:okButton
        text:"OK"
        width: 100
        onClicked: root.close()
        anchors{
            bottom: parent.bottom
            bottomMargin: 5
            right:parent.right
            rightMargin: 20
        }
    }
}
