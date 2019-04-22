#!/bin/bash
export ARCH=arm
export CROSS_COMPILE=/usr/bin/arm-linux-gnueabihf-
make distclean
make clean
make mx6dlsabreauto_defconfig
make
#cp u-boot.imx uboot-myimx6ek200-6q.imx