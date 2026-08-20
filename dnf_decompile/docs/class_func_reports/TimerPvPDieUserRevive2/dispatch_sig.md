# dispatch_sig

`_ZN22TimerPvPDieUserRevive212dispatch_sigEiij`

`TimerPvPDieUserRevive2::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvPDieUserRevive2` | `0x0863662e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863662e  _ZN22TimerPvPDieUserRevive212dispatch_sigEiij
#           TimerPvPDieUserRevive2::dispatch_sig(int, int, unsigned int)
# range [0x0863662e, 0x08636657]
0863662e +0x00:  push   %ebp
0863662f +0x01:  mov    %esp,%ebp
08636631 +0x03:  sub    $0x18,%esp
08636634 +0x06:  movl   $0x2,0xc(%esp)
0863663c +0x0e:  mov    0x14(%ebp),%eax
0863663f +0x11:  mov    %eax,0x8(%esp)
08636643 +0x15:  mov    0x10(%ebp),%eax
08636646 +0x18:  mov    %eax,0x4(%esp)
0863664a +0x1c:  mov    0xc(%ebp),%eax
0863664d +0x1f:  mov    %eax,(%esp)
08636650 +0x22:  call   08636555 <_Z16PvPDieUserReviveiiji>  ; PvPDieUserRevive(int, int, unsigned int, int)
08636655 +0x27:  leave
08636656 +0x28:  ret
08636657 +0x29:  nop
```

## 反编译 C

```c
// TimerPvPDieUserRevive2::dispatch_sig @ 0x863662e

/* TimerPvPDieUserRevive2::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive2::dispatch_sig
          (TimerPvPDieUserRevive2 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,2);
  return;
}
```
