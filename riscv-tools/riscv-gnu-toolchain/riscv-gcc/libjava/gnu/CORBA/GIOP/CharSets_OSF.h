
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_GIOP_CharSets_OSF__
#define __gnu_CORBA_GIOP_CharSets_OSF__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace GIOP
      {
          class CharSets_OSF;
      }
    }
  }
}

class gnu::CORBA::GIOP::CharSets_OSF : public ::java::lang::Object
{

public:
  CharSets_OSF();
  static jint getCode(::java::lang::String *);
  static ::java::lang::String * getName(jint);
  static JArray< jint > * getSupportedCharSets();
private:
  static void makeMap();
  static void put(jint, ::java::lang::String *);
public:
  static const jint ASCII = 65568;
  static const jint ISO8859_1 = 65537;
  static const jint ISO8859_2 = 65538;
  static const jint ISO8859_3 = 65539;
  static const jint ISO8859_4 = 65540;
  static const jint ISO8859_5 = 65541;
  static const jint ISO8859_6 = 65542;
  static const jint ISO8859_7 = 65543;
  static const jint ISO8859_8 = 65544;
  static const jint ISO8859_9 = 65545;
  static const jint ISO8859_15_FDIS = 65551;
  static const jint UTF8 = 83951617;
  static const jint UTF16 = 65801;
  static const jint UCS2 = 65792;
  static const jint Cp1047 = 268567575;
  static const jint Cp1250 = 268567778;
  static const jint Cp1251 = 268567779;
  static const jint Cp1252 = 268567780;
  static const jint Cp1253 = 268567781;
  static const jint Cp1254 = 268567782;
  static const jint Cp1255 = 268567783;
  static const jint Cp1256 = 268567784;
  static const jint Cp1257 = 268567785;
  static const jint Cp1363 = 268567891;
  static const jint Cp1363C = 268567891;
  static const jint Cp1381 = 268567909;
  static const jint Cp1383 = 268567911;
  static const jint Cp1386 = 268567914;
  static const jint Cp33722 = 268600250;
  static const jint Cp33722C = 268600250;
  static const jint Cp930 = 268567458;
  static const jint Cp943 = 268567471;
  static const jint Cp943C = 268567471;
  static const jint Cp949 = 268567477;
  static const jint Cp949C = 268567477;
  static const jint Cp950 = 268567478;
  static const jint Cp964 = 268567492;
  static const jint Cp970 = 268567498;
  static const jint EUC_JP = 196624;
  static const jint EUC_KR = 262154;
  static const jint EUC_TW = 327696;
  static const jint NATIVE_CHARACTER = 65537;
  static const jint NATIVE_WIDE_CHARACTER = 65801;
private:
  static ::java::util::Hashtable * code_to_string;
  static ::java::util::Hashtable * string_to_code;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_GIOP_CharSets_OSF__
