# dispatch_sig

`_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AvartarRoulette` | `0x0819ef54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819ef54  _ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig(CUser*, PacketBuf&)
# range [0x0819ef54, 0x0819f1bb]
0819ef54 +0x000:  push   %ebp
0819ef55 +0x001:  mov    %esp,%ebp
0819ef57 +0x003:  push   %esi
0819ef58 +0x004:  push   %ebx
0819ef59 +0x005:  sub    $0x20,%esp
0819ef5c +0x008:  cmpl   $0x0,0xc(%ebp)
0819ef60 +0x00c:  jne    0819ef6c <+0x18>
0819ef62 +0x00e:  mov    $0x312,%ebx
0819ef67 +0x013:  jmp    0819f1b2 <+0x25e>
0819ef6c +0x018:  mov    0xc(%ebp),%eax
0819ef6f +0x01b:  mov    %eax,(%esp)
0819ef72 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0819ef77 +0x023:  test   %eax,%eax
0819ef79 +0x025:  sete   %al
0819ef7c +0x028:  test   %al,%al
0819ef7e +0x02a:  je     0819ef8a <+0x36>
0819ef80 +0x02c:  mov    $0x0,%ebx
0819ef85 +0x031:  jmp    0819f1b2 <+0x25e>
0819ef8a +0x036:  mov    0xc(%ebp),%eax
0819ef8d +0x039:  mov    %eax,(%esp)
0819ef90 +0x03c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819ef95 +0x041:  cmp    $0x2,%eax
0819ef98 +0x044:  setle  %al
0819ef9b +0x047:  test   %al,%al
0819ef9d +0x049:  je     0819efc4 <+0x70>
0819ef9f +0x04b:  movl   $0x7,0x8(%esp)
0819efa7 +0x053:  movl   $0x24a,0x4(%esp)
0819efaf +0x05b:  mov    0xc(%ebp),%eax
0819efb2 +0x05e:  mov    %eax,(%esp)
0819efb5 +0x061:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819efba +0x066:  mov    $0x0,%ebx
0819efbf +0x06b:  jmp    0819f1b2 <+0x25e>
0819efc4 +0x070:  mov    0xc(%ebp),%eax
0819efc7 +0x073:  mov    %eax,(%esp)
0819efca +0x076:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0819efcf +0x07b:  test   %al,%al
0819efd1 +0x07d:  je     0819eff8 <+0xa4>
0819efd3 +0x07f:  movl   $0x7,0x8(%esp)
0819efdb +0x087:  movl   $0x24a,0x4(%esp)
0819efe3 +0x08f:  mov    0xc(%ebp),%eax
0819efe6 +0x092:  mov    %eax,(%esp)
0819efe9 +0x095:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819efee +0x09a:  mov    $0x0,%ebx
0819eff3 +0x09f:  jmp    0819f1b2 <+0x25e>
0819eff8 +0x0a4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819effd +0x0a9:  mov    %eax,(%esp)
0819f000 +0x0ac:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0819f005 +0x0b1:  test   %al,%al
0819f007 +0x0b3:  jne    0819f01a <+0xc6>
0819f009 +0x0b5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819f00e +0x0ba:  mov    %eax,(%esp)
0819f011 +0x0bd:  call   081a0ab2 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1a1>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1a1
0819f016 +0x0c2:  test   %al,%al
0819f018 +0x0c4:  je     0819f021 <+0xcd>
0819f01a +0x0c6:  mov    $0x1,%eax
0819f01f +0x0cb:  jmp    0819f026 <+0xd2>
0819f021 +0x0cd:  mov    $0x0,%eax
0819f026 +0x0d2:  test   %al,%al
0819f028 +0x0d4:  je     0819f04f <+0xfb>
0819f02a +0x0d6:  movl   $0x7,0x8(%esp)
0819f032 +0x0de:  movl   $0x24a,0x4(%esp)
0819f03a +0x0e6:  mov    0xc(%ebp),%eax
0819f03d +0x0e9:  mov    %eax,(%esp)
0819f040 +0x0ec:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f045 +0x0f1:  mov    $0x0,%ebx
0819f04a +0x0f6:  jmp    0819f1b2 <+0x25e>
0819f04f +0x0fb:  lea    -0xb(%ebp),%eax
0819f052 +0x0fe:  mov    %eax,(%esp)
0819f055 +0x101:  call   081a092e <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1d>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1d
0819f05a +0x106:  lea    -0xb(%ebp),%eax
0819f05d +0x109:  mov    %eax,0x4(%esp)
0819f061 +0x10d:  mov    0x10(%ebp),%eax
0819f064 +0x110:  mov    %eax,(%esp)
0819f067 +0x113:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0819f06c +0x118:  xor    $0x1,%eax
0819f06f +0x11b:  test   %al,%al
0819f071 +0x11d:  je     0819f07d <+0x129>
0819f073 +0x11f:  mov    $0x32f,%ebx
0819f078 +0x124:  jmp    0819f1b2 <+0x25e>
0819f07d +0x129:  lea    -0xb(%ebp),%eax
0819f080 +0x12c:  add    $0x1,%eax
0819f083 +0x12f:  mov    %eax,0x4(%esp)
0819f087 +0x133:  mov    0x10(%ebp),%eax
0819f08a +0x136:  mov    %eax,(%esp)
0819f08d +0x139:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0819f092 +0x13e:  xor    $0x1,%eax
0819f095 +0x141:  test   %al,%al
0819f097 +0x143:  je     0819f0a3 <+0x14f>
0819f099 +0x145:  mov    $0x331,%ebx
0819f09e +0x14a:  jmp    0819f1b2 <+0x25e>
0819f0a3 +0x14f:  movzbl -0xb(%ebp),%eax
0819f0a7 +0x153:  cmp    $0xa,%al
0819f0a9 +0x155:  jbe    0819f0b5 <+0x161>
0819f0ab +0x157:  mov    $0x334,%ebx
0819f0b0 +0x15c:  jmp    0819f1b2 <+0x25e>
0819f0b5 +0x161:  movzbl -0xa(%ebp),%eax
0819f0b9 +0x165:  cmp    $0x9,%al
0819f0bb +0x167:  jbe    0819f0c7 <+0x173>
0819f0bd +0x169:  mov    $0x337,%ebx
0819f0c2 +0x16e:  jmp    0819f1b2 <+0x25e>
0819f0c7 +0x173:  lea    -0xb(%ebp),%eax
0819f0ca +0x176:  mov    %eax,0x8(%esp)
0819f0ce +0x17a:  mov    0xc(%ebp),%eax
0819f0d1 +0x17d:  mov    %eax,0x4(%esp)
0819f0d5 +0x181:  mov    0x8(%ebp),%eax
0819f0d8 +0x184:  mov    %eax,(%esp)
0819f0db +0x187:  call   0819ee6c <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE>  ; ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)
0819f0e0 +0x18c:  xor    $0x1,%eax
0819f0e3 +0x18f:  test   %al,%al
0819f0e5 +0x191:  je     0819f0f1 <+0x19d>
0819f0e7 +0x193:  mov    $0x0,%ebx
0819f0ec +0x198:  jmp    0819f1b2 <+0x25e>
0819f0f1 +0x19d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0819f0f6 +0x1a2:  movl   $0x347,0x8(%esp)
0819f0fe +0x1aa:  movl   $"localjapan/Arad_PacketDispatcher.cpp",0x4(%esp)
0819f106 +0x1b2:  mov    %eax,(%esp)
0819f109 +0x1b5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0819f10e +0x1ba:  movl   $0x1,0x8(%esp)
0819f116 +0x1c2:  mov    %eax,0x4(%esp)
0819f11a +0x1c6:  lea    -0x14(%ebp),%eax
0819f11d +0x1c9:  mov    %eax,(%esp)
0819f120 +0x1cc:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0819f125 +0x1d1:  mov    0xc(%ebp),%eax
0819f128 +0x1d4:  mov    %eax,(%esp)
0819f12b +0x1d7:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0819f130 +0x1dc:  mov    %eax,0x8(%esp)
0819f134 +0x1e0:  movl   $0x2c,0x4(%esp)
0819f13c +0x1e8:  lea    -0x14(%ebp),%eax
0819f13f +0x1eb:  mov    %eax,(%esp)
0819f142 +0x1ee:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
0819f147 +0x1f3:  lea    -0x14(%ebp),%eax
0819f14a +0x1f6:  mov    %eax,(%esp)
0819f14d +0x1f9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0819f152 +0x1fe:  movl   $0x3,0x8(%esp)
0819f15a +0x206:  lea    -0xb(%ebp),%edx
0819f15d +0x209:  mov    %edx,0x4(%esp)
0819f161 +0x20d:  mov    %eax,(%esp)
0819f164 +0x210:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0819f169 +0x215:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0819f16e +0x21a:  lea    -0x14(%ebp),%edx
0819f171 +0x21d:  mov    %edx,0x8(%esp)
0819f175 +0x221:  movl   $0x1,0x4(%esp)
0819f17d +0x229:  mov    %eax,(%esp)
0819f180 +0x22c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0819f185 +0x231:  mov    $0x0,%ebx
0819f18a +0x236:  lea    -0x14(%ebp),%eax
0819f18d +0x239:  mov    %eax,(%esp)
0819f190 +0x23c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0819f195 +0x241:  jmp    0819f1b2 <+0x25e>
0819f197 +0x243:  mov    %edx,%ebx
0819f199 +0x245:  mov    %eax,%esi
0819f19b +0x247:  lea    -0x14(%ebp),%eax
0819f19e +0x24a:  mov    %eax,(%esp)
0819f1a1 +0x24d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0819f1a6 +0x252:  mov    %esi,%eax
0819f1a8 +0x254:  mov    %ebx,%edx
0819f1aa +0x256:  mov    %eax,(%esp)
0819f1ad +0x259:  call   08ae3750 <_Unwind_Resume>
0819f1b2 +0x25e:  mov    %ebx,%eax
0819f1b4 +0x260:  add    $0x20,%esp
0819f1b7 +0x263:  pop    %ebx
0819f1b8 +0x264:  pop    %esi
0819f1b9 +0x265:  pop    %ebp
0819f1ba +0x266:  ret
0819f1bb +0x267:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig @ 0x819ef54

/* ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig
          (Dispatcher_AvartarRoulette *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_18 [9];
  SigAvatarRoulette local_f;
  byte local_e [2];
  
  if (param_1 == (CUser *)0x0) {
    return 0x312;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    CUser::SendCmdErrorPacket(param_1,0x24a,7);
    return 0;
  }
  cVar2 = CUser::CheckInTrade(param_1);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x24a,7);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0819f026;
    }
  }
  bVar1 = true;
LAB_0819f026:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24a,7);
    uVar6 = 0;
  }
  else {
    arad::SigAvatarRoulette::SigAvatarRoulette(&local_f);
    cVar2 = PacketBuf::get_byte(param_2,(uchar *)&local_f);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_byte(param_2,local_e);
      if (cVar2 == '\x01') {
        if ((byte)local_f < 0xb) {
          if (local_e[0] < 10) {
            cVar2 = checkWorkState((CUser *)this,(SigAvatarRoulette *)param_1);
            if (cVar2 == '\x01') {
              pSVar5 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,
                                           "localjapan/Arad_PacketDispatcher.cpp",0x347);
              CStreamGuard::CStreamGuard(local_18,pSVar5,true);
              uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 0819f142 to 0819f184 has its CatchHandler @ 0819f197 */
              make_internal_stream_jpn(local_18,0x2c,uVar6);
              this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
              CStreamGuard::put_binary(this_00,&local_f,3);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
              uVar6 = 0;
              CStreamGuard::~CStreamGuard(local_18);
            }
            else {
              uVar6 = 0;
            }
          }
          else {
            uVar6 = 0x337;
          }
        }
        else {
          uVar6 = 0x334;
        }
      }
      else {
        uVar6 = 0x331;
      }
    }
    else {
      uVar6 = 0x32f;
    }
  }
  return uVar6;
}
```
