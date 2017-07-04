/*
 * (C) Copyright 2003
 * Gerry Hamel, geh@ti.com, Texas Instruments
 *
 * (C) Copyright 2006
 * Bryan O'Donoghue, bodonoghue@codehermit.ie, CodeHermit
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307	 USA
 *
 */

#ifndef __USB_SER_H__
#define __USB_SER_H__

#include <usbdevice.h>
#include <usb/musb_udc.h>



/* If no VendorID/ProductID is defined in config.h, pretend to be Linux
 * DO NOT Reuse this Vendor/Product setup with protocol incompatible devices */
#ifndef CONFIG_USBD_VENDORID
#define CONFIG_USBD_VENDORID		0x0525	/* Linux/NetChip */
#endif
#ifndef CONFIG_USBD_PRODUCTID_GSERIAL
#define CONFIG_USBD_PRODUCTID_GSERIAL	0xa4a6	/* gserial */
#endif
#ifndef CONFIG_USBD_PRODUCTID_CDCACM
#define CONFIG_USBD_PRODUCTID_CDCACM	0xa4a7	/* CDC ACM */
#endif
#ifndef CONFIG_USBD_PRODUCTID_RDAACM
#define CONFIG_USBD_PRODUCTID_RDAACM	0xa4a9	/* for two acm channels */
#endif

#define CONFIG_USBD_SERIAL_OUT_ENDPOINT UDC_OUT_ENDPOINT
#define CONFIG_USBD_SERIAL_OUT_PKTSIZE	UDC_OUT_PACKET_SIZE
#define CONFIG_USBD_SERIAL_IN_ENDPOINT	UDC_IN_ENDPOINT
#define CONFIG_USBD_SERIAL_IN_PKTSIZE	UDC_IN_PACKET_SIZE
#define CONFIG_USBD_SERIAL_INT_ENDPOINT UDC_INT_ENDPOINT
#define CONFIG_USBD_SERIAL_INT_PKTSIZE	UDC_INT_PACKET_SIZE
#define CONFIG_USBD_SERIAL_BULK_PKTSIZE	UDC_BULK_PACKET_SIZE

#if defined(CONFIG_USBD_HS)
#define CONFIG_USBD_SERIAL_BULK_HS_PKTSIZE	UDC_BULK_HS_PACKET_SIZE
#endif

#define USBTTY_DEVICE_CLASS	COMMUNICATIONS_DEVICE_CLASS

#define USBTTY_BCD_DEVICE	0x00
#define USBTTY_MAXPOWER		0x00

#endif
