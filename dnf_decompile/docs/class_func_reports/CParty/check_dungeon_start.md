# check_dungeon_start

`_ZN6CParty19check_dungeon_startEPK8CDungeonRi`

`CParty::check_dungeon_start(CDungeon const*, int&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f7fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f7fa  _ZN6CParty19check_dungeon_startEPK8CDungeonRi
#           CParty::check_dungeon_start(CDungeon const*, int&)
# range [0x0859f7fa, 0x0859fb15]
0859f7fa +0x000:  push   %ebp
0859f7fb +0x001:  mov    %esp,%ebp
0859f7fd +0x003:  push   %ebx
0859f7fe +0x004:  sub    $0x34,%esp
0859f801 +0x007:  mov    0xc(%ebp),%eax
0859f804 +0x00a:  movzbl 0x89f(%eax),%eax
0859f80b +0x011:  cmp    $0x1,%al
0859f80d +0x013:  jne    0859f95d <+0x163>
0859f813 +0x019:  movl   $0x0,-0x24(%ebp)
0859f81a +0x020:  jmp    0859f949 <+0x14f>
0859f81f +0x025:  mov    -0x24(%ebp),%eax
0859f822 +0x028:  mov    %eax,0x4(%esp)
0859f826 +0x02c:  mov    0x8(%ebp),%eax
0859f829 +0x02f:  mov    %eax,(%esp)
0859f82c +0x032:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859f831 +0x037:  xor    $0x1,%eax
0859f834 +0x03a:  test   %al,%al
0859f836 +0x03c:  jne    0859f944 <+0x14a>
0859f83c +0x042:  mov    -0x24(%ebp),%edx
0859f83f +0x045:  mov    0x8(%ebp),%ecx
0859f842 +0x048:  mov    %edx,%eax
0859f844 +0x04a:  add    %eax,%eax
0859f846 +0x04c:  add    %edx,%eax
0859f848 +0x04e:  shl    $0x3,%eax
0859f84b +0x051:  lea    (%ecx,%eax,1),%eax
0859f84e +0x054:  add    $0x78,%eax
0859f851 +0x057:  mov    (%eax),%eax
0859f853 +0x059:  mov    %eax,0x4(%esp)
0859f857 +0x05d:  mov    0x8(%ebp),%eax
0859f85a +0x060:  mov    %eax,(%esp)
0859f85d +0x063:  call   0859f75e <_ZN6CParty31get_blood_dungeon_admission_feeEP5CUser>  ; CParty::get_blood_dungeon_admission_fee(CUser*)
0859f862 +0x068:  mov    %eax,-0x20(%ebp)
0859f865 +0x06b:  mov    -0x24(%ebp),%edx
0859f868 +0x06e:  mov    0x8(%ebp),%ecx
0859f86b +0x071:  mov    %edx,%eax
0859f86d +0x073:  add    %eax,%eax
0859f86f +0x075:  add    %edx,%eax
0859f871 +0x077:  shl    $0x3,%eax
0859f874 +0x07a:  lea    (%ecx,%eax,1),%eax
0859f877 +0x07d:  add    $0x78,%eax
0859f87a +0x080:  mov    (%eax),%eax
0859f87c +0x082:  mov    %eax,(%esp)
0859f87f +0x085:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859f884 +0x08a:  mov    %eax,(%esp)
0859f887 +0x08d:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0859f88c +0x092:  cmp    -0x20(%ebp),%eax
0859f88f +0x095:  setl   %al
0859f892 +0x098:  test   %al,%al
0859f894 +0x09a:  je     0859f8a8 <+0xae>
0859f896 +0x09c:  mov    0x10(%ebp),%eax
0859f899 +0x09f:  mov    -0x24(%ebp),%edx
0859f89c +0x0a2:  mov    %edx,(%eax)
0859f89e +0x0a4:  mov    $0xa,%eax
0859f8a3 +0x0a9:  jmp    0859fb0f <+0x315>
0859f8a8 +0x0ae:  mov    -0x24(%ebp),%edx
0859f8ab +0x0b1:  mov    0x8(%ebp),%ecx
0859f8ae +0x0b4:  mov    %edx,%eax
0859f8b0 +0x0b6:  add    %eax,%eax
0859f8b2 +0x0b8:  add    %edx,%eax
0859f8b4 +0x0ba:  shl    $0x3,%eax
0859f8b7 +0x0bd:  lea    (%ecx,%eax,1),%eax
0859f8ba +0x0c0:  add    $0x78,%eax
0859f8bd +0x0c3:  mov    (%eax),%eax
0859f8bf +0x0c5:  mov    %eax,(%esp)
0859f8c2 +0x0c8:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859f8c7 +0x0cd:  mov    %eax,%ebx
0859f8c9 +0x0cf:  mov    0xc(%ebp),%eax
0859f8cc +0x0d2:  mov    %eax,(%esp)
0859f8cf +0x0d5:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
0859f8d4 +0x0da:  cmp    %eax,%ebx
0859f8d6 +0x0dc:  setl   %al
0859f8d9 +0x0df:  test   %al,%al
0859f8db +0x0e1:  je     0859f8ef <+0xf5>
0859f8dd +0x0e3:  mov    0x10(%ebp),%eax
0859f8e0 +0x0e6:  mov    -0x24(%ebp),%edx
0859f8e3 +0x0e9:  mov    %edx,(%eax)
0859f8e5 +0x0eb:  mov    $0x5f,%eax
0859f8ea +0x0f0:  jmp    0859fb0f <+0x315>
0859f8ef +0x0f5:  mov    0xc(%ebp),%eax
0859f8f2 +0x0f8:  mov    %eax,(%esp)
0859f8f5 +0x0fb:  call   085bed84 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2e2>  ; global constructors keyed to CParty::cMember::cMember()+0x2e2
0859f8fa +0x100:  movsbl %al,%eax
0859f8fd +0x103:  mov    %eax,-0x1c(%ebp)
0859f900 +0x106:  mov    -0x24(%ebp),%edx
0859f903 +0x109:  mov    0x8(%ebp),%ecx
0859f906 +0x10c:  mov    %edx,%eax
0859f908 +0x10e:  add    %eax,%eax
0859f90a +0x110:  add    %edx,%eax
0859f90c +0x112:  shl    $0x3,%eax
0859f90f +0x115:  lea    (%ecx,%eax,1),%eax
0859f912 +0x118:  add    $0x78,%eax
0859f915 +0x11b:  mov    (%eax),%eax
0859f917 +0x11d:  movl   $0x1,0x4(%esp)
0859f91f +0x125:  mov    %eax,(%esp)
0859f922 +0x128:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0859f927 +0x12d:  mov    %eax,(%esp)
0859f92a +0x130:  call   085bfe88 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x13e6>  ; global constructors keyed to CParty::cMember::cMember()+0x13e6
0859f92f +0x135:  mov    %eax,-0x18(%ebp)
0859f932 +0x138:  mov    -0x1c(%ebp),%eax
0859f935 +0x13b:  cmp    -0x18(%ebp),%eax
0859f938 +0x13e:  jg     0859f945 <+0x14b>
0859f93a +0x140:  mov    $0xf5,%eax
0859f93f +0x145:  jmp    0859fb0f <+0x315>
0859f944 +0x14a:  nop
0859f945 +0x14b:  addl   $0x1,-0x24(%ebp)
0859f949 +0x14f:  cmpl   $0x3,-0x24(%ebp)
0859f94d +0x153:  setle  %al
0859f950 +0x156:  test   %al,%al
0859f952 +0x158:  jne    0859f81f <+0x25>
0859f958 +0x15e:  jmp    0859fb0a <+0x310>
0859f95d +0x163:  mov    0xc(%ebp),%eax
0859f960 +0x166:  movzbl 0x89f(%eax),%eax
0859f967 +0x16d:  cmp    $0x2,%al
0859f969 +0x16f:  jne    0859fadd <+0x2e3>
0859f96f +0x175:  mov    0xc(%ebp),%eax
0859f972 +0x178:  mov    %eax,(%esp)
0859f975 +0x17b:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0859f97a +0x180:  mov    %eax,0x4(%esp)
0859f97e +0x184:  mov    0x8(%ebp),%eax
0859f981 +0x187:  mov    %eax,(%esp)
0859f984 +0x18a:  call   0859f6e2 <_ZN6CParty20checkDugeonInoutTimeEi>  ; CParty::checkDugeonInoutTime(int)
0859f989 +0x18f:  xor    $0x1,%eax
0859f98c +0x192:  test   %al,%al
0859f98e +0x194:  je     0859f99a <+0x1a0>
0859f990 +0x196:  mov    $0xf4,%eax
0859f995 +0x19b:  jmp    0859fb0f <+0x315>
0859f99a +0x1a0:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0859f99f +0x1a5:  mov    %eax,(%esp)
0859f9a2 +0x1a8:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
0859f9a7 +0x1ad:  test   %al,%al
0859f9a9 +0x1af:  je     0859f9b5 <+0x1bb>
0859f9ab +0x1b1:  mov    $0xf6,%eax
0859f9b0 +0x1b6:  jmp    0859fb0f <+0x315>
0859f9b5 +0x1bb:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
0859f9ba +0x1c0:  mov    %eax,(%esp)
0859f9bd +0x1c3:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
0859f9c2 +0x1c8:  test   %al,%al
0859f9c4 +0x1ca:  je     0859f9d0 <+0x1d6>
0859f9c6 +0x1cc:  mov    $0xf7,%eax
0859f9cb +0x1d1:  jmp    0859fb0f <+0x315>
0859f9d0 +0x1d6:  mov    0x8(%ebp),%eax
0859f9d3 +0x1d9:  mov    %eax,(%esp)
0859f9d6 +0x1dc:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859f9db +0x1e1:  mov    %eax,-0x14(%ebp)
0859f9de +0x1e4:  mov    0xc(%ebp),%eax
0859f9e1 +0x1e7:  mov    %eax,(%esp)
0859f9e4 +0x1ea:  call   0822b4b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb5e
0859f9e9 +0x1ef:  movsbl %al,%eax
0859f9ec +0x1f2:  cmp    -0x14(%ebp),%eax
0859f9ef +0x1f5:  setl   %al
0859f9f2 +0x1f8:  test   %al,%al
0859f9f4 +0x1fa:  je     0859fa00 <+0x206>
0859f9f6 +0x1fc:  mov    $0xf3,%eax
0859f9fb +0x201:  jmp    0859fb0f <+0x315>
0859fa00 +0x206:  movl   $0x0,-0x10(%ebp)
0859fa07 +0x20d:  jmp    0859facc <+0x2d2>
0859fa0c +0x212:  mov    -0x10(%ebp),%eax
0859fa0f +0x215:  mov    %eax,0x4(%esp)
0859fa13 +0x219:  mov    0x8(%ebp),%eax
0859fa16 +0x21c:  mov    %eax,(%esp)
0859fa19 +0x21f:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859fa1e +0x224:  xor    $0x1,%eax
0859fa21 +0x227:  test   %al,%al
0859fa23 +0x229:  jne    0859fac7 <+0x2cd>
0859fa29 +0x22f:  mov    -0x10(%ebp),%edx
0859fa2c +0x232:  mov    0x8(%ebp),%ecx
0859fa2f +0x235:  mov    %edx,%eax
0859fa31 +0x237:  add    %eax,%eax
0859fa33 +0x239:  add    %edx,%eax
0859fa35 +0x23b:  shl    $0x3,%eax
0859fa38 +0x23e:  lea    (%ecx,%eax,1),%eax
0859fa3b +0x241:  add    $0x78,%eax
0859fa3e +0x244:  mov    (%eax),%eax
0859fa40 +0x246:  mov    %eax,(%esp)
0859fa43 +0x249:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859fa48 +0x24e:  mov    %eax,%ebx
0859fa4a +0x250:  mov    0xc(%ebp),%eax
0859fa4d +0x253:  mov    %eax,(%esp)
0859fa50 +0x256:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
0859fa55 +0x25b:  cmp    %eax,%ebx
0859fa57 +0x25d:  setl   %al
0859fa5a +0x260:  test   %al,%al
0859fa5c +0x262:  je     0859fa70 <+0x276>
0859fa5e +0x264:  mov    0x10(%ebp),%eax
0859fa61 +0x267:  mov    -0x10(%ebp),%edx
0859fa64 +0x26a:  mov    %edx,(%eax)
0859fa66 +0x26c:  mov    $0xf8,%eax
0859fa6b +0x271:  jmp    0859fb0f <+0x315>
0859fa70 +0x276:  mov    -0x10(%ebp),%edx
0859fa73 +0x279:  mov    0x8(%ebp),%ecx
0859fa76 +0x27c:  mov    %edx,%eax
0859fa78 +0x27e:  add    %eax,%eax
0859fa7a +0x280:  add    %edx,%eax
0859fa7c +0x282:  shl    $0x3,%eax
0859fa7f +0x285:  lea    (%ecx,%eax,1),%eax
0859fa82 +0x288:  add    $0x78,%eax
0859fa85 +0x28b:  mov    (%eax),%eax
0859fa87 +0x28d:  mov    %eax,(%esp)
0859fa8a +0x290:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0859fa8f +0x295:  movzbl 0xec2(%eax),%eax
0859fa96 +0x29c:  test   %al,%al
0859fa98 +0x29e:  jg     0859faaf <+0x2b5>
0859fa9a +0x2a0:  mov    0x8(%ebp),%eax
0859fa9d +0x2a3:  mov    0xcd8(%eax),%eax
0859faa3 +0x2a9:  cmp    $0x1,%eax
0859faa6 +0x2ac:  je     0859faaf <+0x2b5>
0859faa8 +0x2ae:  mov    $0x1,%eax
0859faad +0x2b3:  jmp    0859fab4 <+0x2ba>
0859faaf +0x2b5:  mov    $0x0,%eax
0859fab4 +0x2ba:  test   %al,%al
0859fab6 +0x2bc:  je     0859fac8 <+0x2ce>
0859fab8 +0x2be:  mov    0x10(%ebp),%eax
0859fabb +0x2c1:  mov    -0x10(%ebp),%edx
0859fabe +0x2c4:  mov    %edx,(%eax)
0859fac0 +0x2c6:  mov    $0xf5,%eax
0859fac5 +0x2cb:  jmp    0859fb0f <+0x315>
0859fac7 +0x2cd:  nop
0859fac8 +0x2ce:  addl   $0x1,-0x10(%ebp)
0859facc +0x2d2:  cmpl   $0x3,-0x10(%ebp)
0859fad0 +0x2d6:  setle  %al
0859fad3 +0x2d9:  test   %al,%al
0859fad5 +0x2db:  jne    0859fa0c <+0x212>
0859fadb +0x2e1:  jmp    0859fb0a <+0x310>
0859fadd +0x2e3:  mov    0x8(%ebp),%eax
0859fae0 +0x2e6:  mov    %eax,(%esp)
0859fae3 +0x2e9:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859fae8 +0x2ee:  mov    %eax,-0xc(%ebp)
0859faeb +0x2f1:  mov    0xc(%ebp),%eax
0859faee +0x2f4:  mov    %eax,(%esp)
0859faf1 +0x2f7:  call   0822b4b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb5e
0859faf6 +0x2fc:  movsbl %al,%eax
0859faf9 +0x2ff:  cmp    -0xc(%ebp),%eax
0859fafc +0x302:  setl   %al
0859faff +0x305:  test   %al,%al
0859fb01 +0x307:  je     0859fb0a <+0x310>
0859fb03 +0x309:  mov    $0xf3,%eax
0859fb08 +0x30e:  jmp    0859fb0f <+0x315>
0859fb0a +0x310:  mov    $0x0,%eax
0859fb0f +0x315:  add    $0x34,%esp
0859fb12 +0x318:  pop    %ebx
0859fb13 +0x319:  pop    %ebp
0859fb14 +0x31a:  ret
0859fb15 +0x31b:  nop
```

## 反编译 C

```c
// CParty::check_dungeon_start @ 0x859f7fa

/* CParty::check_dungeon_start(CDungeon const*, int&) */

undefined4 __thiscall CParty::check_dungeon_start(CParty *this,CDungeon *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  int iVar4;
  CCharacBloodDungeon *this_01;
  int local_28;
  int local_14;
  
  if (param_1[0x89f] == (CDungeon)0x1) {
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
      cVar2 = _checkValidUser(this,local_28);
      if (cVar2 == '\x01') {
        iVar3 = get_blood_dungeon_admission_fee(this,*(CUser **)(this + local_28 * 0x18 + 0x78));
        this_00 = (CInventory *)
                  CUserCharacInfo::getCurCharacInvenR
                            (*(CUserCharacInfo **)(this + local_28 * 0x18 + 0x78));
        iVar4 = CInventory::get_money(this_00);
        if (iVar4 < iVar3) {
          *param_2 = local_28;
          return 10;
        }
        iVar3 = CUserCharacInfo::get_charac_level
                          (*(CUserCharacInfo **)(this + local_28 * 0x18 + 0x78));
        iVar4 = CDungeon::get_min_level(param_1);
        if (iVar3 < iVar4) {
          *param_2 = local_28;
          return 0x5f;
        }
        cVar2 = CDungeon::get_limit_Inout_count(param_1);
        this_01 = (CCharacBloodDungeon *)
                  CUser::GetCharacExpandData(*(CUser **)(this + local_28 * 0x18 + 0x78),1);
        iVar3 = CCharacBloodDungeon::GetEnterCount(this_01);
        if (cVar2 <= iVar3) {
          return 0xf5;
        }
      }
    }
  }
  else if (param_1[0x89f] == (CDungeon)0x2) {
    CDungeon::get_index(param_1);
    cVar2 = checkDugeonInoutTime((int)this);
    if (cVar2 != '\x01') {
      return 0xf4;
    }
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if (cVar2 != '\0') {
      return 0xf6;
    }
    cVar2 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
    if (cVar2 != '\0') {
      return 0xf7;
    }
    iVar3 = get_member_count(this);
    cVar2 = CDungeon::get_limit_party_count(param_1);
    if (cVar2 < iVar3) {
      return 0xf3;
    }
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      cVar2 = _checkValidUser(this,local_14);
      if (cVar2 == '\x01') {
        iVar3 = CUserCharacInfo::get_charac_level
                          (*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78));
        iVar4 = CDungeon::get_min_level(param_1);
        if (iVar3 < iVar4) {
          *param_2 = local_14;
          return 0xf8;
        }
        iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78))
        ;
        if ((*(char *)(iVar3 + 0xec2) < '\x01') && (*(int *)(this + 0xcd8) != 1)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          *param_2 = local_14;
          return 0xf5;
        }
      }
    }
  }
  else {
    iVar3 = get_member_count(this);
    cVar2 = CDungeon::get_limit_party_count(param_1);
    if (cVar2 < iVar3) {
      return 0xf3;
    }
  }
  return 0;
}
```
