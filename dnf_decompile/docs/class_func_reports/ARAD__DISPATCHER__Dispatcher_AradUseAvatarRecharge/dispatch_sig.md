# dispatch_sig

`_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge` | `0x0819fa56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819fa56  _ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig(CUser*, PacketBuf&)
# range [0x0819fa56, 0x0819fcb3]
0819fa56 +0x000:  push   %ebp
0819fa57 +0x001:  mov    %esp,%ebp
0819fa59 +0x003:  push   %esi
0819fa5a +0x004:  push   %ebx
0819fa5b +0x005:  sub    $0x30,%esp
0819fa5e +0x008:  cmpl   $0x0,0xc(%ebp)
0819fa62 +0x00c:  jne    0819fa6e <+0x18>
0819fa64 +0x00e:  mov    $0x69c,%ebx
0819fa69 +0x013:  jmp    0819fcab <+0x255>
0819fa6e +0x018:  mov    0xc(%ebp),%eax
0819fa71 +0x01b:  mov    %eax,(%esp)
0819fa74 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0819fa79 +0x023:  test   %eax,%eax
0819fa7b +0x025:  sete   %al
0819fa7e +0x028:  test   %al,%al
0819fa80 +0x02a:  je     0819fa8c <+0x36>
0819fa82 +0x02c:  mov    $0x0,%ebx
0819fa87 +0x031:  jmp    0819fcab <+0x255>
0819fa8c +0x036:  mov    0xc(%ebp),%eax
0819fa8f +0x039:  mov    %eax,(%esp)
0819fa92 +0x03c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819fa97 +0x041:  cmp    $0x2,%eax
0819fa9a +0x044:  jle    0819faac <+0x56>
0819fa9c +0x046:  mov    0xc(%ebp),%eax
0819fa9f +0x049:  mov    %eax,(%esp)
0819faa2 +0x04c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819faa7 +0x051:  cmp    $0x4,%eax
0819faaa +0x054:  jle    0819fab3 <+0x5d>
0819faac +0x056:  mov    $0x1,%eax
0819fab1 +0x05b:  jmp    0819fab8 <+0x62>
0819fab3 +0x05d:  mov    $0x0,%eax
0819fab8 +0x062:  test   %al,%al
0819faba +0x064:  je     0819fae1 <+0x8b>
0819fabc +0x066:  movl   $0x7,0x8(%esp)
0819fac4 +0x06e:  movl   $0x24d,0x4(%esp)
0819facc +0x076:  mov    0xc(%ebp),%eax
0819facf +0x079:  mov    %eax,(%esp)
0819fad2 +0x07c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fad7 +0x081:  mov    $0x0,%ebx
0819fadc +0x086:  jmp    0819fcab <+0x255>
0819fae1 +0x08b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819fae6 +0x090:  mov    %eax,(%esp)
0819fae9 +0x093:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0819faee +0x098:  test   %al,%al
0819faf0 +0x09a:  jne    0819fb03 <+0xad>
0819faf2 +0x09c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819faf7 +0x0a1:  mov    %eax,(%esp)
0819fafa +0x0a4:  call   081a0ab2 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1a1>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1a1
0819faff +0x0a9:  test   %al,%al
0819fb01 +0x0ab:  je     0819fb0a <+0xb4>
0819fb03 +0x0ad:  mov    $0x1,%eax
0819fb08 +0x0b2:  jmp    0819fb0f <+0xb9>
0819fb0a +0x0b4:  mov    $0x0,%eax
0819fb0f +0x0b9:  test   %al,%al
0819fb11 +0x0bb:  je     0819fb38 <+0xe2>
0819fb13 +0x0bd:  movl   $0x7,0x8(%esp)
0819fb1b +0x0c5:  movl   $0x24d,0x4(%esp)
0819fb23 +0x0cd:  mov    0xc(%ebp),%eax
0819fb26 +0x0d0:  mov    %eax,(%esp)
0819fb29 +0x0d3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fb2e +0x0d8:  mov    $0x0,%ebx
0819fb33 +0x0dd:  jmp    0819fcab <+0x255>
0819fb38 +0x0e2:  mov    0xc(%ebp),%eax
0819fb3b +0x0e5:  mov    %eax,(%esp)
0819fb3e +0x0e8:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0819fb43 +0x0ed:  test   %al,%al
0819fb45 +0x0ef:  je     0819fb6c <+0x116>
0819fb47 +0x0f1:  movl   $0x7,0x8(%esp)
0819fb4f +0x0f9:  movl   $0x24d,0x4(%esp)
0819fb57 +0x101:  mov    0xc(%ebp),%eax
0819fb5a +0x104:  mov    %eax,(%esp)
0819fb5d +0x107:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fb62 +0x10c:  mov    $0x0,%ebx
0819fb67 +0x111:  jmp    0819fcab <+0x255>
0819fb6c +0x116:  lea    -0x18(%ebp),%eax
0819fb6f +0x119:  mov    %eax,(%esp)
0819fb72 +0x11c:  call   081a09f8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0xe7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0xe7
0819fb77 +0x121:  lea    -0x18(%ebp),%eax
0819fb7a +0x124:  add    $0x2,%eax
0819fb7d +0x127:  mov    %eax,0x4(%esp)
0819fb81 +0x12b:  mov    0x10(%ebp),%eax
0819fb84 +0x12e:  mov    %eax,(%esp)
0819fb87 +0x131:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0819fb8c +0x136:  xor    $0x1,%eax
0819fb8f +0x139:  test   %al,%al
0819fb91 +0x13b:  je     0819fb9d <+0x147>
0819fb93 +0x13d:  mov    $0x6b6,%ebx
0819fb98 +0x142:  jmp    0819fcab <+0x255>
0819fb9d +0x147:  lea    -0x18(%ebp),%eax
0819fba0 +0x14a:  mov    %eax,0x4(%esp)
0819fba4 +0x14e:  mov    0x10(%ebp),%eax
0819fba7 +0x151:  mov    %eax,(%esp)
0819fbaa +0x154:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0819fbaf +0x159:  xor    $0x1,%eax
0819fbb2 +0x15c:  test   %al,%al
0819fbb4 +0x15e:  je     0819fbc0 <+0x16a>
0819fbb6 +0x160:  mov    $0x6ba,%ebx
0819fbbb +0x165:  jmp    0819fcab <+0x255>
0819fbc0 +0x16a:  lea    -0x18(%ebp),%eax
0819fbc3 +0x16d:  mov    %eax,0x8(%esp)
0819fbc7 +0x171:  mov    0xc(%ebp),%eax
0819fbca +0x174:  mov    %eax,0x4(%esp)
0819fbce +0x178:  mov    0x8(%ebp),%eax
0819fbd1 +0x17b:  mov    %eax,(%esp)
0819fbd4 +0x17e:  call   0819f9d6 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge14checkWorkStateEP5CUserRN4arad24SigAradUseAvatarRechargeE>  ; ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState(CUser*, arad::SigAradUseAvatarRecharge&)
0819fbd9 +0x183:  xor    $0x1,%eax
0819fbdc +0x186:  test   %al,%al
0819fbde +0x188:  je     0819fbea <+0x194>
0819fbe0 +0x18a:  mov    $0x0,%ebx
0819fbe5 +0x18f:  jmp    0819fcab <+0x255>
0819fbea +0x194:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0819fbef +0x199:  movl   $0x6c2,0x8(%esp)
0819fbf7 +0x1a1:  movl   $"localjapan/Arad_PacketDispatcher.cpp",0x4(%esp)
0819fbff +0x1a9:  mov    %eax,(%esp)
0819fc02 +0x1ac:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0819fc07 +0x1b1:  movl   $0x1,0x8(%esp)
0819fc0f +0x1b9:  mov    %eax,0x4(%esp)
0819fc13 +0x1bd:  lea    -0x20(%ebp),%eax
0819fc16 +0x1c0:  mov    %eax,(%esp)
0819fc19 +0x1c3:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0819fc1e +0x1c8:  mov    0xc(%ebp),%eax
0819fc21 +0x1cb:  mov    %eax,(%esp)
0819fc24 +0x1ce:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0819fc29 +0x1d3:  mov    %eax,0x8(%esp)
0819fc2d +0x1d7:  movl   $0x30,0x4(%esp)
0819fc35 +0x1df:  lea    -0x20(%ebp),%eax
0819fc38 +0x1e2:  mov    %eax,(%esp)
0819fc3b +0x1e5:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
0819fc40 +0x1ea:  lea    -0x20(%ebp),%eax
0819fc43 +0x1ed:  mov    %eax,(%esp)
0819fc46 +0x1f0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0819fc4b +0x1f5:  movl   $0x10,0x8(%esp)
0819fc53 +0x1fd:  lea    -0x18(%ebp),%edx
0819fc56 +0x200:  mov    %edx,0x4(%esp)
0819fc5a +0x204:  mov    %eax,(%esp)
0819fc5d +0x207:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0819fc62 +0x20c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0819fc67 +0x211:  lea    -0x20(%ebp),%edx
0819fc6a +0x214:  mov    %edx,0x8(%esp)
0819fc6e +0x218:  movl   $0x1,0x4(%esp)
0819fc76 +0x220:  mov    %eax,(%esp)
0819fc79 +0x223:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0819fc7e +0x228:  mov    $0x0,%ebx
0819fc83 +0x22d:  lea    -0x20(%ebp),%eax
0819fc86 +0x230:  mov    %eax,(%esp)
0819fc89 +0x233:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0819fc8e +0x238:  jmp    0819fcab <+0x255>
0819fc90 +0x23a:  mov    %edx,%ebx
0819fc92 +0x23c:  mov    %eax,%esi
0819fc94 +0x23e:  lea    -0x20(%ebp),%eax
0819fc97 +0x241:  mov    %eax,(%esp)
0819fc9a +0x244:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0819fc9f +0x249:  mov    %esi,%eax
0819fca1 +0x24b:  mov    %ebx,%edx
0819fca3 +0x24d:  mov    %eax,(%esp)
0819fca6 +0x250:  call   08ae3750 <_Unwind_Resume>
0819fcab +0x255:  mov    %ebx,%eax
0819fcad +0x257:  add    $0x30,%esp
0819fcb0 +0x25a:  pop    %ebx
0819fcb1 +0x25b:  pop    %esi
0819fcb2 +0x25c:  pop    %ebp
0819fcb3 +0x25d:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig @ 0x819fa56

/* ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig
          (Dispatcher_AradUseAvatarRecharge *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_24 [8];
  SigAradUseAvatarRecharge local_1c [2];
  ushort auStack_1a [7];
  
  if (param_1 == (CUser *)0x0) {
    return 0x69c;
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
    CUser::SendCmdErrorPacket(param_1,0x24d,7);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0819fb0f;
    }
  }
  bVar1 = true;
LAB_0819fb0f:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24d,7);
    uVar6 = 0;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      arad::SigAradUseAvatarRecharge::SigAradUseAvatarRecharge(local_1c);
      cVar2 = PacketBuf::get_short(param_2,auStack_1a);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_short(param_2,(ushort *)local_1c);
        if (cVar2 == '\x01') {
          cVar2 = checkWorkState(this,param_1,local_1c);
          if (cVar2 == '\x01') {
            pSVar5 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,
                                         "localjapan/Arad_PacketDispatcher.cpp",0x6c2);
            CStreamGuard::CStreamGuard(local_24,pSVar5,true);
            uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 0819fc3b to 0819fc7d has its CatchHandler @ 0819fc90 */
            make_internal_stream_jpn(local_24,0x30,uVar6);
            this_00 = (CStreamGuard *)CStreamGuard::operator->(local_24);
            CStreamGuard::put_binary(this_00,local_1c,0x10);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
            uVar6 = 0;
            CStreamGuard::~CStreamGuard(local_24);
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 0x6ba;
        }
      }
      else {
        uVar6 = 0x6b6;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24d,7);
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
