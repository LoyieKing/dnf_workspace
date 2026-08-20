# direct_entrance_quick_party

`_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser`

`QuickParty::CQuickPartySystemManager::direct_entrance_quick_party(CUser*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826a762` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826a762  _ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser
#           QuickParty::CQuickPartySystemManager::direct_entrance_quick_party(CUser*)
# range [0x0826a762, 0x0826a971]
0826a762 +0x000:  push   %ebp
0826a763 +0x001:  mov    %esp,%ebp
0826a765 +0x003:  push   %esi
0826a766 +0x004:  push   %ebx
0826a767 +0x005:  sub    $0x30,%esp
0826a76a +0x008:  cmpl   $0x0,0xc(%ebp)
0826a76e +0x00c:  jne    0826a77a <+0x18>
0826a770 +0x00e:  mov    $0x1,%ebx
0826a775 +0x013:  jmp    0826a968 <+0x206>
0826a77a +0x018:  mov    0xc(%ebp),%eax
0826a77d +0x01b:  mov    %eax,(%esp)
0826a780 +0x01e:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0826a785 +0x023:  mov    %eax,-0x18(%ebp)
0826a788 +0x026:  cmpl   $0x0,-0x18(%ebp)
0826a78c +0x02a:  jne    0826a798 <+0x36>
0826a78e +0x02c:  mov    $0x1,%ebx
0826a793 +0x031:  jmp    0826a968 <+0x206>
0826a798 +0x036:  mov    -0x18(%ebp),%eax
0826a79b +0x039:  mov    %eax,(%esp)
0826a79e +0x03c:  call   0822d928 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fd2
0826a7a3 +0x041:  mov    %eax,%ebx
0826a7a5 +0x043:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826a7aa +0x048:  mov    %ebx,0x4(%esp)
0826a7ae +0x04c:  mov    %eax,(%esp)
0826a7b1 +0x04f:  call   08295572 <_ZN12CGameManager13GetQuickPartyEi>  ; CGameManager::GetQuickParty(int)
0826a7b6 +0x054:  mov    %eax,-0x14(%ebp)
0826a7b9 +0x057:  cmpl   $0x0,-0x14(%ebp)
0826a7bd +0x05b:  jne    0826a7c9 <+0x67>
0826a7bf +0x05d:  mov    $0x1,%ebx
0826a7c4 +0x062:  jmp    0826a968 <+0x206>
0826a7c9 +0x067:  mov    -0x14(%ebp),%eax
0826a7cc +0x06a:  mov    %eax,(%esp)
0826a7cf +0x06d:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0826a7d4 +0x072:  mov    %eax,-0x10(%ebp)
0826a7d7 +0x075:  cmpl   $0x1,-0x10(%ebp)
0826a7db +0x079:  jg     0826a7f7 <+0x95>
0826a7dd +0x07b:  mov    -0x14(%ebp),%eax
0826a7e0 +0x07e:  mov    %eax,(%esp)
0826a7e3 +0x081:  call   0826b75a <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x28>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x28
0826a7e8 +0x086:  movsbl %al,%eax
0826a7eb +0x089:  cmp    -0x10(%ebp),%eax
0826a7ee +0x08c:  jne    0826a7f7 <+0x95>
0826a7f0 +0x08e:  mov    $0x1,%eax
0826a7f5 +0x093:  jmp    0826a7fc <+0x9a>
0826a7f7 +0x095:  mov    $0x0,%eax
0826a7fc +0x09a:  test   %al,%al
0826a7fe +0x09c:  je     0826a80a <+0xa8>
0826a800 +0x09e:  mov    $0xf5,%ebx
0826a805 +0x0a3:  jmp    0826a968 <+0x206>
0826a80a +0x0a8:  mov    -0x14(%ebp),%eax
0826a80d +0x0ab:  mov    %eax,(%esp)
0826a810 +0x0ae:  call   0826b75a <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x28>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x28
0826a815 +0x0b3:  movsbl %al,%eax
0826a818 +0x0b6:  cmp    -0x10(%ebp),%eax
0826a81b +0x0b9:  jl     0826a836 <+0xd4>
0826a81d +0x0bb:  mov    -0x14(%ebp),%eax
0826a820 +0x0be:  mov    %eax,(%esp)
0826a823 +0x0c1:  call   0826b7e4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xb2>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xb2
0826a828 +0x0c6:  xor    $0x1,%eax
0826a82b +0x0c9:  test   %al,%al
0826a82d +0x0cb:  je     0826a836 <+0xd4>
0826a82f +0x0cd:  mov    $0x1,%eax
0826a834 +0x0d2:  jmp    0826a83b <+0xd9>
0826a836 +0x0d4:  mov    $0x0,%eax
0826a83b +0x0d9:  test   %al,%al
0826a83d +0x0db:  je     0826a918 <+0x1b6>
0826a843 +0x0e1:  mov    -0x14(%ebp),%eax
0826a846 +0x0e4:  mov    %eax,(%esp)
0826a849 +0x0e7:  call   0826972c <_ZN10QuickParty11CQuickParty16get_party_objectEv>  ; QuickParty::CQuickParty::get_party_object()
0826a84e +0x0ec:  mov    %eax,-0xc(%ebp)
0826a851 +0x0ef:  cmpl   $0x0,-0xc(%ebp)
0826a855 +0x0f3:  jne    0826a861 <+0xff>
0826a857 +0x0f5:  mov    $0x1,%ebx
0826a85c +0x0fa:  jmp    0826a968 <+0x206>
0826a861 +0x0ff:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826a866 +0x104:  mov    %eax,(%esp)
0826a869 +0x107:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
0826a86e +0x10c:  movl   $0x0,0xc(%esp)
0826a876 +0x114:  movl   $0x1,0x8(%esp)
0826a87e +0x11c:  mov    -0xc(%ebp),%edx
0826a881 +0x11f:  mov    %edx,0x4(%esp)
0826a885 +0x123:  mov    %eax,(%esp)
0826a888 +0x126:  call   0826a386 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser>  ; QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)
0826a88d +0x12b:  test   %al,%al
0826a88f +0x12d:  je     0826a918 <+0x1b6>
0826a895 +0x133:  lea    -0x28(%ebp),%eax
0826a898 +0x136:  mov    %eax,(%esp)
0826a89b +0x139:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0826a8a0 +0x13e:  lea    -0x28(%ebp),%eax
0826a8a3 +0x141:  mov    %eax,(%esp)
0826a8a6 +0x144:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0826a8ab +0x149:  movl   $0x17f,0x8(%esp)
0826a8b3 +0x151:  movl   $0x0,0x4(%esp)
0826a8bb +0x159:  lea    -0x28(%ebp),%eax
0826a8be +0x15c:  mov    %eax,(%esp)
0826a8c1 +0x15f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0826a8c6 +0x164:  movl   $0x1,0x4(%esp)
0826a8ce +0x16c:  lea    -0x28(%ebp),%eax
0826a8d1 +0x16f:  mov    %eax,(%esp)
0826a8d4 +0x172:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0826a8d9 +0x177:  lea    -0x28(%ebp),%eax
0826a8dc +0x17a:  mov    %eax,0x4(%esp)
0826a8e0 +0x17e:  mov    -0xc(%ebp),%eax
0826a8e3 +0x181:  mov    %eax,(%esp)
0826a8e6 +0x184:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0826a8eb +0x189:  mov    $0x1,%ebx
0826a8f0 +0x18e:  lea    -0x28(%ebp),%eax
0826a8f3 +0x191:  mov    %eax,(%esp)
0826a8f6 +0x194:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0826a8fb +0x199:  jmp    0826a968 <+0x206>
0826a8fd +0x19b:  mov    %edx,%ebx
0826a8ff +0x19d:  mov    %eax,%esi
0826a901 +0x19f:  lea    -0x28(%ebp),%eax
0826a904 +0x1a2:  mov    %eax,(%esp)
0826a907 +0x1a5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0826a90c +0x1aa:  mov    %esi,%eax
0826a90e +0x1ac:  mov    %ebx,%edx
0826a910 +0x1ae:  mov    %eax,(%esp)
0826a913 +0x1b1:  call   08ae3750 <_Unwind_Resume>
0826a918 +0x1b6:  lea    -0x1c(%ebp),%eax
0826a91b +0x1b9:  mov    %eax,(%esp)
0826a91e +0x1bc:  call   082344ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b74
0826a923 +0x1c1:  mov    -0x14(%ebp),%eax
0826a926 +0x1c4:  mov    %eax,(%esp)
0826a929 +0x1c7:  call   0826b798 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x66>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x66
0826a92e +0x1cc:  mov    %ax,-0x1c(%ebp)
0826a932 +0x1d0:  mov    -0x14(%ebp),%eax
0826a935 +0x1d3:  mov    %eax,(%esp)
0826a938 +0x1d6:  call   0826b7b4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x82>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x82
0826a93d +0x1db:  mov    %al,-0x1a(%ebp)
0826a940 +0x1de:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826a945 +0x1e3:  mov    %eax,(%esp)
0826a948 +0x1e6:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
0826a94d +0x1eb:  lea    -0x1c(%ebp),%edx
0826a950 +0x1ee:  mov    %edx,0x8(%esp)
0826a954 +0x1f2:  mov    -0x14(%ebp),%edx
0826a957 +0x1f5:  mov    %edx,0x4(%esp)
0826a95b +0x1f9:  mov    %eax,(%esp)
0826a95e +0x1fc:  call   0826a972 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE>  ; QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*, QuickParty::STQuickPartyPoolMap_Key const&)
0826a963 +0x201:  mov    $0x0,%ebx
0826a968 +0x206:  mov    %ebx,%eax
0826a96a +0x208:  add    $0x30,%esp
0826a96d +0x20b:  pop    %ebx
0826a96e +0x20c:  pop    %esi
0826a96f +0x20d:  pop    %ebp
0826a970 +0x20e:  ret
0826a971 +0x20f:  nop
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::direct_entrance_quick_party @ 0x826a762

/* QuickParty::CQuickPartySystemManager::direct_entrance_quick_party(CUser*) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::direct_entrance_quick_party
          (CQuickPartySystemManager *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CGameManager *pCVar4;
  CQuickPartySystemManager *pCVar5;
  PacketGuard local_2c [12];
  undefined2 local_20;
  undefined1 local_1e;
  CParty *local_1c;
  CQuickParty *local_18;
  int local_14;
  CParty *local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 1;
  }
  local_1c = (CParty *)CUser::GetParty(param_1);
  if (local_1c == (CParty *)0x0) {
    return 1;
  }
  CParty::get_quick_party_index(local_1c);
  iVar3 = G_CGameManager();
  local_18 = (CQuickParty *)CGameManager::GetQuickParty(iVar3);
  if (local_18 == (CQuickParty *)0x0) {
    return 1;
  }
  local_14 = CQuickParty::get_quick_party_count(local_18);
  if ((local_14 < 2) && (cVar2 = CQuickParty::get_first_matching_cnt(local_18), cVar2 == local_14))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar2 = CQuickParty::get_first_matching_cnt(local_18);
    if ((cVar2 < local_14) ||
       (cVar2 = CQuickParty::is_change_quick_party_count(local_18), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_10 = (CParty *)CQuickParty::get_party_object(local_18);
      if (local_10 == (CParty *)0x0) {
        return 1;
      }
      pCVar4 = (CGameManager *)G_CGameManager();
      pCVar5 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(pCVar4);
      cVar2 = cancel_quick_party(pCVar5,local_10,true,(CUser *)0x0);
      if (cVar2 != '\0') {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0826a8a6 to 0826a8ea has its CatchHandler @ 0826a8fd */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x17f);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CParty::send_to_party(local_10,local_2c);
        PacketGuard::~PacketGuard(local_2c);
        return 1;
      }
    }
    STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key((STQuickPartyPoolMap_Key *)&local_20);
    local_20 = CQuickParty::get_dungeon_index(local_18);
    local_1e = CQuickParty::get_dungeon_diff(local_18);
    pCVar4 = (CGameManager *)G_CGameManager();
    pCVar5 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(pCVar4);
    start_game(pCVar5,local_18,(STQuickPartyPoolMap_Key *)&local_20);
    return 0;
  }
  return 0xf5;
}
```
