/*
 * Copyright (C) 2012-2016 Freescale Semiconductor, Inc.
 *
 * Configuration settings for the Freescale i.MX6Q SabreSD board.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __MX6QSABRESD_CONFIG_H
#define __MX6QSABRESD_CONFIG_H

#define DEBUG
#define DEBUG_MODE

#if defined (DEBUG_MODE)	/*fujie add*/
#define DEBUG_INFO(fmt,arg...) printf(fmt,##arg)
#define DEBUG_X(x,fmt,arg...) \
	do{\
		if(x) printf(fmt,##arg); \
	}while(0);
#define DEBUG_PUTS(str) puts(str)
#define DEBUG_PUTC(c) putc(c)
#else
#define DEBUG_INFO(fmt,arg...) 
#define DEBUG_X(x,fmt,arg...)
#define DEBUG_PUTS(str)
#define DEBUG_PUTC(c)
#endif

#define EE_DATA_SIZE    (256)		
#define EE_SIZE  EE_DATA_SIZE



#define CONFIG_PWM_IMX
#define CONFIG_IMX6_PWM_PER_CLK	66000000

#define CONFIG_CONSOLE_EXTRA_INFO

#define CONFIG_MISC_INIT_R

#undef CONFIG_VIDEO_LOGO

#define CONFIG_NET_RANDOM_ETHADDR

#ifdef CONFIG_SPL
#define CONFIG_SPL_LIBCOMMON_SUPPORT
#define CONFIG_SPL_MMC_SUPPORT
#include "imx6_spl.h"
#endif

#define CONFIG_MACH_TYPE	3980
#define CONFIG_MXC_UART_BASE	UART1_BASE
#define CONFIG_CONSOLE_DEV		"ttymxc0"
/*#define CONFIG_MMCROOT			"/dev/mmcblk3p2"   SDHC3 */
#define CONFIG_MMCROOT			"/dev/mmcblk3p5"   /*SDHC3 changed by danny */

#if defined(CONFIG_MX6QP)
#define PHYS_SDRAM_SIZE		(1u * 1024 * 1024 * 1024)
#elif defined(CONFIG_MX6Q)
#define PHYS_SDRAM_SIZE		(1u * 1024 * 1024 * 1024)
#elif defined(CONFIG_MX6DL)
#define PHYS_SDRAM_SIZE		(1u * 1024 * 1024 * 1024)
#elif defined(CONFIG_MX6SOLO)
#define PHYS_SDRAM_SIZE		(512u * 1024 * 1024)
#endif

#include "mx6sabre_common.h"


#define CONFIG_SYS_FSL_USDHC_NUM	3
#define CONFIG_SYS_MMC_ENV_DEV		2	/* SDHC4 */
#define CONFIG_SYS_MMC_ENV_PART                0       /* user partition */

#ifdef CONFIG_SYS_USE_SPINOR
#define CONFIG_SF_DEFAULT_CS   0
#endif

/*
 * imx6 q/dl/solo pcie would be failed to work properly in kernel, if
 * the pcie module is iniialized/enumerated both in uboot and linux
 * kernel.
 * rootcause:imx6 q/dl/solo pcie don't have the reset mechanism.
 * it is only be RESET by the POR. So, the pcie module only be
 * initialized/enumerated once in one POR.
 * Set to use pcie in kernel defaultly, mask the pcie config here.
 * Remove the mask freely, if the uboot pcie functions, rather than
 * the kernel's, are required.
 */
/* #define CONFIG_CMD_PCI */
#ifdef CONFIG_CMD_PCI
#define CONFIG_PCI
#define CONFIG_PCI_PNP
#define CONFIG_PCI_SCAN_SHOW
#define CONFIG_PCIE_IMX
#define CONFIG_PCIE_IMX_PERST_GPIO	IMX_GPIO_NR(7, 12)
#define CONFIG_PCIE_IMX_POWER_GPIO	IMX_GPIO_NR(3, 19)
#endif

/* USB Configs */
#define CONFIG_CMD_USB
#ifdef CONFIG_CMD_USB
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_MX6
#define CONFIG_USB_STORAGE
#define CONFIG_EHCI_HCD_INIT_AFTER_RESET
#define CONFIG_USB_HOST_ETHER
#define CONFIG_USB_ETHER_ASIX
#define CONFIG_MXC_USB_PORTSC		(PORT_PTS_UTMI | PORT_PTS_PTW)
#define CONFIG_MXC_USB_FLAGS		0
#define CONFIG_USB_MAX_CONTROLLER_COUNT	1 /* Enabled USB controller number */
#endif

/*#define CONFIG_SPLASH_SCREEN*/
/*#define CONFIG_MXC_EPDC*/

/*
 * SPLASH SCREEN Configs
 */
#if defined(CONFIG_SPLASH_SCREEN) && defined(CONFIG_MXC_EPDC)
	/*
	 * Framebuffer and LCD
	 */
	#define CONFIG_CMD_BMP
	#define CONFIG_LCD
	#define CONFIG_SYS_CONSOLE_IS_IN_ENV
	#undef LCD_TEST_PATTERN
	/* #define CONFIG_SPLASH_IS_IN_MMC			1 */
	#define LCD_BPP					LCD_MONOCHROME
	/* #define CONFIG_SPLASH_SCREEN_ALIGN		1 */

	#define CONFIG_WAVEFORM_BUF_SIZE		0x200000
#endif /* CONFIG_SPLASH_SCREEN && CONFIG_MXC_EPDC */

#define FB_PY_BASE  (0x03300000U)     // 显存物理地址
#define EE_PY_BASE  (0x03200000U)    // EE 物理地址

#define EE_LOAD_RAM_BASE  	EE_PY_BASE 	/* fujie */
#define KERNEL_LOAD_RAM_BASE  	(0x00500000) 	//(0x01000000)
#define FILE_DOWN_RAM_BASE 		(0x01000000)		// added by gaoqb


/* I2C数据偏移量 */
#define MANU_TYPE 0x0
#define HARDWARE_VERSION 0x2
#define SERVO_VERSION	0x08
#define LCD_TYPE 0x26
#define SRAM_SIZE_OFFSET 0x30
#define MAC_ADDR 0x90
#define DEFAULT_PORT 0x96
#define DEFAULT_IP 0x98
#define DEFAULT_NETGATE 0x9C
#define DEFAULT_NETMASK 0xA0
#define WORK_IP 0xA4
#define WORK_NETGATE 0xA8
#define WORK_NETMASK 0xAC
#define WORK_PORT 	0xB2
#define BRIGHTNESS_MAX  0x3e
#define BRIGHTNESS_MIN  0x3c
#define CURRENT_BRIGHTNESS 0x40
#define CURRENT_CONTRAST 0x46
#define MAX_CONTRAST 0x42
#define MIN_CONTRAST 0x44
#define MAX_BRIGHTNESS 0x3C
#define MIN_BRIGHTNESS 0x3E
#define KERNEL_START_ADDR 0xC0
#define ROOTFS_START_ADDR 0xC4
/*	#define KERNEL_VERSION 0xC8 */
#define ROOTFS_VERSION 0xCC
#define KERNEL_LENGTH 	0xD0
#define KERNEL_CHECKSUM 0xD4
#define ROOTFS_CHECK 	0xD8
#define LOGO_DISP		0xDA
#define LCD_X_SIZE 0X20
#define LCD_Y_SIZE 0X22
#define EE_TOUCH_ADJUST_OFFSET 0X60
#define GUI_RUN_MODE 0xB4	//GUI运行模式2B(0X90,0X24) （0-工程,1-系统设置）//121212:用于ET系列

#endif                         /* __MX6QSABRESD_CONFIG_H */
