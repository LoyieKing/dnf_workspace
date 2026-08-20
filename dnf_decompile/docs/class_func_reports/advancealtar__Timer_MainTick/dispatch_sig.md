# dispatch_sig

`_ZN12advancealtar14Timer_MainTick12dispatch_sigEiij`

`advancealtar::Timer_MainTick::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `advancealtar::Timer_MainTick` | `0x0812f798` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f798  _ZN12advancealtar14Timer_MainTick12dispatch_sigEiij
#           advancealtar::Timer_MainTick::dispatch_sig(int, int, unsigned int)
# range [0x0812f798, 0x0812f7b7]
0812f798 +0x00:  push   %ebp
0812f799 +0x01:  mov    %esp,%ebp
0812f79b +0x03:  sub    $0x18,%esp
0812f79e +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0812f7a3 +0x0b:  mov    %eax,(%esp)
0812f7a6 +0x0e:  call   08295d82 <_ZN12CGameManager18onTimeAdvanceAltarEv>  ; CGameManager::onTimeAdvanceAltar()
0812f7ab +0x13:  call   0812f7b8 <_ZN12advancealtar14Timer_MainTick19RegistNextTimerGageEv>  ; advancealtar::Timer_MainTick::RegistNextTimerGage()
0812f7b0 +0x18:  mov    $0x1,%eax
0812f7b5 +0x1d:  leave
0812f7b6 +0x1e:  ret
0812f7b7 +0x1f:  nop
```

## 反编译 C

```c
// advancealtar::Timer_MainTick::dispatch_sig @ 0x812f798

/* advancealtar::Timer_MainTick::dispatch_sig(int, int, unsigned int) */

undefined4 advancealtar::Timer_MainTick::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  
  this = (CGameManager *)G_CGameManager();
  CGameManager::onTimeAdvanceAltar(this);
  RegistNextTimerGage();
  return 1;
}
```
