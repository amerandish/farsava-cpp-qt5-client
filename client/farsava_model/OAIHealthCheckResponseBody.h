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
 * OAIHealthCheckResponseBody.h
 *
 * 
 */

#ifndef OAIHealthCheckResponseBody_H
#define OAIHealthCheckResponseBody_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace Farsava {

class OAIHealthCheckResponseBody: public OAIObject {
public:
    OAIHealthCheckResponseBody();
    OAIHealthCheckResponseBody(QString json);
    ~OAIHealthCheckResponseBody() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QString getStatus() const;
    void setStatus(const QString &status);

    
    QString getMessage() const;
    void setMessage(const QString &message);

    
    QString getVersion() const;
    void setVersion(const QString &version);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QString status;
    bool m_status_isSet;
    bool m_status_isValid;
    
    QString message;
    bool m_message_isSet;
    bool m_message_isValid;
    
    QString version;
    bool m_version_isSet;
    bool m_version_isValid;
    
    };

}

#endif // OAIHealthCheckResponseBody_H