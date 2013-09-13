// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaPropertyTypeId.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaPropertyTypeId::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPropertyTypeId*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getId, "getId");
            
            REcmaHelper::registerFunction(&engine, proto, setId, "setId");
            
            REcmaHelper::registerFunction(&engine, proto, getCustomPropertyTitle, "getCustomPropertyTitle");
            
            REcmaHelper::registerFunction(&engine, proto, setCustomPropertyTitle, "setCustomPropertyTitle");
            
            REcmaHelper::registerFunction(&engine, proto, getCustomPropertyName, "getCustomPropertyName");
            
            REcmaHelper::registerFunction(&engine, proto, setCustomPropertyName, "setCustomPropertyName");
            
            REcmaHelper::registerFunction(&engine, proto, isValid, "isValid");
            
            REcmaHelper::registerFunction(&engine, proto, isCustom, "isCustom");
            
            REcmaHelper::registerFunction(&engine, proto, getPropertyGroupTitle, "getPropertyGroupTitle");
            
            REcmaHelper::registerFunction(&engine, proto, getPropertyTitle, "getPropertyTitle");
            
            REcmaHelper::registerFunction(&engine, proto, equals, "equals");
            
            REcmaHelper::registerFunction(&engine, proto, operator_not_assign, "operator_not_assign");
            
            REcmaHelper::registerFunction(&engine, proto, operator_less, "operator_less");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPropertyTypeId*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RPropertyTypeId
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, getPropertyTypeId, "getPropertyTypeId");
            

    // static properties:
    
            ctor.setProperty("INVALID_ID",
                qScriptValueFromValue(&engine, RPropertyTypeId::INVALID_ID),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPropertyTypeId",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPropertyTypeId::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPropertyTypeId(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        2
                && (
                
                        context->argument(
                        0
                        ).isString()
                ) /* type: QString */
            
                && (
                
                        context->argument(
                        1
                        ).isString()
                ) /* type: QString */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPropertyTypeId
                    cppResult(
                    a0
        ,
    a1
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isString()
                ) /* type: QString */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPropertyTypeId
                    cppResult(
                    a0
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RPropertyTypeId */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPropertyTypeId: Argument 0 is not of type RPropertyTypeId.",
                               context);                    
                    }
                    RPropertyTypeId 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPropertyTypeId
                    cppResult(
                    a0
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPropertyTypeId
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isNumber()
                ) /* type: int */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPropertyTypeId
                    cppResult(
                    a0
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPropertyTypeId(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaPropertyTypeId::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPropertyTypeId"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPropertyTypeId::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPropertyTypeId::getId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::getId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::getId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("getId", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        
               self->getId();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.getId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::getId", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::setId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::setId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::setId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("setId", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setId(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.setId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::setId", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::getCustomPropertyTitle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::getCustomPropertyTitle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::getCustomPropertyTitle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("getCustomPropertyTitle", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getCustomPropertyTitle();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.getCustomPropertyTitle().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::getCustomPropertyTitle", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::setCustomPropertyTitle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::setCustomPropertyTitle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::setCustomPropertyTitle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("setCustomPropertyTitle", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setCustomPropertyTitle(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.setCustomPropertyTitle().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::setCustomPropertyTitle", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::getCustomPropertyName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::getCustomPropertyName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::getCustomPropertyName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("getCustomPropertyName", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getCustomPropertyName();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.getCustomPropertyName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::getCustomPropertyName", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::setCustomPropertyName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::setCustomPropertyName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::setCustomPropertyName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("setCustomPropertyName", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setCustomPropertyName(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.setCustomPropertyName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::setCustomPropertyName", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::isValid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::isValid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::isValid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("isValid", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isValid();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.isValid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::isValid", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::isCustom
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::isCustom", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::isCustom";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("isCustom", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isCustom();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.isCustom().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::isCustom", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::getPropertyGroupTitle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::getPropertyGroupTitle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::getPropertyGroupTitle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("getPropertyGroupTitle", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getPropertyGroupTitle();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.getPropertyGroupTitle().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::getPropertyGroupTitle", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::getPropertyTitle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::getPropertyTitle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::getPropertyTitle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("getPropertyTitle", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getPropertyTitle();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.getPropertyTitle().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::getPropertyTitle", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::getPropertyTypeId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::getPropertyTypeId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::getPropertyTypeId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'RPropertyTypeId'
    RPropertyTypeId cppResult =
        RPropertyTypeId::
       getPropertyTypeId(a0
        ,
    a1);
        // return type: RPropertyTypeId
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.getPropertyTypeId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::getPropertyTypeId", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::equals
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::operator ==", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::operator ==";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("operator ==", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RPropertyTypeId */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPropertyTypeId: Argument 0 is not of type RPropertyTypeId.",
                               context);                    
                    }
                    RPropertyTypeId 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->operator ==(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.equals().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::operator ==", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::operator_not_assign
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::operator !=", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::operator !=";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("operator !=", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RPropertyTypeId */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPropertyTypeId: Argument 0 is not of type RPropertyTypeId.",
                               context);                    
                    }
                    RPropertyTypeId 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->operator !=(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.operator_not_assign().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::operator !=", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyTypeId::operator_less
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyTypeId::operator <", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyTypeId::operator <";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyTypeId* self = 
                        getSelf("operator <", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RPropertyTypeId */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPropertyTypeId: Argument 0 is not of type RPropertyTypeId.",
                               context);                    
                    }
                    RPropertyTypeId 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->operator <(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyTypeId.operator_less().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyTypeId::operator <", context, engine);
            return result;
        }
         QScriptValue REcmaPropertyTypeId::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPropertyTypeId* self = getSelf("toString", context);
    
    QString result;
    
            QDebug d(&result);
            if (self!=NULL) {
                d << *self;
            }
            else {
                d << "NULL";
            }
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPropertyTypeId::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RPropertyTypeId cp = qscriptvalue_cast<RPropertyTypeId>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaPropertyTypeId::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPropertyTypeId* self = getSelf("RPropertyTypeId", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPropertyTypeId* REcmaPropertyTypeId::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPropertyTypeId* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPropertyTypeId >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPropertyTypeId.%1(): "
                        "This object is not a RPropertyTypeId").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPropertyTypeId* REcmaPropertyTypeId::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPropertyTypeId* selfBase = getSelf(fName, context);
                RPropertyTypeId* self = dynamic_cast<RPropertyTypeId*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPropertyTypeId >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPropertyTypeId.%1(): "
                    "This object is not a RPropertyTypeId").arg(fName),
                    context);
            }

            return self;
            


        }
        