# dispatch_sig

`_ZN22TimerPvPDieUserRevive612dispatch_sigEiij`

`TimerPvPDieUserRevive6::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvPDieUserRevive6` | `0x086366d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086366d6  _ZN22TimerPvPDieUserRevive612dispatch_sigEiij
#           TimerPvPDieUserRevive6::dispatch_sig(int, int, unsigned int)
# range [0x086366d6, 0x086366ff]
086366d6 +0x00:  push   %ebp
086366d7 +0x01:  mov    %esp,%ebp
086366d9 +0x03:  sub    $0x18,%esp
086366dc +0x06:  movl   $0x6,0xc(%esp)
086366e4 +0x0e:  mov    0x14(%ebp),%eax
086366e7 +0x11:  mov    %eax,0x8(%esp)
086366eb +0x15:  mov    0x10(%ebp),%eax
086366ee +0x18:  mov    %eax,0x4(%esp)
086366f2 +0x1c:  mov    0xc(%ebp),%eax
086366f5 +0x1f:  mov    %eax,(%esp)
086366f8 +0x22:  call   08636555 <_Z16PvPDieUserReviveiiji>  ; PvPDieUserRevive(int, int, unsigned int, int)
086366fd +0x27:  leave
086366fe +0x28:  ret
086366ff +0x29:  nop
```

## 反编译 C

```c
// TimerPvPDieUserRevive6::dispatch_sig @ 0x86366d6

/* TimerPvPDieUserRevive6::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive6::dispatch_sig
          (TimerPvPDieUserRevive6 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,6);
  return;
}
```
