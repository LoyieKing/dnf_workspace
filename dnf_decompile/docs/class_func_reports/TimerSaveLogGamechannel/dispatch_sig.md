# dispatch_sig

`_ZN23TimerSaveLogGamechannel12dispatch_sigEiij`

`TimerSaveLogGamechannel::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerSaveLogGamechannel` | `0x08635a2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635a2c  _ZN23TimerSaveLogGamechannel12dispatch_sigEiij
#           TimerSaveLogGamechannel::dispatch_sig(int, int, unsigned int)
# range [0x08635a2c, 0x08635a5f]
08635a2c +0x00:  push   %ebp
08635a2d +0x01:  mov    %esp,%ebp
08635a2f +0x03:  sub    $0x18,%esp
08635a32 +0x06:  mov    &_ZN10GlobalData17s_pLogGameChannelE,%eax
08635a37 +0x0b:  mov    %eax,(%esp)
08635a3a +0x0e:  call   08550456 <_ZN8WongWork15CLogGameChannel10ReqSaveLogEv>  ; WongWork::CLogGameChannel::ReqSaveLog()
08635a3f +0x13:  mov    &_ZN10GlobalData17s_pLogGameChannelE,%eax
08635a44 +0x18:  mov    %eax,(%esp)
08635a47 +0x1b:  call   085506c6 <_ZN8WongWork15CLogGameChannel14ResetInOutUserEv>  ; WongWork::CLogGameChannel::ResetInOutUser()
08635a4c +0x20:  mov    &_ZN10GlobalData17s_pLogGameChannelE,%eax
08635a51 +0x25:  mov    %eax,(%esp)
08635a54 +0x28:  call   085503fe <_ZN8WongWork15CLogGameChannel15SetNextLogTimerEv>  ; WongWork::CLogGameChannel::SetNextLogTimer()
08635a59 +0x2d:  mov    $0x1,%eax
08635a5e +0x32:  leave
08635a5f +0x33:  ret
```

## 反编译 C

```c
// TimerSaveLogGamechannel::dispatch_sig @ 0x8635a2c

/* TimerSaveLogGamechannel::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSaveLogGamechannel::dispatch_sig(int param_1,int param_2,uint param_3)

{
  WongWork::CLogGameChannel::ReqSaveLog(GlobalData::s_pLogGameChannel);
  WongWork::CLogGameChannel::ResetInOutUser(GlobalData::s_pLogGameChannel);
  WongWork::CLogGameChannel::SetNextLogTimer(GlobalData::s_pLogGameChannel);
  return 1;
}
```
