#include "QHelloStyle.h"
#include <QStyleOptionButton>
#include <QPainter>
#include <QtPlugin>

QHelloStyle::QHelloStyle(QStyle* baseStyle)
    : QProxyStyle(baseStyle)
{
    // Additional setup if needed
}

void QHelloStyle::drawPrimitive(PrimitiveElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const
{
    // Customize the appearance of primitive elements
    if (element == PE_PanelButtonCommand) {
        // Custom drawing for buttons
        QStyleOptionButton* buttonOption = qstyleoption_cast<QStyleOptionButton*>(const_cast<QStyleOption*>(option));
        if (buttonOption) {
            // Customize button appearance here
        }
    } else {
        // Call the base class implementation for other primitives
        QProxyStyle::drawPrimitive(element, option, painter, widget);
    }
}

Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface")
