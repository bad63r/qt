import QtQuick
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0

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
            anchors.fill: parent

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
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.preferredHeight: 4

                GroupBox {
                    title: qsTr("Serial Port")
                    font.pixelSize: 20
                    ColumnLayout {
                        anchors.fill: parent
                        CheckBox { text: qsTr("E-mail") }
                        CheckBox { text: qsTr("Calendar") }
                        CheckBox { text: qsTr("Contacts") }
                    }
                } //GroupBox

                ComboBox {
                    editable: true
                    model: ListModel {
                        id: model
                        ListElement { text: "Banana" }
                        ListElement { text: "Apple" }
                        ListElement { text: "Coconut" }
                    }
                    onAccepted: {
                        if (find(editText) === -1)
                            model.append({text: editText})
                    }
                }
            }
        } //ColumnLayout
    } //Rectangle

    Button{
        id:closeButton
        text:"Close"
        onClicked: root.close()
        anchors.bottom: parent.bottom
    }
}
