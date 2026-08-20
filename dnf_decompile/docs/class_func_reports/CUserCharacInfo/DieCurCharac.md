# DieCurCharac

`_ZN15CUserCharacInfo12DieCurCharacEiP5CUser`

`CUserCharacInfo::DieCurCharac(int, CUser*)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864628e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864628e  _ZN15CUserCharacInfo12DieCurCharacEiP5CUser
#           CUserCharacInfo::DieCurCharac(int, CUser*)
# range [0x0864628e, 0x08646405]
0864628e +0x000:  push   %ebp
0864628f +0x001:  mov    %esp,%ebp
08646291 +0x003:  push   %esi
08646292 +0x004:  push   %ebx
08646293 +0x005:  sub    $0x20,%esp
08646296 +0x008:  mov    0x8(%ebp),%eax
08646299 +0x00b:  mov    0x10(%eax),%eax
0864629c +0x00e:  test   %eax,%eax
0864629e +0x010:  je     086463fe <+0x170>
086462a4 +0x016:  mov    0x8(%ebp),%eax
086462a7 +0x019:  mov    %eax,(%esp)
086462aa +0x01c:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
086462af +0x021:  mov    0x8(%ebp),%eax
086462b2 +0x024:  mov    0x10(%eax),%eax
086462b5 +0x027:  movb   $0x1,0xe66(%eax)
086462bc +0x02e:  mov    0x8(%ebp),%eax
086462bf +0x031:  mov    0x10(%eax),%ebx
086462c2 +0x034:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086462c9 +0x03b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086462ce +0x040:  mov    0x8(%ebp),%edx
086462d1 +0x043:  mov    0x10(%edx),%edx
086462d4 +0x046:  mov    0xe5d(%edx),%edx
086462da +0x04c:  sub    %edx,%eax
086462dc +0x04e:  mov    %eax,0xe61(%ebx)
086462e2 +0x054:  mov    0x8(%ebp),%eax
086462e5 +0x057:  mov    0x10(%eax),%ebx
086462e8 +0x05a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086462ef +0x061:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086462f4 +0x066:  add    0xc(%ebp),%eax
086462f7 +0x069:  mov    %eax,0xe5d(%ebx)
086462fd +0x06f:  movl   $0x0,-0x14(%ebp)
08646304 +0x076:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08646309 +0x07b:  mov    %eax,(%esp)
0864630c +0x07e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
08646311 +0x083:  test   %al,%al
08646313 +0x085:  jne    08646324 <+0x96>
08646315 +0x087:  mov    0x8(%ebp),%eax
08646318 +0x08a:  mov    %eax,(%esp)
0864631b +0x08d:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08646320 +0x092:  cmp    $0x7,%al
08646322 +0x094:  jne    0864632b <+0x9d>
08646324 +0x096:  mov    $0x1,%eax
08646329 +0x09b:  jmp    08646330 <+0xa2>
0864632b +0x09d:  mov    $0x0,%eax
08646330 +0x0a2:  test   %al,%al
08646332 +0x0a4:  je     0864636b <+0xdd>
08646334 +0x0a6:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08646339 +0x0ab:  mov    0x10(%ebp),%edx
0864633c +0x0ae:  mov    %edx,0x4(%esp)
08646340 +0x0b2:  mov    %eax,(%esp)
08646343 +0x0b5:  call   08480ec8 <_ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser>  ; CPowerManager::GetPowerWarResponPenalty(CUser*)
08646348 +0x0ba:  fstps  -0x10(%ebp)
0864634b +0x0bd:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08646350 +0x0c2:  mov    -0x10(%ebp),%edx
08646353 +0x0c5:  mov    %edx,0x8(%esp)
08646357 +0x0c9:  mov    0x10(%ebp),%edx
0864635a +0x0cc:  mov    %edx,0x4(%esp)
0864635e +0x0d0:  mov    %eax,(%esp)
08646361 +0x0d3:  call   08480e92 <_ZN13CPowerManager20GetPowerWarGhostTimeEP5CUserf>  ; CPowerManager::GetPowerWarGhostTime(CUser*, float)
08646366 +0x0d8:  mov    %eax,-0x14(%ebp)
08646369 +0x0db:  jmp    086463a0 <+0x112>
0864636b +0x0dd:  mov    0x10(%ebp),%eax
0864636e +0x0e0:  mov    %eax,(%esp)
08646371 +0x0e3:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
08646376 +0x0e8:  mov    %eax,%esi
08646378 +0x0ea:  mov    0x10(%ebp),%eax
0864637b +0x0ed:  mov    %eax,(%esp)
0864637e +0x0f0:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08646383 +0x0f5:  mov    %eax,%ebx
08646385 +0x0f7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864638a +0x0fc:  add    $0x68,%eax
0864638d +0x0ff:  mov    %esi,0x8(%esp)
08646391 +0x103:  mov    %ebx,0x4(%esp)
08646395 +0x107:  mov    %eax,(%esp)
08646398 +0x10a:  call   08a8c804 <_ZN21ServerParameterScript19getAssaultGhostTimeEii>  ; ServerParameterScript::getAssaultGhostTime(int, int)
0864639d +0x10f:  mov    %eax,-0x14(%ebp)
086463a0 +0x112:  mov    0x8(%ebp),%eax
086463a3 +0x115:  mov    %eax,(%esp)
086463a6 +0x118:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
086463ab +0x11d:  test   %al,%al
086463ad +0x11f:  je     086463bc <+0x12e>
086463af +0x121:  cmpl   $0x0,-0x14(%ebp)
086463b3 +0x125:  je     086463bc <+0x12e>
086463b5 +0x127:  mov    $0x1,%eax
086463ba +0x12c:  jmp    086463c1 <+0x133>
086463bc +0x12e:  mov    $0x0,%eax
086463c1 +0x133:  test   %al,%al
086463c3 +0x135:  je     086463fe <+0x170>
086463c5 +0x137:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086463cc +0x13e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086463d1 +0x143:  mov    %eax,-0xc(%ebp)
086463d4 +0x146:  mov    -0xc(%ebp),%eax
086463d7 +0x149:  mov    %eax,0x4(%esp)
086463db +0x14d:  mov    0x8(%ebp),%eax
086463de +0x150:  mov    %eax,(%esp)
086463e1 +0x153:  call   082f0c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x988
086463e6 +0x158:  mov    -0x14(%ebp),%eax
086463e9 +0x15b:  mov    -0xc(%ebp),%edx
086463ec +0x15e:  lea    (%edx,%eax,1),%eax
086463ef +0x161:  mov    %eax,0x4(%esp)
086463f3 +0x165:  mov    0x8(%ebp),%eax
086463f6 +0x168:  mov    %eax,(%esp)
086463f9 +0x16b:  call   0868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>  ; CUserCharacInfo::SetCurCharacChaosResponTime(int)
086463fe +0x170:  add    $0x20,%esp
08646401 +0x173:  pop    %ebx
08646402 +0x174:  pop    %esi
08646403 +0x175:  pop    %ebp
08646404 +0x176:  ret
08646405 +0x177:  nop
```

## 反编译 C

```c
// CUserCharacInfo::DieCurCharac @ 0x864628e

/* CUserCharacInfo::DieCurCharac(int, CUser*) */

void __thiscall CUserCharacInfo::DieCurCharac(CUserCharacInfo *this,int param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longdouble lVar6;
  int local_18;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(undefined1 *)(*(int *)(this + 0x10) + 0xe66) = 1;
    iVar5 = *(int *)(this + 0x10);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(int *)(iVar5 + 0xe61) = iVar3 - *(int *)(*(int *)(this + 0x10) + 0xe5d);
    iVar5 = *(int *)(this + 0x10);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(int *)(iVar5 + 0xe5d) = iVar3 + param_1;
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\0') && (cVar2 = getCurCharacVill(this), cVar2 != '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar6 = (longdouble)
              CPowerManager::GetPowerWarResponPenalty(GlobalData::s_power_manager,param_2);
      local_18 = CPowerManager::GetPowerWarGhostTime
                           (GlobalData::s_power_manager,param_2,(float)lVar6);
    }
    else {
      iVar5 = GetCurCharacChaosPoint((CUserCharacInfo *)param_2);
      iVar3 = get_charac_level((CUserCharacInfo *)param_2);
      iVar4 = G_CDataManager();
      local_18 = ServerParameterScript::getAssaultGhostTime
                           ((ServerParameterScript *)(iVar4 + 0x68),iVar3,iVar5);
    }
    cVar2 = IsCurCharacGhost(this);
    if ((cVar2 == '\0') || (local_18 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      SetCurCharacChaosDieTime(this,iVar5);
      SetCurCharacChaosResponTime(this,iVar5 + local_18);
    }
    return;
  }
  return;
}
```
