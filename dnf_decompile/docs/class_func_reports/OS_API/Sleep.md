# Sleep

`_ZN6OS_API5SleepEi`

`OS_API::Sleep(int)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c4e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c4e0  _ZN6OS_API5SleepEi
#           OS_API::Sleep(int)
# range [0x0858c4e0, 0x0858c4f9]
0858c4e0 +0x00:  push   %ebp
0858c4e1 +0x01:  mov    %esp,%ebp
0858c4e3 +0x03:  sub    $0x18,%esp
0858c4e6 +0x06:  mov    0x8(%ebp),%eax
0858c4e9 +0x09:  imul   $0x3e8,%eax,%eax
0858c4ef +0x0f:  mov    %eax,(%esp)
0858c4f2 +0x12:  call   0807d930 <_init+0x228>
0858c4f7 +0x17:  leave
0858c4f8 +0x18:  ret
0858c4f9 +0x19:  nop
```

## 反编译 C

```c
// OS_API::Sleep @ 0x858c4e0

/* OS_API::Sleep(int) */

void OS_API::Sleep(int param_1)

{
  usleep(param_1 * 1000);
  return;
}
```
