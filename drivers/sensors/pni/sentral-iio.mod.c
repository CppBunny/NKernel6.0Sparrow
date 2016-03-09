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
	{ 0xaef7c7d8, __VMLINUX_SYMBOL_STR(iio_sw_buffer_preenable) },
	{ 0x7ac8552a, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x315c2c1c, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf2fc7f6e, __VMLINUX_SYMBOL_STR(__pm_relax) },
	{ 0x856d801a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x817a711, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1525f36d, __VMLINUX_SYMBOL_STR(__pm_stay_awake) },
	{ 0x98b81bad, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x2759cbc, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x512cf16c, __VMLINUX_SYMBOL_STR(wakeup_source_destroy) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7f60e837, __VMLINUX_SYMBOL_STR(__pm_wakeup_event) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4cc0892e, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x5e1e66da, __VMLINUX_SYMBOL_STR(iio_device_free) },
	{ 0x2aeb55ce, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x60b17a1, __VMLINUX_SYMBOL_STR(iio_buffer_unregister) },
	{ 0x4b716b88, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x33ae44cf, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x1793bb82, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x420c3ebf, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x306c5605, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xfa3e4334, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x9ef7bfa6, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x4379f6b9, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xb2422e6c, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xee4f3181, __VMLINUX_SYMBOL_STR(wakeup_source_add) },
	{ 0xfcdb4034, __VMLINUX_SYMBOL_STR(wakeup_source_prepare) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x27d82877, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x552f3a7c, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x38fa8550, __VMLINUX_SYMBOL_STR(iio_scan_mask_set) },
	{ 0x7b991fc, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0xd39f7e37, __VMLINUX_SYMBOL_STR(iio_buffer_register) },
	{ 0xbb11596a, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0x9b60db24, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x11f447ce, __VMLINUX_SYMBOL_STR(__gpio_to_irq) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x71930ed3, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x3757c9b, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x267b9f37, __VMLINUX_SYMBOL_STR(devm_kzalloc) },
	{ 0x46ea602c, __VMLINUX_SYMBOL_STR(iio_device_alloc) },
	{ 0xd08dec3e, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x9aca444b, __VMLINUX_SYMBOL_STR(get_monotonic_boottime) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xd91cba37, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xc03bed7d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3077d244, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x42f260b6, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x9780de90, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x44afe74f, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe39bd174, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfd9a2d2a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7eeef42c, __VMLINUX_SYMBOL_STR(_dev_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cpni,em7184*");
MODULE_ALIAS("i2c:em7184");
