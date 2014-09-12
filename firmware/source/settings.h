/*
 * Settings
 *
 * created on 2012-5-14 by fgb (derived from or_const.h by apullin)
 */

#ifndef __SETTINGS_H
#define __SETTINGS_H

/////// Radio settings ///////
#define RADIO_CHANNEL		0x1A
#define RADIO_SRC_ADDR 		0x3002
#define RADIO_PAN_ID  	0x3000
//Hard-coded destination address, must match basestation or XBee addr
#define RADIO_DST_ADDR		0x3001


#define RADIO_TXPQ_MAX_SIZE   30
#define RADIO_RXPQ_MAX_SIZE   10

#define TELEM_INCLUDE "vr-telem.h"
#endif //_SETTINGS_H
