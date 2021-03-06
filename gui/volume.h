/*
 * xmpgedit volume control header
 *
 * Copyright (C) 2002-2006 Adam Bernstein
 * All Rights Reserved.
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
 * Boston, MA  02111-1307  USA.
 */

#ifndef _VOLUME_H
#define _VOLUME_H

typedef struct _volume_control_ctx {
    void      *mixer_fd;   /* Really a volume_control_handle */
    GtkWidget *scale;
    GtkWidget *box;
    int       lvol;
    int       rvol;
} volume_control_ctx;

volume_control_ctx *___make_volume_control(void);

void volume_control_init_mixctx(volume_control_ctx *vol, void *ctx);

void volume_control_get_values(volume_control_ctx *vol, int *lvol, int *rvol);

#endif
