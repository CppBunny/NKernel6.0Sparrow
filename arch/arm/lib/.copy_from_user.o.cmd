cmd_arch/arm/lib/copy_from_user.o := /home/noahvt/Documents/NKernel6.0/scripts/gcc-wrapper.py /usr/local/share/arm-eabi-4.7/bin/arm-eabi-gcc -Wp,-MD,arch/arm/lib/.copy_from_user.o.d  -nostdinc -isystem /usr/local/share/arm-eabi-4.7/bin/../lib/gcc/arm-linux-gnueabi/4.7.4/include -I/home/noahvt/Documents/NKernel6.0/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/noahvt/Documents/NKernel6.0/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/noahvt/Documents/NKernel6.0/include/uapi -Iinclude/generated/uapi -include /home/noahvt/Documents/NKernel6.0/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -DASUS_SW_VER=\"WI501Q_ENG\" -DASUS_DEBUG=2 -DASUS_WI501Q_PROJECT=1  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2         -c -o arch/arm/lib/copy_from_user.o arch/arm/lib/copy_from_user.S

source_arch/arm/lib/copy_from_user.o := arch/arm/lib/copy_from_user.S

deps_arch/arm/lib/copy_from_user.o := \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/asm/linkage.h \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/asm/hwcap.h \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/uapi/asm/hwcap.h \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/asm/domain.h \
    $(wildcard include/config/verify/permission/fault.h) \
    $(wildcard include/config/io/36.h) \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/asm/opcodes-virt.h \
  /home/noahvt/Documents/NKernel6.0/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  arch/arm/lib/copy_template.S \

arch/arm/lib/copy_from_user.o: $(deps_arch/arm/lib/copy_from_user.o)

$(deps_arch/arm/lib/copy_from_user.o):
