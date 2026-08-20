# get_timer_key

`_ZN10QuickParty11CQuickParty13get_timer_keyE13TIMER_MESSAGE`

`QuickParty::CQuickParty::get_timer_key(TIMER_MESSAGE)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x08269668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269668  _ZN10QuickParty11CQuickParty13get_timer_keyE13TIMER_MESSAGE
#           QuickParty::CQuickParty::get_timer_key(TIMER_MESSAGE)
# range [0x08269668, 0x0826967f]
08269668 +0x00:  push   %ebp
08269669 +0x01:  mov    %esp,%ebp
0826966b +0x03:  mov    0xc(%ebp),%eax
0826966e +0x06:  lea    -0x9d(%eax),%edx
08269674 +0x0c:  mov    0x8(%ebp),%eax
08269677 +0x0f:  add    $0x4,%edx
0826967a +0x12:  mov    0xc(%eax,%edx,4),%eax
0826967e +0x16:  pop    %ebp
0826967f +0x17:  ret
```

## 反编译 C

```c
// QuickParty::CQuickParty::get_timer_key @ 0x8269668

/* QuickParty::CQuickParty::get_timer_key(TIMER_MESSAGE) */

undefined4 __thiscall QuickParty::CQuickParty::get_timer_key(CQuickParty *this,int param_2)

{
  return *(undefined4 *)(this + (param_2 + -0x99) * 4 + 0xc);
}
```
