# dispatch_sig

`_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij`

`Timer_ReturnUserTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_ReturnUserTimeout` | `0x0863a4c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a4c8  _ZN23Timer_ReturnUserTimeout12dispatch_sigEiij
#           Timer_ReturnUserTimeout::dispatch_sig(int, int, unsigned int)
# range [0x0863a4c8, 0x0863a705]
0863a4c8 +0x000:  push   %ebp
0863a4c9 +0x001:  mov    %esp,%ebp
0863a4cb +0x003:  push   %esi
0863a4cc +0x004:  push   %ebx
0863a4cd +0x005:  sub    $0x30,%esp
0863a4d0 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863a4d5 +0x00d:  movl   $0x2,0x8(%esp)
0863a4dd +0x015:  mov    0xc(%ebp),%edx
0863a4e0 +0x018:  mov    %edx,0x4(%esp)
0863a4e4 +0x01c:  mov    %eax,(%esp)
0863a4e7 +0x01f:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
0863a4ec +0x024:  mov    %eax,-0x10(%ebp)
0863a4ef +0x027:  cmpl   $0x0,-0x10(%ebp)
0863a4f3 +0x02b:  jne    0863a4ff <+0x37>
0863a4f5 +0x02d:  mov    $0x0,%ebx
0863a4fa +0x032:  jmp    0863a6fd <+0x235>
0863a4ff +0x037:  mov    -0x10(%ebp),%eax
0863a502 +0x03a:  mov    %eax,(%esp)
0863a505 +0x03d:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0863a50a +0x042:  movzwl %ax,%eax
0863a50d +0x045:  cmp    0x10(%ebp),%eax
0863a510 +0x048:  setne  %al
0863a513 +0x04b:  test   %al,%al
0863a515 +0x04d:  je     0863a521 <+0x59>
0863a517 +0x04f:  mov    $0x0,%ebx
0863a51c +0x054:  jmp    0863a6fd <+0x235>
0863a521 +0x059:  mov    -0x10(%ebp),%eax
0863a524 +0x05c:  mov    %eax,(%esp)
0863a527 +0x05f:  call   084ec788 <_GLOBAL__I__Z7getUserj+0x373a>  ; global constructors keyed to getUser(unsigned int)+0x373a
0863a52c +0x064:  lea    -0x1c(%ebp),%eax
0863a52f +0x067:  mov    %eax,(%esp)
0863a532 +0x06a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863a537 +0x06f:  lea    -0x1c(%ebp),%eax
0863a53a +0x072:  mov    %eax,(%esp)
0863a53d +0x075:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0863a542 +0x07a:  movl   $0x12d,0x8(%esp)
0863a54a +0x082:  movl   $0x0,0x4(%esp)
0863a552 +0x08a:  lea    -0x1c(%ebp),%eax
0863a555 +0x08d:  mov    %eax,(%esp)
0863a558 +0x090:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863a55d +0x095:  movl   $0x0,0x4(%esp)
0863a565 +0x09d:  lea    -0x1c(%ebp),%eax
0863a568 +0x0a0:  mov    %eax,(%esp)
0863a56b +0x0a3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0863a570 +0x0a8:  movl   $0x1,0x4(%esp)
0863a578 +0x0b0:  lea    -0x1c(%ebp),%eax
0863a57b +0x0b3:  mov    %eax,(%esp)
0863a57e +0x0b6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863a583 +0x0bb:  lea    -0x1c(%ebp),%eax
0863a586 +0x0be:  mov    %eax,0x4(%esp)
0863a58a +0x0c2:  mov    -0x10(%ebp),%eax
0863a58d +0x0c5:  mov    %eax,(%esp)
0863a590 +0x0c8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0863a595 +0x0cd:  lea    -0x1c(%ebp),%eax
0863a598 +0x0d0:  mov    %eax,(%esp)
0863a59b +0x0d3:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0863a5a0 +0x0d8:  movl   $0x2,0x8(%esp)
0863a5a8 +0x0e0:  movl   $0x0,0x4(%esp)
0863a5b0 +0x0e8:  lea    -0x1c(%ebp),%eax
0863a5b3 +0x0eb:  mov    %eax,(%esp)
0863a5b6 +0x0ee:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863a5bb +0x0f3:  movl   $0x0,0x4(%esp)
0863a5c3 +0x0fb:  lea    -0x1c(%ebp),%eax
0863a5c6 +0x0fe:  mov    %eax,(%esp)
0863a5c9 +0x101:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863a5ce +0x106:  movl   $0x1,0x4(%esp)
0863a5d6 +0x10e:  lea    -0x1c(%ebp),%eax
0863a5d9 +0x111:  mov    %eax,(%esp)
0863a5dc +0x114:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0863a5e1 +0x119:  lea    -0x1c(%ebp),%eax
0863a5e4 +0x11c:  movl   $0x0,0x8(%esp)
0863a5ec +0x124:  mov    %eax,0x4(%esp)
0863a5f0 +0x128:  mov    -0x10(%ebp),%eax
0863a5f3 +0x12b:  mov    %eax,(%esp)
0863a5f6 +0x12e:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0863a5fb +0x133:  movl   $0x1,0x4(%esp)
0863a603 +0x13b:  lea    -0x1c(%ebp),%eax
0863a606 +0x13e:  mov    %eax,(%esp)
0863a609 +0x141:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863a60e +0x146:  mov    -0x10(%ebp),%eax
0863a611 +0x149:  mov    %eax,(%esp)
0863a614 +0x14c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0863a619 +0x151:  mov    %eax,-0xc(%ebp)
0863a61c +0x154:  mov    -0x10(%ebp),%eax
0863a61f +0x157:  mov    %eax,(%esp)
0863a622 +0x15a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0863a627 +0x15f:  cmp    $0x5,%eax
0863a62a +0x162:  sete   %al
0863a62d +0x165:  test   %al,%al
0863a62f +0x167:  je     0863a65f <+0x197>
0863a631 +0x169:  cmpl   $0x0,-0xc(%ebp)
0863a635 +0x16d:  je     0863a64b <+0x183>
0863a637 +0x16f:  lea    -0x1c(%ebp),%eax
0863a63a +0x172:  mov    %eax,0x4(%esp)
0863a63e +0x176:  mov    -0xc(%ebp),%eax
0863a641 +0x179:  mov    %eax,(%esp)
0863a644 +0x17c:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0863a649 +0x181:  jmp    0863a67a <+0x1b2>
0863a64b +0x183:  lea    -0x1c(%ebp),%eax
0863a64e +0x186:  mov    %eax,0x4(%esp)
0863a652 +0x18a:  mov    -0x10(%ebp),%eax
0863a655 +0x18d:  mov    %eax,(%esp)
0863a658 +0x190:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0863a65d +0x195:  jmp    0863a67a <+0x1b2>
0863a65f +0x197:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863a664 +0x19c:  mov    -0x10(%ebp),%edx
0863a667 +0x19f:  mov    %edx,0x8(%esp)
0863a66b +0x1a3:  lea    -0x1c(%ebp),%edx
0863a66e +0x1a6:  mov    %edx,0x4(%esp)
0863a672 +0x1aa:  mov    %eax,(%esp)
0863a675 +0x1ad:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0863a67a +0x1b2:  cmpl   $0x0,-0xc(%ebp)
0863a67e +0x1b6:  je     0863a6d0 <+0x208>
0863a680 +0x1b8:  mov    -0xc(%ebp),%eax
0863a683 +0x1bb:  mov    %eax,(%esp)
0863a686 +0x1be:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
0863a68b +0x1c3:  xor    $0x1,%eax
0863a68e +0x1c6:  test   %al,%al
0863a690 +0x1c8:  jne    0863a6a4 <+0x1dc>
0863a692 +0x1ca:  mov    -0xc(%ebp),%eax
0863a695 +0x1cd:  mov    %eax,(%esp)
0863a698 +0x1d0:  call   085b9fd4 <_ZN6CParty18IsEventCharacPartyEv>  ; CParty::IsEventCharacParty()
0863a69d +0x1d5:  xor    $0x1,%eax
0863a6a0 +0x1d8:  test   %al,%al
0863a6a2 +0x1da:  je     0863a6ab <+0x1e3>
0863a6a4 +0x1dc:  mov    $0x1,%eax
0863a6a9 +0x1e1:  jmp    0863a6b0 <+0x1e8>
0863a6ab +0x1e3:  mov    $0x0,%eax
0863a6b0 +0x1e8:  test   %al,%al
0863a6b2 +0x1ea:  je     0863a6d0 <+0x208>
0863a6b4 +0x1ec:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863a6b9 +0x1f1:  movl   $0x1,0x8(%esp)
0863a6c1 +0x1f9:  mov    -0xc(%ebp),%edx
0863a6c4 +0x1fc:  mov    %edx,0x4(%esp)
0863a6c8 +0x200:  mov    %eax,(%esp)
0863a6cb +0x203:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
0863a6d0 +0x208:  mov    $0x1,%ebx
0863a6d5 +0x20d:  lea    -0x1c(%ebp),%eax
0863a6d8 +0x210:  mov    %eax,(%esp)
0863a6db +0x213:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863a6e0 +0x218:  jmp    0863a6fd <+0x235>
0863a6e2 +0x21a:  mov    %edx,%ebx
0863a6e4 +0x21c:  mov    %eax,%esi
0863a6e6 +0x21e:  lea    -0x1c(%ebp),%eax
0863a6e9 +0x221:  mov    %eax,(%esp)
0863a6ec +0x224:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863a6f1 +0x229:  mov    %esi,%eax
0863a6f3 +0x22b:  mov    %ebx,%edx
0863a6f5 +0x22d:  mov    %eax,(%esp)
0863a6f8 +0x230:  call   08ae3750 <_Unwind_Resume>
0863a6fd +0x235:  mov    %ebx,%eax
0863a6ff +0x237:  add    $0x30,%esp
0863a702 +0x23a:  pop    %ebx
0863a703 +0x23b:  pop    %esi
0863a704 +0x23c:  pop    %ebp
0863a705 +0x23d:  ret
```

## 反编译 C

```c
// Timer_ReturnUserTimeout::dispatch_sig @ 0x863a4c8

/* Timer_ReturnUserTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_ReturnUserTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  GameWorld *pGVar5;
  PacketGuard local_20 [12];
  CUser *local_14;
  CParty *local_10;
  
  iVar3 = G_CGameManager();
  local_14 = (CUser *)CGameManager::getUser(iVar3,param_2);
  if (local_14 == (CUser *)0x0) {
    return 0;
  }
  uVar4 = CUser::get_unique_id(local_14);
  if ((uVar4 & 0xffff) == param_3) {
    CUser::ResetReturnUser(local_14);
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0863a53d to 0863a6cf has its CatchHandler @ 0863a6e2 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x12d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(local_14,local_20);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
    CUser::make_basic_info(local_14,(char *)local_20,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    local_10 = (CParty *)CUser::GetParty(local_14);
    iVar3 = CUser::get_state(local_14);
    if (iVar3 == 5) {
      if (local_10 == (CParty *)0x0) {
        CUser::Send(local_14,local_20);
      }
      else {
        CParty::send_to_party(local_10,local_20);
      }
    }
    else {
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_20,local_14);
    }
    if (local_10 != (CParty *)0x0) {
      cVar2 = CParty::IsReturnUserParty(local_10);
      if ((cVar2 == '\x01') && (cVar2 = CParty::IsEventCharacParty(local_10), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pGVar5 = (GameWorld *)G_GameWorld();
        GameWorld::send_party_info_to_all(pGVar5,local_10,1);
      }
    }
    PacketGuard::~PacketGuard(local_20);
    return 1;
  }
  return 0;
}
```
