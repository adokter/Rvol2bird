/* --------------------------------------------------------------------
Copyright (C) 2012 Swedish Meteorological and Hydrological Institute, SMHI,

This file is part of RAVE.

RAVE is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

RAVE is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with RAVE.  If not, see <http://www.gnu.org/licenses/>.
------------------------------------------------------------------------*/
/**
 * Adaptor for VP ODIM H5 files.
 * This object supports \ref #RAVE_OBJECT_CLONE.
 * @file
 * @author Anders Henja (Swedish Meteorological and Hydrological Institute, SMHI)
 * @date 2012-08-30
 */
#ifndef VP_ODIM_IO_H
#define VP_ODIM_IO_H
#include "rave_object.h"
#include "hlhdf.h"
#include "vertical_profile.h"

/**
 * Defines the odim h5 adaptor for vp products
 */
typedef struct _VpOdimIO_t VpOdimIO_t;

/**
 * Type definition to use when creating a rave object.
 */
extern RaveCoreObjectType VpOdimIO_TYPE;

/**
 * Reads a vp from the nodelist and sets the data in the vp.
 * @param[in] self - self
 * @param[in] nodelist - the hdf5 node list
 * @param[in] vp - the vertical profile that should get the attribute and data set
 * @returns 1 on success otherwise 0
 */
int VpOdimIO_read(VpOdimIO_t* self, HL_NodeList* nodelist, VerticalProfile_t* vp);

/**
 * Fills a nodelist with information about a vertical profile.
 * @param[in] self - self
 * @param[in] vp - the vertical profile
 * @param[in] nodelist - the hlhdf nodelist to fill
 * @return 1 on success otherwise 0
 */
int VpOdimIO_fill(VpOdimIO_t* self, VerticalProfile_t* vp, HL_NodeList* nodelist);

#endif
