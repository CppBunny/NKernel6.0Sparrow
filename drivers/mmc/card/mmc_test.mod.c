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
	{ 0xfde410ca, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x3c683ace, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9961ed64, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1ff6a5f8, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0x9c9d8eb8, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x8371daff, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xc3203dd0, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0x907ca689, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xffd8b311, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xa084d29a, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xe1f886a5, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf82b5b6b, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0xba3393ef, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0x73374c86, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0xab50d814, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0xe654051c, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x7eeef42c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe39bd174, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5eed7cc6, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x3f4c4798, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x30567b2b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x89375291, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x31354176, __VMLINUX_SYMBOL_STR(mmc_rpm_release) },
	{ 0x9b02f73f, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0x8e9379f8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x21d13900, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0x5860c20, __VMLINUX_SYMBOL_STR(mmc_rpm_hold) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa76e2026, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3abd30f1, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0x5a8634af, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0xa567cdb8, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x821a86cc, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xa64e11ba, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xd91cba37, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc03bed7d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

