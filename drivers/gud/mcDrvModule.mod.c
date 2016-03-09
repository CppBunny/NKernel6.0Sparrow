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
	{ 0xc4bd77a6, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7b78a582, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x3f4c4798, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x74923c0b, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xad9e5471, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x907ca689, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa64247f5, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xdfabe0ff, __VMLINUX_SYMBOL_STR(scm_call) },
	{ 0x2b22815f, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xd91cba37, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xa06fc320, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe39bd174, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6098796c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27d82877, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe265552c, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x8d1a2e1d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc03bed7d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa3e4334, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x882bff2d, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x1073772, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0x570d7763, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x7eeef42c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x3fcbb6e4, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf1a3d5eb, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x1d6a7a21, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x8e9379f8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x538c8522, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x445de180, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2f62d87, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x933d1c43, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x420c3ebf, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x61f99e93, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0x7b5c8440, __VMLINUX_SYMBOL_STR(vm_munmap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb6dce3c3, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xda28de09, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xb55a8386, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x9ef7bfa6, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x15ccd6f2, __VMLINUX_SYMBOL_STR(is_vmalloc_addr) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

