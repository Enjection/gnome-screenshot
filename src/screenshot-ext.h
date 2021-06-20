#pragma once

#include <gtk/gtk.h>

struct ScreenshotExt
{
  GdkPixbuf* pixbuf;
  gchar* window_name;
};
