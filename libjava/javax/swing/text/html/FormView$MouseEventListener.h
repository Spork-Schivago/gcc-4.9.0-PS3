
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_FormView$MouseEventListener__
#define __javax_swing_text_html_FormView$MouseEventListener__

#pragma interface

#include <java/awt/event/MouseAdapter.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
            class FormView;
            class FormView$MouseEventListener;
        }
      }
    }
  }
}

class javax::swing::text::html::FormView$MouseEventListener : public ::java::awt::event::MouseAdapter
{

public: // actually protected
  FormView$MouseEventListener(::javax::swing::text::html::FormView *);
public:
  virtual void mouseReleased(::java::awt::event::MouseEvent *);
public: // actually package-private
  ::javax::swing::text::html::FormView * __attribute__((aligned(__alignof__( ::java::awt::event::MouseAdapter)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_FormView$MouseEventListener__
