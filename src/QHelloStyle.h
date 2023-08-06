#ifndef QHELLOSTYLE_H
#define QHELLOSTYLE_H

#include <QProxyStyle>

class QHelloStyle : public QProxyStyle {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE "hello.json")
public:
    QHelloStyle(QStyle* baseStyle = nullptr);

    void drawPrimitive(PrimitiveElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override;

    // Override other methods for further customization
};

#endif // QHELLOSTYLE_H
