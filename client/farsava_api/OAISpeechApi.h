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

#ifndef OAI_OAISpeechApi_H
#define OAI_OAISpeechApi_H

#include "OAIHttpRequest.h"

#include "farsava_model/OAIASRRequestBodyData.h"
#include "farsava_model/OAIASRRequestBodyURI.h"
#include "farsava_model/OAIASRResponseBody.h"
#include "farsava_model/OAIError.h"
#include "farsava_model/OAIHealthCheckResponseBody.h"
#include <QString>

#include <QObject>

namespace Farsava {

class OAISpeechApi: public QObject {
    Q_OBJECT

public:
    OAISpeechApi();
    OAISpeechApi(QString host, QString basePath);
    ~OAISpeechApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void deleteTranscription(const QString& transcription_id);
    void getTranscription(const QString& transcription_id);
    void recognize(const OAIASRRequestBodyData& oaiasr_request_body_data);
    void recognizeLive();
    void recognizeLongRunning(const OAIASRRequestBodyURI& oaiasr_request_body_uri);
    void speechHealthCheck();
    
private:
    void deleteTranscriptionCallback (OAIHttpRequestWorker * worker);
    void getTranscriptionCallback (OAIHttpRequestWorker * worker);
    void recognizeCallback (OAIHttpRequestWorker * worker);
    void recognizeLiveCallback (OAIHttpRequestWorker * worker);
    void recognizeLongRunningCallback (OAIHttpRequestWorker * worker);
    void speechHealthCheckCallback (OAIHttpRequestWorker * worker);
    
signals:
    void deleteTranscriptionSignal();
    void getTranscriptionSignal(OAIASRResponseBody summary);
    void recognizeSignal(OAIASRResponseBody summary);
    void recognizeLiveSignal(OAIASRResponseBody summary);
    void recognizeLongRunningSignal(OAIASRResponseBody summary);
    void speechHealthCheckSignal(OAIHealthCheckResponseBody summary);
    
    void deleteTranscriptionSignalFull(OAIHttpRequestWorker* worker);
    void getTranscriptionSignalFull(OAIHttpRequestWorker* worker, OAIASRResponseBody summary);
    void recognizeSignalFull(OAIHttpRequestWorker* worker, OAIASRResponseBody summary);
    void recognizeLiveSignalFull(OAIHttpRequestWorker* worker, OAIASRResponseBody summary);
    void recognizeLongRunningSignalFull(OAIHttpRequestWorker* worker, OAIASRResponseBody summary);
    void speechHealthCheckSignalFull(OAIHttpRequestWorker* worker, OAIHealthCheckResponseBody summary);
    
    void deleteTranscriptionSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void getTranscriptionSignalE(OAIASRResponseBody summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void recognizeSignalE(OAIASRResponseBody summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void recognizeLiveSignalE(OAIASRResponseBody summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void recognizeLongRunningSignalE(OAIASRResponseBody summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void speechHealthCheckSignalE(OAIHealthCheckResponseBody summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void deleteTranscriptionSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getTranscriptionSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void recognizeSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void recognizeLiveSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void recognizeLongRunningSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void speechHealthCheckSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
