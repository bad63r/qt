import QtQuick
import QtQuick.Layouts 1.0

Item {
    id:root

    RowLayout{
        id: layout
        anchors.fill: parent
        spacing: 0

        Rectangle {
            id:redRectangle
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
            }
        } //Item


    }
}
