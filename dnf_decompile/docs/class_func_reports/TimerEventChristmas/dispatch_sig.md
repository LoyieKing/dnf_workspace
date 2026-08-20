# dispatch_sig

`_ZN19TimerEventChristmas12dispatch_sigEiij`

`TimerEventChristmas::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerEventChristmas` | `0x0863570a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863570a  _ZN19TimerEventChristmas12dispatch_sigEiij
#           TimerEventChristmas::dispatch_sig(int, int, unsigned int)
# range [0x0863570a, 0x0863575b]
0863570a +0x00:  push   %ebp
0863570b +0x01:  mov    %esp,%ebp
0863570d +0x03:  sub    $0x18,%esp
08635710 +0x06:  mov    0x10(%ebp),%eax
08635713 +0x09:  mov    %eax,(%esp)
08635716 +0x0c:  call   0863bc70 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x181>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x181
0863571b +0x11:  mov    0x14(%ebp),%eax
0863571e +0x14:  mov    %eax,(%esp)
08635721 +0x17:  call   0863bc87 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x198>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x198
08635726 +0x1c:  mov    0x14(%ebp),%eax
08635729 +0x1f:  mov    %eax,(%esp)
0863572c +0x22:  call   084e9294 <_GLOBAL__I__Z7getUserj+0x246>  ; global constructors keyed to getUser(unsigned int)+0x246
08635731 +0x27:  movswl %ax,%edx
08635734 +0x2a:  mov    0x14(%ebp),%eax
08635737 +0x2d:  cwtl
08635738 +0x2e:  movl   $0x0,0xc(%esp)
08635740 +0x36:  mov    %edx,0x8(%esp)
08635744 +0x3a:  mov    %eax,0x4(%esp)
08635748 +0x3e:  movl   $0x0,(%esp)
0863574f +0x45:  call   084cf2de <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser>  ; Inter_MonitorServerEventStart::SendEventNotiPacket(bool, short, short, CUser*)
08635754 +0x4a:  mov    $0x1,%eax
08635759 +0x4f:  leave
0863575a +0x50:  ret
0863575b +0x51:  nop
```

## 反编译 C

```c
// TimerEventChristmas::dispatch_sig @ 0x863570a

/* TimerEventChristmas::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerEventChristmas::dispatch_sig(TimerEventChristmas *this,int param_1,int param_2,uint param_3)

{
  short sVar1;
  
  CServerEvent::SubExpRate(param_2);
  CServerEvent::TurnOffEvent(param_3);
  sVar1 = CServerEvent::GetEventInterval(param_3);
  Inter_MonitorServerEventStart::SendEventNotiPacket(false,(short)param_3,sVar1,(CUser *)0x0);
  return 1;
}
```
