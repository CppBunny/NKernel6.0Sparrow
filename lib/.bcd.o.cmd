cmd_lib/bcd.o := /home/noahvt/Documents/NKernel6.0/scripts/gcc-wrapper.py /usr/local/share/arm-eabi-4.7/bin/arm-eabi-gcc -Wp,-MD,lib/.bcd.o.d  -nostdinc -isystem /usr/local/share/arm-eabi-4.7/bin/../lib/gcc/arm-linux-gnueabi/4.7.4/include -I/home/noahvt/Documents/NKernel6.0/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/noahvt/Documents/NKernel6.0/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/noahvt/Documents/NKernel6.0/include/uapi -Iinclude/generated/uapi -include /home/noahvt/Documents/NKernel6.0/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -DASUS_SW_VER=\"WI501Q_ENG\" -DASUS_DEBUG=2 -DASUS_WI501Q_PROJECT=1 -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(bcd)"  -D"KBUILD_MODNAME=KBUILD_STR(bcd)" -c -o lib/.tmp_bcd.o lib/bcd.c

source_lib/bcd.o := lib/bcd.c

deps_lib/bcd.o := \
  include/linux/bcd.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \

lib/bcd.o: $(deps_lib/bcd.o)

$(deps_lib/bcd.o):
