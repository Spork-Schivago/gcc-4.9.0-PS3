
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GdkFontPeer__
#define __gnu_java_awt_peer_gtk_GdkFontPeer__

#pragma interface

#include <gnu/java/awt/peer/ClasspathFontPeer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
        class Pointer;
    }
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GdkFontPeer;
              class GdkFontPeer$GdkFontMetrics;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Font;
        class FontMetrics;
      namespace font
      {
          class FontRenderContext;
          class GlyphMetrics;
          class GlyphVector;
          class LineMetrics;
      }
      namespace geom
      {
          class Rectangle2D;
      }
    }
    namespace nio
    {
        class ByteBuffer;
    }
    namespace text
    {
        class CharacterIterator;
    }
  }
}

class gnu::java::awt::peer::gtk::GdkFontPeer : public ::gnu::java::awt::peer::ClasspathFontPeer
{

public: // actually package-private
  static void initStaticState();
private:
  void initState();
  void dispose();
  void setFont(::java::lang::String *, jint, jint);
public: // actually package-private
  virtual void getFontMetrics(JArray< jdouble > *);
  virtual void getTextMetrics(::java::lang::String *, JArray< jdouble > *);
  virtual void releasePeerGraphicsResource();
public: // actually protected
  virtual void finalize();
private:
  ::java::lang::String * buildString(::java::text::CharacterIterator *);
  ::java::lang::String * buildString(::java::text::CharacterIterator *, jint, jint);
  ::java::lang::String * buildString(JArray< jchar > *, jint, jint);
public:
  GdkFontPeer(::java::lang::String *, jint);
  GdkFontPeer(::java::lang::String *, jint, jint);
  GdkFontPeer(::java::lang::String *, ::java::util::Map *);
public: // actually package-private
  static ::java::awt::Font * initFont(::java::awt::Font *);
private:
  void setupMetrics();
public:
  virtual ::java::lang::String * getSubFamilyName(::java::awt::Font *, ::java::util::Locale *);
private:
  JArray< jbyte > * getTrueTypeTable(jbyte, jbyte, jbyte, jbyte);
public:
  virtual ::java::lang::String * getPostScriptName(::java::awt::Font *);
private:
  ::java::lang::String * getName(jint, ::java::util::Locale *);
public:
  virtual jboolean canDisplay(::java::awt::Font *, jint);
  virtual jint canDisplayUpTo(::java::awt::Font *, ::java::text::CharacterIterator *, jint, jint);
  virtual ::java::awt::font::GlyphVector * createGlyphVector(::java::awt::Font *, ::java::awt::font::FontRenderContext *, ::java::text::CharacterIterator *);
  virtual ::java::awt::font::GlyphVector * createGlyphVector(::java::awt::Font *, ::java::awt::font::FontRenderContext *, JArray< jint > *);
  virtual jbyte getBaselineFor(::java::awt::Font *, jchar);
  virtual ::java::awt::font::LineMetrics * getLineMetrics(::java::awt::Font *, ::java::text::CharacterIterator *, jint, jint, ::java::awt::font::FontRenderContext *);
  virtual ::java::awt::geom::Rectangle2D * getMaxCharBounds(::java::awt::Font *, ::java::awt::font::FontRenderContext *);
  virtual jint getMissingGlyphCode(::java::awt::Font *);
  virtual ::java::lang::String * getGlyphName(::java::awt::Font *, jint);
  virtual jint getNumGlyphs(::java::awt::Font *);
  virtual jboolean hasUniformLineMetrics(::java::awt::Font *);
  virtual ::java::awt::font::GlyphVector * layoutGlyphVector(::java::awt::Font *, ::java::awt::font::FontRenderContext *, JArray< jchar > *, jint, jint, jint);
  virtual ::java::awt::font::LineMetrics * getLineMetrics(::java::awt::Font *, ::java::lang::String *, ::java::awt::font::FontRenderContext *);
  virtual ::java::awt::FontMetrics * getFontMetrics(::java::awt::Font *);
public: // actually package-private
  virtual ::java::awt::font::GlyphMetrics * getGlyphMetrics(jint);
  virtual void putGlyphMetrics(jint, ::java::awt::font::GlyphMetrics *);
  static ::java::awt::font::FontRenderContext * DEFAULT_CTX;
  ::java::util::HashMap * __attribute__((aligned(__alignof__( ::gnu::java::awt::peer::ClasspathFontPeer)))) textLayoutCache;
private:
  jint native_state;
  ::java::util::HashMap * metricsCache;
  static const jint FONT_METRICS_ASCENT = 0;
  static const jint FONT_METRICS_MAX_ASCENT = 1;
  static const jint FONT_METRICS_DESCENT = 2;
  static const jint FONT_METRICS_MAX_DESCENT = 3;
  static const jint FONT_METRICS_MAX_ADVANCE = 4;
  static const jint FONT_METRICS_HEIGHT = 5;
  static const jint FONT_METRICS_UNDERLINE_OFFSET = 6;
  static const jint FONT_METRICS_UNDERLINE_THICKNESS = 7;
public: // actually package-private
  jfloat ascent;
  jfloat descent;
  jfloat maxAscent;
  jfloat maxDescent;
  jfloat maxAdvance;
  jfloat height;
  jfloat underlineOffset;
  jfloat underlineThickness;
  ::gnu::java::awt::peer::gtk::GdkFontPeer$GdkFontMetrics * metrics;
private:
  ::java::nio::ByteBuffer * nameTable;
  ::gnu::classpath::Pointer * nativeFont;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GdkFontPeer__
