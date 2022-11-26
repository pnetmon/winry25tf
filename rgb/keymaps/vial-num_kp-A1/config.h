/* Copyright 2022 Nikolay N
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// if rules.mk VIAL_INSECURE = yes - turns off the lock
#define VIAL_KEYBOARD_UID {0xBF, 0x74, 0xE7, 0xE4, 0x65, 0xBB, 0xAD, 0x72} 
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 } 

/* 4 by default */
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

