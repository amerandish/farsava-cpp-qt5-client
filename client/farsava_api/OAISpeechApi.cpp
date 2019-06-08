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

#include "OAISpeechApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Farsava {

OAISpeechApi::OAISpeechApi() {

}

OAISpeechApi::~OAISpeechApi() {

}

OAISpeechApi::OAISpeechApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAISpeechApi::deleteTranscription(const QString& transcription_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/speech/transcriptions/{transcriptionId}");
    QString transcription_idPathParam("{"); 
    transcription_idPathParam.append("transcriptionId").append("}");
    fullPath.replace(transcription_idPathParam, ::Farsava::toStringValue(transcription_id));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "DELETE");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAISpeechApi::deleteTranscriptionCallback);

    worker->execute(&input);
}

void
OAISpeechApi::deleteTranscriptionCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit deleteTranscriptionSignal();
        emit deleteTranscriptionSignalFull(worker);
    } else {
        emit deleteTranscriptionSignalE(error_type, error_str);
        emit deleteTranscriptionSignalEFull(worker, error_type, error_str);
    }
}

void
OAISpeechApi::getTranscription(const QString& transcription_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/speech/transcriptions/{transcriptionId}");
    QString transcription_idPathParam("{"); 
    transcription_idPathParam.append("transcriptionId").append("}");
    fullPath.replace(transcription_idPathParam, ::Farsava::toStringValue(transcription_id));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAISpeechApi::getTranscriptionCallback);

    worker->execute(&input);
}

void
OAISpeechApi::getTranscriptionCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIASRResponseBody output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getTranscriptionSignal(output);
        emit getTranscriptionSignalFull(worker, output);
    } else {
        emit getTranscriptionSignalE(output, error_type, error_str);
        emit getTranscriptionSignalEFull(worker, error_type, error_str);
    }
}

void
OAISpeechApi::recognize(const OAIASRRequestBodyData& oaiasr_request_body_data) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/speech/asr");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");

    
    QString output = oaiasr_request_body_data.asJson();
    input.request_body.append(output);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAISpeechApi::recognizeCallback);

    worker->execute(&input);
}

void
OAISpeechApi::recognizeCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIASRResponseBody output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit recognizeSignal(output);
        emit recognizeSignalFull(worker, output);
    } else {
        emit recognizeSignalE(output, error_type, error_str);
        emit recognizeSignalEFull(worker, error_type, error_str);
    }
}

void
OAISpeechApi::recognizeLive() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/speech/asrlive");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAISpeechApi::recognizeLiveCallback);

    worker->execute(&input);
}

void
OAISpeechApi::recognizeLiveCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIASRResponseBody output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit recognizeLiveSignal(output);
        emit recognizeLiveSignalFull(worker, output);
    } else {
        emit recognizeLiveSignalE(output, error_type, error_str);
        emit recognizeLiveSignalEFull(worker, error_type, error_str);
    }
}

void
OAISpeechApi::recognizeLongRunning(const OAIASRRequestBodyURI& oaiasr_request_body_uri) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/speech/asrlongrunning");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");

    
    QString output = oaiasr_request_body_uri.asJson();
    input.request_body.append(output);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAISpeechApi::recognizeLongRunningCallback);

    worker->execute(&input);
}

void
OAISpeechApi::recognizeLongRunningCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIASRResponseBody output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit recognizeLongRunningSignal(output);
        emit recognizeLongRunningSignalFull(worker, output);
    } else {
        emit recognizeLongRunningSignalE(output, error_type, error_str);
        emit recognizeLongRunningSignalEFull(worker, error_type, error_str);
    }
}

void
OAISpeechApi::speechHealthCheck() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/speech/healthcheck");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAISpeechApi::speechHealthCheckCallback);

    worker->execute(&input);
}

void
OAISpeechApi::speechHealthCheckCallback(OAIHttpRequestWorker * worker) {
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
        emit speechHealthCheckSignal(output);
        emit speechHealthCheckSignalFull(worker, output);
    } else {
        emit speechHealthCheckSignalE(output, error_type, error_str);
        emit speechHealthCheckSignalEFull(worker, error_type, error_str);
    }
}


}