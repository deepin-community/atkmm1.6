// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <atkmm/hypertext.h>
#include <atkmm/private/hypertext_p.h>


// -*- c++ -*-
/* $Id: hypertext.ccg,v 1.1 2004/01/02 09:56:43 murrayc Exp $ */

/* Copyright 2003 The gtkmm Development Team
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

#include <atkmm/object.h>
#include <atk/atkhypertext.h>


namespace Atk
{


} // namespace Atk


namespace
{


static void Hypertext_signal_link_selected_callback(AtkHypertext* self, gint p0,void* data)
{
  using namespace Atk;
  using SlotType = sigc::slot< void,int >;

  auto obj = dynamic_cast<Hypertext*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Hypertext_signal_link_selected_info =
{
  "link_selected",
  (GCallback) &Hypertext_signal_link_selected_callback,
  (GCallback) &Hypertext_signal_link_selected_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Atk::Hypertext> wrap(AtkHypertext* object, bool take_copy)
{
  return Glib::RefPtr<Atk::Hypertext>( dynamic_cast<Atk::Hypertext*> (Glib::wrap_auto_interface<Atk::Hypertext> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Atk
{


/* The *_Class implementation: */

const Glib::Interface_Class& Hypertext_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Hypertext_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = atk_hypertext_get_type();
  }

  return *this;
}

void Hypertext_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->get_link = &get_link_vfunc_callback;
  klass->get_n_links = &get_n_links_vfunc_callback;
  klass->get_link_index = &get_link_index_vfunc_callback;

  klass->link_selected = &link_selected_callback;
}

AtkHyperlink* Hypertext_Class::get_link_vfunc_callback(AtkHypertext* self, gint link_index)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return Glib::unwrap(obj->get_link_vfunc(link_index
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_link)
    return (*base->get_link)(self, link_index);

  using RType = AtkHyperlink*;
  return RType();
}
gint Hypertext_Class::get_n_links_vfunc_callback(AtkHypertext* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return obj->get_n_links_vfunc();
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_n_links)
    return (*base->get_n_links)(self);

  using RType = gint;
  return RType();
}
gint Hypertext_Class::get_link_index_vfunc_callback(AtkHypertext* self, gint char_index)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return obj->get_link_index_vfunc(char_index
);
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_link_index)
    return (*base->get_link_index)(self, char_index);

  using RType = gint;
  return RType();
}

void Hypertext_Class::link_selected_callback(AtkHypertext* self, gint p0)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_link_selected(p0
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->link_selected)
    (*base->link_selected)(self, p0);
}


Glib::ObjectBase* Hypertext_Class::wrap_new(GObject* object)
{
  return new Hypertext((AtkHypertext*)(object));
}


/* The implementation: */

Hypertext::Hypertext()
:
  Glib::Interface(hypertext_class_.init())
{}

Hypertext::Hypertext(AtkHypertext* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Hypertext::Hypertext(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Hypertext::Hypertext(Hypertext&& src) noexcept
: Glib::Interface(std::move(src))
{}

Hypertext& Hypertext::operator=(Hypertext&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Hypertext::~Hypertext() noexcept
{}

// static
void Hypertext::add_interface(GType gtype_implementer)
{
  hypertext_class_.init().add_interface(gtype_implementer);
}

Hypertext::CppClassType Hypertext::hypertext_class_; // initialize static member

GType Hypertext::get_type()
{
  return hypertext_class_.init().get_type();
}


GType Hypertext::get_base_type()
{
  return atk_hypertext_get_type();
}


Glib::RefPtr<Hyperlink> Hypertext::get_link(int link_index)
{
  return Glib::wrap(atk_hypertext_get_link(gobj(), link_index));
}

Glib::RefPtr<const Hyperlink> Hypertext::get_link(int link_index) const
{
  return const_cast<Hypertext*>(this)->get_link(link_index);
}

int Hypertext::get_n_links() const
{
  return atk_hypertext_get_n_links(const_cast<AtkHypertext*>(gobj()));
}

int Hypertext::get_link_index(int char_index) const
{
  return atk_hypertext_get_link_index(const_cast<AtkHypertext*>(gobj()), char_index);
}


Glib::SignalProxy< void,int > Hypertext::signal_link_selected()
{
  return Glib::SignalProxy< void,int >(this, &Hypertext_signal_link_selected_info);
}


void Atk::Hypertext::on_link_selected(int link_index)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->link_selected)
    (*base->link_selected)(gobj(),link_index);
}

Glib::RefPtr<Hyperlink> Atk::Hypertext::get_link_vfunc(int link_index) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_link)
  {
    Glib::RefPtr<Hyperlink> retval(Glib::wrap((*base->get_link)(gobj(),link_index)));
    return retval;
  }

  using RType = Glib::RefPtr<Hyperlink>;
  return RType();
}
int Atk::Hypertext::get_n_links_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_n_links)
  {
    int retval((*base->get_n_links)(const_cast<AtkHypertext*>(gobj())));
    return retval;
  }

  using RType = int;
  return RType();
}
int Atk::Hypertext::get_link_index_vfunc(int char_index) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_link_index)
  {
    int retval((*base->get_link_index)(const_cast<AtkHypertext*>(gobj()),char_index));
    return retval;
  }

  using RType = int;
  return RType();
}


} // namespace Atk


