QT += network

HEADERS += \
# Models
    $${PWD}/OAIASRRequestBodyData.h \
    $${PWD}/OAIASRRequestBodyURI.h \
    $${PWD}/OAIASRResponseBody.h \
    $${PWD}/OAIASRStatus.h \
    $${PWD}/OAIAudioEncoding.h \
    $${PWD}/OAIError.h \
    $${PWD}/OAIHealthCheckResponseBody.h \
    $${PWD}/OAILMStatus.h \
    $${PWD}/OAILanguageCode.h \
    $${PWD}/OAILanguageModelResult.h \
    $${PWD}/OAILanguageModelTrainRequestBody.h \
    $${PWD}/OAIRecognitionAudioData.h \
    $${PWD}/OAIRecognitionAudioURI.h \
    $${PWD}/OAIRecognitionConfig.h \
    $${PWD}/OAISpeechRecognitionModel.h \
    $${PWD}/OAISpeechRecognitionResult.h \
    $${PWD}/OAISynthesisInput.h \
    $${PWD}/OAITTSAudioConfig.h \
    $${PWD}/OAITTSRequestBody.h \
    $${PWD}/OAITTSResponseBody.h \
    $${PWD}/OAITTSVoiceGender.h \
    $${PWD}/OAIVoiceSelectionParams.h \
    $${PWD}/OAIWordInfo.h \
# APIs
    $${PWD}/OAILanguageModelApi.h \
    $${PWD}/OAISpeechApi.h \
    $${PWD}/OAIVoiceApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h
    $${PWD}/OAIEnum.h    

SOURCES += \
# Models
    $${PWD}/OAIASRRequestBodyData.cpp \
    $${PWD}/OAIASRRequestBodyURI.cpp \
    $${PWD}/OAIASRResponseBody.cpp \
    $${PWD}/OAIASRStatus.cpp \
    $${PWD}/OAIAudioEncoding.cpp \
    $${PWD}/OAIError.cpp \
    $${PWD}/OAIHealthCheckResponseBody.cpp \
    $${PWD}/OAILMStatus.cpp \
    $${PWD}/OAILanguageCode.cpp \
    $${PWD}/OAILanguageModelResult.cpp \
    $${PWD}/OAILanguageModelTrainRequestBody.cpp \
    $${PWD}/OAIRecognitionAudioData.cpp \
    $${PWD}/OAIRecognitionAudioURI.cpp \
    $${PWD}/OAIRecognitionConfig.cpp \
    $${PWD}/OAISpeechRecognitionModel.cpp \
    $${PWD}/OAISpeechRecognitionResult.cpp \
    $${PWD}/OAISynthesisInput.cpp \
    $${PWD}/OAITTSAudioConfig.cpp \
    $${PWD}/OAITTSRequestBody.cpp \
    $${PWD}/OAITTSResponseBody.cpp \
    $${PWD}/OAITTSVoiceGender.cpp \
    $${PWD}/OAIVoiceSelectionParams.cpp \
    $${PWD}/OAIWordInfo.cpp \
# APIs
    $${PWD}/OAILanguageModelApi.cpp \
    $${PWD}/OAISpeechApi.cpp \
    $${PWD}/OAIVoiceApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp

