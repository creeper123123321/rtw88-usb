/* SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause */
/* Copyright(c) 2018-2019  Realtek Corporation
 */

#ifndef __RTW_8822CU_H_
#define __RTW_8822CU_H_

/* USB Vendor/Product IDs */
#define RTW_USB_VENDOR_ID_REALTEK		0x0BDA
#define RTW_USB_PRODUCT_ID_REALTEK_8812C	0xC812
#define RTW_USB_PRODUCT_ID_REALTEK_8822C	0xC82C

extern const struct dev_pm_ops rtw_pm_ops;
extern struct rtw_chip_info rtw8822c_hw_spec;
int rtw_usb_probe(struct usb_interface *intf, const struct usb_device_id *id,
		  struct rtw_module_param *param);
void rtw_usb_disconnect(struct usb_interface *intf);

#endif
