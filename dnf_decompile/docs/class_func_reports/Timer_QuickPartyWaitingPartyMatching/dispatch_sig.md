# dispatch_sig

`_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij`

`Timer_QuickPartyWaitingPartyMatching::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_QuickPartyWaitingPartyMatching` | `0x0863ac18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863ac18  _ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij
#           Timer_QuickPartyWaitingPartyMatching::dispatch_sig(int, int, unsigned int)
# range [0x0863ac18, 0x0863ad95]
0863ac18 +0x000:  push   %ebp
0863ac19 +0x001:  mov    %esp,%ebp
0863ac1b +0x003:  sub    $0x28,%esp
0863ac1e +0x006:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863ac23 +0x00b:  mov    0xc(%ebp),%edx
0863ac26 +0x00e:  mov    %edx,0x4(%esp)
0863ac2a +0x012:  mov    %eax,(%esp)
0863ac2d +0x015:  call   08295572 <_ZN12CGameManager13GetQuickPartyEi>  ; CGameManager::GetQuickParty(int)
0863ac32 +0x01a:  mov    %eax,-0x10(%ebp)
0863ac35 +0x01d:  cmpl   $0x0,-0x10(%ebp)
0863ac39 +0x021:  jne    0863ac45 <+0x2d>
0863ac3b +0x023:  mov    $0x0,%eax
0863ac40 +0x028:  jmp    0863ad94 <+0x17c>
0863ac45 +0x02d:  mov    0x10(%ebp),%eax
0863ac48 +0x030:  mov    %eax,0x8(%esp)
0863ac4c +0x034:  mov    0x14(%ebp),%eax
0863ac4f +0x037:  mov    %eax,0x4(%esp)
0863ac53 +0x03b:  mov    -0x10(%ebp),%eax
0863ac56 +0x03e:  mov    %eax,(%esp)
0863ac59 +0x041:  call   082696b0 <_ZN10QuickParty11CQuickParty15check_timer_keyE13TIMER_MESSAGEi>  ; QuickParty::CQuickParty::check_timer_key(TIMER_MESSAGE, int)
0863ac5e +0x046:  xor    $0x1,%eax
0863ac61 +0x049:  test   %al,%al
0863ac63 +0x04b:  je     0863ac6f <+0x57>
0863ac65 +0x04d:  mov    $0x0,%eax
0863ac6a +0x052:  jmp    0863ad94 <+0x17c>
0863ac6f +0x057:  mov    -0x10(%ebp),%eax
0863ac72 +0x05a:  mov    %eax,(%esp)
0863ac75 +0x05d:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0863ac7a +0x062:  mov    %eax,-0xc(%ebp)
0863ac7d +0x065:  cmpl   $0x1,-0xc(%ebp)
0863ac81 +0x069:  jg     0863ac9d <+0x85>
0863ac83 +0x06b:  mov    -0x10(%ebp),%eax
0863ac86 +0x06e:  mov    %eax,(%esp)
0863ac89 +0x071:  call   0826b75a <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x28>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x28
0863ac8e +0x076:  movsbl %al,%eax
0863ac91 +0x079:  cmp    -0xc(%ebp),%eax
0863ac94 +0x07c:  jne    0863ac9d <+0x85>
0863ac96 +0x07e:  mov    $0x1,%eax
0863ac9b +0x083:  jmp    0863aca2 <+0x8a>
0863ac9d +0x085:  mov    $0x0,%eax
0863aca2 +0x08a:  test   %al,%al
0863aca4 +0x08c:  je     0863acb0 <+0x98>
0863aca6 +0x08e:  mov    $0x0,%eax
0863acab +0x093:  jmp    0863ad94 <+0x17c>
0863acb0 +0x098:  mov    0x14(%ebp),%eax
0863acb3 +0x09b:  mov    %eax,0x4(%esp)
0863acb7 +0x09f:  mov    -0x10(%ebp),%eax
0863acba +0x0a2:  mov    %eax,(%esp)
0863acbd +0x0a5:  call   08269668 <_ZN10QuickParty11CQuickParty13get_timer_keyE13TIMER_MESSAGE>  ; QuickParty::CQuickParty::get_timer_key(TIMER_MESSAGE)
0863acc2 +0x0aa:  cmp    $0x1,%eax
0863acc5 +0x0ad:  sete   %al
0863acc8 +0x0b0:  test   %al,%al
0863acca +0x0b2:  je     0863acef <+0xd7>
0863accc +0x0b4:  mov    -0x10(%ebp),%eax
0863accf +0x0b7:  mov    %eax,0x4(%esp)
0863acd3 +0x0bb:  mov    0x8(%ebp),%eax
0863acd6 +0x0be:  mov    %eax,(%esp)
0863acd9 +0x0c1:  call   0863ad96 <_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE>  ; Timer_QuickPartyWaitingPartyMatching::cancel_quick_party(QuickParty::CQuickParty*)
0863acde +0x0c6:  xor    $0x1,%eax
0863ace1 +0x0c9:  test   %al,%al
0863ace3 +0x0cb:  je     0863acef <+0xd7>
0863ace5 +0x0cd:  mov    $0x0,%eax
0863acea +0x0d2:  jmp    0863ad94 <+0x17c>
0863acef +0x0d7:  mov    -0x10(%ebp),%eax
0863acf2 +0x0da:  mov    %eax,(%esp)
0863acf5 +0x0dd:  call   0826b75a <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x28>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x28
0863acfa +0x0e2:  movsbl %al,%eax
0863acfd +0x0e5:  cmp    -0xc(%ebp),%eax
0863ad00 +0x0e8:  jl     0863ad1b <+0x103>
0863ad02 +0x0ea:  mov    -0x10(%ebp),%eax
0863ad05 +0x0ed:  mov    %eax,(%esp)
0863ad08 +0x0f0:  call   0826b7e4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xb2>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xb2
0863ad0d +0x0f5:  xor    $0x1,%eax
0863ad10 +0x0f8:  test   %al,%al
0863ad12 +0x0fa:  je     0863ad1b <+0x103>
0863ad14 +0x0fc:  mov    $0x1,%eax
0863ad19 +0x101:  jmp    0863ad20 <+0x108>
0863ad1b +0x103:  mov    $0x0,%eax
0863ad20 +0x108:  test   %al,%al
0863ad22 +0x10a:  je     0863ad44 <+0x12c>
0863ad24 +0x10c:  mov    -0x10(%ebp),%eax
0863ad27 +0x10f:  mov    %eax,0x4(%esp)
0863ad2b +0x113:  mov    0x8(%ebp),%eax
0863ad2e +0x116:  mov    %eax,(%esp)
0863ad31 +0x119:  call   0863ad96 <_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE>  ; Timer_QuickPartyWaitingPartyMatching::cancel_quick_party(QuickParty::CQuickParty*)
0863ad36 +0x11e:  xor    $0x1,%eax
0863ad39 +0x121:  test   %al,%al
0863ad3b +0x123:  je     0863ad44 <+0x12c>
0863ad3d +0x125:  mov    $0x0,%eax
0863ad42 +0x12a:  jmp    0863ad94 <+0x17c>
0863ad44 +0x12c:  lea    -0x14(%ebp),%eax
0863ad47 +0x12f:  mov    %eax,(%esp)
0863ad4a +0x132:  call   082344ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b74
0863ad4f +0x137:  mov    -0x10(%ebp),%eax
0863ad52 +0x13a:  mov    %eax,(%esp)
0863ad55 +0x13d:  call   0826b798 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x66>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x66
0863ad5a +0x142:  mov    %ax,-0x14(%ebp)
0863ad5e +0x146:  mov    -0x10(%ebp),%eax
0863ad61 +0x149:  mov    %eax,(%esp)
0863ad64 +0x14c:  call   0826b7b4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x82>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x82
0863ad69 +0x151:  mov    %al,-0x12(%ebp)
0863ad6c +0x154:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863ad71 +0x159:  mov    %eax,(%esp)
0863ad74 +0x15c:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
0863ad79 +0x161:  lea    -0x14(%ebp),%edx
0863ad7c +0x164:  mov    %edx,0x8(%esp)
0863ad80 +0x168:  mov    -0x10(%ebp),%edx
0863ad83 +0x16b:  mov    %edx,0x4(%esp)
0863ad87 +0x16f:  mov    %eax,(%esp)
0863ad8a +0x172:  call   0826a972 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE>  ; QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*, QuickParty::STQuickPartyPoolMap_Key const&)
0863ad8f +0x177:  mov    $0x1,%eax
0863ad94 +0x17c:  leave
0863ad95 +0x17d:  ret
```

## 反编译 C

```c
// Timer_QuickPartyWaitingPartyMatching::dispatch_sig @ 0x863ac18

/* Timer_QuickPartyWaitingPartyMatching::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_QuickPartyWaitingPartyMatching::dispatch_sig
          (Timer_QuickPartyWaitingPartyMatching *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined2 local_18;
  undefined1 local_16;
  CQuickParty *local_14;
  int local_10;
  
  iVar3 = G_CGameManager();
  local_14 = (CQuickParty *)CGameManager::GetQuickParty(iVar3);
  if (local_14 == (CQuickParty *)0x0) {
    return 0;
  }
  cVar2 = QuickParty::CQuickParty::check_timer_key(local_14,param_3,param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_10 = QuickParty::CQuickParty::get_quick_party_count(local_14);
  if ((local_10 < 2) &&
     (cVar2 = QuickParty::CQuickParty::get_first_matching_cnt(local_14), cVar2 == local_10)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar3 = QuickParty::CQuickParty::get_timer_key(local_14,param_3);
  if ((iVar3 == 1) && (cVar2 = cancel_quick_party(this,local_14), cVar2 != '\x01')) {
    return 0;
  }
  cVar2 = QuickParty::CQuickParty::get_first_matching_cnt(local_14);
  if ((cVar2 < local_10) ||
     (cVar2 = QuickParty::CQuickParty::is_change_quick_party_count(local_14), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (cVar2 = cancel_quick_party(this,local_14), cVar2 != '\x01')) {
    return 0;
  }
  QuickParty::STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key((STQuickPartyPoolMap_Key *)&local_18)
  ;
  local_18 = QuickParty::CQuickParty::get_dungeon_index(local_14);
  local_16 = QuickParty::CQuickParty::get_dungeon_diff(local_14);
  this_00 = (CGameManager *)G_CGameManager();
  this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
  QuickParty::CQuickPartySystemManager::start_game
            (this_01,local_14,(STQuickPartyPoolMap_Key *)&local_18);
  return 1;
}
```
