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


#include "OAILanguageModelTrainRequestBody.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Farsava {

OAILanguageModelTrainRequestBody::OAILanguageModelTrainRequestBody(QString json) {
    this->init();
    this->fromJson(json);
}

OAILanguageModelTrainRequestBody::OAILanguageModelTrainRequestBody() {
    this->init();
}

OAILanguageModelTrainRequestBody::~OAILanguageModelTrainRequestBody() {

}

void
OAILanguageModelTrainRequestBody::init() {
    
    m_corpora_isSet = false;
    m_corpora_isValid = false;
    
    m_name_isSet = false;
    m_name_isValid = false;
    }

void
OAILanguageModelTrainRequestBody::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAILanguageModelTrainRequestBody::fromJsonObject(QJsonObject json) {
    
    
    m_corpora_isValid = ::Farsava::fromJsonValue(corpora, json[QString("corpora")]);
    
    m_name_isValid = ::Farsava::fromJsonValue(name, json[QString("name")]);
    
    
}

QString
OAILanguageModelTrainRequestBody::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAILanguageModelTrainRequestBody::asJsonObject() const {
    QJsonObject obj;
	
    if(corpora.size() > 0){
        obj.insert(QString("corpora"), ::Farsava::toJsonValue(corpora));
    } 
	if(m_name_isSet){
        obj.insert(QString("name"), ::Farsava::toJsonValue(name));
    }
    return obj;
}


QList<QString>
OAILanguageModelTrainRequestBody::getCorpora() const {
    return corpora;
}
void
OAILanguageModelTrainRequestBody::setCorpora(const QList<QString> &corpora) {
    this->corpora = corpora;
    this->m_corpora_isSet = true;
}


QString
OAILanguageModelTrainRequestBody::getName() const {
    return name;
}
void
OAILanguageModelTrainRequestBody::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool
OAILanguageModelTrainRequestBody::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(corpora.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAILanguageModelTrainRequestBody::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_corpora_isValid && true;
}

}

