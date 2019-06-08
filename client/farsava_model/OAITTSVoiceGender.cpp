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


#include "OAITTSVoiceGender.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Farsava {

OAITTSVoiceGender::OAITTSVoiceGender(QString json) {
    this->init();
    this->fromJson(json);
}

OAITTSVoiceGender::OAITTSVoiceGender() {
    this->init();
}

OAITTSVoiceGender::~OAITTSVoiceGender() {

}

void
OAITTSVoiceGender::init() {
    
    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAITTSVoiceGender::INVALID_VALUE_OPENAPI_GENERATED;
}

void
OAITTSVoiceGender::fromJson(QString jsonString) {
     
    if ( jsonString.compare("male", Qt::CaseInsensitive) == 0) {
        m_value = eOAITTSVoiceGender::MALE;
        m_value_isValid = true;
    } 
    else if ( jsonString.compare("female", Qt::CaseInsensitive) == 0) {
        m_value = eOAITTSVoiceGender::FEMALE;
        m_value_isValid = true;
    }
}

void
OAITTSVoiceGender::fromJsonValue(QJsonValue json) {
    
    fromJson(json.toString());
}

QString
OAITTSVoiceGender::asJson () const {
    
    QString val;
    switch (m_value){
        case eOAITTSVoiceGender::MALE:
            val = "male";
            break;
        case eOAITTSVoiceGender::FEMALE:
            val = "female";
            break; 
        default:
            break;
    }
    return val;
}

QJsonValue
OAITTSVoiceGender::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAITTSVoiceGender::eOAITTSVoiceGender OAITTSVoiceGender::getValue() const {
    return m_value;
}

void OAITTSVoiceGender::setValue(const OAITTSVoiceGender::eOAITTSVoiceGender& value){
    m_value = value;
    m_value_isSet = true;
}
bool
OAITTSVoiceGender::isSet() const {
    
    return m_value_isSet;
}

bool
OAITTSVoiceGender::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

}
