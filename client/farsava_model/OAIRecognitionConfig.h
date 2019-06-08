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
 * OAIRecognitionConfig.h
 *
 * Provides information to the recognizer that specifies how to process the request. 
 */

#ifndef OAIRecognitionConfig_H
#define OAIRecognitionConfig_H

#include <QJsonObject>


#include "farsava_model/OAIAudioEncoding.h"
#include "farsava_model/OAILanguageCode.h"
#include "farsava_model/OAISpeechRecognitionModel.h"
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAIRecognitionConfig: public OAIObject {
public:
    OAIRecognitionConfig();
    OAIRecognitionConfig(QString json);
    ~OAIRecognitionConfig() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    OAIAudioEncoding getAudioEncoding() const;
    void setAudioEncoding(const OAIAudioEncoding &audio_encoding);

    
    qint32 getSampleRateHertz() const;
    void setSampleRateHertz(const qint32 &sample_rate_hertz);

    
    OAILanguageCode getLanguageCode() const;
    void setLanguageCode(const OAILanguageCode &language_code);

    
    qint32 getMaxAlternatives() const;
    void setMaxAlternatives(const qint32 &max_alternatives);

    
    bool isProfanityFilter() const;
    void setProfanityFilter(const bool &profanity_filter);

    
    OAISpeechRecognitionModel getAsrModel() const;
    void setAsrModel(const OAISpeechRecognitionModel &asr_model);

    
    QString getLanguageModel() const;
    void setLanguageModel(const QString &language_model);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    OAIAudioEncoding audio_encoding;
    bool m_audio_encoding_isSet;
    bool m_audio_encoding_isValid;
    
    qint32 sample_rate_hertz;
    bool m_sample_rate_hertz_isSet;
    bool m_sample_rate_hertz_isValid;
    
    OAILanguageCode language_code;
    bool m_language_code_isSet;
    bool m_language_code_isValid;
    
    qint32 max_alternatives;
    bool m_max_alternatives_isSet;
    bool m_max_alternatives_isValid;
    
    bool profanity_filter;
    bool m_profanity_filter_isSet;
    bool m_profanity_filter_isValid;
    
    OAISpeechRecognitionModel asr_model;
    bool m_asr_model_isSet;
    bool m_asr_model_isValid;
    
    QString language_model;
    bool m_language_model_isSet;
    bool m_language_model_isValid;
    
    };

}

#endif // OAIRecognitionConfig_H