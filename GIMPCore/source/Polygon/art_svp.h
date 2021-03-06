/* Libart_LGPL - library of basic graphic primitives
 * Copyright (C) 1998 Raph Levien
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/* Basic data structures and constructors for sorted vector paths */

#include "ArtBridge.h"

int
art_svp_add_segment (ArtSVP **p_vp, int *pn_segs_max,
		     int **pn_points_max,
		     int n_points, int dir, ArtPoint *points,
		     ArtDRect *bbox);

void
art_svp_free (ArtSVP *svp);

int
art_svp_seg_compare (const void *s1, const void *s2);