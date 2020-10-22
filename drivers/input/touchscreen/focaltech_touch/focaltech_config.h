/*
 *
 * FocalTech TouchScreen driver.
 * Copyright (c) 2012-2019, FocalTech Systems, Ltd., all rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

/*********************************/
/* Author: Focaltech Driver Team */
/* Created: 2016-08-08           */
/* Version: v1.0                 */
/*********************************/

#ifndef _LINUX_FOCLATECH_CONFIG_H_
#define _LINUX_FOCLATECH_CONFIG_H_

/*************************
* IC Chip type definition.
*************************/
#define _FT3518 0x35180481
#define FTS_CHIP_TYPE _FT3518

/* Tunable switches. */

/*
 * Linux MultiTouch Protocol
 * 1: Protocol B(default), 0: Protocol A
 */
#define FTS_MT_PROTOCOL_B_EN 1

/*
 * Gesture function enable
 * default: disable
 */
#define FTS_GESTURE_EN 1

/*
 * FOD check & protection
 * 1: enable, 0:disable(default)
 */
#define FTS_FOD_EN 1

/* Pressure type for multitouch
  * 1 - true pressure
  * 0 - constant pressure */
#define FTS_FORCE_TOUCH_EN 0

/*
 * Customer power enable
 * enable it when customer need control TP power
 * default: disable
 */
#define FTS_POWER_SOURCE_CUST_EN 1

/* Firmware Update tunables.*/
#define FTS_AUTO_UPGRADE_EN 1
#define FTS_AUTO_LIC_UPGRADE_EN 0
#define FTS_GET_MODULE_NUM 0

#define FTS_MODULE_ID 0x0000
#define FTS_MODULE2_ID 0x0000
#define FTS_MODULE3_ID 0x0000

#define FTS_MODULE_NAME ""
#define FTS_MODULE2_NAME ""
#define FTS_MODULE3_NAME ""

#define FTS_UPGRADE_FW_FILE "include/firmware/fw_sample.i"
#define FTS_UPGRADE_FW2_FILE "include/firmware/fw_sample.i"
#define FTS_UPGRADE_FW3_FILE "include/firmware/fw_sample.i"

#endif /* _LINUX_FOCLATECH_CONFIG_H_ */
