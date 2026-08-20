# SendFatigueEvent

`_ZN16CLocalChina_User16SendFatigueEventEv`

`CLocalChina_User::SendFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CLocalChina_User` | `0x0812ca88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812ca88  _ZN16CLocalChina_User16SendFatigueEventEv
#           CLocalChina_User::SendFatigueEvent()
# range [0x0812ca88, 0x0812cd43]
0812ca88 +0x000:  push   %ebp
0812ca89 +0x001:  mov    %esp,%ebp
0812ca8b +0x003:  push   %esi
0812ca8c +0x004:  push   %ebx
0812ca8d +0x005:  sub    $0x30,%esp
0812ca90 +0x008:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0812ca95 +0x00d:  movl   $0x2,0x4(%esp)
0812ca9d +0x015:  mov    %eax,(%esp)
0812caa0 +0x018:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0812caa5 +0x01d:  mov    %eax,-0x18(%ebp)
0812caa8 +0x020:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0812caad +0x025:  lea    0x134(%eax),%edx
0812cab3 +0x02b:  lea    -0x24(%ebp),%eax
0812cab6 +0x02e:  mov    %edx,0x4(%esp)
0812caba +0x032:  mov    %eax,(%esp)
0812cabd +0x035:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
0812cac2 +0x03a:  sub    $0x4,%esp
0812cac5 +0x03d:  jmp    0812cd03 <+0x27b>
0812caca +0x042:  lea    -0x24(%ebp),%eax
0812cacd +0x045:  mov    %eax,(%esp)
0812cad0 +0x048:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
0812cad5 +0x04d:  mov    0x4(%eax),%eax
0812cad8 +0x050:  mov    %eax,-0x14(%ebp)
0812cadb +0x053:  mov    -0x14(%ebp),%eax
0812cade +0x056:  mov    %eax,(%esp)
0812cae1 +0x059:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0812cae6 +0x05e:  cmp    $0x2,%eax
0812cae9 +0x061:  setg   %al
0812caec +0x064:  test   %al,%al
0812caee +0x066:  je     0812cce6 <+0x25e>
0812caf4 +0x06c:  cmpl   $0x0,-0x18(%ebp)
0812caf8 +0x070:  je     0812cb76 <+0xee>
0812cafa +0x072:  mov    -0x14(%ebp),%eax
0812cafd +0x075:  mov    %eax,(%esp)
0812cb00 +0x078:  call   0812cdbe <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x3a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x3a
0812cb05 +0x07d:  mov    %eax,-0x10(%ebp)
0812cb08 +0x080:  cmpl   $0x0,-0x10(%ebp)
0812cb0c +0x084:  je     0812cce5 <+0x25d>
0812cb12 +0x08a:  mov    -0x18(%ebp),%eax
0812cb15 +0x08d:  mov    (%eax),%eax
0812cb17 +0x08f:  add    $0x34,%eax
0812cb1a +0x092:  mov    (%eax),%edx
0812cb1c +0x094:  mov    -0x18(%ebp),%eax
0812cb1f +0x097:  movl   $0x0,0x4(%esp)
0812cb27 +0x09f:  mov    %eax,(%esp)
0812cb2a +0x0a2:  call   *%edx
0812cb2c +0x0a4:  test   %al,%al
0812cb2e +0x0a6:  je     0812cb68 <+0xe0>
0812cb30 +0x0a8:  mov    -0x18(%ebp),%eax
0812cb33 +0x0ab:  mov    %eax,(%esp)
0812cb36 +0x0ae:  call   0812ce54 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xd0>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xd0
0812cb3b +0x0b3:  mov    &DEFAULT_MAX_FATIGUE,%edx
0812cb41 +0x0b9:  mov    %eax,%ecx
0812cb43 +0x0bb:  imul   %edx,%ecx
0812cb46 +0x0be:  mov    $0x51eb851f,%edx
0812cb4b +0x0c3:  mov    %ecx,%eax
0812cb4d +0x0c5:  imul   %edx
0812cb4f +0x0c7:  sar    $0x5,%edx
0812cb52 +0x0ca:  mov    %ecx,%eax
0812cb54 +0x0cc:  sar    $0x1f,%eax
0812cb57 +0x0cf:  mov    %edx,%ecx
0812cb59 +0x0d1:  sub    %eax,%ecx
0812cb5b +0x0d3:  mov    %ecx,%eax
0812cb5d +0x0d5:  mov    %eax,%edx
0812cb5f +0x0d7:  mov    -0x10(%ebp),%eax
0812cb62 +0x0da:  mov    %dx,0x35(%eax)
0812cb66 +0x0de:  jmp    0812cb76 <+0xee>
0812cb68 +0x0e0:  mov    &DEFAULT_MAX_FATIGUE,%eax
0812cb6d +0x0e5:  mov    %eax,%edx
0812cb6f +0x0e7:  mov    -0x10(%ebp),%eax
0812cb72 +0x0ea:  mov    %dx,0x35(%eax)
0812cb76 +0x0ee:  mov    -0x14(%ebp),%eax
0812cb79 +0x0f1:  mov    %eax,(%esp)
0812cb7c +0x0f4:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
0812cb81 +0x0f9:  test   %al,%al
0812cb83 +0x0fb:  je     0812ccd8 <+0x250>
0812cb89 +0x101:  cmpl   $0x0,-0x18(%ebp)
0812cb8d +0x105:  je     0812cbb4 <+0x12c>
0812cb8f +0x107:  mov    -0x18(%ebp),%eax
0812cb92 +0x10a:  mov    (%eax),%eax
0812cb94 +0x10c:  add    $0x34,%eax
0812cb97 +0x10f:  mov    (%eax),%edx
0812cb99 +0x111:  mov    -0x18(%ebp),%eax
0812cb9c +0x114:  movl   $0x0,0x4(%esp)
0812cba4 +0x11c:  mov    %eax,(%esp)
0812cba7 +0x11f:  call   *%edx
0812cba9 +0x121:  test   %al,%al
0812cbab +0x123:  je     0812cbb4 <+0x12c>
0812cbad +0x125:  mov    $0x1,%eax
0812cbb2 +0x12a:  jmp    0812cbb9 <+0x131>
0812cbb4 +0x12c:  mov    $0x0,%eax
0812cbb9 +0x131:  test   %al,%al
0812cbbb +0x133:  je     0812cc86 <+0x1fe>
0812cbc1 +0x139:  mov    -0x18(%ebp),%eax
0812cbc4 +0x13c:  mov    %eax,(%esp)
0812cbc7 +0x13f:  call   0812ce54 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xd0>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xd0
0812cbcc +0x144:  mov    &DEFAULT_MAX_FATIGUE,%edx
0812cbd2 +0x14a:  mov    %eax,%ecx
0812cbd4 +0x14c:  imul   %edx,%ecx
0812cbd7 +0x14f:  mov    $0x51eb851f,%edx
0812cbdc +0x154:  mov    %ecx,%eax
0812cbde +0x156:  imul   %edx
0812cbe0 +0x158:  sar    $0x5,%edx
0812cbe3 +0x15b:  mov    %ecx,%eax
0812cbe5 +0x15d:  sar    $0x1f,%eax
0812cbe8 +0x160:  mov    %edx,%ecx
0812cbea +0x162:  sub    %eax,%ecx
0812cbec +0x164:  mov    %ecx,%eax
0812cbee +0x166:  mov    %eax,%edx
0812cbf0 +0x168:  mov    &DEFAULT_MAX_FATIGUE,%eax
0812cbf5 +0x16d:  mov    %edx,%ecx
0812cbf7 +0x16f:  sub    %ax,%cx
0812cbfa +0x172:  mov    %ecx,%eax
0812cbfc +0x174:  mov    %ax,-0xa(%ebp)
0812cc00 +0x178:  mov    -0x14(%ebp),%eax
0812cc03 +0x17b:  mov    %eax,(%esp)
0812cc06 +0x17e:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
0812cc0b +0x183:  mov    %eax,(%esp)
0812cc0e +0x186:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
0812cc13 +0x18b:  movzwl %ax,%edx
0812cc16 +0x18e:  mov    &DEFAULT_MAX_FATIGUE,%eax
0812cc1b +0x193:  mov    %edx,%ecx
0812cc1d +0x195:  imul   %eax,%ecx
0812cc20 +0x198:  mov    $0x51eb851f,%edx
0812cc25 +0x19d:  mov    %ecx,%eax
0812cc27 +0x19f:  imul   %edx
0812cc29 +0x1a1:  sar    $0x5,%edx
0812cc2c +0x1a4:  mov    %ecx,%eax
0812cc2e +0x1a6:  sar    $0x1f,%eax
0812cc31 +0x1a9:  mov    %edx,%ecx
0812cc33 +0x1ab:  sub    %eax,%ecx
0812cc35 +0x1ad:  mov    %ecx,%eax
0812cc37 +0x1af:  mov    %eax,%ebx
0812cc39 +0x1b1:  movzwl -0xa(%ebp),%esi
0812cc3d +0x1b5:  mov    -0x14(%ebp),%eax
0812cc40 +0x1b8:  mov    %eax,(%esp)
0812cc43 +0x1bb:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
0812cc48 +0x1c0:  mov    %eax,(%esp)
0812cc4b +0x1c3:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
0812cc50 +0x1c8:  movzwl %ax,%eax
0812cc53 +0x1cb:  mov    %esi,%ecx
0812cc55 +0x1cd:  imul   %eax,%ecx
0812cc58 +0x1d0:  mov    $0x51eb851f,%edx
0812cc5d +0x1d5:  mov    %ecx,%eax
0812cc5f +0x1d7:  imul   %edx
0812cc61 +0x1d9:  sar    $0x5,%edx
0812cc64 +0x1dc:  mov    %ecx,%eax
0812cc66 +0x1de:  sar    $0x1f,%eax
0812cc69 +0x1e1:  mov    %edx,%ecx
0812cc6b +0x1e3:  sub    %eax,%ecx
0812cc6d +0x1e5:  mov    %ecx,%eax
0812cc6f +0x1e7:  lea    (%ebx,%eax,1),%eax
0812cc72 +0x1ea:  movzwl %ax,%edx
0812cc75 +0x1ed:  mov    -0x14(%ebp),%eax
0812cc78 +0x1f0:  mov    %edx,0x4(%esp)
0812cc7c +0x1f4:  mov    %eax,(%esp)
0812cc7f +0x1f7:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
0812cc84 +0x1fc:  jmp    0812ccd8 <+0x250>
0812cc86 +0x1fe:  mov    -0x14(%ebp),%eax
0812cc89 +0x201:  mov    %eax,(%esp)
0812cc8c +0x204:  call   0812cdd6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x52>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x52
0812cc91 +0x209:  movzwl %ax,%ebx
0812cc94 +0x20c:  mov    -0x14(%ebp),%eax
0812cc97 +0x20f:  mov    %eax,(%esp)
0812cc9a +0x212:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
0812cc9f +0x217:  mov    %eax,(%esp)
0812cca2 +0x21a:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
0812cca7 +0x21f:  movzwl %ax,%eax
0812ccaa +0x222:  mov    %ebx,%ecx
0812ccac +0x224:  imul   %eax,%ecx
0812ccaf +0x227:  mov    $0x51eb851f,%edx
0812ccb4 +0x22c:  mov    %ecx,%eax
0812ccb6 +0x22e:  imul   %edx
0812ccb8 +0x230:  sar    $0x5,%edx
0812ccbb +0x233:  mov    %ecx,%eax
0812ccbd +0x235:  sar    $0x1f,%eax
0812ccc0 +0x238:  mov    %edx,%ecx
0812ccc2 +0x23a:  sub    %eax,%ecx
0812ccc4 +0x23c:  mov    %ecx,%eax
0812ccc6 +0x23e:  movzwl %ax,%edx
0812ccc9 +0x241:  mov    -0x14(%ebp),%eax
0812cccc +0x244:  mov    %edx,0x4(%esp)
0812ccd0 +0x248:  mov    %eax,(%esp)
0812ccd3 +0x24b:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
0812ccd8 +0x250:  mov    -0x14(%ebp),%eax
0812ccdb +0x253:  mov    %eax,(%esp)
0812ccde +0x256:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0812cce3 +0x25b:  jmp    0812cce6 <+0x25e>
0812cce5 +0x25d:  nop
0812cce6 +0x25e:  lea    -0x1c(%ebp),%eax
0812cce9 +0x261:  movl   $0x0,0x8(%esp)
0812ccf1 +0x269:  lea    -0x24(%ebp),%edx
0812ccf4 +0x26c:  mov    %edx,0x4(%esp)
0812ccf8 +0x270:  mov    %eax,(%esp)
0812ccfb +0x273:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
0812cd00 +0x278:  sub    $0x4,%esp
0812cd03 +0x27b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0812cd08 +0x280:  lea    0x134(%eax),%edx
0812cd0e +0x286:  lea    -0x20(%ebp),%eax
0812cd11 +0x289:  mov    %edx,0x4(%esp)
0812cd15 +0x28d:  mov    %eax,(%esp)
0812cd18 +0x290:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
0812cd1d +0x295:  sub    $0x4,%esp
0812cd20 +0x298:  lea    -0x20(%ebp),%eax
0812cd23 +0x29b:  mov    %eax,0x4(%esp)
0812cd27 +0x29f:  lea    -0x24(%ebp),%eax
0812cd2a +0x2a2:  mov    %eax,(%esp)
0812cd2d +0x2a5:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
0812cd32 +0x2aa:  test   %al,%al
0812cd34 +0x2ac:  jne    0812caca <+0x42>
0812cd3a +0x2b2:  lea    -0x8(%ebp),%esp
0812cd3d +0x2b5:  add    $0x0,%esp
0812cd40 +0x2b8:  pop    %ebx
0812cd41 +0x2b9:  pop    %esi
0812cd42 +0x2ba:  pop    %ebp
0812cd43 +0x2bb:  ret
```

## 反编译 C

```c
// CLocalChina_User::SendFatigueEvent @ 0x812ca88

/* CLocalChina_User::SendFatigueEvent() */

void CLocalChina_User::SendFatigueEvent(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUserPremium *pCVar4;
  uint uVar5;
  uint uVar6;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_28 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_20 [4];
  CMaxFatigueFactorEvent *local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  ushort local_e;
  
  local_1c = (CMaxFatigueFactorEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,2);
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_28);
  do {
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_24);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_28);
    local_18 = *(CUserCharacInfo **)(iVar3 + 4);
    iVar3 = CUser::get_state((CUser *)local_18);
    if (2 < iVar3) {
      if (local_1c != (CMaxFatigueFactorEvent *)0x0) {
        local_14 = CUserCharacInfo::getCurCharacW(local_18);
        if (local_14 == 0) goto LAB_0812cce6;
        cVar2 = (**(code **)(*(int *)local_1c + 0x34))(local_1c,0);
        if (cVar2 == '\0') {
          *(short *)(local_14 + 0x35) = (short)DEFAULT_MAX_FATIGUE;
        }
        else {
          iVar3 = CMaxFatigueFactorEvent::GetMaxFatigueFactor(local_1c);
          *(short *)(local_14 + 0x35) = (short)((iVar3 * DEFAULT_MAX_FATIGUE) / 100);
        }
      }
      cVar2 = CUser::IsHavePremiumAdvantage((CUser *)local_18);
      if (cVar2 != '\0') {
        if (local_1c == (CMaxFatigueFactorEvent *)0x0) {
LAB_0812cbb4:
          bVar1 = false;
        }
        else {
          cVar2 = (**(code **)(*(int *)local_1c + 0x34))(local_1c,0);
          if (cVar2 == '\0') goto LAB_0812cbb4;
          bVar1 = true;
        }
        if (bVar1) {
          iVar3 = CMaxFatigueFactorEvent::GetMaxFatigueFactor(local_1c);
          local_e = (short)((iVar3 * DEFAULT_MAX_FATIGUE) / 100) - (short)DEFAULT_MAX_FATIGUE;
          pCVar4 = (CUserPremium *)CUser::GetPremiumInfo((CUser *)local_18);
          uVar5 = WongWork::CUserPremium::GetAdvantageFatigueRate(pCVar4);
          iVar3 = (uVar5 & 0xffff) * DEFAULT_MAX_FATIGUE;
          uVar6 = (uint)local_e;
          pCVar4 = (CUserPremium *)CUser::GetPremiumInfo((CUser *)local_18);
          uVar5 = WongWork::CUserPremium::GetAdvantageFatigueRate(pCVar4);
          CUserCharacInfo::setCurCharacMaxPremiumFatigue
                    (local_18,(short)(iVar3 / 100) + (short)((int)(uVar6 * (uVar5 & 0xffff)) / 100))
          ;
        }
        else {
          uVar5 = CUserCharacInfo::getCurCharacMaxFatigue(local_18);
          pCVar4 = (CUserPremium *)CUser::GetPremiumInfo((CUser *)local_18);
          uVar6 = WongWork::CUserPremium::GetAdvantageFatigueRate(pCVar4);
          CUserCharacInfo::setCurCharacMaxPremiumFatigue
                    (local_18,(ushort)((int)((uVar5 & 0xffff) * (uVar6 & 0xffff)) / 100));
        }
      }
      CUser::SendFatigue((CUser *)local_18);
    }
LAB_0812cce6:
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_20,(int)local_28);
  } while( true );
}
```
