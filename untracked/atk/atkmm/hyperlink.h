// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _ATKMM_HYPERLINK_H
#define _ATKMM_HYPERLINK_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2003 The gtkmm Development Team
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

#include <atkmm/action.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using AtkHyperlink = struct _AtkHyperlink;
using AtkHyperlinkClass = struct _AtkHyperlinkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Atk
{ class ATKMM_API Hyperlink_Class; } // namespace Atk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Atk
{

class ATKMM_API Object;

/** Encapsulates a link or set of links in a hypertext document.
 */

class ATKMM_API Hyperlink : public Glib::Object, public Atk::Action
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Hyperlink;
  using CppClassType = Hyperlink_Class;
  using BaseObjectType = AtkHyperlink;
  using BaseClassType = AtkHyperlinkClass;

  // noncopyable
  Hyperlink(const Hyperlink&) = delete;
  Hyperlink& operator=(const Hyperlink&) = delete;

private:  friend class Hyperlink_Class;
  static CppClassType hyperlink_class_;

protected:
  explicit Hyperlink(const Glib::ConstructParams& construct_params);
  explicit Hyperlink(AtkHyperlink* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Hyperlink(Hyperlink&& src) noexcept;
  Hyperlink& operator=(Hyperlink&& src) noexcept;

  ~Hyperlink() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkHyperlink*       gobj()       { return reinterpret_cast<AtkHyperlink*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const AtkHyperlink* gobj() const { return reinterpret_cast<AtkHyperlink*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  AtkHyperlink* gobj_copy();

private:

  
public:
  
  /** Get a the URI associated with the anchor specified 
   * by @a i of @a link. 
   * 
   * Multiple anchors are primarily used by client-side image maps.
   * 
   * @param i A (zero-index) integer specifying the desired anchor.
   * @return A string specifying the URI.
   */
  Glib::ustring get_uri(int i) const;

  
  /** Returns the item associated with this hyperlinks nth anchor.
   * For instance, the returned Atk::Object will implement Atk::Text
   * if @a link is a text hyperlink, Atk::Image if @a link is an image
   * hyperlink etc. 
   * 
   * Multiple anchors are primarily used by client-side image maps.
   * 
   * @param i A (zero-index) integer specifying the desired anchor.
   * @return An Atk::Object associated with this hyperlinks
   * i-th anchor.
   */
  Glib::RefPtr<Atk::Object> get_object(int i);
  
  /** Returns the item associated with this hyperlinks nth anchor.
   * For instance, the returned Atk::Object will implement Atk::Text
   * if @a link is a text hyperlink, Atk::Image if @a link is an image
   * hyperlink etc. 
   * 
   * Multiple anchors are primarily used by client-side image maps.
   * 
   * @param i A (zero-index) integer specifying the desired anchor.
   * @return An Atk::Object associated with this hyperlinks
   * i-th anchor.
   */
  Glib::RefPtr<const Atk::Object> get_object(int i) const;

  
  /** Gets the index with the hypertext document at which this link ends.
   * 
   * @return The index with the hypertext document at which this link ends.
   */
  int get_end_index() const;
  
  /** Gets the index with the hypertext document at which this link begins.
   * 
   * @return The index with the hypertext document at which this link begins.
   */
  int get_start_index() const;

  
  /** Since the document that a link is associated with may have changed
   * this method returns <tt>true</tt> if the link is still valid (with
   * respect to the document it references) and <tt>false</tt> otherwise.
   * 
   * @return Whether or not this link is still valid.
   */
  bool is_valid() const;
  
  /** Indicates whether the link currently displays some or all of its
   * content inline.  Ordinary HTML links will usually return
   * <tt>false</tt>, but an inline <src> HTML element will return
   * <tt>true</tt>.
   * 
   * @return Whether or not this link displays its content inline.
   */
  bool is_inline() const;

  
  /** Gets the number of anchors associated with this hyperlink.
   * 
   * @return The number of anchors associated with this hyperlink.
   */
  int get_n_anchors() const;
   // deprecated
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%link_activated()</tt>
   *
   * Flags: Run Last
   *
   * The signal link-activated is emitted when a link is activated.
   */

  Glib::SignalProxy< void > signal_link_activated();


  /** Specifies whether the AtkHyperlink object is selected.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_selected_link() const;


  /** The number of anchors associated with the AtkHyperlink object.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_number_of_anchors() const;


  /** The end index of the AtkHyperlink object.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_end_index() const;


  /** The start index of the AtkHyperlink object.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_start_index() const;


protected:
    virtual gchar* get_uri_vfunc(int i) const;

    virtual Glib::RefPtr<Atk::Object> get_object_vfunc(int i);

    virtual int get_end_index_vfunc() const;

    virtual int get_start_index_vfunc() const;

    virtual bool is_valid_vfunc() const;

    virtual int get_n_anchors_vfunc() const;

    virtual guint link_state_vfunc() const;

    virtual bool is_selected_link_vfunc() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_link_activated().
  virtual void on_link_activated();


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
   * @relates Atk::Hyperlink
   */
  ATKMM_API
  Glib::RefPtr<Atk::Hyperlink> wrap(AtkHyperlink* object, bool take_copy = false);
}


#endif /* _ATKMM_HYPERLINK_H */

