# dispatch_sig

`_ZN32TimerStatisticsDetailChannelInfo12dispatch_sigEiij`

`TimerStatisticsDetailChannelInfo::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerStatisticsDetailChannelInfo` | `0x0863575c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863575c  _ZN32TimerStatisticsDetailChannelInfo12dispatch_sigEiij
#           TimerStatisticsDetailChannelInfo::dispatch_sig(int, int, unsigned int)
# range [0x0863575c, 0x08635781]
0863575c +0x00:  push   %ebp
0863575d +0x01:  mov    %esp,%ebp
0863575f +0x03:  sub    $0x18,%esp
08635762 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08635767 +0x0b:  mov    %eax,(%esp)
0863576a +0x0e:  call   086cb17c <_ZN9GameWorld30updateDetailChannelServiceInfoEv>  ; GameWorld::updateDetailChannelServiceInfo()
0863576f +0x13:  mov    0x8(%ebp),%eax
08635772 +0x16:  mov    %eax,(%esp)
08635775 +0x19:  call   08635782 <_ZN32TimerStatisticsDetailChannelInfo15RegistNextTimerEv>  ; TimerStatisticsDetailChannelInfo::RegistNextTimer()
0863577a +0x1e:  mov    $0x1,%eax
0863577f +0x23:  leave
08635780 +0x24:  ret
08635781 +0x25:  nop
```

## 反编译 C

```c
// TimerStatisticsDetailChannelInfo::dispatch_sig @ 0x863575c

/* TimerStatisticsDetailChannelInfo::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStatisticsDetailChannelInfo::dispatch_sig(int param_1,int param_2,uint param_3)

{
  G_GameWorld();
  GameWorld::updateDetailChannelServiceInfo();
  RegistNextTimer();
  return 1;
}
```
