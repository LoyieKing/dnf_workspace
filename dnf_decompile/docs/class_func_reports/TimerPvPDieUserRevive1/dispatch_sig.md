# dispatch_sig

`_ZN22TimerPvPDieUserRevive112dispatch_sigEiij`

`TimerPvPDieUserRevive1::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvPDieUserRevive1` | `0x08636604` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636604  _ZN22TimerPvPDieUserRevive112dispatch_sigEiij
#           TimerPvPDieUserRevive1::dispatch_sig(int, int, unsigned int)
# range [0x08636604, 0x0863662d]
08636604 +0x00:  push   %ebp
08636605 +0x01:  mov    %esp,%ebp
08636607 +0x03:  sub    $0x18,%esp
0863660a +0x06:  movl   $0x1,0xc(%esp)
08636612 +0x0e:  mov    0x14(%ebp),%eax
08636615 +0x11:  mov    %eax,0x8(%esp)
08636619 +0x15:  mov    0x10(%ebp),%eax
0863661c +0x18:  mov    %eax,0x4(%esp)
08636620 +0x1c:  mov    0xc(%ebp),%eax
08636623 +0x1f:  mov    %eax,(%esp)
08636626 +0x22:  call   08636555 <_Z16PvPDieUserReviveiiji>  ; PvPDieUserRevive(int, int, unsigned int, int)
0863662b +0x27:  leave
0863662c +0x28:  ret
0863662d +0x29:  nop
```

## 反编译 C

```c
// TimerPvPDieUserRevive1::dispatch_sig @ 0x8636604

/* TimerPvPDieUserRevive1::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive1::dispatch_sig
          (TimerPvPDieUserRevive1 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,1);
  return;
}
```
