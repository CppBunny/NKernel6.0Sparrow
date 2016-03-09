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
	{ 0xd930a08e, __VMLINUX_SYMBOL_STR(smd_close) },
	{ 0x6790d345, __VMLINUX_SYMBOL_STR(radio_hci_register_dev) },
	{ 0x6f0ad42e, __VMLINUX_SYMBOL_STR(smd_disable_read_intr) },
	{ 0xc2b681eb, __VMLINUX_SYMBOL_STR(smd_named_open_on_edge) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3f4c4798, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8e9379f8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9f309f25, __VMLINUX_SYMBOL_STR(smd_read) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe81e8aa0, __VMLINUX_SYMBOL_STR(smd_read_avail) },
	{ 0xe829728b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x39b90f33, __VMLINUX_SYMBOL_STR(smd_write) },
	{ 0x354ef28b, __VMLINUX_SYMBOL_STR(radio_hci_unregister_dev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3ac16982, __VMLINUX_SYMBOL_STR(radio_hci_recv_frame) },
	{ 0x70ed4485, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x975e594, __VMLINUX_SYMBOL_STR(__alloc_skb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

