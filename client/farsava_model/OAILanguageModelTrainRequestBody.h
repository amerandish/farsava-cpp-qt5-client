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
 * OAILanguageModelTrainRequestBody.h
 *
 * 
 */

#ifndef OAILanguageModelTrainRequestBody_H
#define OAILanguageModelTrainRequestBody_H

#include <QJsonObject>


#include <QList>
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAILanguageModelTrainRequestBody: public OAIObject {
public:
    OAILanguageModelTrainRequestBody();
    OAILanguageModelTrainRequestBody(QString json);
    ~OAILanguageModelTrainRequestBody() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<QString> getCorpora() const;
    void setCorpora(const QList<QString> &corpora);

    
    QString getName() const;
    void setName(const QString &name);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<QString> corpora;
    bool m_corpora_isSet;
    bool m_corpora_isValid;
    
    QString name;
    bool m_name_isSet;
    bool m_name_isValid;
    
    };

}

#endif // OAILanguageModelTrainRequestBody_H
