# check_match_proper_party

`_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty`

`QuickParty::CQuickPartySystemManager::check_match_proper_party(QuickParty::STQuickPartyPoolMap_Key const&, CParty*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x08269e34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269e34  _ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty
#           QuickParty::CQuickPartySystemManager::check_match_proper_party(QuickParty::STQuickPartyPoolMap_Key const&, CParty*)
# range [0x08269e34, 0x08269f3b]
08269e34 +0x000:  push   %ebp
08269e35 +0x001:  mov    %esp,%ebp
08269e37 +0x003:  push   %ebx
08269e38 +0x004:  sub    $0x34,%esp
08269e3b +0x007:  cmpl   $0x0,0x10(%ebp)
08269e3f +0x00b:  jne    08269e4b <+0x17>
08269e41 +0x00d:  mov    $0x1,%eax
08269e46 +0x012:  jmp    08269f36 <+0x102>
08269e4b +0x017:  mov    0x10(%ebp),%eax
08269e4e +0x01a:  mov    %eax,(%esp)
08269e51 +0x01d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08269e56 +0x022:  mov    %eax,-0x10(%ebp)
08269e59 +0x025:  cmpl   $0x0,-0x10(%ebp)
08269e5d +0x029:  jle    08269e65 <+0x31>
08269e5f +0x02b:  cmpl   $0x3,-0x10(%ebp)
08269e63 +0x02f:  jle    08269e6f <+0x3b>
08269e65 +0x031:  mov    $0x1,%eax
08269e6a +0x036:  jmp    08269f36 <+0x102>
08269e6f +0x03b:  mov    0xc(%ebp),%eax
08269e72 +0x03e:  movzwl (%eax),%eax
08269e75 +0x041:  test   %ax,%ax
08269e78 +0x044:  jns    08269eb1 <+0x7d>
08269e7a +0x046:  mov    0xc(%ebp),%eax
08269e7d +0x049:  movzwl (%eax),%eax
08269e80 +0x04c:  cwtl
08269e81 +0x04d:  mov    %eax,0x14(%esp)
08269e85 +0x051:  movl   $"QUICK_PARTY_LOG : DUNGEON INDEX ERROR!! (%d)",0x10(%esp)
08269e8d +0x059:  movl   $0x16e,0xc(%esp)
08269e95 +0x061:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyE19__PRETTY_FUNCTION__,0x8(%esp)
08269e9d +0x069:  movl   $"QuickParty.cpp",0x4(%esp)
08269ea5 +0x071:  movl   $0x1,(%esp)
08269eac +0x078:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08269eb1 +0x07d:  mov    0xc(%ebp),%eax
08269eb4 +0x080:  movzwl (%eax),%eax
08269eb7 +0x083:  movswl %ax,%ebx
08269eba +0x086:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08269ebf +0x08b:  mov    %ebx,0x4(%esp)
08269ec3 +0x08f:  mov    %eax,(%esp)
08269ec6 +0x092:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
08269ecb +0x097:  mov    %eax,-0xc(%ebp)
08269ece +0x09a:  cmpl   $0x0,-0xc(%ebp)
08269ed2 +0x09e:  jne    08269edb <+0xa7>
08269ed4 +0x0a0:  mov    $0x1,%eax
08269ed9 +0x0a5:  jmp    08269f36 <+0x102>
08269edb +0x0a7:  mov    -0xc(%ebp),%eax
08269ede +0x0aa:  mov    %eax,(%esp)
08269ee1 +0x0ad:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
08269ee6 +0x0b2:  cmp    $0x2,%al
08269ee8 +0x0b4:  jne    08269f04 <+0xd0>
08269eea +0x0b6:  mov    -0xc(%ebp),%eax
08269eed +0x0b9:  mov    %eax,(%esp)
08269ef0 +0x0bc:  call   0822b4b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb5e
08269ef5 +0x0c1:  movsbl %al,%eax
08269ef8 +0x0c4:  cmp    -0x10(%ebp),%eax
08269efb +0x0c7:  jg     08269f04 <+0xd0>
08269efd +0x0c9:  mov    $0x1,%eax
08269f02 +0x0ce:  jmp    08269f09 <+0xd5>
08269f04 +0x0d0:  mov    $0x0,%eax
08269f09 +0x0d5:  test   %al,%al
08269f0b +0x0d7:  je     08269f14 <+0xe0>
08269f0d +0x0d9:  mov    $0x1,%eax
08269f12 +0x0de:  jmp    08269f36 <+0x102>
08269f14 +0x0e0:  movl   $0x1bc,0xc(%esp)
08269f1c +0x0e8:  movl   $0x0,0x8(%esp)
08269f24 +0x0f0:  mov    -0xc(%ebp),%eax
08269f27 +0x0f3:  mov    %eax,0x4(%esp)
08269f2b +0x0f7:  mov    0x10(%ebp),%eax
08269f2e +0x0fa:  mov    %eax,(%esp)
08269f31 +0x0fd:  call   085abc80 <_ZN6CParty26checkInoutConditionDungeonEPK8CDungeon17ENUM_DUNGEON_MODE14ENUM_CMDPACKET>  ; CParty::checkInoutConditionDungeon(CDungeon const*, ENUM_DUNGEON_MODE, ENUM_CMDPACKET)
08269f36 +0x102:  add    $0x34,%esp
08269f39 +0x105:  pop    %ebx
08269f3a +0x106:  pop    %ebp
08269f3b +0x107:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::check_match_proper_party @ 0x8269e34

/* QuickParty::CQuickPartySystemManager::check_match_proper_party(QuickParty::STQuickPartyPoolMap_Key
   const&, CParty*) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::check_match_proper_party
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,CParty *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  CDungeon *this_00;
  undefined4 uVar5;
  
  if (param_2 == (CParty *)0x0) {
    return 1;
  }
  iVar3 = CParty::get_member_count(param_2);
  if ((0 < iVar3) && (iVar3 < 4)) {
    if (*(short *)param_1 < 0) {
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "ENUM_ERROR QuickParty::CQuickPartySystemManager::check_match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*)"
                 ,0x16e,"QUICK_PARTY_LOG : DUNGEON INDEX ERROR!! (%d)",(int)*(short *)param_1);
    }
    iVar4 = G_CDataManager();
    this_00 = (CDungeon *)CDataManager::find_dungeon(iVar4);
    if (this_00 != (CDungeon *)0x0) {
      cVar2 = CDungeon::get_blood_dungeon_type(this_00);
      if ((cVar2 == '\x02') && (cVar2 = CDungeon::get_limit_party_count(this_00), cVar2 <= iVar3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar5 = 1;
      }
      else {
        uVar5 = CParty::checkInoutConditionDungeon(param_2,this_00,0,0x1bc);
      }
      return uVar5;
    }
    return 1;
  }
  return 1;
}
```
