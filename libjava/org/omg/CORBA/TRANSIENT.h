
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_TRANSIENT__
#define __org_omg_CORBA_TRANSIENT__

#pragma interface

#include <org/omg/CORBA/SystemException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class CompletionStatus;
          class TRANSIENT;
      }
    }
  }
}

class org::omg::CORBA::TRANSIENT : public ::org::omg::CORBA::SystemException
{

public:
  TRANSIENT(::java::lang::String *);
  TRANSIENT();
  TRANSIENT(jint, ::org::omg::CORBA::CompletionStatus *);
  TRANSIENT(::java::lang::String *, jint, ::org::omg::CORBA::CompletionStatus *);
private:
  static const jlong serialVersionUID = 8168539547719791425LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_TRANSIENT__