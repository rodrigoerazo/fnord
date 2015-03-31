/*
 * Copyright 1990, 1991, 1992, Brown University, Providence, RI
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

/* $Id: td_boolean.h,v 1.2 1992/06/22 17:09:42 mas Exp $*/

#ifndef TD_BOOLEAN_H_INCLUDED
#define TD_BOOLEAN_H_INCLUDED

#ifndef MOTIF_WIDGETS

typedef int fnw_boolean;

#else

typedef struct {
   FOboolean	val;
} fnw_boolean;

#endif /* MOTIF_WIDGETS */

extern fnw_type fnw_type_checkbox;
extern fnw_type fnw_type_button;

#endif /* TD_BOOLEAN_H_INCLUDED */


