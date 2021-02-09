/* Generated by wayland-scanner 1.17.0 */

#ifndef SUB_SURFACE_EXTENSION_CLIENT_PROTOCOL_H
#define SUB_SURFACE_EXTENSION_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_sub_surface_extension The sub_surface_extension protocol
 * @section page_ifaces_sub_surface_extension Interfaces
 * - @subpage page_iface_qt_sub_surface_extension - 
 * - @subpage page_iface_qt_sub_surface - 
 * @section page_copyright_sub_surface_extension Copyright
 * <pre>
 *
 * Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 * Contact: http://www.qt-project.org/legal
 *
 * This file is part of the plugins of the Qt Toolkit.
 *
 * $QT_BEGIN_LICENSE:BSD$
 * You may use this file under the terms of the BSD license as follows:
 *
 * "Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in
 * the documentation and/or other materials provided with the
 * distribution.
 * * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
 * of its contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
 *
 * $QT_END_LICENSE$
 * </pre>
 */
struct qt_sub_surface;
struct qt_sub_surface_extension;
struct wl_surface;

/**
 * @page page_iface_qt_sub_surface_extension qt_sub_surface_extension
 * @section page_iface_qt_sub_surface_extension_api API
 * See @ref iface_qt_sub_surface_extension.
 */
/**
 * @defgroup iface_qt_sub_surface_extension The qt_sub_surface_extension interface
 */
extern const struct wl_interface qt_sub_surface_extension_interface;
/**
 * @page page_iface_qt_sub_surface qt_sub_surface
 * @section page_iface_qt_sub_surface_api API
 * See @ref iface_qt_sub_surface.
 */
/**
 * @defgroup iface_qt_sub_surface The qt_sub_surface interface
 */
extern const struct wl_interface qt_sub_surface_interface;

#define QT_SUB_SURFACE_EXTENSION_GET_SUB_SURFACE_AWARE_SURFACE 0


/**
 * @ingroup iface_qt_sub_surface_extension
 */
#define QT_SUB_SURFACE_EXTENSION_GET_SUB_SURFACE_AWARE_SURFACE_SINCE_VERSION 1

/** @ingroup iface_qt_sub_surface_extension */
static inline void
qt_sub_surface_extension_set_user_data(struct qt_sub_surface_extension *qt_sub_surface_extension, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) qt_sub_surface_extension, user_data);
}

/** @ingroup iface_qt_sub_surface_extension */
static inline void *
qt_sub_surface_extension_get_user_data(struct qt_sub_surface_extension *qt_sub_surface_extension)
{
	return wl_proxy_get_user_data((struct wl_proxy *) qt_sub_surface_extension);
}

static inline uint32_t
qt_sub_surface_extension_get_version(struct qt_sub_surface_extension *qt_sub_surface_extension)
{
	return wl_proxy_get_version((struct wl_proxy *) qt_sub_surface_extension);
}

/** @ingroup iface_qt_sub_surface_extension */
static inline void
qt_sub_surface_extension_destroy(struct qt_sub_surface_extension *qt_sub_surface_extension)
{
	wl_proxy_destroy((struct wl_proxy *) qt_sub_surface_extension);
}

/**
 * @ingroup iface_qt_sub_surface_extension
 */
static inline struct qt_sub_surface *
qt_sub_surface_extension_get_sub_surface_aware_surface(struct qt_sub_surface_extension *qt_sub_surface_extension, struct wl_surface *surface)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) qt_sub_surface_extension,
			 QT_SUB_SURFACE_EXTENSION_GET_SUB_SURFACE_AWARE_SURFACE, &qt_sub_surface_interface, NULL, surface);

	return (struct qt_sub_surface *) id;
}

#define QT_SUB_SURFACE_ATTACH_SUB_SURFACE 0
#define QT_SUB_SURFACE_MOVE_SUB_SURFACE 1
#define QT_SUB_SURFACE_RAISE 2
#define QT_SUB_SURFACE_LOWER 3


/**
 * @ingroup iface_qt_sub_surface
 */
#define QT_SUB_SURFACE_ATTACH_SUB_SURFACE_SINCE_VERSION 1
/**
 * @ingroup iface_qt_sub_surface
 */
#define QT_SUB_SURFACE_MOVE_SUB_SURFACE_SINCE_VERSION 1
/**
 * @ingroup iface_qt_sub_surface
 */
#define QT_SUB_SURFACE_RAISE_SINCE_VERSION 1
/**
 * @ingroup iface_qt_sub_surface
 */
#define QT_SUB_SURFACE_LOWER_SINCE_VERSION 1

/** @ingroup iface_qt_sub_surface */
static inline void
qt_sub_surface_set_user_data(struct qt_sub_surface *qt_sub_surface, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) qt_sub_surface, user_data);
}

/** @ingroup iface_qt_sub_surface */
static inline void *
qt_sub_surface_get_user_data(struct qt_sub_surface *qt_sub_surface)
{
	return wl_proxy_get_user_data((struct wl_proxy *) qt_sub_surface);
}

static inline uint32_t
qt_sub_surface_get_version(struct qt_sub_surface *qt_sub_surface)
{
	return wl_proxy_get_version((struct wl_proxy *) qt_sub_surface);
}

/** @ingroup iface_qt_sub_surface */
static inline void
qt_sub_surface_destroy(struct qt_sub_surface *qt_sub_surface)
{
	wl_proxy_destroy((struct wl_proxy *) qt_sub_surface);
}

/**
 * @ingroup iface_qt_sub_surface
 */
static inline void
qt_sub_surface_attach_sub_surface(struct qt_sub_surface *qt_sub_surface, struct qt_sub_surface *sub_surface, int32_t x, int32_t y)
{
	wl_proxy_marshal((struct wl_proxy *) qt_sub_surface,
			 QT_SUB_SURFACE_ATTACH_SUB_SURFACE, sub_surface, x, y);
}

/**
 * @ingroup iface_qt_sub_surface
 */
static inline void
qt_sub_surface_move_sub_surface(struct qt_sub_surface *qt_sub_surface, struct qt_sub_surface *sub_surface, int32_t x, int32_t y)
{
	wl_proxy_marshal((struct wl_proxy *) qt_sub_surface,
			 QT_SUB_SURFACE_MOVE_SUB_SURFACE, sub_surface, x, y);
}

/**
 * @ingroup iface_qt_sub_surface
 */
static inline void
qt_sub_surface_raise(struct qt_sub_surface *qt_sub_surface, struct qt_sub_surface *sub_surface)
{
	wl_proxy_marshal((struct wl_proxy *) qt_sub_surface,
			 QT_SUB_SURFACE_RAISE, sub_surface);
}

/**
 * @ingroup iface_qt_sub_surface
 */
static inline void
qt_sub_surface_lower(struct qt_sub_surface *qt_sub_surface, struct qt_sub_surface *sub_surface)
{
	wl_proxy_marshal((struct wl_proxy *) qt_sub_surface,
			 QT_SUB_SURFACE_LOWER, sub_surface);
}

#ifdef  __cplusplus
}
#endif

#endif