// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _ATKMM_VALUE_H
#define _ATKMM_VALUE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: value.hg,v 1.2 2004/01/02 09:56:43 murrayc Exp $ */

/* Copyright (C) 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <glibmm/interface.h>
#include <atkmm/range.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
  typedef struct _AtkValueIface AtkValueIface;
  typedef struct _AtkValue      AtkValue;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using AtkValue = struct _AtkValue;
using AtkValueClass = struct _AtkValueClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Atk
{ class ATKMM_API Value_Class; } // namespace Atk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Atk
{

/** The ATK interface implemented by valuators and components which display or select a value from a bounded range of values.
 * This should be implemented for components which either display a value from a bounded range, or which allow the user
 * to specify a value from a bounded range, or both. For instance, most sliders and range controls, as well as dials,
 * should have Atk::Object representations which implement Atk::Value on the component's behalf. Atk::Values may be
 * read-only, in which case attempts to alter the value return false to indicate failure.
 */

class ATKMM_API Value : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Value;
  using CppClassType = Value_Class;
  using BaseObjectType = AtkValue;
  using BaseClassType = AtkValueIface;

  // noncopyable
  Value(const Value&) = delete;
  Value& operator=(const Value&) = delete;

private:
  friend class Value_Class;
  static CppClassType value_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Value();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit Value(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit Value(AtkValue* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Value(Value&& src) noexcept;
  Value& operator=(Value&& src) noexcept;

  ~Value() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkValue*       gobj()       { return reinterpret_cast<AtkValue*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const AtkValue* gobj() const { return reinterpret_cast<AtkValue*>(gobject_); }

private:


public:
  
#ifndef ATKMM_DISABLE_DEPRECATED

  /** Gets the value of this object.
   * 
   * Deprecated: Since 2.12. Use get_value_and_text()
   * instead.
   * 
   * @deprecated Use get_value_and_text() instead.
   * 
   * @param value A Value representing the current accessible value.
   */
  void get_current_value(Glib::ValueBase& value) const;
#endif // ATKMM_DISABLE_DEPRECATED


#ifndef ATKMM_DISABLE_DEPRECATED

  /** Gets the maximum value of this object.
   * 
   * Deprecated: Since 2.12. Use get_range() instead.
   * 
   * @deprecated Use get_range() instead.
   * 
   * @param value A Value representing the maximum accessible value.
   */
  void get_maximum_value(Glib::ValueBase& value) const;
#endif // ATKMM_DISABLE_DEPRECATED


#ifndef ATKMM_DISABLE_DEPRECATED

  /** Gets the minimum value of this object.
   * 
   * Deprecated: Since 2.12. Use get_range() instead.
   * 
   * @deprecated Use get_range() instead.
   * 
   * @param value A Value representing the minimum accessible value.
   */
  void get_minimum_value(Glib::ValueBase& value) const;
#endif // ATKMM_DISABLE_DEPRECATED


#ifndef ATKMM_DISABLE_DEPRECATED

  /** Sets the value of this object.
   * 
   * Deprecated: Since 2.12. Use set_value() instead.
   * 
   * @deprecated Use set_value() instead.
   * 
   * @param value A Value which is the desired new accessible value.
   * @return <tt>true</tt> if new value is successfully set, <tt>false</tt> otherwise.
   */
  bool set_current_value(const Glib::ValueBase& value);
#endif // ATKMM_DISABLE_DEPRECATED


  /** Gets the current value and the human readable text alternative.
   *
   * @newin{2,24}
   */
  void get_value_and_text(double& value, Glib::ustring& text);
  

  /** Gets the range of this object.
   * 
   * @newin{2,12}
   * 
   * @return A newly allocated Atk::Range
   * that represents the minimum, maximum and descriptor (if available)
   * of @a obj. <tt>nullptr</tt> if that range is not defined.
   */
  Range get_range() const;

  
  /** Gets the minimum increment by which the value of this object may be
   * changed.  If zero, the minimum increment is undefined, which may
   * mean that it is limited only by the floating point precision of the
   * platform.
   * 
   * @newin{2,12}
   * 
   * @return The minimum increment by which the value of this
   * object may be changed. zero if undefined.
   */
  double get_increment();

  
  /** Sets the value of this object.
   * 
   * This method is intended to provide a way to change the value of the
   * object. In any case, it is possible that the value can't be
   * modified (ie: a read-only component). If the value changes due this
   * call, it is possible that the text could change, and will trigger
   * an Atk::Value::signal_value_changed() signal emission.
   * 
   * Note for implementors: the deprecated set_current_value()
   * method returned <tt>true</tt> or <tt>false</tt> depending if the value was assigned
   * or not. In the practice several implementors were not able to
   * decide it, and returned <tt>true</tt> in any case. For that reason it is not
   * required anymore to return if the value was properly assigned or
   * not.
   * 
   * @newin{2,12}
   * 
   * @param new_value A double which is the desired new accessible value.
   */
  void set_value(const gdouble new_value);

  
  //TODO: atk_value_get_sub_ranges ()


protected:
    virtual void get_current_value_vfunc(Glib::ValueBase& value) const;

    virtual void get_maximum_value_vfunc(Glib::ValueBase& value) const;

    virtual void get_minimum_value_vfunc(Glib::ValueBase& value) const;

    virtual bool set_current_value_vfunc(const Glib::ValueBase& value);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Atk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Atk::Value
   */
  ATKMM_API
  Glib::RefPtr<Atk::Value> wrap(AtkValue* object, bool take_copy = false);

} // namespace Glib


#endif /* _ATKMM_VALUE_H */
