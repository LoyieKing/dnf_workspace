# dispatch_sig

`_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AradEmblemCompound` | `0x0819fd7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819fd7e  _ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig(CUser*, PacketBuf&)
# range [0x0819fd7e, 0x081a003d]
0819fd7e +0x000:  push   %ebp
0819fd7f +0x001:  mov    %esp,%ebp
0819fd81 +0x003:  push   %esi
0819fd82 +0x004:  push   %ebx
0819fd83 +0x005:  sub    $0x40,%esp
0819fd86 +0x008:  cmpl   $0x0,0xc(%ebp)
0819fd8a +0x00c:  jne    0819fd96 <+0x18>
0819fd8c +0x00e:  mov    $0x6f1,%ebx
0819fd91 +0x013:  jmp    081a0034 <+0x2b6>
0819fd96 +0x018:  mov    0xc(%ebp),%eax
0819fd99 +0x01b:  mov    %eax,(%esp)
0819fd9c +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0819fda1 +0x023:  test   %eax,%eax
0819fda3 +0x025:  sete   %al
0819fda6 +0x028:  test   %al,%al
0819fda8 +0x02a:  je     0819fdb4 <+0x36>
0819fdaa +0x02c:  mov    $0x0,%ebx
0819fdaf +0x031:  jmp    081a0034 <+0x2b6>
0819fdb4 +0x036:  mov    0xc(%ebp),%eax
0819fdb7 +0x039:  mov    %eax,(%esp)
0819fdba +0x03c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819fdbf +0x041:  cmp    $0x2,%eax
0819fdc2 +0x044:  jle    0819fdd4 <+0x56>
0819fdc4 +0x046:  mov    0xc(%ebp),%eax
0819fdc7 +0x049:  mov    %eax,(%esp)
0819fdca +0x04c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819fdcf +0x051:  cmp    $0x4,%eax
0819fdd2 +0x054:  jle    0819fddb <+0x5d>
0819fdd4 +0x056:  mov    $0x1,%eax
0819fdd9 +0x05b:  jmp    0819fde0 <+0x62>
0819fddb +0x05d:  mov    $0x0,%eax
0819fde0 +0x062:  test   %al,%al
0819fde2 +0x064:  je     0819fe09 <+0x8b>
0819fde4 +0x066:  movl   $0x7,0x8(%esp)
0819fdec +0x06e:  movl   $0x24e,0x4(%esp)
0819fdf4 +0x076:  mov    0xc(%ebp),%eax
0819fdf7 +0x079:  mov    %eax,(%esp)
0819fdfa +0x07c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fdff +0x081:  mov    $0x0,%ebx
0819fe04 +0x086:  jmp    081a0034 <+0x2b6>
0819fe09 +0x08b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819fe0e +0x090:  mov    %eax,(%esp)
0819fe11 +0x093:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0819fe16 +0x098:  test   %al,%al
0819fe18 +0x09a:  jne    0819fe2b <+0xad>
0819fe1a +0x09c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819fe1f +0x0a1:  mov    %eax,(%esp)
0819fe22 +0x0a4:  call   081a0ab2 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1a1>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1a1
0819fe27 +0x0a9:  test   %al,%al
0819fe29 +0x0ab:  je     0819fe32 <+0xb4>
0819fe2b +0x0ad:  mov    $0x1,%eax
0819fe30 +0x0b2:  jmp    0819fe37 <+0xb9>
0819fe32 +0x0b4:  mov    $0x0,%eax
0819fe37 +0x0b9:  test   %al,%al
0819fe39 +0x0bb:  je     0819fe60 <+0xe2>
0819fe3b +0x0bd:  movl   $0x7,0x8(%esp)
0819fe43 +0x0c5:  movl   $0x24e,0x4(%esp)
0819fe4b +0x0cd:  mov    0xc(%ebp),%eax
0819fe4e +0x0d0:  mov    %eax,(%esp)
0819fe51 +0x0d3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fe56 +0x0d8:  mov    $0x0,%ebx
0819fe5b +0x0dd:  jmp    081a0034 <+0x2b6>
0819fe60 +0x0e2:  mov    0xc(%ebp),%eax
0819fe63 +0x0e5:  mov    %eax,(%esp)
0819fe66 +0x0e8:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0819fe6b +0x0ed:  test   %al,%al
0819fe6d +0x0ef:  je     0819fe94 <+0x116>
0819fe6f +0x0f1:  movl   $0x7,0x8(%esp)
0819fe77 +0x0f9:  movl   $0x24e,0x4(%esp)
0819fe7f +0x101:  mov    0xc(%ebp),%eax
0819fe82 +0x104:  mov    %eax,(%esp)
0819fe85 +0x107:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fe8a +0x10c:  mov    $0x0,%ebx
0819fe8f +0x111:  jmp    081a0034 <+0x2b6>
0819fe94 +0x116:  mov    0xc(%ebp),%eax
0819fe97 +0x119:  mov    %eax,(%esp)
0819fe9a +0x11c:  call   086810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>  ; CUser::isEnableAvatarSocketAction()
0819fe9f +0x121:  mov    %eax,-0xc(%ebp)
0819fea2 +0x124:  cmpl   $0x0,-0xc(%ebp)
0819fea6 +0x128:  je     0819fecf <+0x151>
0819fea8 +0x12a:  mov    -0xc(%ebp),%eax
0819feab +0x12d:  movzbl %al,%eax
0819feae +0x130:  mov    %eax,0x8(%esp)
0819feb2 +0x134:  movl   $0x24e,0x4(%esp)
0819feba +0x13c:  mov    0xc(%ebp),%eax
0819febd +0x13f:  mov    %eax,(%esp)
0819fec0 +0x142:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fec5 +0x147:  mov    $0x0,%ebx
0819feca +0x14c:  jmp    081a0034 <+0x2b6>
0819fecf +0x151:  lea    -0x22(%ebp),%eax
0819fed2 +0x154:  mov    %eax,(%esp)
0819fed5 +0x157:  call   081a0a2c <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x11b>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x11b
0819feda +0x15c:  lea    -0x22(%ebp),%eax
0819fedd +0x15f:  mov    %eax,0x4(%esp)
0819fee1 +0x163:  mov    0x10(%ebp),%eax
0819fee4 +0x166:  mov    %eax,(%esp)
0819fee7 +0x169:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0819feec +0x16e:  xor    $0x1,%eax
0819feef +0x171:  test   %al,%al
0819fef1 +0x173:  je     0819fefd <+0x17f>
0819fef3 +0x175:  mov    $0x713,%ebx
0819fef8 +0x17a:  jmp    081a0034 <+0x2b6>
0819fefd +0x17f:  lea    -0x22(%ebp),%eax
0819ff00 +0x182:  add    $0x8,%eax
0819ff03 +0x185:  mov    %eax,0x4(%esp)
0819ff07 +0x189:  mov    0x10(%ebp),%eax
0819ff0a +0x18c:  mov    %eax,(%esp)
0819ff0d +0x18f:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0819ff12 +0x194:  xor    $0x1,%eax
0819ff15 +0x197:  test   %al,%al
0819ff17 +0x199:  je     0819ff23 <+0x1a5>
0819ff19 +0x19b:  mov    $0x717,%ebx
0819ff1e +0x1a0:  jmp    081a0034 <+0x2b6>
0819ff23 +0x1a5:  lea    -0x22(%ebp),%eax
0819ff26 +0x1a8:  add    $0x14,%eax
0819ff29 +0x1ab:  mov    %eax,0x4(%esp)
0819ff2d +0x1af:  mov    0x10(%ebp),%eax
0819ff30 +0x1b2:  mov    %eax,(%esp)
0819ff33 +0x1b5:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0819ff38 +0x1ba:  xor    $0x1,%eax
0819ff3b +0x1bd:  test   %al,%al
0819ff3d +0x1bf:  je     0819ff49 <+0x1cb>
0819ff3f +0x1c1:  mov    $0x71b,%ebx
0819ff44 +0x1c6:  jmp    081a0034 <+0x2b6>
0819ff49 +0x1cb:  lea    -0x22(%ebp),%eax
0819ff4c +0x1ce:  mov    %eax,0x8(%esp)
0819ff50 +0x1d2:  mov    0xc(%ebp),%eax
0819ff53 +0x1d5:  mov    %eax,0x4(%esp)
0819ff57 +0x1d9:  mov    0x8(%ebp),%eax
0819ff5a +0x1dc:  mov    %eax,(%esp)
0819ff5d +0x1df:  call   0819fcb4 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE>  ; ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState(CUser*, arad::SigAradEmblemCompound&)
0819ff62 +0x1e4:  xor    $0x1,%eax
0819ff65 +0x1e7:  test   %al,%al
0819ff67 +0x1e9:  je     0819ff73 <+0x1f5>
0819ff69 +0x1eb:  mov    $0x0,%ebx
0819ff6e +0x1f0:  jmp    081a0034 <+0x2b6>
0819ff73 +0x1f5:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0819ff78 +0x1fa:  movl   $0x723,0x8(%esp)
0819ff80 +0x202:  movl   $"localjapan/Arad_PacketDispatcher.cpp",0x4(%esp)
0819ff88 +0x20a:  mov    %eax,(%esp)
0819ff8b +0x20d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0819ff90 +0x212:  movl   $0x1,0x8(%esp)
0819ff98 +0x21a:  mov    %eax,0x4(%esp)
0819ff9c +0x21e:  lea    -0x2c(%ebp),%eax
0819ff9f +0x221:  mov    %eax,(%esp)
0819ffa2 +0x224:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0819ffa7 +0x229:  mov    0xc(%ebp),%eax
0819ffaa +0x22c:  mov    %eax,(%esp)
0819ffad +0x22f:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0819ffb2 +0x234:  mov    %eax,0x8(%esp)
0819ffb6 +0x238:  movl   $0x32,0x4(%esp)
0819ffbe +0x240:  lea    -0x2c(%ebp),%eax
0819ffc1 +0x243:  mov    %eax,(%esp)
0819ffc4 +0x246:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
0819ffc9 +0x24b:  lea    -0x2c(%ebp),%eax
0819ffcc +0x24e:  mov    %eax,(%esp)
0819ffcf +0x251:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0819ffd4 +0x256:  movl   $0x16,0x8(%esp)
0819ffdc +0x25e:  lea    -0x22(%ebp),%edx
0819ffdf +0x261:  mov    %edx,0x4(%esp)
0819ffe3 +0x265:  mov    %eax,(%esp)
0819ffe6 +0x268:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0819ffeb +0x26d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0819fff0 +0x272:  lea    -0x2c(%ebp),%edx
0819fff3 +0x275:  mov    %edx,0x8(%esp)
0819fff7 +0x279:  movl   $0x1,0x4(%esp)
0819ffff +0x281:  mov    %eax,(%esp)
081a0002 +0x284:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081a0007 +0x289:  mov    $0x0,%ebx
081a000c +0x28e:  lea    -0x2c(%ebp),%eax
081a000f +0x291:  mov    %eax,(%esp)
081a0012 +0x294:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081a0017 +0x299:  jmp    081a0034 <+0x2b6>
081a0019 +0x29b:  mov    %edx,%ebx
081a001b +0x29d:  mov    %eax,%esi
081a001d +0x29f:  lea    -0x2c(%ebp),%eax
081a0020 +0x2a2:  mov    %eax,(%esp)
081a0023 +0x2a5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081a0028 +0x2aa:  mov    %esi,%eax
081a002a +0x2ac:  mov    %ebx,%edx
081a002c +0x2ae:  mov    %eax,(%esp)
081a002f +0x2b1:  call   08ae3750 <_Unwind_Resume>
081a0034 +0x2b6:  mov    %ebx,%eax
081a0036 +0x2b8:  add    $0x40,%esp
081a0039 +0x2bb:  pop    %ebx
081a003a +0x2bc:  pop    %esi
081a003b +0x2bd:  pop    %ebp
081a003c +0x2be:  ret
081a003d +0x2bf:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig @ 0x819fd7e

/* ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig
          (Dispatcher_AradEmblemCompound *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_30 [10];
  SigAradEmblemCompound local_26 [8];
  ushort auStack_1e [6];
  ushort uStack_12;
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0x6f1;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24e,7);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0819fe37;
    }
  }
  bVar1 = true;
LAB_0819fe37:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24e,7);
    uVar6 = 0;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      local_10 = CUser::isEnableAvatarSocketAction(param_1);
      if (local_10 == 0) {
        arad::SigAradEmblemCompound::SigAradEmblemCompound(local_26);
        cVar2 = PacketBuf::get_short(param_2,(ushort *)local_26);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_short(param_2,auStack_1e);
          if (cVar2 == '\x01') {
            cVar2 = PacketBuf::get_short(param_2,&uStack_12);
            if (cVar2 == '\x01') {
              cVar2 = checkWorkState(this,param_1,local_26);
              if (cVar2 == '\x01') {
                pSVar5 = (Stream *)
                         StreamPool::Acquire(GlobalData::s_stream_pool,
                                             "localjapan/Arad_PacketDispatcher.cpp",0x723);
                CStreamGuard::CStreamGuard(local_30,pSVar5,true);
                uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 0819ffc4 to 081a0006 has its CatchHandler @ 081a0019 */
                make_internal_stream_jpn(local_30,0x32,uVar6);
                this_00 = (CStreamGuard *)CStreamGuard::operator->(local_30);
                CStreamGuard::put_binary(this_00,local_26,0x16);
                MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
                uVar6 = 0;
                CStreamGuard::~CStreamGuard(local_30);
              }
              else {
                uVar6 = 0;
              }
            }
            else {
              uVar6 = 0x71b;
            }
          }
          else {
            uVar6 = 0x717;
          }
        }
        else {
          uVar6 = 0x713;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24e,local_10 & 0xff);
        uVar6 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24e,7);
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
