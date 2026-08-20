# _ClearConnectP2PAbsolute

`_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PAbsoluteEi`

`pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute(int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e92c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e92c6  _ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PAbsoluteEi
#           pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute(int)
# range [0x082e92c6, 0x082e9357]
082e92c6 +0x00:  push   %ebp
082e92c7 +0x01:  mov    %esp,%ebp
082e92c9 +0x03:  sub    $0x28,%esp
082e92cc +0x06:  movl   $0x0,-0xc(%ebp)
082e92d3 +0x0d:  jmp    082e9346 <+0x80>
082e92d5 +0x0f:  mov    0xc(%ebp),%eax
082e92d8 +0x12:  cmp    -0xc(%ebp),%eax
082e92db +0x15:  je     082e9342 <+0x7c>
082e92dd +0x17:  mov    -0xc(%ebp),%eax
082e92e0 +0x1a:  mov    %eax,0x8(%esp)
082e92e4 +0x1e:  mov    0xc(%ebp),%eax
082e92e7 +0x21:  mov    %eax,0x4(%esp)
082e92eb +0x25:  mov    0x8(%ebp),%eax
082e92ee +0x28:  mov    %eax,(%esp)
082e92f1 +0x2b:  call   082e927e <_ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii>  ; pvp_assault::CAssaultPlace::_IsCannotConnectP2P(int, int)
082e92f6 +0x30:  test   %al,%al
082e92f8 +0x32:  je     082e9342 <+0x7c>
082e92fa +0x34:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e92ff +0x39:  mov    %eax,(%esp)
082e9302 +0x3c:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e9307 +0x41:  test   %al,%al
082e9309 +0x43:  je     082e9320 <+0x5a>
082e930b +0x45:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9310 +0x4a:  mov    %eax,(%esp)
082e9313 +0x4d:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082e9318 +0x52:  mov    %eax,(%esp)
082e931b +0x55:  call   082f08a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x624>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x624
082e9320 +0x5a:  movl   $0x0,0xc(%esp)
082e9328 +0x62:  movl   $0x1,0x8(%esp)
082e9330 +0x6a:  mov    -0xc(%ebp),%eax
082e9333 +0x6d:  mov    %eax,0x4(%esp)
082e9337 +0x71:  mov    0x8(%ebp),%eax
082e933a +0x74:  mov    %eax,(%esp)
082e933d +0x77:  call   082ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>  ; pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool)
082e9342 +0x7c:  addl   $0x1,-0xc(%ebp)
082e9346 +0x80:  cmpl   $0x7,-0xc(%ebp)
082e934a +0x84:  setle  %al
082e934d +0x87:  test   %al,%al
082e934f +0x89:  jne    082e92d5 <+0xf>
082e9351 +0x8b:  mov    $0x1,%eax
082e9356 +0x90:  leave
082e9357 +0x91:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute @ 0x82e92c6

/* pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute(int) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute(CAssaultPlace *this,int param_1)

{
  char cVar1;
  CPowerWarLog *this_00;
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (param_1 != local_10) {
      cVar1 = _IsCannotConnectP2P(this,param_1,local_10);
      if (cVar1 != '\0') {
        cVar1 = CPowerManager::IsPowerWarEventOn();
        if (cVar1 != '\0') {
          this_00 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
          CPowerWarLog::IncP2PBadCountSecede(this_00);
        }
        LeaveAssaultPlace(this,local_10,true,false);
      }
    }
  }
  return 1;
}
```
