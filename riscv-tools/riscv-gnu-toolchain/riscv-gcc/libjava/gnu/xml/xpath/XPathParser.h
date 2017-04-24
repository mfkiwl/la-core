
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_xpath_XPathParser__
#define __gnu_xml_xpath_XPathParser__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace xpath
      {
          class Expr;
          class XPathParser;
          class XPathParser$yyInput;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class NamespaceContext;
          class QName;
      }
      namespace xpath
      {
          class XPathFunctionResolver;
          class XPathVariableResolver;
      }
    }
  }
}

class gnu::xml::xpath::XPathParser : public ::java::lang::Object
{

public:
  XPathParser();
public: // actually package-private
  virtual ::javax::xml::namespace$::QName * getQName(::java::lang::String *);
  virtual ::gnu::xml::xpath::Expr * lookupFunction(::java::lang::String *, ::java::util::List *);
public:
  virtual void yyerror(::java::lang::String *);
  virtual void yyerror(::java::lang::String *, JArray< ::java::lang::String * > *);
public: // actually protected
  virtual JArray< ::java::lang::String * > * yyExpecting(jint);
public:
  virtual ::java::lang::Object * yyparse(::gnu::xml::xpath::XPathParser$yyInput *, ::java::lang::Object *);
public: // actually protected
  virtual ::java::lang::Object * yyDefault(::java::lang::Object *);
public:
  virtual ::java::lang::Object * yyparse(::gnu::xml::xpath::XPathParser$yyInput *);
public: // actually package-private
  ::javax::xml::namespace$::NamespaceContext * __attribute__((aligned(__alignof__( ::java::lang::Object)))) namespaceContext;
  ::javax::xml::xpath::XPathVariableResolver * variableResolver;
  ::javax::xml::xpath::XPathFunctionResolver * functionResolver;
public:
  static const jint LITERAL = 257;
  static const jint DIGITS = 258;
  static const jint NAME = 259;
  static const jint LP = 260;
  static const jint RP = 261;
  static const jint LB = 262;
  static const jint RB = 263;
  static const jint COMMA = 264;
  static const jint PIPE = 265;
  static const jint SLASH = 266;
  static const jint DOUBLE_SLASH = 267;
  static const jint EQ = 268;
  static const jint NE = 269;
  static const jint GT = 270;
  static const jint LT = 271;
  static const jint GTE = 272;
  static const jint LTE = 273;
  static const jint PLUS = 274;
  static const jint MINUS = 275;
  static const jint AT = 276;
  static const jint STAR = 277;
  static const jint DOLLAR = 278;
  static const jint COLON = 279;
  static const jint DOUBLE_COLON = 280;
  static const jint DOT = 281;
  static const jint DOUBLE_DOT = 282;
  static const jint ANCESTOR = 283;
  static const jint ANCESTOR_OR_SELF = 284;
  static const jint ATTRIBUTE = 285;
  static const jint CHILD = 286;
  static const jint DESCENDANT = 287;
  static const jint DESCENDANT_OR_SELF = 288;
  static const jint FOLLOWING = 289;
  static const jint FOLLOWING_SIBLING = 290;
  static const jint NAMESPACE = 291;
  static const jint PARENT = 292;
  static const jint PRECEDING = 293;
  static const jint PRECEDING_SIBLING = 294;
  static const jint SELF = 295;
  static const jint DIV = 296;
  static const jint MOD = 297;
  static const jint OR = 298;
  static const jint AND = 299;
  static const jint COMMENT = 300;
  static const jint PROCESSING_INSTRUCTION = 301;
  static const jint TEXT = 302;
  static const jint NODE = 303;
  static const jint UNARY = 304;
  static const jint yyErrorCode = 256;
public: // actually protected
  static const jint yyFinal = 30;
  jint yyMax;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_xpath_XPathParser__