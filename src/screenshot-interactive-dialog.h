/* screenshot-interactive-dialog.h - Interactive options dialog
 *
 * Copyright (C) 2001 Jonathan Blandford <jrb@alum.mit.edu>
 * Copyright (C) 2006 Emmanuele Bassi <ebassi@gnome.org>
 * Copyright (C) 2008, 2011 Cosimo Cecchi <cosimoc@gnome.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 * USA
 */

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define SCREENSHOT_TYPE_INTERACTIVE_DIALOG (screenshot_interactive_dialog_get_type())

G_DECLARE_FINAL_TYPE (ScreenshotInteractiveDialog, screenshot_interactive_dialog, SCREENSHOT, INTERACTIVE_DIALOG, GtkApplicationWindow)

typedef void (*CaptureClickedCallback) (gpointer *user_data);

GtkWidget *screenshot_interactive_dialog_new (CaptureClickedCallback f, gpointer user_data);

G_END_DECLS
