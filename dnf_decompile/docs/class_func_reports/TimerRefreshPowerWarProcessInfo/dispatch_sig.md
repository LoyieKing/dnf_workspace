# dispatch_sig

`_ZN31TimerRefreshPowerWarProcessInfo12dispatch_sigEiij`

`TimerRefreshPowerWarProcessInfo::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerRefreshPowerWarProcessInfo` | `0x086382d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086382d8  _ZN31TimerRefreshPowerWarProcessInfo12dispatch_sigEiij
#           TimerRefreshPowerWarProcessInfo::dispatch_sig(int, int, unsigned int)
# range [0x086382d8, 0x08638315]
086382d8 +0x00:  push   %ebp
086382d9 +0x01:  mov    %esp,%ebp
086382db +0x03:  sub    $0x18,%esp
086382de +0x06:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086382e3 +0x0b:  mov    %eax,(%esp)
086382e6 +0x0e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
086382eb +0x13:  test   %al,%al
086382ed +0x15:  je     0863830f <+0x37>
086382ef +0x17:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086382f4 +0x1c:  mov    %eax,(%esp)
086382f7 +0x1f:  call   086cedf4 <_ZN9GameWorld28OnRefreshPowerWarProcessInfoEv>  ; GameWorld::OnRefreshPowerWarProcessInfo()
086382fc +0x24:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08638301 +0x29:  mov    0xa658(%eax),%eax
08638307 +0x2f:  mov    %eax,(%esp)
0863830a +0x32:  call   08638316 <_ZN31TimerRefreshPowerWarProcessInfo15registNextTimerEl>  ; TimerRefreshPowerWarProcessInfo::registNextTimer(long)
0863830f +0x37:  mov    $0x1,%eax
08638314 +0x3c:  leave
08638315 +0x3d:  ret
```

## 反编译 C

```c
// TimerRefreshPowerWarProcessInfo::dispatch_sig @ 0x86382d8

/* TimerRefreshPowerWarProcessInfo::dispatch_sig(int, int, unsigned int) */

undefined4 TimerRefreshPowerWarProcessInfo::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  GameWorld *this;
  int iVar2;
  
  cVar1 = CPowerManager::IsPowerWarEventOn();
  if (cVar1 != '\0') {
    this = (GameWorld *)G_GameWorld();
    GameWorld::OnRefreshPowerWarProcessInfo(this);
    iVar2 = G_CDataManager();
    registNextTimer(*(long *)(iVar2 + 0xa658));
  }
  return 1;
}
```
