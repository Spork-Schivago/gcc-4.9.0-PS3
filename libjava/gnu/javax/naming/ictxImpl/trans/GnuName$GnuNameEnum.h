
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_naming_ictxImpl_trans_GnuName$GnuNameEnum__
#define __gnu_javax_naming_ictxImpl_trans_GnuName$GnuNameEnum__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace naming
      {
        namespace ictxImpl
        {
          namespace trans
          {
              class GnuName;
              class GnuName$GnuNameEnum;
          }
        }
      }
    }
  }
}

class gnu::javax::naming::ictxImpl::trans::GnuName$GnuNameEnum : public ::java::lang::Object
{

public: // actually package-private
  GnuName$GnuNameEnum(::gnu::javax::naming::ictxImpl::trans::GnuName *, jint);
public:
  virtual jboolean hasMoreElements();
  virtual ::java::lang::Object * nextElement();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) nxt;
  ::gnu::javax::naming::ictxImpl::trans::GnuName * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_naming_ictxImpl_trans_GnuName$GnuNameEnum__
