cmd_arch/arm/boot/compressed/piggy.gzip.o := /home/noahvt/Documents/BuildServer/Source/Sparrow/scripts/gcc-wrapper.py /usr/local/share/arm-eabi-4.9/bin/arm-linux-gnueabi-gcc -Wp,-MD,arch/arm/boot/compressed/.piggy.gzip.o.d  -nostdinc -isystem /usr/local/share/arm-eabi-4.9/bin/../lib/gcc/arm-linux-gnueabi/4.9.1/include -I/home/noahvt/Documents/BuildServer/Source/Sparrow/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/noahvt/Documents/BuildServer/Source/Sparrow/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/noahvt/Documents/BuildServer/Source/Sparrow/include/uapi -Iinclude/generated/uapi -include /home/noahvt/Documents/BuildServer/Source/Sparrow/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -DASUS_SW_VER=\"WI501Q_ENG\" -DASUS_DEBUG=2 -DASUS_WI501Q_PROJECT=1  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2     -DZIMAGE     -c -o arch/arm/boot/compressed/piggy.gzip.o arch/arm/boot/compressed/piggy.gzip.S

source_arch/arm/boot/compressed/piggy.gzip.o := arch/arm/boot/compressed/piggy.gzip.S

deps_arch/arm/boot/compressed/piggy.gzip.o := \
  /home/noahvt/Documents/BuildServer/Source/Sparrow/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/boot/compressed/piggy.gzip.o: $(deps_arch/arm/boot/compressed/piggy.gzip.o)

$(deps_arch/arm/boot/compressed/piggy.gzip.o):
