// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMAPROPERTYTYPEID_H
        #define RECMAPROPERTYTYPEID_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPropertyTypeId.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaPropertyTypeId {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        getId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCustomPropertyTitle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCustomPropertyTitle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCustomPropertyName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCustomPropertyName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isCustom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyGroupTitle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyTitle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyTypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equals
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_not_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_less
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPropertyTypeId* getSelf(const QString& fName, QScriptContext* context)
    ;static RPropertyTypeId* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    