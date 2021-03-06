
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_w3c_dom_ls_LSInput__
#define __org_w3c_dom_ls_LSInput__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
        namespace ls
        {
            class LSInput;
        }
      }
    }
  }
}

class org::w3c::dom::ls::LSInput : public ::java::lang::Object
{

public:
  virtual ::java::io::Reader * getCharacterStream() = 0;
  virtual void setCharacterStream(::java::io::Reader *) = 0;
  virtual ::java::io::InputStream * getByteStream() = 0;
  virtual void setByteStream(::java::io::InputStream *) = 0;
  virtual ::java::lang::String * getStringData() = 0;
  virtual void setStringData(::java::lang::String *) = 0;
  virtual ::java::lang::String * getSystemId() = 0;
  virtual void setSystemId(::java::lang::String *) = 0;
  virtual ::java::lang::String * getPublicId() = 0;
  virtual void setPublicId(::java::lang::String *) = 0;
  virtual ::java::lang::String * getBaseURI() = 0;
  virtual void setBaseURI(::java::lang::String *) = 0;
  virtual ::java::lang::String * getEncoding() = 0;
  virtual void setEncoding(::java::lang::String *) = 0;
  virtual jboolean getCertifiedText() = 0;
  virtual void setCertifiedText(jboolean) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_w3c_dom_ls_LSInput__
