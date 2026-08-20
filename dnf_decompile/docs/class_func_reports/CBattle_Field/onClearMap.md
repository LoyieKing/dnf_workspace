# onClearMap

`_ZN13CBattle_Field10onClearMapEb`

`CBattle_Field::onClearMap(bool)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830dd2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830dd2c  _ZN13CBattle_Field10onClearMapEb
#           CBattle_Field::onClearMap(bool)
# range [0x0830dd2c, 0x0830de1b]
0830dd2c +0x00:  push   %ebp
0830dd2d +0x01:  mov    %esp,%ebp
0830dd2f +0x03:  sub    $0x38,%esp
0830dd32 +0x06:  mov    0xc(%ebp),%eax
0830dd35 +0x09:  mov    %al,-0x1c(%ebp)
0830dd38 +0x0c:  mov    0x8(%ebp),%eax
0830dd3b +0x0f:  mov    %eax,(%esp)
0830dd3e +0x12:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830dd43 +0x17:  mov    %eax,-0x10(%ebp)
0830dd46 +0x1a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0830dd4d +0x21:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0830dd52 +0x26:  mov    -0x10(%ebp),%edx
0830dd55 +0x29:  mov    %eax,0x80(%edx)
0830dd5b +0x2f:  cmpb   $0x0,-0x1c(%ebp)
0830dd5f +0x33:  je     0830de1a <+0xee>
0830dd65 +0x39:  mov    0x8(%ebp),%eax
0830dd68 +0x3c:  mov    0x194(%eax),%eax
0830dd6e +0x42:  cmp    $0x29,%eax
0830dd71 +0x45:  jne    0830de1a <+0xee>
0830dd77 +0x4b:  movl   $&_ZL14gUnicodeBuffer+0x12f94,-0xc(%ebp)
0830dd7e +0x52:  mov    0x8(%ebp),%eax
0830dd81 +0x55:  mov    (%eax),%eax
0830dd83 +0x57:  mov    %eax,(%esp)
0830dd86 +0x5a:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0830dd8b +0x5f:  cmp    $0x1,%eax
0830dd8e +0x62:  setg   %al
0830dd91 +0x65:  test   %al,%al
0830dd93 +0x67:  je     0830dd9c <+0x70>
0830dd95 +0x69:  movl   $&_ZL14gUnicodeBuffer+0x12f95,-0xc(%ebp)
0830dd9c +0x70:  mov    0x8(%ebp),%eax
0830dd9f +0x73:  mov    (%eax),%eax
0830dda1 +0x75:  mov    %eax,(%esp)
0830dda4 +0x78:  call   0822d8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fa0
0830dda9 +0x7d:  test   %al,%al
0830ddab +0x7f:  je     0830ddda <+0xae>
0830ddad +0x81:  mov    -0x10(%ebp),%eax
0830ddb0 +0x84:  add    $0x7c,%eax
0830ddb3 +0x87:  mov    %eax,(%esp)
0830ddb6 +0x8a:  call   0830e7ea <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3cf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3cf
0830ddbb +0x8f:  cmp    -0xc(%ebp),%eax
0830ddbe +0x92:  setbe  %al
0830ddc1 +0x95:  test   %al,%al
0830ddc3 +0x97:  je     0830ddda <+0xae>
0830ddc5 +0x99:  mov    0x8(%ebp),%eax
0830ddc8 +0x9c:  mov    (%eax),%eax
0830ddca +0x9e:  movl   $&_Z19addUserHackCount149P5CUser,0x4(%esp)
0830ddd2 +0xa6:  mov    %eax,(%esp)
0830ddd5 +0xa9:  call   085b669a <_ZN6CParty15enumPartyMemberEPFbP5CUserE>  ; CParty::enumPartyMember(bool (*)(CUser*))
0830ddda +0xae:  mov    0x8(%ebp),%eax
0830dddd +0xb1:  mov    (%eax),%eax
0830dddf +0xb3:  mov    %eax,(%esp)
0830dde2 +0xb6:  call   0822d8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fa0
0830dde7 +0xbb:  test   %al,%al
0830dde9 +0xbd:  je     0830de1a <+0xee>
0830ddeb +0xbf:  mov    -0x10(%ebp),%eax
0830ddee +0xc2:  mov    0x84(%eax),%eax
0830ddf4 +0xc8:  test   %eax,%eax
0830ddf6 +0xca:  jne    0830de1a <+0xee>
0830ddf8 +0xcc:  mov    -0x10(%ebp),%eax
0830ddfb +0xcf:  mov    0x88(%eax),%eax
0830de01 +0xd5:  test   %eax,%eax
0830de03 +0xd7:  jne    0830de1a <+0xee>
0830de05 +0xd9:  mov    0x8(%ebp),%eax
0830de08 +0xdc:  mov    (%eax),%eax
0830de0a +0xde:  movl   $&_Z19addUserHackCount150P5CUser,0x4(%esp)
0830de12 +0xe6:  mov    %eax,(%esp)
0830de15 +0xe9:  call   085b669a <_ZN6CParty15enumPartyMemberEPFbP5CUserE>  ; CParty::enumPartyMember(bool (*)(CUser*))
0830de1a +0xee:  leave
0830de1b +0xef:  ret
```

## 反编译 C

```c
// CBattle_Field::onClearMap @ 0x830dd2c

/* CBattle_Field::onClearMap(bool) */

void __thiscall CBattle_Field::onClearMap(CBattle_Field *this,bool param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint local_10;
  
  iVar2 = GetCurrentMapInfo(this);
  uVar3 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(iVar2 + 0x80) = uVar3;
  if ((param_1) && (*(int *)(this + 0x194) == 0x29)) {
    local_10 = 120000;
    iVar4 = CParty::get_member_count(*(CParty **)this);
    if (1 < iVar4) {
      local_10 = 0x1d4c1;
    }
    cVar1 = CParty::checkBossRoom(*(CParty **)this);
    if (cVar1 != '\0') {
      uVar5 = stMapPlayInfo_t::getPlayTick((stMapPlayInfo_t *)(iVar2 + 0x7c));
      if (uVar5 <= local_10) {
        CParty::enumPartyMember(*(CParty **)this,addUserHackCount149);
      }
    }
    cVar1 = CParty::checkBossRoom(*(CParty **)this);
    if (((cVar1 != '\0') && (*(int *)(iVar2 + 0x84) == 0)) && (*(int *)(iVar2 + 0x88) == 0)) {
      CParty::enumPartyMember(*(CParty **)this,addUserHackCount150);
    }
  }
  return;
}
```
