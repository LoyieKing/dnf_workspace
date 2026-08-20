# onEplp

`_ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE`

`advancealtar::StageControl::onEplp(advancealtar::StageEndType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x08130644` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08130644  _ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE
#           advancealtar::StageControl::onEplp(advancealtar::StageEndType::T)
# range [0x08130644, 0x08130691]
08130644 +0x00:  push   %ebp
08130645 +0x01:  mov    %esp,%ebp
08130647 +0x03:  sub    $0x28,%esp
0813064a +0x06:  movb   $0x0,-0x9(%ebp)
0813064e +0x0a:  mov    0xc(%ebp),%eax
08130651 +0x0d:  test   %eax,%eax
08130653 +0x0f:  js     0813066b <+0x27>
08130655 +0x11:  cmp    $0x2,%eax
08130658 +0x14:  jle    08130661 <+0x1d>
0813065a +0x16:  cmp    $0x3,%eax
0813065d +0x19:  je     08130667 <+0x23>
0813065f +0x1b:  jmp    0813066b <+0x27>
08130661 +0x1d:  movb   $0x0,-0x9(%ebp)
08130665 +0x21:  jmp    0813066b <+0x27>
08130667 +0x23:  movb   $0x1,-0x9(%ebp)
0813066b +0x27:  mov    0xc(%ebp),%eax
0813066e +0x2a:  mov    %eax,0x4(%esp)
08130672 +0x2e:  mov    0x8(%ebp),%eax
08130675 +0x31:  mov    %eax,(%esp)
08130678 +0x34:  call   081306be <_ZN12advancealtar12StageControl8sendEplpENS_12StageEndType1TE>  ; advancealtar::StageControl::sendEplp(advancealtar::StageEndType::T)
0813067d +0x39:  mov    0x8(%ebp),%eax
08130680 +0x3c:  mov    %eax,(%esp)
08130683 +0x3f:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08130688 +0x44:  mov    %eax,(%esp)
0813068b +0x47:  call   0812f956 <_ZN12advancealtar18Timer_StageControl28RegistTimerEPLPReturnVillageEi>  ; advancealtar::Timer_StageControl::RegistTimerEPLPReturnVillage(int)
08130690 +0x4c:  leave
08130691 +0x4d:  ret
```

## 反编译 C

```c
// advancealtar::StageControl::onEplp @ 0x8130644

/* advancealtar::StageControl::onEplp(advancealtar::StageEndType::T) */

void __thiscall advancealtar::StageControl::onEplp(StageControl *this,undefined4 param_2)

{
  int iVar1;
  
  sendEplp(this,param_2);
  iVar1 = getIndex(this);
  Timer_StageControl::RegistTimerEPLPReturnVillage(iVar1);
  return;
}
```
