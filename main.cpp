#include <QCoreApplication>
#include <QtNetwork>
#include <QSslSocket>
#include <QDtls>

int main(int argc, char *argv[])
{
    QCoreApplication myapp(argc, argv);

    return myapp.exec();
}
