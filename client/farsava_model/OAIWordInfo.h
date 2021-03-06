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
 * OAIWordInfo.h
 *
 * 
 */

#ifndef OAIWordInfo_H
#define OAIWordInfo_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAIWordInfo: public OAIObject {
public:
    OAIWordInfo();
    OAIWordInfo(QString json);
    ~OAIWordInfo() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    double getStartTime() const;
    void setStartTime(const double &start_time);

    
    double getEndTime() const;
    void setEndTime(const double &end_time);

    
    QString getWord() const;
    void setWord(const QString &word);

    
    double getConfidence() const;
    void setConfidence(const double &confidence);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    double start_time;
    bool m_start_time_isSet;
    bool m_start_time_isValid;
    
    double end_time;
    bool m_end_time_isSet;
    bool m_end_time_isValid;
    
    QString word;
    bool m_word_isSet;
    bool m_word_isValid;
    
    double confidence;
    bool m_confidence_isSet;
    bool m_confidence_isValid;
    
    };

}

#endif // OAIWordInfo_H
