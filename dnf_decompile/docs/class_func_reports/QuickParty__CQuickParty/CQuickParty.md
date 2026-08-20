# CQuickParty

`_ZN10QuickParty11CQuickPartyC1Ev`

`QuickParty::CQuickParty::CQuickParty()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x0826952c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826952c  _ZN10QuickParty11CQuickPartyC1Ev
#           QuickParty::CQuickParty::CQuickParty()
# range [0x0826952c, 0x0826953f]
0826952c +0x00:  push   %ebp
0826952d +0x01:  mov    %esp,%ebp
0826952f +0x03:  sub    $0x18,%esp
08269532 +0x06:  mov    0x8(%ebp),%eax
08269535 +0x09:  mov    %eax,(%esp)
08269538 +0x0c:  call   08269546 <_ZN10QuickParty11CQuickParty4initEv>  ; QuickParty::CQuickParty::init()
0826953d +0x11:  leave
0826953e +0x12:  ret
0826953f +0x13:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::CQuickParty @ 0x826952c

/* QuickParty::CQuickParty::CQuickParty() */

void __thiscall QuickParty::CQuickParty::CQuickParty(CQuickParty *this)

{
  init(this);
  return;
}
```
