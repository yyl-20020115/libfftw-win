/*
 * Copyright (c) 2003, 2007-11 Matteo Frigo
 * Copyright (c) 2003, 2007-11 Massachusetts Institute of Technology
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "api.h"

#if defined(FFTW_SINGLE)
#  define WISDOM_NAME "wisdomf"
#elif defined(FFTW_LDOUBLE)
#  define WISDOM_NAME "wisdoml"
#else
#  define WISDOM_NAME "wisdom"
#endif

/* OS-specific configuration-file directory */
#if defined(__DJGPP__)
#  define WISDOM_DIR "/dev/env/DJDIR/etc/fftw/"
#else
#  define WISDOM_DIR "/etc/fftw/"
#endif

int X(import_system_wisdom)(void)
{
	return 0; //fd: 
#if defined(__WIN32__) || defined(WIN32) || defined(_WINDOWS)
     return 0; /* TODO? */
#else

#if 0 //fd:
     FILE *f;
	 //fd: f = fopen(WISDOM_DIR WISDOM_NAME, "r");
     if (f) {
          int ret = X(import_wisdom_from_file)(f);
          //fd: fclose(f);
          return ret;
     } else
          return 0;
#endif

#endif
	 
}
