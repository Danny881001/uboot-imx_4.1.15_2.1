#!/bin/bash
export ARCH=arm
export CROSS_COMPILE=${HOME}/my-imx6/03_tools/gcc-linaro-5.3-2016.02-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-
make distclean
make clean
make mx6peach_config
make
cp u-boot.imx uboot-myimx6ek200-6q.imx
cp uboot-myimx6ek200-6q.imx /mnt/hgfs/Linux/my-imx6-mfgtool-lib262/Profiles/Linux/OS\ Firmware/image-linux-31452/uboot-myimx6ek200-6q.imx

