# dispatch_sig

`_ZN22TimerPvPDieUserRevive412dispatch_sigEiij`

`TimerPvPDieUserRevive4::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvPDieUserRevive4` | `0x08636682` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636682  _ZN22TimerPvPDieUserRevive412dispatch_sigEiij
#           TimerPvPDieUserRevive4::dispatch_sig(int, int, unsigned int)
# range [0x08636682, 0x086366ab]
08636682 +0x00:  push   %ebp
08636683 +0x01:  mov    %esp,%ebp
08636685 +0x03:  sub    $0x18,%esp
08636688 +0x06:  movl   $0x4,0xc(%esp)
08636690 +0x0e:  mov    0x14(%ebp),%eax
08636693 +0x11:  mov    %eax,0x8(%esp)
08636697 +0x15:  mov    0x10(%ebp),%eax
0863669a +0x18:  mov    %eax,0x4(%esp)
0863669e +0x1c:  mov    0xc(%ebp),%eax
086366a1 +0x1f:  mov    %eax,(%esp)
086366a4 +0x22:  call   08636555 <_Z16PvPDieUserReviveiiji>  ; PvPDieUserRevive(int, int, unsigned int, int)
086366a9 +0x27:  leave
086366aa +0x28:  ret
086366ab +0x29:  nop
```

## 反编译 C

```c
// TimerPvPDieUserRevive4::dispatch_sig @ 0x8636682

/* TimerPvPDieUserRevive4::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive4::dispatch_sig
          (TimerPvPDieUserRevive4 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,4);
  return;
}
```
