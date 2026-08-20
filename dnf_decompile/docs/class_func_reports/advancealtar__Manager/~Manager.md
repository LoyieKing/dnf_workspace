# ~Manager

`_ZN12advancealtar7ManagerD1Ev`

`advancealtar::Manager::~Manager()`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x08130908` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08130908  _ZN12advancealtar7ManagerD1Ev
#           advancealtar::Manager::~Manager()
# range [0x08130908, 0x0813090d]
08130908 +0x00:  push   %ebp
08130909 +0x01:  mov    %esp,%ebp
0813090b +0x03:  pop    %ebp
0813090c +0x04:  ret
0813090d +0x05:  nop
```

## 反编译 C

```c
// advancealtar::Manager::~Manager @ 0x8130908

/* advancealtar::Manager::~Manager() */

void __thiscall advancealtar::Manager::~Manager(Manager *this)

{
  return;
}
```
