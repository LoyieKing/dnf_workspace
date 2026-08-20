# dispatch_sig

`_ZN30TimerDeathTowerTopRankerReload12dispatch_sigEiij`

`TimerDeathTowerTopRankerReload::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerDeathTowerTopRankerReload` | `0x08637816` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637816  _ZN30TimerDeathTowerTopRankerReload12dispatch_sigEiij
#           TimerDeathTowerTopRankerReload::dispatch_sig(int, int, unsigned int)
# range [0x08637816, 0x08637853]
08637816 +0x00:  push   %ebp
08637817 +0x01:  mov    %esp,%ebp
08637819 +0x03:  sub    $0x18,%esp
0863781c +0x06:  movl   $0x0,(%esp)
08637823 +0x0d:  call   0842a910 <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb>  ; DB_DeathTowerLoadTopRanker::makeRequest(bool)
08637828 +0x12:  movl   $0x1,(%esp)
0863782f +0x19:  call   0842a910 <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb>  ; DB_DeathTowerLoadTopRanker::makeRequest(bool)
08637834 +0x1e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0863783b +0x25:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08637840 +0x2a:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
08637845 +0x2f:  mov    %eax,(%esp)
08637848 +0x32:  call   08637854 <_ZN30TimerDeathTowerTopRankerReload15registNextTimerEl>  ; TimerDeathTowerTopRankerReload::registNextTimer(long)
0863784d +0x37:  mov    $0x1,%eax
08637852 +0x3c:  leave
08637853 +0x3d:  ret
```

## 反编译 C

```c
// TimerDeathTowerTopRankerReload::dispatch_sig @ 0x8637816

/* TimerDeathTowerTopRankerReload::dispatch_sig(int, int, unsigned int) */

undefined4 TimerDeathTowerTopRankerReload::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  DB_DeathTowerLoadTopRanker::makeRequest(false);
  DB_DeathTowerLoadTopRanker::makeRequest(true);
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  registNextTimer(iVar1 + 0x15180);
  return 1;
}
```
