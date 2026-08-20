# gen_timer_key

`_ZN10QuickParty11CQuickParty13gen_timer_keyE13TIMER_MESSAGE`

`QuickParty::CQuickParty::gen_timer_key(TIMER_MESSAGE)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x08269680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269680  _ZN10QuickParty11CQuickParty13gen_timer_keyE13TIMER_MESSAGE
#           QuickParty::CQuickParty::gen_timer_key(TIMER_MESSAGE)
# range [0x08269680, 0x082696af]
08269680 +0x00:  push   %ebp
08269681 +0x01:  mov    %esp,%ebp
08269683 +0x03:  push   %ebx
08269684 +0x04:  mov    0xc(%ebp),%eax
08269687 +0x07:  sub    $0x9d,%eax
0826968c +0x0c:  mov    0x8(%ebp),%edx
0826968f +0x0f:  lea    0x4(%eax),%ecx
08269692 +0x12:  mov    0xc(%edx,%ecx,4),%edx
08269696 +0x16:  lea    0x1(%edx),%ebx
08269699 +0x19:  mov    0x8(%ebp),%edx
0826969c +0x1c:  lea    0x4(%eax),%ecx
0826969f +0x1f:  mov    %ebx,0xc(%edx,%ecx,4)
082696a3 +0x23:  mov    0x8(%ebp),%edx
082696a6 +0x26:  add    $0x4,%eax
082696a9 +0x29:  mov    0xc(%edx,%eax,4),%eax
082696ad +0x2d:  pop    %ebx
082696ae +0x2e:  pop    %ebp
082696af +0x2f:  ret
```

## 反编译 C

```c
// QuickParty::CQuickParty::gen_timer_key @ 0x8269680

/* QuickParty::CQuickParty::gen_timer_key(TIMER_MESSAGE) */

undefined4 __thiscall QuickParty::CQuickParty::gen_timer_key(CQuickParty *this,int param_2)

{
  *(int *)(this + (param_2 + -0x99) * 4 + 0xc) = *(int *)(this + (param_2 + -0x99) * 4 + 0xc) + 1;
  return *(undefined4 *)(this + (param_2 + -0x99) * 4 + 0xc);
}
```
