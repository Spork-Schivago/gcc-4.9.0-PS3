
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_accessibility_AccessibleContext__
#define __javax_accessibility_AccessibleContext__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class PropertyChangeListener;
        class PropertyChangeSupport;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class Accessible;
        class AccessibleAction;
        class AccessibleComponent;
        class AccessibleContext;
        class AccessibleEditableText;
        class AccessibleIcon;
        class AccessibleRelationSet;
        class AccessibleRole;
        class AccessibleSelection;
        class AccessibleStateSet;
        class AccessibleTable;
        class AccessibleText;
        class AccessibleValue;
    }
  }
}

class javax::accessibility::AccessibleContext : public ::java::lang::Object
{

public:
  AccessibleContext();
  virtual ::java::lang::String * getAccessibleName();
  virtual void setAccessibleName(::java::lang::String *);
  virtual ::java::lang::String * getAccessibleDescription();
  virtual void setAccessibleDescription(::java::lang::String *);
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole() = 0;
  virtual ::javax::accessibility::AccessibleStateSet * getAccessibleStateSet() = 0;
  virtual ::javax::accessibility::Accessible * getAccessibleParent();
  virtual void setAccessibleParent(::javax::accessibility::Accessible *);
  virtual jint getAccessibleIndexInParent() = 0;
  virtual jint getAccessibleChildrenCount() = 0;
  virtual ::javax::accessibility::Accessible * getAccessibleChild(jint) = 0;
  virtual ::java::util::Locale * getLocale() = 0;
  virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener *);
  virtual ::javax::accessibility::AccessibleAction * getAccessibleAction();
  virtual ::javax::accessibility::AccessibleComponent * getAccessibleComponent();
  virtual ::javax::accessibility::AccessibleSelection * getAccessibleSelection();
  virtual ::javax::accessibility::AccessibleText * getAccessibleText();
  virtual ::javax::accessibility::AccessibleEditableText * getAccessibleEditableText();
  virtual ::javax::accessibility::AccessibleValue * getAccessibleValue();
  virtual JArray< ::javax::accessibility::AccessibleIcon * > * getAccessibleIcon();
  virtual ::javax::accessibility::AccessibleRelationSet * getAccessibleRelationSet();
  virtual ::javax::accessibility::AccessibleTable * getAccessibleTable();
  virtual void firePropertyChange(::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *);
  static ::java::lang::String * ACCESSIBLE_NAME_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_DESCRIPTION_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_STATE_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_VALUE_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_SELECTION_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_TEXT_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_CARET_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_VISIBLE_DATA_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_CHILD_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_TABLE_CAPTION_CHANGED;
  static ::java::lang::String * ACCESSIBLE_TABLE_SUMMARY_CHANGED;
  static ::java::lang::String * ACCESSIBLE_TABLE_MODEL_CHANGED;
  static ::java::lang::String * ACCESSIBLE_TABLE_ROW_HEADER_CHANGED;
  static ::java::lang::String * ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED;
  static ::java::lang::String * ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED;
  static ::java::lang::String * ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED;
  static ::java::lang::String * ACCESSIBLE_ACTION_PROPERTY;
  static ::java::lang::String * ACCESSIBLE_HYPERTEXT_OFFSET;
  static ::java::lang::String * ACCESSIBLE_COMPONENT_BOUNDS_CHANGED;
  static ::java::lang::String * ACCESSIBLE_INVALIDATE_CHILDREN;
  static ::java::lang::String * ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED;
public: // actually protected
  ::javax::accessibility::Accessible * __attribute__((aligned(__alignof__( ::java::lang::Object)))) accessibleParent;
  ::java::lang::String * accessibleName;
  ::java::lang::String * accessibleDescription;
private:
  ::java::beans::PropertyChangeSupport * listeners;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_accessibility_AccessibleContext__
