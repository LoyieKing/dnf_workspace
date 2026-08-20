# dispatch_sig

`_ZN14Timer_Midnight12dispatch_sigEiij`

`Timer_Midnight::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_Midnight` | `0x08639512` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639512  _ZN14Timer_Midnight12dispatch_sigEiij
#           Timer_Midnight::dispatch_sig(int, int, unsigned int)
# range [0x08639512, 0x08639553]
08639512 +0x00:  push   %ebp
08639513 +0x01:  mov    %esp,%ebp
08639515 +0x03:  sub    $0x28,%esp
08639518 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863951d +0x0b:  mov    %eax,(%esp)
08639520 +0x0e:  call   086cc340 <_ZN9GameWorld13ResetMidnightEv>  ; GameWorld::ResetMidnight()
08639525 +0x13:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%eax
0863952a +0x18:  mov    %eax,(%esp)
0863952d +0x1b:  call   08588c5c <_ZN18online_preliminary25COnlinePreliminaryTeamMgr18ResetDailyMidnightEv>  ; online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight()
08639532 +0x20:  call   08639554 <_ZN14Timer_Midnight15RegistNextTimerEv>  ; Timer_Midnight::RegistNextTimer()
08639537 +0x25:  mov    %al,-0x9(%ebp)
0863953a +0x28:  movzbl -0x9(%ebp),%eax
0863953e +0x2c:  xor    $0x1,%eax
08639541 +0x2f:  test   %al,%al
08639543 +0x31:  je     0863954c <+0x3a>
08639545 +0x33:  mov    $0x0,%eax
0863954a +0x38:  jmp    08639551 <+0x3f>
0863954c +0x3a:  mov    $0x1,%eax
08639551 +0x3f:  leave
08639552 +0x40:  ret
08639553 +0x41:  nop
```

## 反编译 C

```c
// Timer_Midnight::dispatch_sig @ 0x8639512

/* Timer_Midnight::dispatch_sig(int, int, unsigned int) */

bool Timer_Midnight::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  
  G_GameWorld();
  GameWorld::ResetMidnight();
  online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight();
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}
```
