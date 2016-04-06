cmd_arch/arm/boot/compressed/decompress.o := /home/noahvt/Documents/BuildServer/Source/Sparrow/scripts/gcc-wrapper.py /usr/local/share/arm-eabi-4.9/bin/arm-linux-gnueabi-gcc -Wp,-MD,arch/arm/boot/compressed/.decompress.o.d  -nostdinc -isystem /usr/local/share/arm-eabi-4.9/bin/../lib/gcc/arm-linux-gnueabi/4.9.1/include -I/home/noahvt/Documents/BuildServer/Source/Sparrow/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/noahvt/Documents/BuildServer/Source/Sparrow/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/noahvt/Documents/BuildServer/Source/Sparrow/include/uapi -Iinclude/generated/uapi -include /home/noahvt/Documents/BuildServer/Source/Sparrow/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -DASUS_SW_VER=\"WI501Q_ENG\" -DASUS_DEBUG=2 -DASUS_WI501Q_PROJECT=1 -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -fpic -mno-single-pic-base -fno-builtin -Iarch/arm/boot/compressed    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(decompress)"  -D"KBUILD_MODNAME=KBUILD_STR(decompress)" -c -o arch/arm/boot/compressed/.tmp_decompress.o arch/arm/boot/compressed/decompress.c

source_arch/arm/boot/compressed/decompress.o := arch/arm/boot/compressed/decompress.c

deps_arch/arm/boot/compressed/decompress.o := \
    $(wildcard include/config/kernel/gzip.h) \
    $(wildcard include/config/kernel/lzo.h) \
    $(wildcard include/config/kernel/lzma.h) \
    $(wildcard include/config/kernel/xz.h) \
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
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /home/noahvt/Documents/BuildServer/Source/Sparrow/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/noahvt/Documents/BuildServer/Source/Sparrow/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  /home/noahvt/Documents/BuildServer/Source/Sparrow/arch/arm/include/uapi/asm/posix_types.h \
  /home/noahvt/Documents/BuildServer/Source/Sparrow/include/uapi/asm-generic/posix_types.h \
  include/linux/linkage.h \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/noahvt/Documents/BuildServer/Source/Sparrow/arch/arm/include/asm/linkage.h \
  /home/noahvt/Documents/BuildServer/Source/Sparrow/arch/arm/include/asm/string.h \
  arch/arm/boot/compressed/../../../../lib/decompress_unlzma.c \
  include/linux/decompress/mm.h \

arch/arm/boot/compressed/decompress.o: $(deps_arch/arm/boot/compressed/decompress.o)

$(deps_arch/arm/boot/compressed/decompress.o):
