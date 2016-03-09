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
	{ 0x3f4c4798, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xabd7083, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x907ca689, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9b60db24, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xcf8cc5ee, __VMLINUX_SYMBOL_STR(msm_bus_scale_unregister_client) },
	{ 0xdfabe0ff, __VMLINUX_SYMBOL_STR(scm_call) },
	{ 0x78f062cb, __VMLINUX_SYMBOL_STR(msm_bus_scale_client_update_request) },
	{ 0xd91cba37, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5eed7cc6, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x3041ab7, __VMLINUX_SYMBOL_STR(qce_ablk_cipher_req) },
	{ 0x4e69ffce, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc45e47db, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2ff3adb7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1d9b7d1, __VMLINUX_SYMBOL_STR(msm_bus_cl_get_pdata) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd7d497a6, __VMLINUX_SYMBOL_STR(drbg_call_back) },
	{ 0xc03bed7d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd26f8cb, __VMLINUX_SYMBOL_STR(qce_enable_clk) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xf8fda4ed, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x71a972ea, __VMLINUX_SYMBOL_STR(qce_hw_support) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb720d59e, __VMLINUX_SYMBOL_STR(qce_open) },
	{ 0x81a61e31, __VMLINUX_SYMBOL_STR(qce_disable_clk) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xb69bedf4, __VMLINUX_SYMBOL_STR(g_fips140_status) },
	{ 0x8e9379f8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x575c81e1, __VMLINUX_SYMBOL_STR(qce_close) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7ded90b3, __VMLINUX_SYMBOL_STR(msm_bus_scale_register_client) },
	{ 0x3ad4a7e5, __VMLINUX_SYMBOL_STR(_do_msm_fips_drbg_init) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb6dce3c3, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe8af8f13, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xfd9a2d2a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6dc5d25a, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x75b45b18, __VMLINUX_SYMBOL_STR(qce_process_sha_req) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

