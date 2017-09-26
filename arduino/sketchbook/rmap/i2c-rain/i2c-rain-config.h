/**********************************************************************
Copyright (C) 2017  Marco Baldinetti <m.baldinetti@digiteco.it>
authors:
Marco Baldinetti <m.baldinetti@digiteco.it>

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of
the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/

#include <sensors_config.h>

/**********************************************************************
* TIPPING BUCKET RAIN GAUGE
*********************************************************************/
/*!
\def TIPPING_BUCKET_PIN
Interrupt pin for tipping bucket rain gauge.
*/
#define TIPPING_BUCKET_PIN                      (2)
/*!
\def DEBOUNCING_TIPPING_BUCKET_TIME_MS
Debouncing tipping bucket time in milliseconds.
*/
#define DEBOUNCING_TIPPING_BUCKET_TIME_MS       (200)

/**********************************************************************
* MODULE
*********************************************************************/
/*!
\def MODULE_VERSION
Module version.
*/
#define MODULE_VERSION                          (3)

/*!
\def MODULE_TYPE
Type of module. It is defined in registers.h
*/
#define MODULE_TYPE                             (STIMA_MODULE_TYPE_RAIN)

/*!
\def USE_POWER_DOWN
Enable or disable power down.
*/
#define USE_POWER_DOWN                          (true)

/*!
\def DEBOUNCING_POWER_DOWN_TIME_MS
Debounce power down ms.
*/
#define DEBOUNCING_POWER_DOWN_TIME_MS           (DEBOUNCING_TIPPING_BUCKET_TIME_MS + 10)

/**********************************************************************
* CONFIGURATION
*********************************************************************/
/*!
\def CONFIGURATION_DEFAULT_IS_ONESHOT
Default oneshot modality.
*/
#define CONFIGURATION_DEFAULT_IS_ONESHOT        (true)

/*!
\def CONFIGURATION_DEFAULT_IS_CONTINUOUS
Default oneshot modality.
*/
#define CONFIGURATION_DEFAULT_IS_CONTINUOUS     (false)

/*!
\def CONFIGURATION_DEFAULT_I2C_ADDRESS
Default i2c address.
*/
#define CONFIGURATION_DEFAULT_I2C_ADDRESS       (I2C_RAIN_DEFAULT_ADDRESS)

/*!
\def RESET_CONFIGURATION_PIN
Input pin for reset configuration at startup.
*/
#define CONFIGURATION_RESET_PIN                 (8)

/**********************************************************************
* WATCHDOG
*********************************************************************/
/*!
\def WDT_TIMER
Timer for generating watchdog interrupt for: periodically check to avoid malfunctions

Possible value for WDT_TIMER are:
WDTO_15MS, WDTO_30MS, WDTO_60MS, WDTO_120MS, WDTO_250MS, WDTO_500MS,
WDTO_1S, WDTO_2S, WDTO_4S, WDTO_8S

High values correspond to high energy savings.
*/
#define WDT_TIMER                               (WDTO_4S)