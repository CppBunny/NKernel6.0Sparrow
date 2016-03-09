cmd_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o := /home/noahvt/Documents/NKernel6.0/scripts/gcc-wrapper.py /usr/local/share/arm-eabi-4.7/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.bms-batterydata-qrd-4v35-2000mah.o.d  -nostdinc -isystem /usr/local/share/arm-eabi-4.7/bin/../lib/gcc/arm-linux-gnueabi/4.7.4/include -I/home/noahvt/Documents/NKernel6.0/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/noahvt/Documents/NKernel6.0/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/noahvt/Documents/NKernel6.0/include/uapi -Iinclude/generated/uapi -include /home/noahvt/Documents/NKernel6.0/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -DASUS_SW_VER=\"WI501Q_ENG\" -DASUS_DEBUG=2 -DASUS_WI501Q_PROJECT=1 -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(bms_batterydata_qrd_4v35_2000mah)"  -D"KBUILD_MODNAME=KBUILD_STR(bms_batterydata_qrd_4v35_2000mah)" -c -o arch/arm/mach-msm/.tmp_bms-batterydata-qrd-4v35-2000mah.o arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.c

source_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o := arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.c

deps_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o := \
  include/linux/batterydata-lib.h \
    $(wildcard include/config/pm8921/bms.h) \
    $(wildcard include/config/qpnp/bms.h) \
    $(wildcard include/config/qpnp/vm/bms.h) \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/noahvt/Documents/NKernel6.0/include/uapi/asm-generic/errno.h \
  /home/noahvt/Documents/NKernel6.0/include/uapi/asm-generic/errno-base.h \

arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o: $(deps_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o)

$(deps_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o):
