# dispatch_sig

`_ZN22TimerPvPDieUserRevive712dispatch_sigEiij`

`TimerPvPDieUserRevive7::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvPDieUserRevive7` | `0x08636700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636700  _ZN22TimerPvPDieUserRevive712dispatch_sigEiij
#           TimerPvPDieUserRevive7::dispatch_sig(int, int, unsigned int)
# range [0x08636700, 0x08636729]
08636700 +0x00:  push   %ebp
08636701 +0x01:  mov    %esp,%ebp
08636703 +0x03:  sub    $0x18,%esp
08636706 +0x06:  movl   $0x7,0xc(%esp)
0863670e +0x0e:  mov    0x14(%ebp),%eax
08636711 +0x11:  mov    %eax,0x8(%esp)
08636715 +0x15:  mov    0x10(%ebp),%eax
08636718 +0x18:  mov    %eax,0x4(%esp)
0863671c +0x1c:  mov    0xc(%ebp),%eax
0863671f +0x1f:  mov    %eax,(%esp)
08636722 +0x22:  call   08636555 <_Z16PvPDieUserReviveiiji>  ; PvPDieUserRevive(int, int, unsigned int, int)
08636727 +0x27:  leave
08636728 +0x28:  ret
08636729 +0x29:  nop
```

## 反编译 C

```c
// TimerPvPDieUserRevive7::dispatch_sig @ 0x8636700

/* TimerPvPDieUserRevive7::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive7::dispatch_sig
          (TimerPvPDieUserRevive7 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,7);
  return;
}
```
