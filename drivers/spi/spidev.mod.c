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
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xacc326e9, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x306c5605, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x420c3ebf, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9d387b7b, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x72d7bbd0, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x78ed043, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0xea3a06f4, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x9ef7bfa6, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xeae5d9e9, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x54e8f9b2, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf67bee2c, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x86b27988, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xb6dce3c3, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc45e47db, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x22fabf91, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7dbfc765, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3f4c4798, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9780de90, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfa3e4334, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x27d82877, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8e9379f8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd91cba37, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2b22815f, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xc03bed7d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x9b60db24, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xfd9a2d2a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crohm,dh2228fv*");
