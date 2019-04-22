#!/bin/bash
export ARCH=arm
export CROSS_COMPILE=/usr/bin/arm-linux-gnueabihf-
#make distclean
#make clean
#make mx6ull_14x14_evk_emmc_defconfig
make
cp u-boot.imx uboot-myimx6ull.imx