/*
    Copyright 2022 Joel Svensson  svenssonjoel@yahoo.se

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/** @file lbm_version.h */

#ifndef LBM_VERSION_H_
#define LBM_VERSION_H_

/** LBM major version */
#define LBM_MAJOR_VERSION 0
/** LBM minor version */
#define LBM_MINOR_VERSION 3
/** LBM patch revision */
#define LBM_PATCH_VERSION 0

/* Change log */

/* Feb 16 2022: version 0.3.0
   - #var variables with more efficient storage and lookup.
     variables are set using `setvar`.
   - Spawn optionally takes a number argument before the closure argument
     to specify stack size.
   - Extensions are stored in an array and occupy a range of dedicated symbol values.

/* Feb 14 2022: version 0.2.0
   Added GEQ >= and LEQ <= comparisons.

/* Feb 13 2022: version 0.1.1
   Bug fix in handling of environments in progn. */

/* Feb 11 2022: First state to be given a numbered version (0.1.0)  */




#endif
