#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf090aaf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe8af8f13, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf8fda4ed, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x3213ff95, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x50ec7016, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x5cf1d941, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x9b60db24, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4bc06a2b, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xfd9a2d2a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

