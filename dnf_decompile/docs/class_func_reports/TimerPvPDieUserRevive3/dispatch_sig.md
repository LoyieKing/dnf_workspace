# dispatch_sig

`_ZN22TimerPvPDieUserRevive312dispatch_sigEiij`

`TimerPvPDieUserRevive3::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvPDieUserRevive3` | `0x08636658` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636658  _ZN22TimerPvPDieUserRevive312dispatch_sigEiij
#           TimerPvPDieUserRevive3::dispatch_sig(int, int, unsigned int)
# range [0x08636658, 0x08636681]
08636658 +0x00:  push   %ebp
08636659 +0x01:  mov    %esp,%ebp
0863665b +0x03:  sub    $0x18,%esp
0863665e +0x06:  movl   $0x3,0xc(%esp)
08636666 +0x0e:  mov    0x14(%ebp),%eax
08636669 +0x11:  mov    %eax,0x8(%esp)
0863666d +0x15:  mov    0x10(%ebp),%eax
08636670 +0x18:  mov    %eax,0x4(%esp)
08636674 +0x1c:  mov    0xc(%ebp),%eax
08636677 +0x1f:  mov    %eax,(%esp)
0863667a +0x22:  call   08636555 <_Z16PvPDieUserReviveiiji>  ; PvPDieUserRevive(int, int, unsigned int, int)
0863667f +0x27:  leave
08636680 +0x28:  ret
08636681 +0x29:  nop
```

## 反编译 C

```c
// TimerPvPDieUserRevive3::dispatch_sig @ 0x8636658

/* TimerPvPDieUserRevive3::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive3::dispatch_sig
          (TimerPvPDieUserRevive3 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,3);
  return;
}
```
