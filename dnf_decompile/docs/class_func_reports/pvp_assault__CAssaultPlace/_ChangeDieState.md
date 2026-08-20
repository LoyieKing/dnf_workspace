# _ChangeDieState

`_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi`

`pvp_assault::CAssaultPlace::_ChangeDieState(int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ebaf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ebaf8  _ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi
#           pvp_assault::CAssaultPlace::_ChangeDieState(int)
# range [0x082ebaf8, 0x082ebb9b]
082ebaf8 +0x00:  push   %ebp
082ebaf9 +0x01:  mov    %esp,%ebp
082ebafb +0x03:  sub    $0x18,%esp
082ebafe +0x06:  mov    0xc(%ebp),%eax
082ebb01 +0x09:  shl    $0x5,%eax
082ebb04 +0x0c:  add    0x8(%ebp),%eax
082ebb07 +0x0f:  movl   $0x6,0x4(%esp)
082ebb0f +0x17:  mov    %eax,(%esp)
082ebb12 +0x1a:  call   082f057c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x300>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x300
082ebb17 +0x1f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
082ebb1c +0x24:  movl   $0x20,0x4(%esp)
082ebb24 +0x2c:  mov    %eax,(%esp)
082ebb27 +0x2f:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
082ebb2c +0x34:  mov    (%eax),%edx
082ebb2e +0x36:  add    $0x34,%edx
082ebb31 +0x39:  mov    (%edx),%edx
082ebb33 +0x3b:  movl   $0x0,0x4(%esp)
082ebb3b +0x43:  mov    %eax,(%esp)
082ebb3e +0x46:  call   *%edx
082ebb40 +0x48:  test   %al,%al
082ebb42 +0x4a:  jne    082ebb98 <+0xa0>
082ebb44 +0x4c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ebb49 +0x51:  mov    %eax,(%esp)
082ebb4c +0x54:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ebb51 +0x59:  xor    $0x1,%eax
082ebb54 +0x5c:  test   %al,%al
082ebb56 +0x5e:  jne    082ebb75 <+0x7d>
082ebb58 +0x60:  mov    0xc(%ebp),%eax
082ebb5b +0x63:  shl    $0x5,%eax
082ebb5e +0x66:  add    0x8(%ebp),%eax
082ebb61 +0x69:  mov    %eax,(%esp)
082ebb64 +0x6c:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ebb69 +0x71:  mov    %eax,(%esp)
082ebb6c +0x74:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ebb71 +0x79:  cmp    $0x7,%al
082ebb73 +0x7b:  je     082ebb7c <+0x84>
082ebb75 +0x7d:  mov    $0x1,%eax
082ebb7a +0x82:  jmp    082ebb81 <+0x89>
082ebb7c +0x84:  mov    $0x0,%eax
082ebb81 +0x89:  test   %al,%al
082ebb83 +0x8b:  je     082ebb99 <+0xa1>
082ebb85 +0x8d:  mov    0xc(%ebp),%eax
082ebb88 +0x90:  shl    $0x5,%eax
082ebb8b +0x93:  add    0x8(%ebp),%eax
082ebb8e +0x96:  mov    %eax,(%esp)
082ebb91 +0x99:  call   082e6a40 <_ZN11pvp_assault10CAssaulter7DieUserEv>  ; pvp_assault::CAssaulter::DieUser()
082ebb96 +0x9e:  jmp    082ebb99 <+0xa1>
082ebb98 +0xa0:  nop
082ebb99 +0xa1:  leave
082ebb9a +0xa2:  ret
082ebb9b +0xa3:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_ChangeDieState @ 0x82ebaf8

/* pvp_assault::CAssaultPlace::_ChangeDieState(int) */

void __thiscall pvp_assault::CAssaultPlace::_ChangeDieState(CAssaultPlace *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  CUserCharacInfo *this_00;
  
  CAssaulter::SetState((CAssaulter *)(this + param_1 * 0x20),6);
  piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x20);
  cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 == '\x01') {
    this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
    cVar2 = CUserCharacInfo::getCurCharacVill(this_00);
    if (cVar2 == '\a') {
      bVar1 = false;
      goto LAB_082ebb81;
    }
  }
  bVar1 = true;
LAB_082ebb81:
  if (bVar1) {
    CAssaulter::DieUser((CAssaulter *)(this + param_1 * 0x20));
  }
  return;
}
```
