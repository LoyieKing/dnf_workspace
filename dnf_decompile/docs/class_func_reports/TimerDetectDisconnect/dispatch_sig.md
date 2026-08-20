# dispatch_sig

`_ZN21TimerDetectDisconnect12dispatch_sigEiij`

`TimerDetectDisconnect::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerDetectDisconnect` | `0x086374bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086374bc  _ZN21TimerDetectDisconnect12dispatch_sigEiij
#           TimerDetectDisconnect::dispatch_sig(int, int, unsigned int)
# range [0x086374bc, 0x086374df]
086374bc +0x00:  push   %ebp
086374bd +0x01:  mov    %esp,%ebp
086374bf +0x03:  sub    $0x18,%esp
086374c2 +0x06:  call   082348df <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f89>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f89
086374c7 +0x0b:  mov    %eax,(%esp)
086374ca +0x0e:  call   084724b0 <_ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv>  ; disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect()
086374cf +0x13:  test   %al,%al
086374d1 +0x15:  je     086374d8 <+0x1c>
086374d3 +0x17:  call   086374e0 <_ZN21TimerDetectDisconnect15registNextTimerEv>  ; TimerDetectDisconnect::registNextTimer()
086374d8 +0x1c:  mov    $0x1,%eax
086374dd +0x21:  leave
086374de +0x22:  ret
086374df +0x23:  nop
```

## 反编译 C

```c
// TimerDetectDisconnect::dispatch_sig @ 0x86374bc

/* TimerDetectDisconnect::dispatch_sig(int, int, unsigned int) */

undefined4 TimerDetectDisconnect::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CDisconnectDetecter *this;
  
  this = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
  cVar1 = disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect(this);
  if (cVar1 != '\0') {
    registNextTimer();
  }
  return 1;
}
```
