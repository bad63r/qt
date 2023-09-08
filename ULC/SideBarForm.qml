import QtQuick
import QtQuick.Layouts 1.3

Flickable {
    id: flickable
    x: 0
    y: 0
    width: 355
    height: 770

    property alias command1Button: command1Button
    property alias command2Button: command2Button
    property alias command3Button: command3Button
    property alias command4Button: command4Button

    contentWidth: 250
    boundsBehavior: Flickable.StopAtBounds
    contentHeight: 1506
    clip: true

    Rectangle {
        id: background
        x: 0
        width: 354
        height: 1506
        color: "#D3D3D3"
        //color: background.palette.window
    }

    ColumnLayout {
        x: 100
        y: 0
        spacing: 250
        Item {
            CmdButton {
                id: command1Button
                text: "UART CMD 1"
            } //CmdButton
        } //Item

        Item {
            CmdButton {
                id: command2Button
                text: "UART CMD 2"
                source: "images/icons/terminal/terminal2.png"
            } //CmdButton
        }

        Item {
            CmdButton {
                id: command3Button
                text: "UART CMD 3"
                source: "images/icons/terminal/terminal3.png"
            } //CmdButton
        } //Item

        Item {
            CmdButton {
                id: command4Button
                text: "UART CMD 4"
                source: "images/icons/terminal/terminal4.png"
            } //CmdButton
        } //Item
    }
}
