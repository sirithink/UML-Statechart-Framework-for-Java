/*
 * UML statechart framework (http://uml-statecharts.sourceforge.net)
 *
 * Copyright (C) 2006-2007 Christian Mocek (klangfarbe@users.sourceforge.net)
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 */
#ifndef ACTION_H
#define ACTION_H

#include <statechart/metadata.h>
#include <statechart/parameter.h>

namespace statechart {

/**
 * Interface for an action which can be called by a transition or state.
 */
  class Action {
  public:
    virtual ~Action() {};

    /**
     * Called by the state or transition.
     * @param data The runtime data object
     * @param param The parameter for this action
     */
    virtual void execute(util::SmartPointer<Metadata>& data, 
                         util::SmartPointer<Parameter>& param) = 0;
  };
}

#endif