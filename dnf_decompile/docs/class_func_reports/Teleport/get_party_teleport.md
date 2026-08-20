# get_party_teleport

`_ZN8Teleport18get_party_teleportEv`

`Teleport::get_party_teleport()`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283db6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283db6  _ZN8Teleport18get_party_teleportEv
#           Teleport::get_party_teleport()
# range [0x08283db6, 0x08283dc1]
08283db6 +0x00:  push   %ebp
08283db7 +0x01:  mov    %esp,%ebp
08283db9 +0x03:  mov    0x8(%ebp),%eax
08283dbc +0x06:  add    $0x4,%eax
08283dbf +0x09:  pop    %ebp
08283dc0 +0x0a:  ret
08283dc1 +0x0b:  nop
```

## 反编译 C

```c
// Teleport::get_party_teleport @ 0x8283db6

/* Teleport::get_party_teleport() */

Teleport * __thiscall Teleport::get_party_teleport(Teleport *this)

{
  return this + 4;
}
```
