# SetCheckingOption

`_ZN20WindowsExeFileFamily17SetCheckingOptionEmm`

`WindowsExeFileFamily::SetCheckingOption(unsigned long, unsigned long)`

| 类 | 地址 |
|---|---|
| `WindowsExeFileFamily` | `0x08574620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574620  _ZN20WindowsExeFileFamily17SetCheckingOptionEmm
#           WindowsExeFileFamily::SetCheckingOption(unsigned long, unsigned long)
# range [0x08574620, 0x0857463d]
08574620 +0x00:  push   %ebp
08574621 +0x01:  mov    %esp,%ebp
08574623 +0x03:  mov    0x8(%ebp),%eax
08574626 +0x06:  mov    0xc(%ebp),%edx
08574629 +0x09:  mov    %edx,0x124(%eax)
0857462f +0x0f:  mov    0x8(%ebp),%eax
08574632 +0x12:  mov    0x10(%ebp),%edx
08574635 +0x15:  mov    %edx,0x128(%eax)
0857463b +0x1b:  pop    %ebp
0857463c +0x1c:  ret
0857463d +0x1d:  nop
```

## 反编译 C

```c
// WindowsExeFileFamily::SetCheckingOption @ 0x8574620

/* WindowsExeFileFamily::SetCheckingOption(unsigned long, unsigned long) */

void __thiscall
WindowsExeFileFamily::SetCheckingOption(WindowsExeFileFamily *this,ulong param_1,ulong param_2)

{
  *(ulong *)(this + 0x124) = param_1;
  *(ulong *)(this + 0x128) = param_2;
  return;
}
```
