# dispatch_sig

`_ZN24TimerCheckPowerWarAbuser12dispatch_sigEiij`

`TimerCheckPowerWarAbuser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCheckPowerWarAbuser` | `0x0863825c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863825c  _ZN24TimerCheckPowerWarAbuser12dispatch_sigEiij
#           TimerCheckPowerWarAbuser::dispatch_sig(int, int, unsigned int)
# range [0x0863825c, 0x08638293]
0863825c +0x00:  push   %ebp
0863825d +0x01:  mov    %esp,%ebp
0863825f +0x03:  sub    $0x18,%esp
08638262 +0x06:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08638267 +0x0b:  mov    %eax,(%esp)
0863826a +0x0e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
0863826f +0x13:  test   %al,%al
08638271 +0x15:  je     0863828c <+0x30>
08638273 +0x17:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08638278 +0x1c:  mov    %eax,(%esp)
0863827b +0x1f:  call   086cef36 <_ZN9GameWorld23OnBanAbuserFromPowerWarEv>  ; GameWorld::OnBanAbuserFromPowerWar()
08638280 +0x24:  movl   $0x3c,(%esp)
08638287 +0x2b:  call   08638294 <_ZN24TimerCheckPowerWarAbuser15registNextTimerEl>  ; TimerCheckPowerWarAbuser::registNextTimer(long)
0863828c +0x30:  mov    $0x1,%eax
08638291 +0x35:  leave
08638292 +0x36:  ret
08638293 +0x37:  nop
```

## 反编译 C

```c
// TimerCheckPowerWarAbuser::dispatch_sig @ 0x863825c

/* TimerCheckPowerWarAbuser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckPowerWarAbuser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  GameWorld *this;
  
  cVar1 = CPowerManager::IsPowerWarEventOn();
  if (cVar1 != '\0') {
    this = (GameWorld *)G_GameWorld();
    GameWorld::OnBanAbuserFromPowerWar(this);
    registNextTimer(0x3c);
  }
  return 1;
}
```
