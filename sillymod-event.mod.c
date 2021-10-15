#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2360b162, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x22a8fa35, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xd467ea7b, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x9e61b715, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x968e646b, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9256076e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x31cd8869, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x660e170a, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdaddbd5a, __VMLINUX_SYMBOL_STR(trace_handle_return) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xed457c5d, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x756a6448, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x3e371d1d, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x51f432c3, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x281775eb, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x4f079557, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xad5f0017, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xf7d6407e, __VMLINUX_SYMBOL_STR(trace_define_field) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "754C77A33148C658527E945");
