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
 * OAIASRRequestBodyURI.h
 *
 * 
 */

#ifndef OAIASRRequestBodyURI_H
#define OAIASRRequestBodyURI_H

#include <QJsonObject>


#include "farsava_model/OAIRecognitionAudioURI.h"
#include "farsava_model/OAIRecognitionConfig.h"

#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAIASRRequestBodyURI: public OAIObject {
public:
    OAIASRRequestBodyURI();
    OAIASRRequestBodyURI(QString json);
    ~OAIASRRequestBodyURI() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    OAIRecognitionConfig getConfig() const;
    void setConfig(const OAIRecognitionConfig &config);

    
    OAIRecognitionAudioURI getAudio() const;
    void setAudio(const OAIRecognitionAudioURI &audio);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    OAIRecognitionConfig config;
    bool m_config_isSet;
    bool m_config_isValid;
    
    OAIRecognitionAudioURI audio;
    bool m_audio_isSet;
    bool m_audio_isValid;
    
    };

}

#endif // OAIASRRequestBodyURI_H
