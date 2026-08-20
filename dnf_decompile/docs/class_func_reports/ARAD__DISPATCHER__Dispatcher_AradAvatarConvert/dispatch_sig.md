# dispatch_sig

`_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AradAvatarConvert` | `0x081a00be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a00be  _ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig(CUser*, PacketBuf&)
# range [0x081a00be, 0x081a0361]
081a00be +0x000:  push   %ebp
081a00bf +0x001:  mov    %esp,%ebp
081a00c1 +0x003:  push   %esi
081a00c2 +0x004:  push   %ebx
081a00c3 +0x005:  sub    $0x30,%esp
081a00c6 +0x008:  cmpl   $0x0,0xc(%ebp)
081a00ca +0x00c:  jne    081a00d6 <+0x18>
081a00cc +0x00e:  mov    $0x74a,%ebx
081a00d1 +0x013:  jmp    081a0359 <+0x29b>
081a00d6 +0x018:  mov    0xc(%ebp),%eax
081a00d9 +0x01b:  mov    %eax,(%esp)
081a00dc +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081a00e1 +0x023:  test   %eax,%eax
081a00e3 +0x025:  sete   %al
081a00e6 +0x028:  test   %al,%al
081a00e8 +0x02a:  je     081a00f4 <+0x36>
081a00ea +0x02c:  mov    $0x0,%ebx
081a00ef +0x031:  jmp    081a0359 <+0x29b>
081a00f4 +0x036:  mov    0xc(%ebp),%eax
081a00f7 +0x039:  mov    %eax,(%esp)
081a00fa +0x03c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081a00ff +0x041:  cmp    $0x2,%eax
081a0102 +0x044:  jle    081a0114 <+0x56>
081a0104 +0x046:  mov    0xc(%ebp),%eax
081a0107 +0x049:  mov    %eax,(%esp)
081a010a +0x04c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081a010f +0x051:  cmp    $0x4,%eax
081a0112 +0x054:  jle    081a011b <+0x5d>
081a0114 +0x056:  mov    $0x1,%eax
081a0119 +0x05b:  jmp    081a0120 <+0x62>
081a011b +0x05d:  mov    $0x0,%eax
081a0120 +0x062:  test   %al,%al
081a0122 +0x064:  je     081a012e <+0x70>
081a0124 +0x066:  mov    $0x0,%ebx
081a0129 +0x06b:  jmp    081a0359 <+0x29b>
081a012e +0x070:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081a0133 +0x075:  mov    %eax,(%esp)
081a0136 +0x078:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
081a013b +0x07d:  test   %al,%al
081a013d +0x07f:  jne    081a0150 <+0x92>
081a013f +0x081:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081a0144 +0x086:  mov    %eax,(%esp)
081a0147 +0x089:  call   081a0ab2 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1a1>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1a1
081a014c +0x08e:  test   %al,%al
081a014e +0x090:  je     081a0157 <+0x99>
081a0150 +0x092:  mov    $0x1,%eax
081a0155 +0x097:  jmp    081a015c <+0x9e>
081a0157 +0x099:  mov    $0x0,%eax
081a015c +0x09e:  test   %al,%al
081a015e +0x0a0:  je     081a0185 <+0xc7>
081a0160 +0x0a2:  movl   $0x7,0x8(%esp)
081a0168 +0x0aa:  movl   $0x24f,0x4(%esp)
081a0170 +0x0b2:  mov    0xc(%ebp),%eax
081a0173 +0x0b5:  mov    %eax,(%esp)
081a0176 +0x0b8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081a017b +0x0bd:  mov    $0x0,%ebx
081a0180 +0x0c2:  jmp    081a0359 <+0x29b>
081a0185 +0x0c7:  mov    0xc(%ebp),%eax
081a0188 +0x0ca:  mov    %eax,(%esp)
081a018b +0x0cd:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081a0190 +0x0d2:  test   %al,%al
081a0192 +0x0d4:  je     081a01b9 <+0xfb>
081a0194 +0x0d6:  movl   $0x7,0x8(%esp)
081a019c +0x0de:  movl   $0x24f,0x4(%esp)
081a01a4 +0x0e6:  mov    0xc(%ebp),%eax
081a01a7 +0x0e9:  mov    %eax,(%esp)
081a01aa +0x0ec:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081a01af +0x0f1:  mov    $0x0,%ebx
081a01b4 +0x0f6:  jmp    081a0359 <+0x29b>
081a01b9 +0x0fb:  mov    0xc(%ebp),%eax
081a01bc +0x0fe:  mov    %eax,(%esp)
081a01bf +0x101:  call   086810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>  ; CUser::isEnableAvatarSocketAction()
081a01c4 +0x106:  mov    %eax,-0xc(%ebp)
081a01c7 +0x109:  cmpl   $0x0,-0xc(%ebp)
081a01cb +0x10d:  je     081a01f4 <+0x136>
081a01cd +0x10f:  mov    -0xc(%ebp),%eax
081a01d0 +0x112:  movzbl %al,%eax
081a01d3 +0x115:  mov    %eax,0x8(%esp)
081a01d7 +0x119:  movl   $0x24f,0x4(%esp)
081a01df +0x121:  mov    0xc(%ebp),%eax
081a01e2 +0x124:  mov    %eax,(%esp)
081a01e5 +0x127:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081a01ea +0x12c:  mov    $0x0,%ebx
081a01ef +0x131:  jmp    081a0359 <+0x29b>
081a01f4 +0x136:  lea    -0x1a(%ebp),%eax
081a01f7 +0x139:  mov    %eax,(%esp)
081a01fa +0x13c:  call   081a0a6a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x159>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x159
081a01ff +0x141:  lea    -0x1a(%ebp),%eax
081a0202 +0x144:  mov    %eax,0x4(%esp)
081a0206 +0x148:  mov    0x10(%ebp),%eax
081a0209 +0x14b:  mov    %eax,(%esp)
081a020c +0x14e:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081a0211 +0x153:  xor    $0x1,%eax
081a0214 +0x156:  test   %al,%al
081a0216 +0x158:  je     081a0222 <+0x164>
081a0218 +0x15a:  mov    $0x76d,%ebx
081a021d +0x15f:  jmp    081a0359 <+0x29b>
081a0222 +0x164:  lea    -0x1a(%ebp),%eax
081a0225 +0x167:  add    $0x2,%eax
081a0228 +0x16a:  mov    %eax,0x4(%esp)
081a022c +0x16e:  mov    0x10(%ebp),%eax
081a022f +0x171:  mov    %eax,(%esp)
081a0232 +0x174:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081a0237 +0x179:  xor    $0x1,%eax
081a023a +0x17c:  test   %al,%al
081a023c +0x17e:  je     081a0248 <+0x18a>
081a023e +0x180:  mov    $0x771,%ebx
081a0243 +0x185:  jmp    081a0359 <+0x29b>
081a0248 +0x18a:  lea    -0x1a(%ebp),%eax
081a024b +0x18d:  add    $0x4,%eax
081a024e +0x190:  mov    %eax,0x4(%esp)
081a0252 +0x194:  mov    0x10(%ebp),%eax
081a0255 +0x197:  mov    %eax,(%esp)
081a0258 +0x19a:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081a025d +0x19f:  xor    $0x1,%eax
081a0260 +0x1a2:  test   %al,%al
081a0262 +0x1a4:  je     081a026e <+0x1b0>
081a0264 +0x1a6:  mov    $0x775,%ebx
081a0269 +0x1ab:  jmp    081a0359 <+0x29b>
081a026e +0x1b0:  lea    -0x1a(%ebp),%eax
081a0271 +0x1b3:  mov    %eax,0x8(%esp)
081a0275 +0x1b7:  mov    0xc(%ebp),%eax
081a0278 +0x1ba:  mov    %eax,0x4(%esp)
081a027c +0x1be:  mov    0x8(%ebp),%eax
081a027f +0x1c1:  mov    %eax,(%esp)
081a0282 +0x1c4:  call   081a003e <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert14checkWorkStateEP5CUserRN4arad20SigAradAvatarConvertE>  ; ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState(CUser*, arad::SigAradAvatarConvert&)
081a0287 +0x1c9:  xor    $0x1,%eax
081a028a +0x1cc:  test   %al,%al
081a028c +0x1ce:  je     081a0298 <+0x1da>
081a028e +0x1d0:  mov    $0x0,%ebx
081a0293 +0x1d5:  jmp    081a0359 <+0x29b>
081a0298 +0x1da:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081a029d +0x1df:  movl   $0x780,0x8(%esp)
081a02a5 +0x1e7:  movl   $"localjapan/Arad_PacketDispatcher.cpp",0x4(%esp)
081a02ad +0x1ef:  mov    %eax,(%esp)
081a02b0 +0x1f2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081a02b5 +0x1f7:  movl   $0x1,0x8(%esp)
081a02bd +0x1ff:  mov    %eax,0x4(%esp)
081a02c1 +0x203:  lea    -0x24(%ebp),%eax
081a02c4 +0x206:  mov    %eax,(%esp)
081a02c7 +0x209:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081a02cc +0x20e:  mov    0xc(%ebp),%eax
081a02cf +0x211:  mov    %eax,(%esp)
081a02d2 +0x214:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081a02d7 +0x219:  mov    %eax,0x8(%esp)
081a02db +0x21d:  movl   $0x33,0x4(%esp)
081a02e3 +0x225:  lea    -0x24(%ebp),%eax
081a02e6 +0x228:  mov    %eax,(%esp)
081a02e9 +0x22b:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
081a02ee +0x230:  lea    -0x24(%ebp),%eax
081a02f1 +0x233:  mov    %eax,(%esp)
081a02f4 +0x236:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081a02f9 +0x23b:  movl   $0xe,0x8(%esp)
081a0301 +0x243:  lea    -0x1a(%ebp),%edx
081a0304 +0x246:  mov    %edx,0x4(%esp)
081a0308 +0x24a:  mov    %eax,(%esp)
081a030b +0x24d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
081a0310 +0x252:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081a0315 +0x257:  lea    -0x24(%ebp),%edx
081a0318 +0x25a:  mov    %edx,0x8(%esp)
081a031c +0x25e:  movl   $0x1,0x4(%esp)
081a0324 +0x266:  mov    %eax,(%esp)
081a0327 +0x269:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081a032c +0x26e:  mov    $0x0,%ebx
081a0331 +0x273:  lea    -0x24(%ebp),%eax
081a0334 +0x276:  mov    %eax,(%esp)
081a0337 +0x279:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081a033c +0x27e:  jmp    081a0359 <+0x29b>
081a033e +0x280:  mov    %edx,%ebx
081a0340 +0x282:  mov    %eax,%esi
081a0342 +0x284:  lea    -0x24(%ebp),%eax
081a0345 +0x287:  mov    %eax,(%esp)
081a0348 +0x28a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081a034d +0x28f:  mov    %esi,%eax
081a034f +0x291:  mov    %ebx,%edx
081a0351 +0x293:  mov    %eax,(%esp)
081a0354 +0x296:  call   08ae3750 <_Unwind_Resume>
081a0359 +0x29b:  mov    %ebx,%eax
081a035b +0x29d:  add    $0x30,%esp
081a035e +0x2a0:  pop    %ebx
081a035f +0x2a1:  pop    %esi
081a0360 +0x2a2:  pop    %ebp
081a0361 +0x2a3:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig @ 0x81a00be

/* ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig
          (Dispatcher_AradAvatarConvert *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_28 [10];
  SigAradAvatarConvert local_1e [2];
  ushort uStack_1c;
  ulong auStack_1a [2];
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0x74a;
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
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_081a015c;
    }
  }
  bVar1 = true;
LAB_081a015c:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24f,7);
    uVar6 = 0;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      local_10 = CUser::isEnableAvatarSocketAction(param_1);
      if (local_10 == 0) {
        arad::SigAradAvatarConvert::SigAradAvatarConvert(local_1e);
        cVar2 = PacketBuf::get_short(param_2,(ushort *)local_1e);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_short(param_2,&uStack_1c);
          if (cVar2 == '\x01') {
            cVar2 = PacketBuf::get_int(param_2,auStack_1a);
            if (cVar2 == '\x01') {
              cVar2 = checkWorkState(this,param_1,local_1e);
              if (cVar2 == '\x01') {
                pSVar5 = (Stream *)
                         StreamPool::Acquire(GlobalData::s_stream_pool,
                                             "localjapan/Arad_PacketDispatcher.cpp",0x780);
                CStreamGuard::CStreamGuard(local_28,pSVar5,true);
                uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 081a02e9 to 081a032b has its CatchHandler @ 081a033e */
                make_internal_stream_jpn(local_28,0x33,uVar6);
                this_00 = (CStreamGuard *)CStreamGuard::operator->(local_28);
                CStreamGuard::put_binary(this_00,local_1e,0xe);
                MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
                uVar6 = 0;
                CStreamGuard::~CStreamGuard(local_28);
              }
              else {
                uVar6 = 0;
              }
            }
            else {
              uVar6 = 0x775;
            }
          }
          else {
            uVar6 = 0x771;
          }
        }
        else {
          uVar6 = 0x76d;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24f,local_10 & 0xff);
        uVar6 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24f,7);
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
