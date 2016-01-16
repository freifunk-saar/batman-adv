/* Copyright (C) 2013-2016 B.A.T.M.A.N. contributors:
 *
 * Linus Lüssing, Marek Lindner
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include "main.h"

#ifndef _NET_BATMAN_ADV_BAT_V_ELP_H_
#define _NET_BATMAN_ADV_BAT_V_ELP_H_

int batadv_v_elp_iface_enable(struct batadv_hard_iface *hard_iface);
void batadv_v_elp_iface_disable(struct batadv_hard_iface *hard_iface);
void batadv_v_elp_primary_iface_set(struct batadv_hard_iface *primary_iface);

#endif /* _NET_BATMAN_ADV_BAT_V_ELP_H_ */