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
 * OAIRecognitionAudioURI.h
 *
 * Contains audio source URI with the encoding specified in the RecognitionConfig.    *For asrlongrunning endpoint only uri is accepted.*      Property | Description   ------------ | -------------   uri | URI that points to a file that contains audio data bytes as specified in RecognitionConfig. The file must not be compressed (for example, gzip). 
 */

#ifndef OAIRecognitionAudioURI_H
#define OAIRecognitionAudioURI_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAIRecognitionAudioURI: public OAIObject {
public:
    OAIRecognitionAudioURI();
    OAIRecognitionAudioURI(QString json);
    ~OAIRecognitionAudioURI() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QString getUri() const;
    void setUri(const QString &uri);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QString uri;
    bool m_uri_isSet;
    bool m_uri_isValid;
    
    };

}

#endif // OAIRecognitionAudioURI_H