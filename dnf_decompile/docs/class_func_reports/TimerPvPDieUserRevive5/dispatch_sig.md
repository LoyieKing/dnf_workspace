# dispatch_sig

`_ZN22TimerPvPDieUserRevive512dispatch_sigEiij`

`TimerPvPDieUserRevive5::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvPDieUserRevive5` | `0x086366ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086366ac  _ZN22TimerPvPDieUserRevive512dispatch_sigEiij
#           TimerPvPDieUserRevive5::dispatch_sig(int, int, unsigned int)
# range [0x086366ac, 0x086366d5]
086366ac +0x00:  push   %ebp
086366ad +0x01:  mov    %esp,%ebp
086366af +0x03:  sub    $0x18,%esp
086366b2 +0x06:  movl   $0x5,0xc(%esp)
086366ba +0x0e:  mov    0x14(%ebp),%eax
086366bd +0x11:  mov    %eax,0x8(%esp)
086366c1 +0x15:  mov    0x10(%ebp),%eax
086366c4 +0x18:  mov    %eax,0x4(%esp)
086366c8 +0x1c:  mov    0xc(%ebp),%eax
086366cb +0x1f:  mov    %eax,(%esp)
086366ce +0x22:  call   08636555 <_Z16PvPDieUserReviveiiji>  ; PvPDieUserRevive(int, int, unsigned int, int)
086366d3 +0x27:  leave
086366d4 +0x28:  ret
086366d5 +0x29:  nop
```

## 反编译 C

```c
// TimerPvPDieUserRevive5::dispatch_sig @ 0x86366ac

/* TimerPvPDieUserRevive5::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive5::dispatch_sig
          (TimerPvPDieUserRevive5 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,5);
  return;
}
```
