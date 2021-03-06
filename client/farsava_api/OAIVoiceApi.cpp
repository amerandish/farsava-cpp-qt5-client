/**
 * Farsava API
 * Farsava API. Speech Recognition and Text to Speech by applying powerful deep neural network models.
 *
 * OpenAPI spec version: 1.0.5
 * Contact: amir@amerandish.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIVoiceApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Farsava {

OAIVoiceApi::OAIVoiceApi() {

}

OAIVoiceApi::~OAIVoiceApi() {

}

OAIVoiceApi::OAIVoiceApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAIVoiceApi::getVoicesList() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/voice/speakers");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIVoiceApi::getVoicesListCallback);

    worker->execute(&input);
}

void
OAIVoiceApi::getVoicesListCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    QList<OAIVoiceSelectionParams> output;
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    foreach(QJsonValue obj, jsonArray) {
        OAIVoiceSelectionParams val;
        ::Farsava::fromJsonValue(val, obj);
        output.append(val);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getVoicesListSignal(output);
        emit getVoicesListSignalFull(worker, output);
    } else {
        emit getVoicesListSignalE(output, error_type, error_str);
        emit getVoicesListSignalEFull(worker, error_type, error_str);
    }
}

void
OAIVoiceApi::synthesize(const OAITTSRequestBody& oaitts_request_body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/voice/tts");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");

    
    QString output = oaitts_request_body.asJson();
    input.request_body.append(output);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIVoiceApi::synthesizeCallback);

    worker->execute(&input);
}

void
OAIVoiceApi::synthesizeCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAITTSResponseBody output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit synthesizeSignal(output);
        emit synthesizeSignalFull(worker, output);
    } else {
        emit synthesizeSignalE(output, error_type, error_str);
        emit synthesizeSignalEFull(worker, error_type, error_str);
    }
}

void
OAIVoiceApi::voiceHealthCheck() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/voice/healthcheck");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIVoiceApi::voiceHealthCheckCallback);

    worker->execute(&input);
}

void
OAIVoiceApi::voiceHealthCheckCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIHealthCheckResponseBody output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit voiceHealthCheckSignal(output);
        emit voiceHealthCheckSignalFull(worker, output);
    } else {
        emit voiceHealthCheckSignalE(output, error_type, error_str);
        emit voiceHealthCheckSignalEFull(worker, error_type, error_str);
    }
}


}
