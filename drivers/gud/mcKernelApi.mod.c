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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5311e664, __VMLINUX_SYMBOL_STR(mobicore_open) },
	{ 0xd91cba37, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd22dd714, __VMLINUX_SYMBOL_STR(mobicore_unmap_vmem) },
	{ 0xe39bd174, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6098796c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27d82877, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x790e0519, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xb67f8dcd, __VMLINUX_SYMBOL_STR(mobicore_map_vmem) },
	{ 0x9175d867, __VMLINUX_SYMBOL_STR(mobicore_free_wsm) },
	{ 0xd2863588, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x60d4919e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x7eeef42c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x975e594, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x4a67841b, __VMLINUX_SYMBOL_STR(mobicore_allocate_wsm) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xe829728b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf6ac1566, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0x8e9379f8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x930825, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb55a8386, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x3665ae6, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0xe04f60bc, __VMLINUX_SYMBOL_STR(mobicore_release) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcDrvModule";

