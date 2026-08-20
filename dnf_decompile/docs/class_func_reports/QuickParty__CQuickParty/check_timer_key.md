# check_timer_key

`_ZN10QuickParty11CQuickParty15check_timer_keyE13TIMER_MESSAGEi`

`QuickParty::CQuickParty::check_timer_key(TIMER_MESSAGE, int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x082696b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082696b0  _ZN10QuickParty11CQuickParty15check_timer_keyE13TIMER_MESSAGEi
#           QuickParty::CQuickParty::check_timer_key(TIMER_MESSAGE, int)
# range [0x082696b0, 0x082696cf]
082696b0 +0x00:  push   %ebp
082696b1 +0x01:  mov    %esp,%ebp
082696b3 +0x03:  mov    0xc(%ebp),%eax
082696b6 +0x06:  lea    -0x9d(%eax),%edx
082696bc +0x0c:  mov    0x8(%ebp),%eax
082696bf +0x0f:  add    $0x4,%edx
082696c2 +0x12:  mov    0xc(%eax,%edx,4),%edx
082696c6 +0x16:  mov    0x10(%ebp),%eax
082696c9 +0x19:  cmp    %eax,%edx
082696cb +0x1b:  sete   %al
082696ce +0x1e:  pop    %ebp
082696cf +0x1f:  ret
```

## 反编译 C

```c
// QuickParty::CQuickParty::check_timer_key @ 0x82696b0

/* QuickParty::CQuickParty::check_timer_key(TIMER_MESSAGE, int) */

bool __thiscall QuickParty::CQuickParty::check_timer_key(CQuickParty *this,int param_2,int param_3)

{
  return *(int *)(this + (param_2 + -0x99) * 4 + 0xc) == param_3;
}
```
