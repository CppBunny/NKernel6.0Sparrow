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
	{ 0xfa799e30, __VMLINUX_SYMBOL_STR(test_iosched_unregister) },
	{ 0x3f4c4798, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf0372292, __VMLINUX_SYMBOL_STR(test_iosched_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8e9379f8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x513f517a, __VMLINUX_SYMBOL_STR(mmc_blk_get_packed_statistics) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x37e74642, __VMLINUX_SYMBOL_STR(get_jiffies_64) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xb0bfd99d, __VMLINUX_SYMBOL_STR(mmc_blk_init_bkops_statistics) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x998a2f13, __VMLINUX_SYMBOL_STR(test_iosched_add_unique_test_req) },
	{ 0x38490187, __VMLINUX_SYMBOL_STR(check_test_completion) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x99e760f1, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x32b357c0, __VMLINUX_SYMBOL_STR(test_get_test_data) },
	{ 0x5eed7cc6, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xacbef2fb, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x31b4df08, __VMLINUX_SYMBOL_STR(test_iosched_get_debugfs_tests_root) },
	{ 0x5d141068, __VMLINUX_SYMBOL_STR(test_iosched_get_debugfs_utils_root) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa64e11ba, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x76aa5377, __VMLINUX_SYMBOL_STR(test_iosched_set_test_result) },
	{ 0x65043b59, __VMLINUX_SYMBOL_STR(test_iosched_set_ignore_round) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd77b738a, __VMLINUX_SYMBOL_STR(test_iosched_get_req_queue) },
	{ 0x7cc723bf, __VMLINUX_SYMBOL_STR(test_iosched_add_wr_rd_test_req) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3f245558, __VMLINUX_SYMBOL_STR(mmc_blk_init_packed_statistics) },
	{ 0x53035116, __VMLINUX_SYMBOL_STR(test_iosched_mark_test_completion) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7ae998bd, __VMLINUX_SYMBOL_STR(__blk_run_queue) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2ac7c942, __VMLINUX_SYMBOL_STR(test_iosched_create_test_req) },
	{ 0xbec6e702, __VMLINUX_SYMBOL_STR(test_iosched_start_test) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";

