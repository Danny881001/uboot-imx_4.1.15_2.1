#!/bin/bash
export ARCH=arm
export CROSS_COMPILE=${HOME}/my-imx6/03_tools/gcc-linaro-5.3-2016.02-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-
make distclean
make clean
make mx6ull_14x14_evk_emmc_defconfig
make
cp u-boot.imx /mnt/hgfs/Linux/mfgtools_6ull/Profiles/Linux/OS\ Firmware/files/uboot-myimx6ull.imx
