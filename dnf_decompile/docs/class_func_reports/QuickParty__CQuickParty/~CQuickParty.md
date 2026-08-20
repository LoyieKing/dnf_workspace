# ~CQuickParty

`_ZN10QuickParty11CQuickPartyD1Ev`

`QuickParty::CQuickParty::~CQuickParty()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x08269540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269540  _ZN10QuickParty11CQuickPartyD1Ev
#           QuickParty::CQuickParty::~CQuickParty()
# range [0x08269540, 0x08269545]
08269540 +0x00:  push   %ebp
08269541 +0x01:  mov    %esp,%ebp
08269543 +0x03:  pop    %ebp
08269544 +0x04:  ret
08269545 +0x05:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::~CQuickParty @ 0x8269540

/* QuickParty::CQuickParty::~CQuickParty() */

void __thiscall QuickParty::CQuickParty::~CQuickParty(CQuickParty *this)

{
  return;
}
```
