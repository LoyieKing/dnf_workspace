# dispatch_sig

`_ZN12advancealtar18Timer_StageControl12dispatch_sigEiij`

`advancealtar::Timer_StageControl::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `advancealtar::Timer_StageControl` | `0x0812f806` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f806  _ZN12advancealtar18Timer_StageControl12dispatch_sigEiij
#           advancealtar::Timer_StageControl::dispatch_sig(int, int, unsigned int)
# range [0x0812f806, 0x0812f84f]
0812f806 +0x00:  push   %ebp
0812f807 +0x01:  mov    %esp,%ebp
0812f809 +0x03:  sub    $0x28,%esp
0812f80c +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0812f811 +0x0b:  mov    0xc(%ebp),%edx
0812f814 +0x0e:  mov    %edx,0x4(%esp)
0812f818 +0x12:  mov    %eax,(%esp)
0812f81b +0x15:  call   08295c38 <_ZN12CGameManager15getAdvanceAltarEi>  ; CGameManager::getAdvanceAltar(int)
0812f820 +0x1a:  mov    %eax,-0xc(%ebp)
0812f823 +0x1d:  cmpl   $0x0,-0xc(%ebp)
0812f827 +0x21:  jne    0812f830 <+0x2a>
0812f829 +0x23:  mov    $0x0,%eax
0812f82e +0x28:  jmp    0812f84e <+0x48>
0812f830 +0x2a:  mov    0x10(%ebp),%eax
0812f833 +0x2d:  mov    0x14(%ebp),%edx
0812f836 +0x30:  mov    %edx,0x8(%esp)
0812f83a +0x34:  mov    %eax,0x4(%esp)
0812f83e +0x38:  mov    -0xc(%ebp),%eax
0812f841 +0x3b:  mov    %eax,(%esp)
0812f844 +0x3e:  call   0812fbfa <_ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE>  ; advancealtar::StageControl::onTimer(TIMER_MESSAGE, advancealtar::StageEndType::T)
0812f849 +0x43:  mov    $0x1,%eax
0812f84e +0x48:  leave
0812f84f +0x49:  ret
```

## 反编译 C

```c
// advancealtar::Timer_StageControl::dispatch_sig @ 0x812f806

/* advancealtar::Timer_StageControl::dispatch_sig(int, int, unsigned int) */

bool __thiscall
advancealtar::Timer_StageControl::dispatch_sig
          (Timer_StageControl *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  StageControl *pSVar2;
  
  iVar1 = G_CGameManager();
  pSVar2 = (StageControl *)CGameManager::getAdvanceAltar(iVar1);
  if (pSVar2 != (StageControl *)0x0) {
    StageControl::onTimer(pSVar2,param_2,param_3);
  }
  return pSVar2 != (StageControl *)0x0;
}
```
