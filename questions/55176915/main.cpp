#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include "flower.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    Flower flower;
    QQuickView view;
    view.rootContext()->setContextProperty("flower", &flower);
    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    view.show();
    return app.exec();
}
