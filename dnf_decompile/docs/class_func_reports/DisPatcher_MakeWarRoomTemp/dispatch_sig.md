# dispatch_sig

`_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_MakeWarRoomTemp::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MakeWarRoomTemp` | `0x08201b32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08201b32  _ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_MakeWarRoomTemp::dispatch_sig(CUser*, PacketBuf&)
# range [0x08201b32, 0x08201e79]
08201b32 +0x000:  push   %ebp
08201b33 +0x001:  mov    %esp,%ebp
08201b35 +0x003:  push   %esi
08201b36 +0x004:  push   %ebx
08201b37 +0x005:  sub    $0x40,%esp
08201b3a +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08201b3f +0x00d:  mov    %eax,(%esp)
08201b42 +0x010:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
08201b47 +0x015:  test   %al,%al
08201b49 +0x017:  je     08201b55 <+0x23>
08201b4b +0x019:  mov    $0x0,%ebx
08201b50 +0x01e:  jmp    08201e71 <+0x33f>
08201b55 +0x023:  mov    0xc(%ebp),%eax
08201b58 +0x026:  mov    %eax,(%esp)
08201b5b +0x029:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08201b60 +0x02e:  cmp    $0x3,%eax
08201b63 +0x031:  setne  %al
08201b66 +0x034:  test   %al,%al
08201b68 +0x036:  je     08201b74 <+0x42>
08201b6a +0x038:  mov    $0x0,%ebx
08201b6f +0x03d:  jmp    08201e71 <+0x33f>
08201b74 +0x042:  lea    -0x20(%ebp),%eax
08201b77 +0x045:  mov    %eax,(%esp)
08201b7a +0x048:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08201b7f +0x04d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08201b84 +0x052:  mov    %eax,(%esp)
08201b87 +0x055:  call   082a24e8 <_ZN12CGameManager10GetWarRoomEv>  ; CGameManager::GetWarRoom()
08201b8c +0x05a:  mov    %eax,-0x14(%ebp)
08201b8f +0x05d:  movl   $0x5c,0x8(%esp)
08201b97 +0x065:  movl   $0x1,0x4(%esp)
08201b9f +0x06d:  lea    -0x20(%ebp),%eax
08201ba2 +0x070:  mov    %eax,(%esp)
08201ba5 +0x073:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08201baa +0x078:  cmpl   $0x0,-0x14(%ebp)
08201bae +0x07c:  jne    08201c05 <+0xd3>
08201bb0 +0x07e:  movl   $0x0,0x4(%esp)
08201bb8 +0x086:  lea    -0x20(%ebp),%eax
08201bbb +0x089:  mov    %eax,(%esp)
08201bbe +0x08c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08201bc3 +0x091:  movl   $0x4,0x4(%esp)
08201bcb +0x099:  lea    -0x20(%ebp),%eax
08201bce +0x09c:  mov    %eax,(%esp)
08201bd1 +0x09f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08201bd6 +0x0a4:  movl   $0x1,0x4(%esp)
08201bde +0x0ac:  lea    -0x20(%ebp),%eax
08201be1 +0x0af:  mov    %eax,(%esp)
08201be4 +0x0b2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08201be9 +0x0b7:  lea    -0x20(%ebp),%eax
08201bec +0x0ba:  mov    %eax,0x4(%esp)
08201bf0 +0x0be:  mov    0xc(%ebp),%eax
08201bf3 +0x0c1:  mov    %eax,(%esp)
08201bf6 +0x0c4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08201bfb +0x0c9:  mov    $0x0,%ebx
08201c00 +0x0ce:  jmp    08201e66 <+0x334>
08201c05 +0x0d3:  mov    0xc(%ebp),%eax
08201c08 +0x0d6:  mov    %eax,(%esp)
08201c0b +0x0d9:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
08201c10 +0x0de:  test   %al,%al
08201c12 +0x0e0:  je     08201c61 <+0x12f>
08201c14 +0x0e2:  mov    0xc(%ebp),%eax
08201c17 +0x0e5:  mov    %eax,(%esp)
08201c1a +0x0e8:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08201c1f +0x0ed:  mov    %eax,-0xc(%ebp)
08201c22 +0x0f0:  cmpl   $0x0,-0xc(%ebp)
08201c26 +0x0f4:  je     08201c61 <+0x12f>
08201c28 +0x0f6:  mov    0xc(%ebp),%eax
08201c2b +0x0f9:  mov    %eax,(%esp)
08201c2e +0x0fc:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08201c33 +0x101:  movzwl %ax,%eax
08201c36 +0x104:  mov    %eax,0x4(%esp)
08201c3a +0x108:  mov    -0xc(%ebp),%eax
08201c3d +0x10b:  mov    %eax,(%esp)
08201c40 +0x10e:  call   0859d388 <_ZN6CParty19send_invite_warroomEi>  ; CParty::send_invite_warroom(int)
08201c45 +0x113:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08201c4a +0x118:  movl   $0x0,0x8(%esp)
08201c52 +0x120:  mov    0xc(%ebp),%edx
08201c55 +0x123:  mov    %edx,0x4(%esp)
08201c59 +0x127:  mov    %eax,(%esp)
08201c5c +0x12a:  call   08297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>  ; CGameManager::CheckOutParty(CUser*, bool)
08201c61 +0x12f:  movl   $0x1770,0xc(%esp)
08201c69 +0x137:  movl   $"임시",0x8(%esp)
08201c71 +0x13f:  mov    0xc(%ebp),%eax
08201c74 +0x142:  mov    %eax,0x4(%esp)
08201c78 +0x146:  mov    -0x14(%ebp),%eax
08201c7b +0x149:  mov    %eax,(%esp)
08201c7e +0x14c:  call   086bac5e <_ZN7WarRoom6CreateEP5CUserPcs>  ; WarRoom::Create(CUser*, char*, short)
08201c83 +0x151:  mov    %eax,-0x10(%ebp)
08201c86 +0x154:  cmpl   $0x0,-0x10(%ebp)
08201c8a +0x158:  jle    08201d33 <+0x201>
08201c90 +0x15e:  movl   $0x0,0x4(%esp)
08201c98 +0x166:  lea    -0x20(%ebp),%eax
08201c9b +0x169:  mov    %eax,(%esp)
08201c9e +0x16c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08201ca3 +0x171:  mov    -0x10(%ebp),%eax
08201ca6 +0x174:  mov    %eax,0x4(%esp)
08201caa +0x178:  lea    -0x20(%ebp),%eax
08201cad +0x17b:  mov    %eax,(%esp)
08201cb0 +0x17e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08201cb5 +0x183:  movl   $0x1,0x4(%esp)
08201cbd +0x18b:  lea    -0x20(%ebp),%eax
08201cc0 +0x18e:  mov    %eax,(%esp)
08201cc3 +0x191:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08201cc8 +0x196:  lea    -0x20(%ebp),%eax
08201ccb +0x199:  mov    %eax,0x4(%esp)
08201ccf +0x19d:  mov    0xc(%ebp),%eax
08201cd2 +0x1a0:  mov    %eax,(%esp)
08201cd5 +0x1a3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08201cda +0x1a8:  mov    -0x14(%ebp),%eax
08201cdd +0x1ab:  mov    %eax,(%esp)
08201ce0 +0x1ae:  call   0822ee8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4534>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4534
08201ce5 +0x1b3:  mov    %eax,0x14(%esp)
08201ce9 +0x1b7:  movl   $"create_room fail: 쟁역 방 생성 실패 ID[%d]\n",0x10(%esp)
08201cf1 +0x1bf:  movl   $0x976d,0xc(%esp)
08201cf9 +0x1c7:  movl   $&_ZZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08201d01 +0x1cf:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
08201d09 +0x1d7:  movl   $0x1,(%esp)
08201d10 +0x1de:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08201d15 +0x1e3:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08201d1a +0x1e8:  mov    -0x14(%ebp),%edx
08201d1d +0x1eb:  mov    %edx,0x4(%esp)
08201d21 +0x1ef:  mov    %eax,(%esp)
08201d24 +0x1f2:  call   082a2666 <_ZN12CGameManager10PutWarRoomEP7WarRoom>  ; CGameManager::PutWarRoom(WarRoom*)
08201d29 +0x1f7:  mov    $0x0,%ebx
08201d2e +0x1fc:  jmp    08201e66 <+0x334>
08201d33 +0x201:  lea    -0x20(%ebp),%eax
08201d36 +0x204:  mov    %eax,(%esp)
08201d39 +0x207:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08201d3e +0x20c:  movl   $0x2,0x8(%esp)
08201d46 +0x214:  movl   $0x0,0x4(%esp)
08201d4e +0x21c:  lea    -0x20(%ebp),%eax
08201d51 +0x21f:  mov    %eax,(%esp)
08201d54 +0x222:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08201d59 +0x227:  movl   $0x1,0x4(%esp)
08201d61 +0x22f:  lea    -0x20(%ebp),%eax
08201d64 +0x232:  mov    %eax,(%esp)
08201d67 +0x235:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08201d6c +0x23a:  movl   $0x1,0x4(%esp)
08201d74 +0x242:  lea    -0x20(%ebp),%eax
08201d77 +0x245:  mov    %eax,(%esp)
08201d7a +0x248:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08201d7f +0x24d:  lea    -0x20(%ebp),%eax
08201d82 +0x250:  movl   $0x1,0x8(%esp)
08201d8a +0x258:  mov    %eax,0x4(%esp)
08201d8e +0x25c:  mov    0xc(%ebp),%eax
08201d91 +0x25f:  mov    %eax,(%esp)
08201d94 +0x262:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
08201d99 +0x267:  movl   $0x1,0x4(%esp)
08201da1 +0x26f:  lea    -0x20(%ebp),%eax
08201da4 +0x272:  mov    %eax,(%esp)
08201da7 +0x275:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08201dac +0x27a:  lea    -0x20(%ebp),%eax
08201daf +0x27d:  mov    %eax,0x4(%esp)
08201db3 +0x281:  mov    0xc(%ebp),%eax
08201db6 +0x284:  mov    %eax,(%esp)
08201db9 +0x287:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08201dbe +0x28c:  lea    -0x20(%ebp),%eax
08201dc1 +0x28f:  mov    %eax,(%esp)
08201dc4 +0x292:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08201dc9 +0x297:  movl   $0x57,0x8(%esp)
08201dd1 +0x29f:  movl   $0x0,0x4(%esp)
08201dd9 +0x2a7:  lea    -0x20(%ebp),%eax
08201ddc +0x2aa:  mov    %eax,(%esp)
08201ddf +0x2ad:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08201de4 +0x2b2:  movl   $0x1,0x4(%esp)
08201dec +0x2ba:  lea    -0x20(%ebp),%eax
08201def +0x2bd:  mov    %eax,(%esp)
08201df2 +0x2c0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08201df7 +0x2c5:  lea    -0x20(%ebp),%eax
08201dfa +0x2c8:  mov    %eax,0x4(%esp)
08201dfe +0x2cc:  mov    -0x14(%ebp),%eax
08201e01 +0x2cf:  mov    %eax,(%esp)
08201e04 +0x2d2:  call   086bdd58 <_ZN7WarRoom12MakeRoomInfoEPc>  ; WarRoom::MakeRoomInfo(char*)
08201e09 +0x2d7:  movl   $0x1,0x4(%esp)
08201e11 +0x2df:  lea    -0x20(%ebp),%eax
08201e14 +0x2e2:  mov    %eax,(%esp)
08201e17 +0x2e5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08201e1c +0x2ea:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08201e21 +0x2ef:  lea    -0x20(%ebp),%edx
08201e24 +0x2f2:  mov    %edx,0x4(%esp)
08201e28 +0x2f6:  mov    %eax,(%esp)
08201e2b +0x2f9:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08201e30 +0x2fe:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08201e35 +0x303:  mov    0xc(%ebp),%edx
08201e38 +0x306:  mov    %edx,0x4(%esp)
08201e3c +0x30a:  mov    %eax,(%esp)
08201e3f +0x30d:  call   086c7192 <_ZN9GameWorld12goto_warroomEP5CUser>  ; GameWorld::goto_warroom(CUser*)
08201e44 +0x312:  mov    $0x0,%ebx
08201e49 +0x317:  jmp    08201e66 <+0x334>
08201e4b +0x319:  mov    %edx,%ebx
08201e4d +0x31b:  mov    %eax,%esi
08201e4f +0x31d:  lea    -0x20(%ebp),%eax
08201e52 +0x320:  mov    %eax,(%esp)
08201e55 +0x323:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08201e5a +0x328:  mov    %esi,%eax
08201e5c +0x32a:  mov    %ebx,%edx
08201e5e +0x32c:  mov    %eax,(%esp)
08201e61 +0x32f:  call   08ae3750 <_Unwind_Resume>
08201e66 +0x334:  lea    -0x20(%ebp),%eax
08201e69 +0x337:  mov    %eax,(%esp)
08201e6c +0x33a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08201e71 +0x33f:  mov    %ebx,%eax
08201e73 +0x341:  add    $0x40,%esp
08201e76 +0x344:  pop    %ebx
08201e77 +0x345:  pop    %esi
08201e78 +0x346:  pop    %ebp
08201e79 +0x347:  ret
```

## 反编译 C

```c
// DisPatcher_MakeWarRoomTemp::dispatch_sig @ 0x8201b32

/* DisPatcher_MakeWarRoomTemp::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_MakeWarRoomTemp::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  GameWorld *pGVar2;
  int iVar3;
  CGameManager *pCVar4;
  uint uVar5;
  CUser *pCVar6;
  undefined4 uVar7;
  PacketGuard local_24 [12];
  CUser *local_18;
  int local_14;
  CParty *local_10;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(pGVar2);
  if ((cVar1 == '\0') && (iVar3 = CUser::get_state((CUser *)param_2), iVar3 == 3)) {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08201b7f to 08201e43 has its CatchHandler @ 08201e4b */
    pCVar4 = (CGameManager *)G_CGameManager();
    local_18 = (CUser *)CGameManager::GetWarRoom(pCVar4);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x5c);
    if (local_18 == (CUser *)0x0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
    }
    else {
      cVar1 = CUser::CheckInParty((CUser *)param_2);
      if ((cVar1 != '\0') &&
         (local_10 = (CParty *)CUser::GetParty((CUser *)param_2), local_10 != (CParty *)0x0)) {
        uVar5 = CUser::get_unique_id((CUser *)param_2);
        CParty::send_invite_warroom(local_10,uVar5 & 0xffff);
        pCVar6 = (CUser *)G_CGameManager();
        CGameManager::CheckOutParty(pCVar6,SUB41(param_2,0));
      }
      local_14 = WarRoom::Create(local_18,(char *)param_2,0x28c1);
      if (local_14 < 1) {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
        CUser::make_basic_info((CUser *)param_2,(char *)local_24,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x57);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
        WarRoom::MakeRoomInfo((WarRoom *)local_18,(char *)local_24);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_24);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::goto_warroom(pGVar2,(CUser *)param_2);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        uVar7 = WarRoom::GetIndex((WarRoom *)local_18);
        LogManager::logFormat
                  (1,"PacketDispatcher_Impl_1.cpp",
                   "virtual int DisPatcher_MakeWarRoomTemp::dispatch_sig(CUser*, PacketBuf&)",0x976d
                   ,&DAT_08bc28c8,uVar7);
        pCVar4 = (CGameManager *)G_CGameManager();
        CGameManager::PutWarRoom(pCVar4,(WarRoom *)local_18);
      }
    }
    PacketGuard::~PacketGuard(local_24);
  }
  return 0;
}
```
