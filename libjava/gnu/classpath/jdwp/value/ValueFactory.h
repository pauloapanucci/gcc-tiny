
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_value_ValueFactory__
#define __gnu_classpath_jdwp_value_ValueFactory__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace value
        {
            class Value;
            class ValueFactory;
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::classpath::jdwp::value::ValueFactory : public ::java::lang::Object
{

public:
  ValueFactory();
  static ::gnu::classpath::jdwp::value::Value * createFromTagged(::java::nio::ByteBuffer *);
  static ::gnu::classpath::jdwp::value::Value * createFromUntagged(::java::nio::ByteBuffer *, ::java::lang::Class *);
private:
  static ::gnu::classpath::jdwp::value::Value * create(::java::nio::ByteBuffer *, jbyte);
  static jbyte getTagForClass(::java::lang::Class *);
public:
  static ::gnu::classpath::jdwp::value::Value * createFromObject(::java::lang::Object *, ::java::lang::Class *);
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_value_ValueFactory__
