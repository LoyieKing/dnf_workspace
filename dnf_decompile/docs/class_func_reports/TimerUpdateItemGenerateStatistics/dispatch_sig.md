# dispatch_sig

`_ZN33TimerUpdateItemGenerateStatistics12dispatch_sigEiij`

`TimerUpdateItemGenerateStatistics::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerUpdateItemGenerateStatistics` | `0x086372d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086372d4  _ZN33TimerUpdateItemGenerateStatistics12dispatch_sigEiij
#           TimerUpdateItemGenerateStatistics::dispatch_sig(int, int, unsigned int)
# range [0x086372d4, 0x08637317]
086372d4 +0x00:  push   %ebp
086372d5 +0x01:  mov    %esp,%ebp
086372d7 +0x03:  sub    $0x18,%esp
086372da +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086372df +0x0b:  mov    %eax,(%esp)
086372e2 +0x0e:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
086372e7 +0x13:  movl   $0x6b,0x4(%esp)
086372ef +0x1b:  mov    %eax,(%esp)
086372f2 +0x1e:  call   08534322 <_ZN8WongWork17CItemGeneratorMgr12onTimerEventEi>  ; WongWork::CItemGeneratorMgr::onTimerEvent(int)
086372f7 +0x23:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086372fe +0x2a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08637303 +0x2f:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
08637308 +0x34:  mov    %eax,(%esp)
0863730b +0x37:  call   08637318 <_ZN33TimerUpdateItemGenerateStatistics15registNextTimerEl>  ; TimerUpdateItemGenerateStatistics::registNextTimer(long)
08637310 +0x3c:  mov    $0x1,%eax
08637315 +0x41:  leave
08637316 +0x42:  ret
08637317 +0x43:  nop
```

## 反编译 C

```c
// TimerUpdateItemGenerateStatistics::dispatch_sig @ 0x86372d4

/* TimerUpdateItemGenerateStatistics::dispatch_sig(int, int, unsigned int) */

undefined4 TimerUpdateItemGenerateStatistics::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CDataManager *this;
  CItemGeneratorMgr *this_00;
  int iVar1;
  
  this = (CDataManager *)G_CDataManager();
  this_00 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(this);
  WongWork::CItemGeneratorMgr::onTimerEvent(this_00,0x6b);
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  registNextTimer(iVar1 + 0x15180);
  return 1;
}
```
