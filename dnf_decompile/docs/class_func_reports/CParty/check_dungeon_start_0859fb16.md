# check_dungeon_start

`_ZN6CParty19check_dungeon_startEPK8CDungeon`

`CParty::check_dungeon_start(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859fb16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859fb16  _ZN6CParty19check_dungeon_startEPK8CDungeon
#           CParty::check_dungeon_start(CDungeon const*)
# range [0x0859fb16, 0x0859fcfb]
0859fb16 +0x000:  push   %ebp
0859fb17 +0x001:  mov    %esp,%ebp
0859fb19 +0x003:  sub    $0x28,%esp
0859fb1c +0x006:  mov    0xc(%ebp),%eax
0859fb1f +0x009:  movzbl 0x89f(%eax),%eax
0859fb26 +0x010:  cmp    $0x1,%al
0859fb28 +0x012:  jne    0859fbd0 <+0xba>
0859fb2e +0x018:  movl   $0x0,-0x18(%ebp)
0859fb35 +0x01f:  jmp    0859fbbc <+0xa6>
0859fb3a +0x024:  mov    -0x18(%ebp),%eax
0859fb3d +0x027:  mov    %eax,0x4(%esp)
0859fb41 +0x02b:  mov    0x8(%ebp),%eax
0859fb44 +0x02e:  mov    %eax,(%esp)
0859fb47 +0x031:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859fb4c +0x036:  xor    $0x1,%eax
0859fb4f +0x039:  test   %al,%al
0859fb51 +0x03b:  jne    0859fbb7 <+0xa1>
0859fb53 +0x03d:  mov    -0x18(%ebp),%edx
0859fb56 +0x040:  mov    0x8(%ebp),%ecx
0859fb59 +0x043:  mov    %edx,%eax
0859fb5b +0x045:  add    %eax,%eax
0859fb5d +0x047:  add    %edx,%eax
0859fb5f +0x049:  shl    $0x3,%eax
0859fb62 +0x04c:  lea    (%ecx,%eax,1),%eax
0859fb65 +0x04f:  add    $0x78,%eax
0859fb68 +0x052:  mov    (%eax),%eax
0859fb6a +0x054:  mov    %eax,0x4(%esp)
0859fb6e +0x058:  mov    0x8(%ebp),%eax
0859fb71 +0x05b:  mov    %eax,(%esp)
0859fb74 +0x05e:  call   0859f75e <_ZN6CParty31get_blood_dungeon_admission_feeEP5CUser>  ; CParty::get_blood_dungeon_admission_fee(CUser*)
0859fb79 +0x063:  mov    %eax,-0x14(%ebp)
0859fb7c +0x066:  mov    -0x18(%ebp),%edx
0859fb7f +0x069:  mov    0x8(%ebp),%ecx
0859fb82 +0x06c:  mov    %edx,%eax
0859fb84 +0x06e:  add    %eax,%eax
0859fb86 +0x070:  add    %edx,%eax
0859fb88 +0x072:  shl    $0x3,%eax
0859fb8b +0x075:  lea    (%ecx,%eax,1),%eax
0859fb8e +0x078:  add    $0x78,%eax
0859fb91 +0x07b:  mov    (%eax),%eax
0859fb93 +0x07d:  mov    %eax,(%esp)
0859fb96 +0x080:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859fb9b +0x085:  mov    %eax,(%esp)
0859fb9e +0x088:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0859fba3 +0x08d:  cmp    -0x14(%ebp),%eax
0859fba6 +0x090:  setl   %al
0859fba9 +0x093:  test   %al,%al
0859fbab +0x095:  je     0859fbb8 <+0xa2>
0859fbad +0x097:  mov    $0xa,%eax
0859fbb2 +0x09c:  jmp    0859fcf9 <+0x1e3>
0859fbb7 +0x0a1:  nop
0859fbb8 +0x0a2:  addl   $0x1,-0x18(%ebp)
0859fbbc +0x0a6:  cmpl   $0x3,-0x18(%ebp)
0859fbc0 +0x0aa:  setle  %al
0859fbc3 +0x0ad:  test   %al,%al
0859fbc5 +0x0af:  jne    0859fb3a <+0x24>
0859fbcb +0x0b5:  jmp    0859fcf4 <+0x1de>
0859fbd0 +0x0ba:  mov    0xc(%ebp),%eax
0859fbd3 +0x0bd:  movzbl 0x89f(%eax),%eax
0859fbda +0x0c4:  cmp    $0x2,%al
0859fbdc +0x0c6:  jne    0859fcf4 <+0x1de>
0859fbe2 +0x0cc:  mov    0xc(%ebp),%eax
0859fbe5 +0x0cf:  mov    %eax,(%esp)
0859fbe8 +0x0d2:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0859fbed +0x0d7:  mov    %eax,0x4(%esp)
0859fbf1 +0x0db:  mov    0x8(%ebp),%eax
0859fbf4 +0x0de:  mov    %eax,(%esp)
0859fbf7 +0x0e1:  call   0859f6e2 <_ZN6CParty20checkDugeonInoutTimeEi>  ; CParty::checkDugeonInoutTime(int)
0859fbfc +0x0e6:  xor    $0x1,%eax
0859fbff +0x0e9:  test   %al,%al
0859fc01 +0x0eb:  je     0859fc0d <+0xf7>
0859fc03 +0x0ed:  mov    $0xf4,%eax
0859fc08 +0x0f2:  jmp    0859fcf9 <+0x1e3>
0859fc0d +0x0f7:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0859fc12 +0x0fc:  mov    %eax,(%esp)
0859fc15 +0x0ff:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
0859fc1a +0x104:  test   %al,%al
0859fc1c +0x106:  je     0859fc28 <+0x112>
0859fc1e +0x108:  mov    $0xf6,%eax
0859fc23 +0x10d:  jmp    0859fcf9 <+0x1e3>
0859fc28 +0x112:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
0859fc2d +0x117:  mov    %eax,(%esp)
0859fc30 +0x11a:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
0859fc35 +0x11f:  test   %al,%al
0859fc37 +0x121:  je     0859fc43 <+0x12d>
0859fc39 +0x123:  mov    $0xf7,%eax
0859fc3e +0x128:  jmp    0859fcf9 <+0x1e3>
0859fc43 +0x12d:  mov    0x8(%ebp),%eax
0859fc46 +0x130:  mov    %eax,(%esp)
0859fc49 +0x133:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859fc4e +0x138:  mov    %eax,-0x10(%ebp)
0859fc51 +0x13b:  mov    0xc(%ebp),%eax
0859fc54 +0x13e:  mov    %eax,(%esp)
0859fc57 +0x141:  call   0822b4b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb5e
0859fc5c +0x146:  movsbl %al,%eax
0859fc5f +0x149:  cmp    -0x10(%ebp),%eax
0859fc62 +0x14c:  setl   %al
0859fc65 +0x14f:  test   %al,%al
0859fc67 +0x151:  je     0859fc73 <+0x15d>
0859fc69 +0x153:  mov    $0xf3,%eax
0859fc6e +0x158:  jmp    0859fcf9 <+0x1e3>
0859fc73 +0x15d:  movl   $0x0,-0xc(%ebp)
0859fc7a +0x164:  jmp    0859fce9 <+0x1d3>
0859fc7c +0x166:  mov    -0xc(%ebp),%eax
0859fc7f +0x169:  mov    %eax,0x4(%esp)
0859fc83 +0x16d:  mov    0x8(%ebp),%eax
0859fc86 +0x170:  mov    %eax,(%esp)
0859fc89 +0x173:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859fc8e +0x178:  xor    $0x1,%eax
0859fc91 +0x17b:  test   %al,%al
0859fc93 +0x17d:  jne    0859fce4 <+0x1ce>
0859fc95 +0x17f:  mov    -0xc(%ebp),%edx
0859fc98 +0x182:  mov    0x8(%ebp),%ecx
0859fc9b +0x185:  mov    %edx,%eax
0859fc9d +0x187:  add    %eax,%eax
0859fc9f +0x189:  add    %edx,%eax
0859fca1 +0x18b:  shl    $0x3,%eax
0859fca4 +0x18e:  lea    (%ecx,%eax,1),%eax
0859fca7 +0x191:  add    $0x78,%eax
0859fcaa +0x194:  mov    (%eax),%eax
0859fcac +0x196:  mov    %eax,(%esp)
0859fcaf +0x199:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0859fcb4 +0x19e:  movzbl 0xec2(%eax),%eax
0859fcbb +0x1a5:  test   %al,%al
0859fcbd +0x1a7:  jg     0859fcd4 <+0x1be>
0859fcbf +0x1a9:  mov    0x8(%ebp),%eax
0859fcc2 +0x1ac:  mov    0xcd8(%eax),%eax
0859fcc8 +0x1b2:  cmp    $0x1,%eax
0859fccb +0x1b5:  je     0859fcd4 <+0x1be>
0859fccd +0x1b7:  mov    $0x1,%eax
0859fcd2 +0x1bc:  jmp    0859fcd9 <+0x1c3>
0859fcd4 +0x1be:  mov    $0x0,%eax
0859fcd9 +0x1c3:  test   %al,%al
0859fcdb +0x1c5:  je     0859fce5 <+0x1cf>
0859fcdd +0x1c7:  mov    $0xf5,%eax
0859fce2 +0x1cc:  jmp    0859fcf9 <+0x1e3>
0859fce4 +0x1ce:  nop
0859fce5 +0x1cf:  addl   $0x1,-0xc(%ebp)
0859fce9 +0x1d3:  cmpl   $0x3,-0xc(%ebp)
0859fced +0x1d7:  setle  %al
0859fcf0 +0x1da:  test   %al,%al
0859fcf2 +0x1dc:  jne    0859fc7c <+0x166>
0859fcf4 +0x1de:  mov    $0x0,%eax
0859fcf9 +0x1e3:  leave
0859fcfa +0x1e4:  ret
0859fcfb +0x1e5:  nop
```

## 反编译 C

```c
// CParty::check_dungeon_start @ 0x859fb16

/* CParty::check_dungeon_start(CDungeon const*) */

undefined4 __thiscall CParty::check_dungeon_start(CParty *this,CDungeon *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  int iVar4;
  int local_1c;
  int local_10;
  
  if (param_1[0x89f] == (CDungeon)0x1) {
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      cVar2 = _checkValidUser(this,local_1c);
      if (cVar2 == '\x01') {
        iVar3 = get_blood_dungeon_admission_fee(this,*(CUser **)(this + local_1c * 0x18 + 0x78));
        this_00 = (CInventory *)
                  CUserCharacInfo::getCurCharacInvenR
                            (*(CUserCharacInfo **)(this + local_1c * 0x18 + 0x78));
        iVar4 = CInventory::get_money(this_00);
        if (iVar4 < iVar3) {
          return 10;
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
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar2 = _checkValidUser(this,local_10);
      if (cVar2 == '\x01') {
        iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78))
        ;
        if ((*(char *)(iVar3 + 0xec2) < '\x01') && (*(int *)(this + 0xcd8) != 1)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return 0xf5;
        }
      }
    }
  }
  return 0;
}
```
