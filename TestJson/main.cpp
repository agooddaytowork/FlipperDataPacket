#include <QCoreApplication>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkRequest>
#include <QUrl>
#include <QNetworkAccessManager>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QJsonObject Location = QJsonObject({
                                            QPair<QString, QJsonValue> ("Location" , "TKO"),
                                            QPair<QString, QJsonValue> ("TemperatureCH1" , -50.4)
                                       });

    QByteArray test = QJsonDocument(Location).toJson();

    QUrl url("http://10.10.1.218:82/");
        QNetworkRequest request(url);

        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QNetworkAccessManager *manager = new QNetworkAccessManager();

        // FIXME for debug
        //qDebug() << "Sync" << QString::fromUtf8(data.data(), data.size());

        manager->post(request, test);
    return a.exec();
}
