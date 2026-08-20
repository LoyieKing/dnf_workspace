// df_game_r TIME_to_ulonglong_time（ORIG 0x873f4c0）。
// 按 ORIG 汇编逐指令保留 32 位乘法与 64 位返回寄存器布局。
extern "C" unsigned long long TIME_to_ulonglong_time(const void* value);
asm(
".globl TIME_to_ulonglong_time\n"
".type TIME_to_ulonglong_time, @function\n"
"TIME_to_ulonglong_time:\n"
"pushl %ebp\n"
"movl %esp, %ebp\n"
"movl 8(%ebp), %edx\n"
"popl %ebp\n"
"imull $10000, 12(%edx), %ecx\n"
"imull $100, 16(%edx), %eax\n"
".byte 0x8d, 0x04, 0x01\n"
"addl 20(%edx), %eax\n"
"xorl %edx, %edx\n"
"ret\n"
".size TIME_to_ulonglong_time, .-TIME_to_ulonglong_time\n"
"nop\n"
".byte 0x8d, 0xb4, 0x26, 0x00, 0x00, 0x00, 0x00\n"
);
