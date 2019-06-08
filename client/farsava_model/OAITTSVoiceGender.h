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

/*
 * OAITTSVoiceGender.h
 *
 * The gender of the requested voice to synthesize.
 */

#ifndef OAITTSVoiceGender_H
#define OAITTSVoiceGender_H

#include <QJsonObject>



#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAITTSVoiceGender: public OAIEnum {
public:
    OAITTSVoiceGender();
    OAITTSVoiceGender(QString json);
    ~OAITTSVoiceGender() override;

    QString asJson () const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    
    enum class eOAITTSVoiceGender {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        MALE, 
        FEMALE
    };

    OAITTSVoiceGender::eOAITTSVoiceGender getValue() const;
    void setValue(const OAITTSVoiceGender::eOAITTSVoiceGender& value);
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    eOAITTSVoiceGender m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

}

#endif // OAITTSVoiceGender_H
