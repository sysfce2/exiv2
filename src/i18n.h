/* **************************************************************** -*- C -*- */
/*
 * Copyright (C) 2004-2018 Exiv2 authors
 * This program is part of the Exiv2 distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, 5th Floor, Boston, MA 02110-1301 USA.
 */
/*
  File:      i18n.h
  Brief:     i18n definitions. Do not use. This is an Exiv2 internal header.
  Author(s): Gilles Caulier (gc) <caulier.gilles@kdemail.net>
  History:   01-Nov-06, gc: created
 */
#ifndef I18N_H_
#define I18N_H_

#include "config.h"

/* NLS can be disabled through the configure --disable-nls option. */
#ifdef EXV_ENABLE_NLS
#include "types.hpp"

// Definition is in types.cpp
const char* _exvGettext(const char* str);

#define _(String) Exiv2::exvGettext(String)
#define N_(String) String

#else /* NLS is disabled */

#define _(String) (String)
#define N_(String) String

#endif /* EXV_ENABLE_NLS */

#endif /* I18N_H_ */
