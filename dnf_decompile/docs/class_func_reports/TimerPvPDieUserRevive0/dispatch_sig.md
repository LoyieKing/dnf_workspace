# dispatch_sig

`_ZN22TimerPvPDieUserRevive012dispatch_sigEiij`

`TimerPvPDieUserRevive0::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvPDieUserRevive0` | `0x086365da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086365da  _ZN22TimerPvPDieUserRevive012dispatch_sigEiij
#           TimerPvPDieUserRevive0::dispatch_sig(int, int, unsigned int)
# range [0x086365da, 0x08636603]
086365da +0x00:  push   %ebp
086365db +0x01:  mov    %esp,%ebp
086365dd +0x03:  sub    $0x18,%esp
086365e0 +0x06:  movl   $0x0,0xc(%esp)
086365e8 +0x0e:  mov    0x14(%ebp),%eax
086365eb +0x11:  mov    %eax,0x8(%esp)
086365ef +0x15:  mov    0x10(%ebp),%eax
086365f2 +0x18:  mov    %eax,0x4(%esp)
086365f6 +0x1c:  mov    0xc(%ebp),%eax
086365f9 +0x1f:  mov    %eax,(%esp)
086365fc +0x22:  call   08636555 <_Z16PvPDieUserReviveiiji>  ; PvPDieUserRevive(int, int, unsigned int, int)
08636601 +0x27:  leave
08636602 +0x28:  ret
08636603 +0x29:  nop
```

## 反编译 C

```c
// TimerPvPDieUserRevive0::dispatch_sig @ 0x86365da

/* TimerPvPDieUserRevive0::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive0::dispatch_sig
          (TimerPvPDieUserRevive0 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,0);
  return;
}
```
