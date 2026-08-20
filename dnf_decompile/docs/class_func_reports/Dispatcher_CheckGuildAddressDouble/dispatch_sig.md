# dispatch_sig

`_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CheckGuildAddressDouble` | `0x082087a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082087a4  _ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&)
# range [0x082087a4, 0x08208a25]
082087a4 +0x000:  push   %ebp
082087a5 +0x001:  mov    %esp,%ebp
082087a7 +0x003:  push   %esi
082087a8 +0x004:  push   %ebx
082087a9 +0x005:  sub    $0x30,%esp
082087ac +0x008:  mov    0xc(%ebp),%eax
082087af +0x00b:  mov    %eax,(%esp)
082087b2 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082087b7 +0x013:  cmp    $0x2,%eax
082087ba +0x016:  jle    082087cb <+0x27>
082087bc +0x018:  mov    0xc(%ebp),%eax
082087bf +0x01b:  mov    %eax,(%esp)
082087c2 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082087c7 +0x023:  test   %eax,%eax
082087c9 +0x025:  jne    082087d2 <+0x2e>
082087cb +0x027:  mov    $0x1,%eax
082087d0 +0x02c:  jmp    082087d7 <+0x33>
082087d2 +0x02e:  mov    $0x0,%eax
082087d7 +0x033:  test   %al,%al
082087d9 +0x035:  je     08208806 <+0x62>
082087db +0x037:  movl   $0x0,0xc(%esp)
082087e3 +0x03f:  movl   $0x0,0x8(%esp)
082087eb +0x047:  movl   $&_ZZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082087f3 +0x04f:  movl   $0xa3af,(%esp)
082087fa +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082087ff +0x05b:  mov    %eax,%ebx
08208801 +0x05d:  jmp    08208a1c <+0x278>
08208806 +0x062:  movl   $0x0,-0x14(%ebp)
0820880d +0x069:  lea    -0x14(%ebp),%eax
08208810 +0x06c:  mov    %eax,0x4(%esp)
08208814 +0x070:  mov    0x10(%ebp),%eax
08208817 +0x073:  mov    %eax,(%esp)
0820881a +0x076:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0820881f +0x07b:  xor    $0x1,%eax
08208822 +0x07e:  test   %al,%al
08208824 +0x080:  je     08208851 <+0xad>
08208826 +0x082:  movl   $0x0,0xc(%esp)
0820882e +0x08a:  movl   $0x0,0x8(%esp)
08208836 +0x092:  movl   $&_ZZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820883e +0x09a:  movl   $0xa3be,(%esp)
08208845 +0x0a1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820884a +0x0a6:  mov    %eax,%ebx
0820884c +0x0a8:  jmp    08208a1c <+0x278>
08208851 +0x0ad:  mov    0xc(%ebp),%eax
08208854 +0x0b0:  mov    %eax,(%esp)
08208857 +0x0b3:  call   0822f526 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bd0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bd0
0820885c +0x0b8:  mov    %eax,-0x10(%ebp)
0820885f +0x0bb:  cmpl   $0x0,-0x10(%ebp)
08208863 +0x0bf:  jne    08208890 <+0xec>
08208865 +0x0c1:  movl   $0x0,0xc(%esp)
0820886d +0x0c9:  movl   $0x0,0x8(%esp)
08208875 +0x0d1:  movl   $&_ZZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820887d +0x0d9:  movl   $0xa3c2,(%esp)
08208884 +0x0e0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208889 +0x0e5:  mov    %eax,%ebx
0820888b +0x0e7:  jmp    08208a1c <+0x278>
08208890 +0x0ec:  mov    -0x14(%ebp),%eax
08208893 +0x0ef:  mov    %eax,0xc(%esp)
08208897 +0x0f3:  movl   $0xd,0x8(%esp)
0820889f +0x0fb:  mov    -0x10(%ebp),%eax
082088a2 +0x0fe:  mov    %eax,0x4(%esp)
082088a6 +0x102:  mov    0x10(%ebp),%eax
082088a9 +0x105:  mov    %eax,(%esp)
082088ac +0x108:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
082088b1 +0x10d:  xor    $0x1,%eax
082088b4 +0x110:  test   %al,%al
082088b6 +0x112:  je     082088dd <+0x139>
082088b8 +0x114:  movl   $0x6e,0x8(%esp)
082088c0 +0x11c:  movl   $0xa0,0x4(%esp)
082088c8 +0x124:  mov    0xc(%ebp),%eax
082088cb +0x127:  mov    %eax,(%esp)
082088ce +0x12a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082088d3 +0x12f:  mov    $0x0,%ebx
082088d8 +0x134:  jmp    08208a1c <+0x278>
082088dd +0x139:  mov    -0x10(%ebp),%eax
082088e0 +0x13c:  mov    %eax,(%esp)
082088e3 +0x13f:  call   08205791 <_Z9check_urlPKc>  ; check_url(char const*)
082088e8 +0x144:  xor    $0x1,%eax
082088eb +0x147:  test   %al,%al
082088ed +0x149:  je     08208914 <+0x170>
082088ef +0x14b:  movl   $0x70,0x8(%esp)
082088f7 +0x153:  movl   $0xa0,0x4(%esp)
082088ff +0x15b:  mov    0xc(%ebp),%eax
08208902 +0x15e:  mov    %eax,(%esp)
08208905 +0x161:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820890a +0x166:  mov    $0x0,%ebx
0820890f +0x16b:  jmp    08208a1c <+0x278>
08208914 +0x170:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08208919 +0x175:  movl   $0xa3d1,0x8(%esp)
08208921 +0x17d:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
08208929 +0x185:  mov    %eax,(%esp)
0820892c +0x188:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08208931 +0x18d:  movl   $0x1,0x8(%esp)
08208939 +0x195:  mov    %eax,0x4(%esp)
0820893d +0x199:  lea    -0x1c(%ebp),%eax
08208940 +0x19c:  mov    %eax,(%esp)
08208943 +0x19f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08208948 +0x1a4:  lea    -0x1c(%ebp),%eax
0820894b +0x1a7:  mov    %eax,(%esp)
0820894e +0x1aa:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08208953 +0x1af:  movl   $0xec,0x4(%esp)
0820895b +0x1b7:  mov    %eax,(%esp)
0820895e +0x1ba:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08208963 +0x1bf:  mov    0xc(%ebp),%eax
08208966 +0x1c2:  mov    %eax,(%esp)
08208969 +0x1c5:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0820896e +0x1ca:  mov    %eax,%ebx
08208970 +0x1cc:  lea    -0x1c(%ebp),%eax
08208973 +0x1cf:  mov    %eax,(%esp)
08208976 +0x1d2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0820897b +0x1d7:  mov    %ebx,0x4(%esp)
0820897f +0x1db:  mov    %eax,(%esp)
08208982 +0x1de:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08208987 +0x1e3:  lea    -0x1c(%ebp),%eax
0820898a +0x1e6:  mov    %eax,(%esp)
0820898d +0x1e9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08208992 +0x1ee:  mov    %eax,(%esp)
08208995 +0x1f1:  call   0823795e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd008>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd008
0820899a +0x1f6:  mov    %eax,-0xc(%ebp)
0820899d +0x1f9:  movl   $0xd,0x8(%esp)
082089a5 +0x201:  movl   $0x0,0x4(%esp)
082089ad +0x209:  mov    -0xc(%ebp),%eax
082089b0 +0x20c:  mov    %eax,(%esp)
082089b3 +0x20f:  call   0807dcc0 <_init+0x5b8>
082089b8 +0x214:  mov    -0x14(%ebp),%eax
082089bb +0x217:  mov    %eax,%edx
082089bd +0x219:  mov    -0xc(%ebp),%eax
082089c0 +0x21c:  mov    %edx,0x8(%esp)
082089c4 +0x220:  mov    -0x10(%ebp),%edx
082089c7 +0x223:  mov    %edx,0x4(%esp)
082089cb +0x227:  mov    %eax,(%esp)
082089ce +0x22a:  call   0807d8a0 <_init+0x198>
082089d3 +0x22f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
082089d8 +0x234:  lea    -0x1c(%ebp),%edx
082089db +0x237:  mov    %edx,0x8(%esp)
082089df +0x23b:  movl   $0x2,0x4(%esp)
082089e7 +0x243:  mov    %eax,(%esp)
082089ea +0x246:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
082089ef +0x24b:  mov    $0x0,%ebx
082089f4 +0x250:  lea    -0x1c(%ebp),%eax
082089f7 +0x253:  mov    %eax,(%esp)
082089fa +0x256:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082089ff +0x25b:  jmp    08208a1c <+0x278>
08208a01 +0x25d:  mov    %edx,%ebx
08208a03 +0x25f:  mov    %eax,%esi
08208a05 +0x261:  lea    -0x1c(%ebp),%eax
08208a08 +0x264:  mov    %eax,(%esp)
08208a0b +0x267:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08208a10 +0x26c:  mov    %esi,%eax
08208a12 +0x26e:  mov    %ebx,%edx
08208a14 +0x270:  mov    %eax,(%esp)
08208a17 +0x273:  call   08ae3750 <_Unwind_Resume>
08208a1c +0x278:  mov    %ebx,%eax
08208a1e +0x27a:  add    $0x30,%esp
08208a21 +0x27d:  pop    %ebx
08208a22 +0x27e:  pop    %esi
08208a23 +0x27f:  pop    %ebp
08208a24 +0x280:  ret
08208a25 +0x281:  nop
```

## 反编译 C

```c
// Dispatcher_CheckGuildAddressDouble::dispatch_sig @ 0x82087a4

/* Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CheckGuildAddressDouble::dispatch_sig
          (Dispatcher_CheckGuildAddressDouble *this,CUser *param_1,PacketBuf *param_2)

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
  SIG_DOUBLE_CHECK_GUILD_ADDRESS *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_082087d7;
    }
  }
  bVar1 = true;
LAB_082087d7:
  if (bVar1) {
    uVar4 = LineFunc(0xa3af,
                     "virtual int Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_18 = 0;
    cVar2 = PacketBuf::get_int(param_2,(int *)&local_18);
    if (cVar2 == '\x01') {
      local_14 = (char *)CUserCharacInfo::getCreateGuildAddr((CUserCharacInfo *)param_1);
      if (local_14 == (char *)0x0) {
        uVar4 = LineFunc(0xa3c2,
                         "virtual int Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
      else {
        cVar2 = PacketBuf::get_str(param_2,local_14,0xd,local_18);
        if (cVar2 == '\x01') {
          cVar2 = check_url(local_14);
          if (cVar2 == '\x01') {
            pSVar5 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",
                                         0xa3d1);
            CStreamGuard::CStreamGuard(local_20,pSVar5,true);
            pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 0820895e to 082089ee has its CatchHandler @ 08208a01 */
            CStreamGuard::operator<<(pCVar6,0xec);
            iVar3 = CUser::GetUID(param_1);
            pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
            CStreamGuard::operator<<(pCVar6,iVar3);
            pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_20);
            local_10 = CStreamGuard::GetInBuffer<SIG_DOUBLE_CHECK_GUILD_ADDRESS>(pCVar6);
            memset(local_10,0,0xd);
            memcpy(local_10,local_14,local_18);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
            uVar4 = 0;
            CStreamGuard::~CStreamGuard(local_20);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xa0,0x70);
            uVar4 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0xa0,0x6e);
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = LineFunc(0xa3be,
                       "virtual int Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar4;
}
```
