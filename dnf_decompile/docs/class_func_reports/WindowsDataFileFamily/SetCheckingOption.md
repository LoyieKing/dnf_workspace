# SetCheckingOption

`_ZN21WindowsDataFileFamily17SetCheckingOptionEmm`

`WindowsDataFileFamily::SetCheckingOption(unsigned long, unsigned long)`

| 类 | 地址 |
|---|---|
| `WindowsDataFileFamily` | `0x0857511e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857511e  _ZN21WindowsDataFileFamily17SetCheckingOptionEmm
#           WindowsDataFileFamily::SetCheckingOption(unsigned long, unsigned long)
# range [0x0857511e, 0x0857513b]
0857511e +0x00:  push   %ebp
0857511f +0x01:  mov    %esp,%ebp
08575121 +0x03:  mov    0x8(%ebp),%eax
08575124 +0x06:  mov    0xc(%ebp),%edx
08575127 +0x09:  mov    %edx,0x118(%eax)
0857512d +0x0f:  mov    0x8(%ebp),%eax
08575130 +0x12:  mov    0x10(%ebp),%edx
08575133 +0x15:  mov    %edx,0x11c(%eax)
08575139 +0x1b:  pop    %ebp
0857513a +0x1c:  ret
0857513b +0x1d:  nop
```

## 反编译 C

```c
// WindowsDataFileFamily::SetCheckingOption @ 0x857511e

/* WindowsDataFileFamily::SetCheckingOption(unsigned long, unsigned long) */

void __thiscall
WindowsDataFileFamily::SetCheckingOption(WindowsDataFileFamily *this,ulong param_1,ulong param_2)

{
  *(ulong *)(this + 0x118) = param_1;
  *(ulong *)(this + 0x11c) = param_2;
  return;
}
```
