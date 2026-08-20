# ProcPremiumFatigue

`_ZN5CUser18ProcPremiumFatigueEv`

`CUser::ProcPremiumFatigue()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867cbe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867cbe4  _ZN5CUser18ProcPremiumFatigueEv
#           CUser::ProcPremiumFatigue()
# range [0x0867cbe4, 0x0867cd1f]
0867cbe4 +0x000:  push   %ebp
0867cbe5 +0x001:  mov    %esp,%ebp
0867cbe7 +0x003:  push   %ebx
0867cbe8 +0x004:  sub    $0x14,%esp
0867cbeb +0x007:  mov    0x8(%ebp),%eax
0867cbee +0x00a:  mov    %eax,(%esp)
0867cbf1 +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867cbf6 +0x012:  test   %eax,%eax
0867cbf8 +0x014:  sete   %al
0867cbfb +0x017:  test   %al,%al
0867cbfd +0x019:  jne    0867cd18 <+0x134>
0867cc03 +0x01f:  mov    0x8(%ebp),%eax
0867cc06 +0x022:  mov    %eax,(%esp)
0867cc09 +0x025:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
0867cc0e +0x02a:  test   %al,%al
0867cc10 +0x02c:  je     0867cd19 <+0x135>
0867cc16 +0x032:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0867cc1b +0x037:  movl   $0x57,0x4(%esp)
0867cc23 +0x03f:  mov    %eax,(%esp)
0867cc26 +0x042:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0867cc2b +0x047:  mov    (%eax),%edx
0867cc2d +0x049:  add    $0x34,%edx
0867cc30 +0x04c:  mov    (%edx),%edx
0867cc32 +0x04e:  movl   $0x0,0x4(%esp)
0867cc3a +0x056:  mov    %eax,(%esp)
0867cc3d +0x059:  call   *%edx
0867cc3f +0x05b:  test   %al,%al
0867cc41 +0x05d:  je     0867cc6e <+0x8a>
0867cc43 +0x05f:  mov    0x8(%ebp),%eax
0867cc46 +0x062:  add    $0x7121c,%eax
0867cc4b +0x067:  mov    %eax,(%esp)
0867cc4e +0x06a:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
0867cc53 +0x06f:  test   %ax,%ax
0867cc56 +0x072:  je     0867cc6e <+0x8a>
0867cc58 +0x074:  mov    0x8(%ebp),%eax
0867cc5b +0x077:  mov    %eax,(%esp)
0867cc5e +0x07a:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
0867cc63 +0x07f:  test   %eax,%eax
0867cc65 +0x081:  je     0867cc6e <+0x8a>
0867cc67 +0x083:  mov    $0x1,%eax
0867cc6c +0x088:  jmp    0867cc73 <+0x8f>
0867cc6e +0x08a:  mov    $0x0,%eax
0867cc73 +0x08f:  test   %al,%al
0867cc75 +0x091:  je     0867ccd0 <+0xec>
0867cc77 +0x093:  mov    0x8(%ebp),%eax
0867cc7a +0x096:  add    $0x7121c,%eax
0867cc7f +0x09b:  mov    %eax,(%esp)
0867cc82 +0x09e:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
0867cc87 +0x0a3:  movzwl %ax,%edx
0867cc8a +0x0a6:  mov    &DEFAULT_MAX_FATIGUE,%eax
0867cc8f +0x0ab:  mov    %edx,%ecx
0867cc91 +0x0ad:  imul   %eax,%ecx
0867cc94 +0x0b0:  mov    $0x51eb851f,%edx
0867cc99 +0x0b5:  mov    %ecx,%eax
0867cc9b +0x0b7:  imul   %edx
0867cc9d +0x0b9:  sar    $0x5,%edx
0867cca0 +0x0bc:  mov    %ecx,%eax
0867cca2 +0x0be:  sar    $0x1f,%eax
0867cca5 +0x0c1:  mov    %edx,%ecx
0867cca7 +0x0c3:  sub    %eax,%ecx
0867cca9 +0x0c5:  mov    %ecx,%eax
0867ccab +0x0c7:  mov    %eax,%ebx
0867ccad +0x0c9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867ccb2 +0x0ce:  movzwl 0x51c(%eax),%eax
0867ccb9 +0x0d5:  lea    (%ebx,%eax,1),%eax
0867ccbc +0x0d8:  movzwl %ax,%edx
0867ccbf +0x0db:  mov    0x8(%ebp),%eax
0867ccc2 +0x0de:  mov    %edx,0x4(%esp)
0867ccc6 +0x0e2:  mov    %eax,(%esp)
0867ccc9 +0x0e5:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
0867ccce +0x0ea:  jmp    0867cd19 <+0x135>
0867ccd0 +0x0ec:  mov    0x8(%ebp),%eax
0867ccd3 +0x0ef:  add    $0x7121c,%eax
0867ccd8 +0x0f4:  mov    %eax,(%esp)
0867ccdb +0x0f7:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
0867cce0 +0x0fc:  movzwl %ax,%edx
0867cce3 +0x0ff:  mov    &DEFAULT_MAX_FATIGUE,%eax
0867cce8 +0x104:  mov    %edx,%ecx
0867ccea +0x106:  imul   %eax,%ecx
0867cced +0x109:  mov    $0x51eb851f,%edx
0867ccf2 +0x10e:  mov    %ecx,%eax
0867ccf4 +0x110:  imul   %edx
0867ccf6 +0x112:  sar    $0x5,%edx
0867ccf9 +0x115:  mov    %ecx,%eax
0867ccfb +0x117:  sar    $0x1f,%eax
0867ccfe +0x11a:  mov    %edx,%ecx
0867cd00 +0x11c:  sub    %eax,%ecx
0867cd02 +0x11e:  mov    %ecx,%eax
0867cd04 +0x120:  movzwl %ax,%edx
0867cd07 +0x123:  mov    0x8(%ebp),%eax
0867cd0a +0x126:  mov    %edx,0x4(%esp)
0867cd0e +0x12a:  mov    %eax,(%esp)
0867cd11 +0x12d:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
0867cd16 +0x132:  jmp    0867cd19 <+0x135>
0867cd18 +0x134:  nop
0867cd19 +0x135:  add    $0x14,%esp
0867cd1c +0x138:  pop    %ebx
0867cd1d +0x139:  pop    %ebp
0867cd1e +0x13a:  ret
0867cd1f +0x13b:  nop
```

## 反编译 C

```c
// CUser::ProcPremiumFatigue @ 0x867cbe4

/* CUser::ProcPremiumFatigue() */

void __thiscall CUser::ProcPremiumFatigue(CUser *this)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar4 == 0) {
    return;
  }
  cVar2 = IsHavePremiumAdvantage(this);
  if (cVar2 != '\0') {
    piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x57);
    cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
    if (((cVar2 == '\0') ||
        (sVar3 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c)),
        sVar3 == 0)) || (iVar4 = GetPCRoomNo(this), iVar4 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar6 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
      iVar7 = (uVar6 & 0xffff) * DEFAULT_MAX_FATIGUE;
      iVar4 = G_CDataManager();
      CUserCharacInfo::setCurCharacMaxPremiumFatigue
                ((CUserCharacInfo *)this,(short)(iVar7 / 100) + *(short *)(iVar4 + 0x51c));
    }
    else {
      uVar6 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
      CUserCharacInfo::setCurCharacMaxPremiumFatigue
                ((CUserCharacInfo *)this,
                 (ushort)((int)((uVar6 & 0xffff) * DEFAULT_MAX_FATIGUE) / 100));
    }
    return;
  }
  return;
}
```
