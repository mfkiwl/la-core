
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_xlib_XConfigureEvent__
#define __gnu_gcj_xlib_XConfigureEvent__

#pragma interface

#include <gnu/gcj/xlib/XEvent.h>
extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace xlib
      {
          class XAnyEvent;
          class XConfigureEvent;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Rectangle;
    }
  }
}

class gnu::gcj::xlib::XConfigureEvent : public ::gnu::gcj::xlib::XEvent
{

public:
  XConfigureEvent(::gnu::gcj::xlib::XAnyEvent *);
  virtual ::java::awt::Rectangle * getBounds();
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_xlib_XConfigureEvent__
