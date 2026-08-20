# dispatch_sig

`_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter` | `0x0819f1ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819f1ec  _ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig(CUser*, PacketBuf&)
# range [0x0819f1ec, 0x0819f44b]
0819f1ec +0x000:  push   %ebp
0819f1ed +0x001:  mov    %esp,%ebp
0819f1ef +0x003:  push   %esi
0819f1f0 +0x004:  push   %ebx
0819f1f1 +0x005:  sub    $0x30,%esp
0819f1f4 +0x008:  cmpl   $0x0,0xc(%ebp)
0819f1f8 +0x00c:  jne    0819f204 <+0x18>
0819f1fa +0x00e:  mov    $0x59b,%ebx
0819f1ff +0x013:  jmp    0819f442 <+0x256>
0819f204 +0x018:  mov    0xc(%ebp),%eax
0819f207 +0x01b:  mov    %eax,(%esp)
0819f20a +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0819f20f +0x023:  test   %eax,%eax
0819f211 +0x025:  sete   %al
0819f214 +0x028:  test   %al,%al
0819f216 +0x02a:  je     0819f222 <+0x36>
0819f218 +0x02c:  mov    $0x0,%ebx
0819f21d +0x031:  jmp    0819f442 <+0x256>
0819f222 +0x036:  lea    -0x19(%ebp),%eax
0819f225 +0x039:  mov    %eax,(%esp)
0819f228 +0x03c:  call   081a0990 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x7f>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x7f
0819f22d +0x041:  lea    -0x19(%ebp),%eax
0819f230 +0x044:  add    $0x9,%eax
0819f233 +0x047:  mov    %eax,0x4(%esp)
0819f237 +0x04b:  mov    0x10(%ebp),%eax
0819f23a +0x04e:  mov    %eax,(%esp)
0819f23d +0x051:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0819f242 +0x056:  xor    $0x1,%eax
0819f245 +0x059:  test   %al,%al
0819f247 +0x05b:  je     0819f253 <+0x67>
0819f249 +0x05d:  mov    $0x5a9,%ebx
0819f24e +0x062:  jmp    0819f442 <+0x256>
0819f253 +0x067:  movzbl -0x10(%ebp),%eax
0819f257 +0x06b:  test   %al,%al
0819f259 +0x06d:  je     0819f263 <+0x77>
0819f25b +0x06f:  movzbl -0x10(%ebp),%eax
0819f25f +0x073:  cmp    $0x2,%al
0819f261 +0x075:  jbe    0819f26d <+0x81>
0819f263 +0x077:  mov    $0x5ac,%ebx
0819f268 +0x07c:  jmp    0819f442 <+0x256>
0819f26d +0x081:  lea    -0x19(%ebp),%eax
0819f270 +0x084:  add    $0xa,%eax
0819f273 +0x087:  mov    %eax,0x4(%esp)
0819f277 +0x08b:  mov    0x10(%ebp),%eax
0819f27a +0x08e:  mov    %eax,(%esp)
0819f27d +0x091:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0819f282 +0x096:  xor    $0x1,%eax
0819f285 +0x099:  test   %al,%al
0819f287 +0x09b:  je     0819f293 <+0xa7>
0819f289 +0x09d:  mov    $0x5af,%ebx
0819f28e +0x0a2:  jmp    0819f442 <+0x256>
0819f293 +0x0a7:  movzbl -0xf(%ebp),%eax
0819f297 +0x0ab:  test   %al,%al
0819f299 +0x0ad:  je     0819f2a3 <+0xb7>
0819f29b +0x0af:  movzbl -0xf(%ebp),%eax
0819f29f +0x0b3:  cmp    $0x4,%al
0819f2a1 +0x0b5:  jbe    0819f2ad <+0xc1>
0819f2a3 +0x0b7:  mov    $0x5b1,%ebx
0819f2a8 +0x0bc:  jmp    0819f442 <+0x256>
0819f2ad +0x0c1:  lea    -0x19(%ebp),%eax
0819f2b0 +0x0c4:  add    $0xb,%eax
0819f2b3 +0x0c7:  mov    %eax,0x4(%esp)
0819f2b7 +0x0cb:  mov    0x10(%ebp),%eax
0819f2ba +0x0ce:  mov    %eax,(%esp)
0819f2bd +0x0d1:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0819f2c2 +0x0d6:  xor    $0x1,%eax
0819f2c5 +0x0d9:  test   %al,%al
0819f2c7 +0x0db:  je     0819f2d3 <+0xe7>
0819f2c9 +0x0dd:  mov    $0x5b4,%ebx
0819f2ce +0x0e2:  jmp    0819f442 <+0x256>
0819f2d3 +0x0e7:  lea    -0x19(%ebp),%eax
0819f2d6 +0x0ea:  add    $0xd,%eax
0819f2d9 +0x0ed:  mov    %eax,0x4(%esp)
0819f2dd +0x0f1:  mov    0x10(%ebp),%eax
0819f2e0 +0x0f4:  mov    %eax,(%esp)
0819f2e3 +0x0f7:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0819f2e8 +0x0fc:  xor    $0x1,%eax
0819f2eb +0x0ff:  test   %al,%al
0819f2ed +0x101:  je     0819f2f9 <+0x10d>
0819f2ef +0x103:  mov    $0x5b6,%ebx
0819f2f4 +0x108:  jmp    0819f442 <+0x256>
0819f2f9 +0x10d:  mov    0xc(%ebp),%eax
0819f2fc +0x110:  mov    %eax,(%esp)
0819f2ff +0x113:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819f304 +0x118:  cmp    $0x2,%eax
0819f307 +0x11b:  jle    0819f319 <+0x12d>
0819f309 +0x11d:  mov    0xc(%ebp),%eax
0819f30c +0x120:  mov    %eax,(%esp)
0819f30f +0x123:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819f314 +0x128:  cmp    $0x4,%eax
0819f317 +0x12b:  jle    0819f320 <+0x134>
0819f319 +0x12d:  mov    $0x1,%eax
0819f31e +0x132:  jmp    0819f325 <+0x139>
0819f320 +0x134:  mov    $0x0,%eax
0819f325 +0x139:  test   %al,%al
0819f327 +0x13b:  je     0819f333 <+0x147>
0819f329 +0x13d:  mov    $0x0,%ebx
0819f32e +0x142:  jmp    0819f442 <+0x256>
0819f333 +0x147:  lea    -0x19(%ebp),%eax
0819f336 +0x14a:  mov    %eax,0x8(%esp)
0819f33a +0x14e:  mov    0xc(%ebp),%eax
0819f33d +0x151:  mov    %eax,0x4(%esp)
0819f341 +0x155:  mov    0x8(%ebp),%eax
0819f344 +0x158:  mov    %eax,(%esp)
0819f347 +0x15b:  call   0819f44c <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE>  ; ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState(CUser*, arad::SigAradJumpingCharacter&)
0819f34c +0x160:  xor    $0x1,%eax
0819f34f +0x163:  test   %al,%al
0819f351 +0x165:  je     0819f35d <+0x171>
0819f353 +0x167:  mov    $0x0,%ebx
0819f358 +0x16c:  jmp    0819f442 <+0x256>
0819f35d +0x171:  mov    0xc(%ebp),%eax
0819f360 +0x174:  mov    %eax,(%esp)
0819f363 +0x177:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0819f368 +0x17c:  mov    %eax,-0x18(%ebp)
0819f36b +0x17f:  movl   $0xffffffff,0x4(%esp)
0819f373 +0x187:  mov    0xc(%ebp),%eax
0819f376 +0x18a:  mov    %eax,(%esp)
0819f379 +0x18d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0819f37e +0x192:  mov    %eax,-0x14(%ebp)
0819f381 +0x195:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0819f386 +0x19a:  movl   $0x5c8,0x8(%esp)
0819f38e +0x1a2:  movl   $"localjapan/Arad_PacketDispatcher.cpp",0x4(%esp)
0819f396 +0x1aa:  mov    %eax,(%esp)
0819f399 +0x1ad:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0819f39e +0x1b2:  movl   $0x1,0x8(%esp)
0819f3a6 +0x1ba:  mov    %eax,0x4(%esp)
0819f3aa +0x1be:  lea    -0x24(%ebp),%eax
0819f3ad +0x1c1:  mov    %eax,(%esp)
0819f3b0 +0x1c4:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0819f3b5 +0x1c9:  mov    0xc(%ebp),%eax
0819f3b8 +0x1cc:  mov    %eax,(%esp)
0819f3bb +0x1cf:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0819f3c0 +0x1d4:  mov    %eax,0x8(%esp)
0819f3c4 +0x1d8:  movl   $0x2d,0x4(%esp)
0819f3cc +0x1e0:  lea    -0x24(%ebp),%eax
0819f3cf +0x1e3:  mov    %eax,(%esp)
0819f3d2 +0x1e6:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
0819f3d7 +0x1eb:  lea    -0x24(%ebp),%eax
0819f3da +0x1ee:  mov    %eax,(%esp)
0819f3dd +0x1f1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0819f3e2 +0x1f6:  movl   $0x11,0x8(%esp)
0819f3ea +0x1fe:  lea    -0x19(%ebp),%edx
0819f3ed +0x201:  mov    %edx,0x4(%esp)
0819f3f1 +0x205:  mov    %eax,(%esp)
0819f3f4 +0x208:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0819f3f9 +0x20d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0819f3fe +0x212:  lea    -0x24(%ebp),%edx
0819f401 +0x215:  mov    %edx,0x8(%esp)
0819f405 +0x219:  movl   $0x1,0x4(%esp)
0819f40d +0x221:  mov    %eax,(%esp)
0819f410 +0x224:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0819f415 +0x229:  mov    $0x0,%ebx
0819f41a +0x22e:  lea    -0x24(%ebp),%eax
0819f41d +0x231:  mov    %eax,(%esp)
0819f420 +0x234:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0819f425 +0x239:  jmp    0819f442 <+0x256>
0819f427 +0x23b:  mov    %edx,%ebx
0819f429 +0x23d:  mov    %eax,%esi
0819f42b +0x23f:  lea    -0x24(%ebp),%eax
0819f42e +0x242:  mov    %eax,(%esp)
0819f431 +0x245:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0819f436 +0x24a:  mov    %esi,%eax
0819f438 +0x24c:  mov    %ebx,%edx
0819f43a +0x24e:  mov    %eax,(%esp)
0819f43d +0x251:  call   08ae3750 <_Unwind_Resume>
0819f442 +0x256:  mov    %ebx,%eax
0819f444 +0x258:  add    $0x30,%esp
0819f447 +0x25b:  pop    %ebx
0819f448 +0x25c:  pop    %esi
0819f449 +0x25d:  pop    %ebp
0819f44a +0x25e:  ret
0819f44b +0x25f:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig @ 0x819f1ec

/* ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig
          (Dispatcher_AradJumpingCharacter *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  undefined4 uVar5;
  CStreamGuard *this_00;
  CStreamGuard local_28 [11];
  SigAradJumpingCharacter local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_14;
  byte local_13;
  ushort uStack_12;
  uint uStack_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0x59b;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  arad::SigAradJumpingCharacter::SigAradJumpingCharacter(&local_1d);
  cVar2 = PacketBuf::get_byte(param_2,&local_14);
  if (cVar2 != '\x01') {
    return 0x5a9;
  }
  if ((local_14 == 0) || (2 < local_14)) {
    return 0x5ac;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_13);
  if (cVar2 != '\x01') {
    return 0x5af;
  }
  if ((local_13 == 0) || (4 < local_13)) {
    return 0x5b1;
  }
  cVar2 = PacketBuf::get_short(param_2,&uStack_12);
  if (cVar2 != '\x01') {
    return 0x5b4;
  }
  cVar2 = PacketBuf::get_int(param_2,&uStack_10);
  if (cVar2 != '\x01') {
    return 0x5b6;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) && (cVar2 = checkWorkState(this,param_1,&local_1d), cVar2 == '\x01')) {
    local_1c = CUser::get_acc_id(param_1);
    local_18 = CUser::get_charac_no(param_1,-1);
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_PacketDispatcher.cpp",
                                 0x5c8);
    CStreamGuard::CStreamGuard(local_28,pSVar4,true);
    uVar5 = CUser::GetUID(param_1);
                    /* try { // try from 0819f3d2 to 0819f414 has its CatchHandler @ 0819f427 */
    make_internal_stream_jpn(local_28,0x2d,uVar5);
    this_00 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    CStreamGuard::put_binary(this_00,&local_1d,0x11);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
    CStreamGuard::~CStreamGuard(local_28);
  }
  return 0;
}
```
