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
 * OAIASRStatus.h
 *
 * Status of the recognition process. *USE THE RECOGNITION RESULT ONLY WHEN STATUS IS DONE*. 
 */

#ifndef OAIASRStatus_H
#define OAIASRStatus_H

#include <QJsonObject>



#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAIASRStatus: public OAIEnum {
public:
    OAIASRStatus();
    OAIASRStatus(QString json);
    ~OAIASRStatus() override;

    QString asJson () const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    
    enum class eOAIASRStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        QUEUED, 
        PROCESSING, 
        DONE, 
        PARTIAL
    };

    OAIASRStatus::eOAIASRStatus getValue() const;
    void setValue(const OAIASRStatus::eOAIASRStatus& value);
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    eOAIASRStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

}

#endif // OAIASRStatus_H