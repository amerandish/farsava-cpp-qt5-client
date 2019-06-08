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
 * OAIRecognitionAudioData.h
 *
 * Contains audio data in the encoding specified in the RecognitionConfig.    A base64-encoded string.   *For asr endpoint only binary data is accepted.*      Property | Description   ------------ | -------------   data | The audio data bytes encoded as specified in RecognitionConfig. A base64-encoded string. 
 */

#ifndef OAIRecognitionAudioData_H
#define OAIRecognitionAudioData_H

#include <QJsonObject>


#include <QByteArray>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAIRecognitionAudioData: public OAIObject {
public:
    OAIRecognitionAudioData();
    OAIRecognitionAudioData(QString json);
    ~OAIRecognitionAudioData() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QByteArray getData() const;
    void setData(const QByteArray &data);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QByteArray data;
    bool m_data_isSet;
    bool m_data_isValid;
    
    };

}

#endif // OAIRecognitionAudioData_H
