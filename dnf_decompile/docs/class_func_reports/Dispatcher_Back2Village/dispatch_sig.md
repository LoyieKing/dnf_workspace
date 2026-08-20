# dispatch_sig

`_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Back2Village::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Back2Village` | `0x0820559a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820559a  _ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Back2Village::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820559a, 0x08205790]
0820559a +0x000:  push   %ebp
0820559b +0x001:  mov    %esp,%ebp
0820559d +0x003:  push   %esi
0820559e +0x004:  push   %ebx
0820559f +0x005:  sub    $0x30,%esp
082055a2 +0x008:  mov    0xc(%ebp),%eax
082055a5 +0x00b:  mov    %eax,(%esp)
082055a8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082055ad +0x013:  cmp    $0xd,%eax
082055b0 +0x016:  sete   %al
082055b3 +0x019:  test   %al,%al
082055b5 +0x01b:  je     082055cc <+0x32>
082055b7 +0x01d:  mov    0xc(%ebp),%eax
082055ba +0x020:  mov    %eax,(%esp)
082055bd +0x023:  call   081310b2 <_ZN12advancealtar7Manager9leaveUserEP5CUser>  ; advancealtar::Manager::leaveUser(CUser*)
082055c2 +0x028:  mov    $0x0,%eax
082055c7 +0x02d:  jmp    0820578a <+0x1f0>
082055cc +0x032:  mov    0xc(%ebp),%eax
082055cf +0x035:  mov    %eax,(%esp)
082055d2 +0x038:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082055d7 +0x03d:  cmp    $0x5,%eax
082055da +0x040:  setne  %al
082055dd +0x043:  test   %al,%al
082055df +0x045:  je     082055eb <+0x51>
082055e1 +0x047:  mov    $0x0,%eax
082055e6 +0x04c:  jmp    0820578a <+0x1f0>
082055eb +0x051:  mov    0xc(%ebp),%eax
082055ee +0x054:  mov    %eax,(%esp)
082055f1 +0x057:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082055f6 +0x05c:  mov    %eax,-0x10(%ebp)
082055f9 +0x05f:  cmpl   $0x0,-0x10(%ebp)
082055fd +0x063:  jne    08205609 <+0x6f>
082055ff +0x065:  mov    $0x0,%eax
08205604 +0x06a:  jmp    0820578a <+0x1f0>
08205609 +0x06f:  mov    -0x10(%ebp),%eax
0820560c +0x072:  mov    %eax,(%esp)
0820560f +0x075:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
08205614 +0x07a:  test   %al,%al
08205616 +0x07c:  setne  %al
08205619 +0x07f:  test   %al,%al
0820561b +0x081:  je     08205627 <+0x8d>
0820561d +0x083:  mov    $0x0,%eax
08205622 +0x088:  jmp    0820578a <+0x1f0>
08205627 +0x08d:  mov    -0x10(%ebp),%eax
0820562a +0x090:  mov    %eax,(%esp)
0820562d +0x093:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
08205632 +0x098:  cmp    0xc(%ebp),%eax
08205635 +0x09b:  setne  %al
08205638 +0x09e:  test   %al,%al
0820563a +0x0a0:  je     08205749 <+0x1af>
08205640 +0x0a6:  movl   $0x2,0x8(%esp)
08205648 +0x0ae:  mov    0xc(%ebp),%eax
0820564b +0x0b1:  mov    %eax,0x4(%esp)
0820564f +0x0b5:  mov    -0x10(%ebp),%eax
08205652 +0x0b8:  mov    %eax,(%esp)
08205655 +0x0bb:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
0820565a +0x0c0:  mov    %eax,-0xc(%ebp)
0820565d +0x0c3:  cmpl   $0x1,-0xc(%ebp)
08205661 +0x0c7:  je     08205742 <+0x1a8>
08205667 +0x0cd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0820566c +0x0d2:  mov    0xc(%ebp),%edx
0820566f +0x0d5:  mov    %edx,0x4(%esp)
08205673 +0x0d9:  mov    %eax,(%esp)
08205676 +0x0dc:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
0820567b +0x0e1:  lea    -0x1c(%ebp),%eax
0820567e +0x0e4:  mov    %eax,(%esp)
08205681 +0x0e7:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08205686 +0x0ec:  lea    -0x1c(%ebp),%eax
08205689 +0x0ef:  mov    %eax,(%esp)
0820568c +0x0f2:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08205691 +0x0f7:  movl   $0x2,0x8(%esp)
08205699 +0x0ff:  movl   $0x0,0x4(%esp)
082056a1 +0x107:  lea    -0x1c(%ebp),%eax
082056a4 +0x10a:  mov    %eax,(%esp)
082056a7 +0x10d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082056ac +0x112:  movl   $0x0,0x4(%esp)
082056b4 +0x11a:  lea    -0x1c(%ebp),%eax
082056b7 +0x11d:  mov    %eax,(%esp)
082056ba +0x120:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082056bf +0x125:  movl   $0x1,0x4(%esp)
082056c7 +0x12d:  lea    -0x1c(%ebp),%eax
082056ca +0x130:  mov    %eax,(%esp)
082056cd +0x133:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082056d2 +0x138:  lea    -0x1c(%ebp),%eax
082056d5 +0x13b:  movl   $0x0,0x8(%esp)
082056dd +0x143:  mov    %eax,0x4(%esp)
082056e1 +0x147:  mov    0xc(%ebp),%eax
082056e4 +0x14a:  mov    %eax,(%esp)
082056e7 +0x14d:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
082056ec +0x152:  movl   $0x1,0x4(%esp)
082056f4 +0x15a:  lea    -0x1c(%ebp),%eax
082056f7 +0x15d:  mov    %eax,(%esp)
082056fa +0x160:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082056ff +0x165:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08205704 +0x16a:  mov    0xc(%ebp),%edx
08205707 +0x16d:  mov    %edx,0x8(%esp)
0820570b +0x171:  lea    -0x1c(%ebp),%edx
0820570e +0x174:  mov    %edx,0x4(%esp)
08205712 +0x178:  mov    %eax,(%esp)
08205715 +0x17b:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0820571a +0x180:  jmp    08205737 <+0x19d>
0820571c +0x182:  mov    %edx,%ebx
0820571e +0x184:  mov    %eax,%esi
08205720 +0x186:  lea    -0x1c(%ebp),%eax
08205723 +0x189:  mov    %eax,(%esp)
08205726 +0x18c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820572b +0x191:  mov    %esi,%eax
0820572d +0x193:  mov    %ebx,%edx
0820572f +0x195:  mov    %eax,(%esp)
08205732 +0x198:  call   08ae3750 <_Unwind_Resume>
08205737 +0x19d:  lea    -0x1c(%ebp),%eax
0820573a +0x1a0:  mov    %eax,(%esp)
0820573d +0x1a3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08205742 +0x1a8:  mov    $0x0,%eax
08205747 +0x1ad:  jmp    0820578a <+0x1f0>
08205749 +0x1af:  mov    -0x10(%ebp),%eax
0820574c +0x1b2:  mov    %eax,(%esp)
0820574f +0x1b5:  call   0822d928 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fd2
08205754 +0x1ba:  cmp    $0xffffffff,%eax
08205757 +0x1bd:  setne  %al
0820575a +0x1c0:  test   %al,%al
0820575c +0x1c2:  je     0820577a <+0x1e0>
0820575e +0x1c4:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08205763 +0x1c9:  movl   $0x1,0x8(%esp)
0820576b +0x1d1:  mov    -0x10(%ebp),%edx
0820576e +0x1d4:  mov    %edx,0x4(%esp)
08205772 +0x1d8:  mov    %eax,(%esp)
08205775 +0x1db:  call   082983fc <_ZN12CGameManager18CheckOutQuickPartyEP6CPartyb>  ; CGameManager::CheckOutQuickParty(CParty*, bool)
0820577a +0x1e0:  mov    -0x10(%ebp),%eax
0820577d +0x1e3:  mov    %eax,(%esp)
08205780 +0x1e6:  call   085aca60 <_ZN6CParty15ReturnToVillageEv>  ; CParty::ReturnToVillage()
08205785 +0x1eb:  mov    $0x0,%eax
0820578a +0x1f0:  add    $0x30,%esp
0820578d +0x1f3:  pop    %ebx
0820578e +0x1f4:  pop    %esi
0820578f +0x1f5:  pop    %ebp
08205790 +0x1f6:  ret
```

## 反编译 C

```c
// Dispatcher_Back2Village::dispatch_sig @ 0x820559a

/* Dispatcher_Back2Village::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Back2Village::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  PacketBuf *pPVar3;
  GameWorld *pGVar4;
  CGameManager *this;
  PacketGuard local_20 [12];
  CParty *local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 0xd) {
    advancealtar::Manager::leaveUser((CUser *)param_2);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (((iVar2 == 5) &&
        (local_14 = (CParty *)CUser::GetParty((CUser *)param_2), local_14 != (CParty *)0x0)) &&
       (cVar1 = CParty::GetEPLPState(local_14), cVar1 == '\0')) {
      pPVar3 = (PacketBuf *)CParty::getManager(local_14);
      if (pPVar3 == param_2) {
        iVar2 = CParty::get_quick_party_index(local_14);
        if (iVar2 != -1) {
          this = (CGameManager *)G_CGameManager();
          CGameManager::CheckOutQuickParty(this,local_14,true);
        }
        CParty::ReturnToVillage(local_14);
      }
      else {
        local_10 = CParty::leave_user(local_14,param_2,2);
        if (local_10 != 1) {
          pGVar4 = (GameWorld *)G_GameWorld();
          GameWorld::out_from_dungeon(pGVar4,(CUser *)param_2);
          PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0820568c to 08205719 has its CatchHandler @ 0820571c */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
          CUser::make_basic_info((CUser *)param_2,(char *)local_20,'\0');
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
          pGVar4 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar4,local_20,(CUser *)param_2);
          PacketGuard::~PacketGuard(local_20);
        }
      }
    }
  }
  return 0;
}
```
