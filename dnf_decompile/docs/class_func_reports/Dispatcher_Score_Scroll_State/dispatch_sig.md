# dispatch_sig

`_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Score_Scroll_State::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Score_Scroll_State` | `0x081ff344` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ff344  _ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Score_Scroll_State::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ff344, 0x081ff503]
081ff344 +0x000:  push   %ebp
081ff345 +0x001:  mov    %esp,%ebp
081ff347 +0x003:  push   %esi
081ff348 +0x004:  push   %ebx
081ff349 +0x005:  sub    $0x30,%esp
081ff34c +0x008:  mov    0xc(%ebp),%eax
081ff34f +0x00b:  mov    %eax,(%esp)
081ff352 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ff357 +0x013:  cmp    $0x5,%eax
081ff35a +0x016:  setne  %al
081ff35d +0x019:  test   %al,%al
081ff35f +0x01b:  je     081ff36b <+0x27>
081ff361 +0x01d:  mov    $0x0,%ebx
081ff366 +0x022:  jmp    081ff4fa <+0x1b6>
081ff36b +0x027:  mov    0xc(%ebp),%eax
081ff36e +0x02a:  mov    %eax,(%esp)
081ff371 +0x02d:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081ff376 +0x032:  movswl %ax,%ebx
081ff379 +0x035:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ff37e +0x03a:  mov    %ebx,0x4(%esp)
081ff382 +0x03e:  mov    %eax,(%esp)
081ff385 +0x041:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081ff38a +0x046:  mov    %eax,-0xc(%ebp)
081ff38d +0x049:  cmpl   $0x0,-0xc(%ebp)
081ff391 +0x04d:  sete   %al
081ff394 +0x050:  test   %al,%al
081ff396 +0x052:  je     081ff3c3 <+0x7f>
081ff398 +0x054:  movl   $0x0,0xc(%esp)
081ff3a0 +0x05c:  movl   $0x0,0x8(%esp)
081ff3a8 +0x064:  movl   $&_ZZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ff3b0 +0x06c:  movl   $0x92fa,(%esp)
081ff3b7 +0x073:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ff3bc +0x078:  mov    %eax,%ebx
081ff3be +0x07a:  jmp    081ff4fa <+0x1b6>
081ff3c3 +0x07f:  mov    0xc(%ebp),%eax
081ff3c6 +0x082:  mov    %eax,0x4(%esp)
081ff3ca +0x086:  mov    -0xc(%ebp),%eax
081ff3cd +0x089:  mov    %eax,(%esp)
081ff3d0 +0x08c:  call   085b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>  ; CParty::CheckRecvFromAllMember(CUser*)
081ff3d5 +0x091:  xor    $0x1,%eax
081ff3d8 +0x094:  test   %al,%al
081ff3da +0x096:  je     081ff3e6 <+0xa2>
081ff3dc +0x098:  mov    $0x0,%ebx
081ff3e1 +0x09d:  jmp    081ff4fa <+0x1b6>
081ff3e6 +0x0a2:  mov    -0xc(%ebp),%eax
081ff3e9 +0x0a5:  mov    %eax,(%esp)
081ff3ec +0x0a8:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
081ff3f1 +0x0ad:  cmp    $0x2,%al
081ff3f3 +0x0af:  setg   %al
081ff3f6 +0x0b2:  test   %al,%al
081ff3f8 +0x0b4:  je     081ff43e <+0xfa>
081ff3fa +0x0b6:  mov    0xc(%ebp),%eax
081ff3fd +0x0b9:  mov    %eax,(%esp)
081ff400 +0x0bc:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ff405 +0x0c1:  movl   $0x0,0x14(%esp)
081ff40d +0x0c9:  movl   $0x0,0x10(%esp)
081ff415 +0x0d1:  movl   $0x1,0xc(%esp)
081ff41d +0x0d9:  movl   $0x197,0x8(%esp)
081ff425 +0x0e1:  mov    0xc(%ebp),%edx
081ff428 +0x0e4:  mov    %edx,0x4(%esp)
081ff42c +0x0e8:  mov    %eax,(%esp)
081ff42f +0x0eb:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ff434 +0x0f0:  mov    $0x0,%ebx
081ff439 +0x0f5:  jmp    081ff4fa <+0x1b6>
081ff43e +0x0fa:  lea    -0x18(%ebp),%eax
081ff441 +0x0fd:  mov    %eax,(%esp)
081ff444 +0x100:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ff449 +0x105:  lea    -0x18(%ebp),%eax
081ff44c +0x108:  mov    %eax,(%esp)
081ff44f +0x10b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081ff454 +0x110:  movl   $0x48,0x8(%esp)
081ff45c +0x118:  movl   $0x1,0x4(%esp)
081ff464 +0x120:  lea    -0x18(%ebp),%eax
081ff467 +0x123:  mov    %eax,(%esp)
081ff46a +0x126:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ff46f +0x12b:  movl   $0x1,0x4(%esp)
081ff477 +0x133:  lea    -0x18(%ebp),%eax
081ff47a +0x136:  mov    %eax,(%esp)
081ff47d +0x139:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ff482 +0x13e:  movl   $0x1,0x4(%esp)
081ff48a +0x146:  lea    -0x18(%ebp),%eax
081ff48d +0x149:  mov    %eax,(%esp)
081ff490 +0x14c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ff495 +0x151:  lea    -0x18(%ebp),%eax
081ff498 +0x154:  mov    %eax,0x4(%esp)
081ff49c +0x158:  mov    -0xc(%ebp),%eax
081ff49f +0x15b:  mov    %eax,(%esp)
081ff4a2 +0x15e:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081ff4a7 +0x163:  movl   $0x3,0x4(%esp)
081ff4af +0x16b:  mov    -0xc(%ebp),%eax
081ff4b2 +0x16e:  mov    %eax,(%esp)
081ff4b5 +0x171:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
081ff4ba +0x176:  movl   $0x1e,0x4(%esp)
081ff4c2 +0x17e:  mov    -0xc(%ebp),%eax
081ff4c5 +0x181:  mov    %eax,(%esp)
081ff4c8 +0x184:  call   085b2226 <_ZN6CParty36insert_time_dungeon_score_scroll_msgEi>  ; CParty::insert_time_dungeon_score_scroll_msg(int)
081ff4cd +0x189:  mov    $0x0,%ebx
081ff4d2 +0x18e:  lea    -0x18(%ebp),%eax
081ff4d5 +0x191:  mov    %eax,(%esp)
081ff4d8 +0x194:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ff4dd +0x199:  jmp    081ff4fa <+0x1b6>
081ff4df +0x19b:  mov    %edx,%ebx
081ff4e1 +0x19d:  mov    %eax,%esi
081ff4e3 +0x19f:  lea    -0x18(%ebp),%eax
081ff4e6 +0x1a2:  mov    %eax,(%esp)
081ff4e9 +0x1a5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ff4ee +0x1aa:  mov    %esi,%eax
081ff4f0 +0x1ac:  mov    %ebx,%edx
081ff4f2 +0x1ae:  mov    %eax,(%esp)
081ff4f5 +0x1b1:  call   08ae3750 <_Unwind_Resume>
081ff4fa +0x1b6:  mov    %ebx,%eax
081ff4fc +0x1b8:  add    $0x30,%esp
081ff4ff +0x1bb:  pop    %ebx
081ff500 +0x1bc:  pop    %esi
081ff501 +0x1bd:  pop    %ebp
081ff502 +0x1be:  ret
081ff503 +0x1bf:  nop
```

## 反编译 C

```c
// Dispatcher_Score_Scroll_State::dispatch_sig @ 0x81ff344

/* Dispatcher_Score_Scroll_State::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Score_Scroll_State::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  CHackAnalyzer *pCVar3;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 5) {
    CUser::GetPartyIndex((CUser *)param_2);
    iVar2 = G_CGameManager();
    local_10 = (CParty *)CGameManager::GetParty(iVar2);
    if (local_10 == (CParty *)0x0) {
      uVar4 = LineFunc(0x92fa,
                       "virtual int Dispatcher_Score_Scroll_State::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      cVar1 = CParty::CheckRecvFromAllMember(local_10,(CUser *)param_2);
      if (cVar1 == '\x01') {
        cVar1 = CParty::get_dungeon_clear_state(local_10);
        if (cVar1 < '\x03') {
          PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081ff44f to 081ff4cc has its CatchHandler @ 081ff4df */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x48);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
          CParty::send_to_party(local_10,local_1c);
          CParty::set_dungeon_clear_state(local_10,'\x03');
          CParty::insert_time_dungeon_score_scroll_msg(local_10,0x1e);
          uVar4 = 0;
          PacketGuard::~PacketGuard(local_1c);
        }
        else {
          pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_2,0x197,1,0,0);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
