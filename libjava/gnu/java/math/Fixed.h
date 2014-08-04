
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_math_Fixed__
#define __gnu_java_math_Fixed__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace math
      {
          class Fixed;
      }
    }
  }
}

class gnu::java::math::Fixed : public ::java::lang::Object
{

  Fixed();
public:
  static jint div(jint, jint, jint);
  static jint mul(jint, jint, jint);
  static jint ceil(jint, jint);
  static jint floor(jint, jint);
  static jint trunc(jint, jint);
  static jint round(jint, jint);
  static jfloat floatValue(jint, jint);
  static jdouble doubleValue(jint, jint);
  static jint fixedValue(jint, jfloat);
  static jint fixedValue(jint, jdouble);
  static jint intValue(jint, jint);
  static jint roundIntValue(jint, jint);
  static ::java::lang::Class class$;
};

#endif // __gnu_java_math_Fixed__