/*
 * Copyright (C) 2001,2002,2003,2009,2010 Red Hat, Inc.
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#if !defined (__VTE_VTE_H_INSIDE__) && !defined (VTE_COMPILATION)
#error "Only <vte/vte.h> can be included directly."
#endif

#ifndef VTE_DISABLE_DEPRECATED

#ifndef vte_deprecated_h_included
#define vte_deprecated_h_included

#include <sys/types.h> /* for pid_t */

G_BEGIN_DECLS

/**
 * VteTerminalAntiAlias:
 * @VTE_ANTI_ALIAS_USE_DEFAULT: Use the system default anti-alias setting
 * @VTE_ANTI_ALIAS_FORCE_ENABLE: Force enable anti-aliasing
 * @VTE_ANTI_ALIAS_FORCE_DISABLE: Force disable anti-aliasing
 *
 * An enumeration describing which anti-alias setting to use.
 *
 * @Deprecated: 0.20
 */
typedef enum {
	VTE_ANTI_ALIAS_USE_DEFAULT,
	VTE_ANTI_ALIAS_FORCE_ENABLE,
	VTE_ANTI_ALIAS_FORCE_DISABLE
} VteTerminalAntiAlias;

void vte_terminal_set_font_from_string_full(VteTerminal *terminal,
					    const char *name,
					    VteTerminalAntiAlias antialias) G_GNUC_DEPRECATED;

void vte_terminal_im_append_menuitems(VteTerminal *terminal,
				      GtkMenuShell *menushell) G_GNUC_DEPRECATED;

/* Background effects. */
void vte_terminal_set_scroll_background(VteTerminal *terminal, gboolean scroll) G_GNUC_DEPRECATED;
void vte_terminal_set_background_image(VteTerminal *terminal, GdkPixbuf *image) G_GNUC_DEPRECATED;
void vte_terminal_set_background_image_file(VteTerminal *terminal,
					    const char *path) G_GNUC_DEPRECATED;
void vte_terminal_set_background_tint_color(VteTerminal *terminal,
					    const GdkColor *color) G_GNUC_DEPRECATED;
void vte_terminal_set_background_saturation(VteTerminal *terminal,
					    double saturation) G_GNUC_DEPRECATED;
void vte_terminal_set_background_transparent(VteTerminal *terminal,
					     gboolean transparent) G_GNUC_DEPRECATED;
void vte_terminal_set_opacity(VteTerminal *terminal, guint16 opacity) G_GNUC_DEPRECATED;

G_END_DECLS

void vte_terminal_set_alternate_screen_scroll(VteTerminal *terminal,
                                              gboolean scroll) G_GNUC_DEPRECATED;

#endif /* !vte_deprecated_h_included */

#endif /* !VTE_DISABLE_DEPRECATED */
