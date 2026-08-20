# dispatch_sig

`_ZN19TimerUpdatePvPGrade12dispatch_sigEiij`

`TimerUpdatePvPGrade::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerUpdatePvPGrade` | `0x086373c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086373c6  _ZN19TimerUpdatePvPGrade12dispatch_sigEiij
#           TimerUpdatePvPGrade::dispatch_sig(int, int, unsigned int)
# range [0x086373c6, 0x086373f1]
086373c6 +0x00:  push   %ebp
086373c7 +0x01:  mov    %esp,%ebp
086373c9 +0x03:  sub    $0x18,%esp
086373cc +0x06:  call   084293a0 <_ZN17DB_UpdatePvPGrade11makeRequestEv>  ; DB_UpdatePvPGrade::makeRequest()
086373d1 +0x0b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086373d8 +0x12:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086373dd +0x17:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
086373e2 +0x1c:  mov    %eax,(%esp)
086373e5 +0x1f:  call   086373f2 <_ZN19TimerUpdatePvPGrade15registNextTimerEl>  ; TimerUpdatePvPGrade::registNextTimer(long)
086373ea +0x24:  mov    $0x1,%eax
086373ef +0x29:  leave
086373f0 +0x2a:  ret
086373f1 +0x2b:  nop
```

## 反编译 C

```c
// TimerUpdatePvPGrade::dispatch_sig @ 0x86373c6

/* TimerUpdatePvPGrade::dispatch_sig(int, int, unsigned int) */

undefined4 TimerUpdatePvPGrade::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  DB_UpdatePvPGrade::makeRequest();
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  registNextTimer(iVar1 + 0x15180);
  return 1;
}
```
