# Manager

`_ZN12advancealtar7ManagerC1Ev`

`advancealtar::Manager::Manager()`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x08130902` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08130902  _ZN12advancealtar7ManagerC1Ev
#           advancealtar::Manager::Manager()
# range [0x08130902, 0x08130907]
08130902 +0x00:  push   %ebp
08130903 +0x01:  mov    %esp,%ebp
08130905 +0x03:  pop    %ebp
08130906 +0x04:  ret
08130907 +0x05:  nop
```

## 反编译 C

```c
// advancealtar::Manager::Manager @ 0x8130902

/* advancealtar::Manager::Manager() */

void __thiscall advancealtar::Manager::Manager(Manager *this)

{
  return;
}
```
