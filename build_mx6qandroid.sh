#!/bin/bash
export ARCH=arm
export CROSS_COMPILE=/usr/bin/arm-linux-gnueabihf-
make distclean
make clean
make mx6qsabresdandroid_defconfig
make
cp u-boot.imx uboot-android-6q.imx