/*
 * Copyright (C) 2018 MediaTek Inc.
 * Copyright (C) 2019 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#include <linux/kernel.h>
#include "cam_cal_list.h"
#include "eeprom_i2c_common_driver.h"
#include "eeprom_i2c_custom_driver.h"
#include "kd_imgsensor.h"

struct stCAM_CAL_LIST_STRUCT g_camCalList[] = {
	{CACTUS_OV13855_OFILM_SENSOR_ID, 0xA0, Common_read_region},
	{CACTUS_S5K3L8_SUNNY_SENSOR_ID, 0xA0, Common_read_region},
	{CEREUS_IMX486_SUNNY_SENSOR_ID, 0xA8, Common_read_region},
	{CEREUS_OV12A10_OFILM_SENSOR_ID, 0xA8, Common_read_region},
	{CEREUS_S5K5E8YXAUX_OFILM_SENSOR_ID, 0x5a, Common_read_region},
	{CEREUS_S5K5E8YXAUX_SUNNY_SENSOR_ID, 0x5a, Common_read_region},
	{CACTUS_HI556_SUNNY_SENSOR_ID, 0x51, Common_read_region},
	{CACTUS_S5K5E8YX_OFILM_SENSOR_ID, 0x5a, Common_read_region},
	{CEREUS_S5K5E8YX_OFILM_SENSOR_ID, 0x5a, Common_read_region},
	{CEREUS_S5K5E8YX_SUNNY_SENSOR_ID, 0x5a, Common_read_region},
	/*  ADD before this line */
	{0, 0, 0}       /*end of list */
};

unsigned int cam_cal_get_sensor_list(
	struct stCAM_CAL_LIST_STRUCT **ppCamcalList)
{
	if (ppCamcalList == NULL)
		return 1;

	*ppCamcalList = &g_camCalList[0];
	return 0;
}


