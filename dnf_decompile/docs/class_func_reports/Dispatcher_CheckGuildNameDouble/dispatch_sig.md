# dispatch_sig

`_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CheckGuildNameDouble` | `0x082084e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082084e8  _ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)
# range [0x082084e8, 0x082087a3]
082084e8 +0x000:  push   %ebp
082084e9 +0x001:  mov    %esp,%ebp
082084eb +0x003:  push   %esi
082084ec +0x004:  push   %ebx
082084ed +0x005:  sub    $0x30,%esp
082084f0 +0x008:  mov    0xc(%ebp),%eax
082084f3 +0x00b:  mov    %eax,(%esp)
082084f6 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082084fb +0x013:  cmp    $0x2,%eax
082084fe +0x016:  jle    0820850f <+0x27>
08208500 +0x018:  mov    0xc(%ebp),%eax
08208503 +0x01b:  mov    %eax,(%esp)
08208506 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0820850b +0x023:  test   %eax,%eax
0820850d +0x025:  jne    08208516 <+0x2e>
0820850f +0x027:  mov    $0x1,%eax
08208514 +0x02c:  jmp    0820851b <+0x33>
08208516 +0x02e:  mov    $0x0,%eax
0820851b +0x033:  test   %al,%al
0820851d +0x035:  je     0820854a <+0x62>
0820851f +0x037:  movl   $0x0,0xc(%esp)
08208527 +0x03f:  movl   $0x0,0x8(%esp)
0820852f +0x047:  movl   $&_ZZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208537 +0x04f:  movl   $0xa369,(%esp)
0820853e +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208543 +0x05b:  mov    %eax,%ebx
08208545 +0x05d:  jmp    0820879a <+0x2b2>
0820854a +0x062:  movl   $0x0,-0x14(%ebp)
08208551 +0x069:  lea    -0x14(%ebp),%eax
08208554 +0x06c:  mov    %eax,0x4(%esp)
08208558 +0x070:  mov    0x10(%ebp),%eax
0820855b +0x073:  mov    %eax,(%esp)
0820855e +0x076:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08208563 +0x07b:  xor    $0x1,%eax
08208566 +0x07e:  test   %al,%al
08208568 +0x080:  je     08208595 <+0xad>
0820856a +0x082:  movl   $0x0,0xc(%esp)
08208572 +0x08a:  movl   $0x0,0x8(%esp)
0820857a +0x092:  movl   $&_ZZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208582 +0x09a:  movl   $0xa37e,(%esp)
08208589 +0x0a1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820858e +0x0a6:  mov    %eax,%ebx
08208590 +0x0a8:  jmp    0820879a <+0x2b2>
08208595 +0x0ad:  mov    -0x14(%ebp),%eax
08208598 +0x0b0:  test   %eax,%eax
0820859a +0x0b2:  js     082085a4 <+0xbc>
0820859c +0x0b4:  mov    -0x14(%ebp),%eax
0820859f +0x0b7:  cmp    $0x16,%eax
082085a2 +0x0ba:  jle    082085cf <+0xe7>
082085a4 +0x0bc:  movl   $0x0,0xc(%esp)
082085ac +0x0c4:  movl   $0x0,0x8(%esp)
082085b4 +0x0cc:  movl   $&_ZZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082085bc +0x0d4:  movl   $0xa381,(%esp)
082085c3 +0x0db:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082085c8 +0x0e0:  mov    %eax,%ebx
082085ca +0x0e2:  jmp    0820879a <+0x2b2>
082085cf +0x0e7:  mov    0xc(%ebp),%eax
082085d2 +0x0ea:  mov    %eax,(%esp)
082085d5 +0x0ed:  call   0822f504 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bae
082085da +0x0f2:  mov    %eax,-0x10(%ebp)
082085dd +0x0f5:  cmpl   $0x0,-0x10(%ebp)
082085e1 +0x0f9:  jne    0820860e <+0x126>
082085e3 +0x0fb:  movl   $0x0,0xc(%esp)
082085eb +0x103:  movl   $0x0,0x8(%esp)
082085f3 +0x10b:  movl   $&_ZZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082085fb +0x113:  movl   $0xa386,(%esp)
08208602 +0x11a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208607 +0x11f:  mov    %eax,%ebx
08208609 +0x121:  jmp    0820879a <+0x2b2>
0820860e +0x126:  mov    -0x14(%ebp),%eax
08208611 +0x129:  mov    %eax,0xc(%esp)
08208615 +0x12d:  movl   $0x17,0x8(%esp)
0820861d +0x135:  mov    -0x10(%ebp),%eax
08208620 +0x138:  mov    %eax,0x4(%esp)
08208624 +0x13c:  mov    0x10(%ebp),%eax
08208627 +0x13f:  mov    %eax,(%esp)
0820862a +0x142:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0820862f +0x147:  xor    $0x1,%eax
08208632 +0x14a:  test   %al,%al
08208634 +0x14c:  je     0820865b <+0x173>
08208636 +0x14e:  movl   $0x6a,0x8(%esp)
0820863e +0x156:  movl   $0x9f,0x4(%esp)
08208646 +0x15e:  mov    0xc(%ebp),%eax
08208649 +0x161:  mov    %eax,(%esp)
0820864c +0x164:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08208651 +0x169:  mov    $0x0,%ebx
08208656 +0x16e:  jmp    0820879a <+0x2b2>
0820865b +0x173:  mov    -0x10(%ebp),%eax
0820865e +0x176:  mov    %eax,(%esp)
08208661 +0x179:  call   0820582b <_Z20checkValidCharacNamePKc>  ; checkValidCharacName(char const*)
08208666 +0x17e:  xor    $0x1,%eax
08208669 +0x181:  test   %al,%al
0820866b +0x183:  je     08208692 <+0x1aa>
0820866d +0x185:  movl   $0x6c,0x8(%esp)
08208675 +0x18d:  movl   $0x9f,0x4(%esp)
0820867d +0x195:  mov    0xc(%ebp),%eax
08208680 +0x198:  mov    %eax,(%esp)
08208683 +0x19b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08208688 +0x1a0:  mov    $0x0,%ebx
0820868d +0x1a5:  jmp    0820879a <+0x2b2>
08208692 +0x1aa:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08208697 +0x1af:  movl   $0xa39d,0x8(%esp)
0820869f +0x1b7:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
082086a7 +0x1bf:  mov    %eax,(%esp)
082086aa +0x1c2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
082086af +0x1c7:  movl   $0x1,0x8(%esp)
082086b7 +0x1cf:  mov    %eax,0x4(%esp)
082086bb +0x1d3:  lea    -0x1c(%ebp),%eax
082086be +0x1d6:  mov    %eax,(%esp)
082086c1 +0x1d9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
082086c6 +0x1de:  lea    -0x1c(%ebp),%eax
082086c9 +0x1e1:  mov    %eax,(%esp)
082086cc +0x1e4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082086d1 +0x1e9:  movl   $0xeb,0x4(%esp)
082086d9 +0x1f1:  mov    %eax,(%esp)
082086dc +0x1f4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082086e1 +0x1f9:  mov    0xc(%ebp),%eax
082086e4 +0x1fc:  mov    %eax,(%esp)
082086e7 +0x1ff:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082086ec +0x204:  mov    %eax,%ebx
082086ee +0x206:  lea    -0x1c(%ebp),%eax
082086f1 +0x209:  mov    %eax,(%esp)
082086f4 +0x20c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082086f9 +0x211:  mov    %ebx,0x4(%esp)
082086fd +0x215:  mov    %eax,(%esp)
08208700 +0x218:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08208705 +0x21d:  lea    -0x1c(%ebp),%eax
08208708 +0x220:  mov    %eax,(%esp)
0820870b +0x223:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08208710 +0x228:  mov    %eax,(%esp)
08208713 +0x22b:  call   08237948 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcff2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcff2
08208718 +0x230:  mov    %eax,-0xc(%ebp)
0820871b +0x233:  movl   $0x17,0x8(%esp)
08208723 +0x23b:  movl   $0x0,0x4(%esp)
0820872b +0x243:  mov    -0xc(%ebp),%eax
0820872e +0x246:  mov    %eax,(%esp)
08208731 +0x249:  call   0807dcc0 <_init+0x5b8>
08208736 +0x24e:  mov    -0x14(%ebp),%eax
08208739 +0x251:  mov    %eax,%edx
0820873b +0x253:  mov    -0xc(%ebp),%eax
0820873e +0x256:  mov    %edx,0x8(%esp)
08208742 +0x25a:  mov    -0x10(%ebp),%edx
08208745 +0x25d:  mov    %edx,0x4(%esp)
08208749 +0x261:  mov    %eax,(%esp)
0820874c +0x264:  call   0807d8a0 <_init+0x198>
08208751 +0x269:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08208756 +0x26e:  lea    -0x1c(%ebp),%edx
08208759 +0x271:  mov    %edx,0x8(%esp)
0820875d +0x275:  movl   $0x2,0x4(%esp)
08208765 +0x27d:  mov    %eax,(%esp)
08208768 +0x280:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0820876d +0x285:  mov    $0x0,%ebx
08208772 +0x28a:  lea    -0x1c(%ebp),%eax
08208775 +0x28d:  mov    %eax,(%esp)
08208778 +0x290:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0820877d +0x295:  jmp    0820879a <+0x2b2>
0820877f +0x297:  mov    %edx,%ebx
08208781 +0x299:  mov    %eax,%esi
08208783 +0x29b:  lea    -0x1c(%ebp),%eax
08208786 +0x29e:  mov    %eax,(%esp)
08208789 +0x2a1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0820878e +0x2a6:  mov    %esi,%eax
08208790 +0x2a8:  mov    %ebx,%edx
08208792 +0x2aa:  mov    %eax,(%esp)
08208795 +0x2ad:  call   08ae3750 <_Unwind_Resume>
0820879a +0x2b2:  mov    %ebx,%eax
0820879c +0x2b4:  add    $0x30,%esp
0820879f +0x2b7:  pop    %ebx
082087a0 +0x2b8:  pop    %esi
082087a1 +0x2b9:  pop    %ebp
082087a2 +0x2ba:  ret
082087a3 +0x2bb:  nop
```

## 反编译 C

```c
// Dispatcher_CheckGuildNameDouble::dispatch_sig @ 0x82084e8

/* Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CheckGuildNameDouble::dispatch_sig
          (Dispatcher_CheckGuildNameDouble *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_20 [8];
  size_t local_18;
  char *local_14;
  SIG_DOUBLE_CHECK_GUILD_NAME *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0820851b;
    }
  }
  bVar1 = true;
LAB_0820851b:
  if (bVar1) {
    uVar4 = LineFunc(0xa369,
                     "virtual int Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_18 = 0;
    cVar2 = PacketBuf::get_int(param_2,(int *)&local_18);
    if (cVar2 == '\x01') {
      if (((int)local_18 < 0) || (0x16 < (int)local_18)) {
        uVar4 = LineFunc(0xa381,
                         "virtual int Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
      else {
        local_14 = (char *)CUserCharacInfo::getCreateGuildName((CUserCharacInfo *)param_1);
        if (local_14 == (char *)0x0) {
          uVar4 = LineFunc(0xa386,
                           "virtual int Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
        else {
          cVar2 = PacketBuf::get_str(param_2,local_14,0x17,local_18);
          if (cVar2 == '\x01') {
            cVar2 = checkValidCharacName(local_14);
            if (cVar2 == '\x01') {
              pSVar5 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",
                                           0xa39d);
              CStreamGuard::CStreamGuard(local_20,pSVar5,true);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 082086dc to 0820876c has its CatchHandler @ 0820877f */
              CStreamGuard::operator<<(pCVar6,0xeb);
              iVar3 = CUser::GetUID(param_1);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
              CStreamGuard::operator<<(pCVar6,iVar3);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_20);
              local_10 = CStreamGuard::GetInBuffer<SIG_DOUBLE_CHECK_GUILD_NAME>(pCVar6);
              memset(local_10,0,0x17);
              memcpy(local_10,local_14,local_18);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
              uVar4 = 0;
              CStreamGuard::~CStreamGuard(local_20);
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x9f,0x6c);
              uVar4 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x9f,0x6a);
            uVar4 = 0;
          }
        }
      }
    }
    else {
      uVar4 = LineFunc(0xa37e,
                       "virtual int Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar4;
}
```
