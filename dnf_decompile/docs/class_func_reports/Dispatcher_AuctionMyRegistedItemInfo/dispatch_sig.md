# dispatch_sig

`_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionMyRegistedItemInfo` | `0x08216966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08216966  _ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08216966, 0x08216b99]
08216966 +0x000:  push   %ebp
08216967 +0x001:  mov    %esp,%ebp
08216969 +0x003:  push   %ebx
0821696a +0x004:  sub    $0x64,%esp
0821696d +0x007:  lea    -0x21(%ebp),%eax
08216970 +0x00a:  mov    %eax,0x4(%esp)
08216974 +0x00e:  mov    0x10(%ebp),%eax
08216977 +0x011:  mov    %eax,(%esp)
0821697a +0x014:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821697f +0x019:  xor    $0x1,%eax
08216982 +0x01c:  test   %al,%al
08216984 +0x01e:  je     082169af <+0x49>
08216986 +0x020:  movl   $0x0,0xc(%esp)
0821698e +0x028:  movl   $0x0,0x8(%esp)
08216996 +0x030:  movl   $&_ZZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821699e +0x038:  movl   $0xc78e,(%esp)
082169a5 +0x03f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082169aa +0x044:  jmp    08216b94 <+0x22e>
082169af +0x049:  movzbl -0x21(%ebp),%eax
082169b3 +0x04d:  cmp    $0x1,%al
082169b5 +0x04f:  jbe    082169e0 <+0x7a>
082169b7 +0x051:  movl   $0x0,0xc(%esp)
082169bf +0x059:  movl   $0x0,0x8(%esp)
082169c7 +0x061:  movl   $&_ZZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082169cf +0x069:  movl   $0xc791,(%esp)
082169d6 +0x070:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082169db +0x075:  jmp    08216b94 <+0x22e>
082169e0 +0x07a:  movzbl -0x21(%ebp),%eax
082169e4 +0x07e:  movzbl %al,%eax
082169e7 +0x081:  mov    %eax,-0x10(%ebp)
082169ea +0x084:  mov    -0x10(%ebp),%eax
082169ed +0x087:  movzbl %al,%eax
082169f0 +0x08a:  mov    %eax,(%esp)
082169f3 +0x08d:  call   082138f2 <_Z27IsAuctionServerDisconnectedh>  ; IsAuctionServerDisconnected(unsigned char)
082169f8 +0x092:  test   %al,%al
082169fa +0x094:  je     08216a28 <+0xc2>
082169fc +0x096:  mov    -0x10(%ebp),%eax
082169ff +0x099:  mov    %eax,0xc(%esp)
08216a03 +0x09d:  movl   $0x8c,0x8(%esp)
08216a0b +0x0a5:  movl   $0xbf,0x4(%esp)
08216a13 +0x0ad:  mov    0xc(%ebp),%eax
08216a16 +0x0b0:  mov    %eax,(%esp)
08216a19 +0x0b3:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08216a1e +0x0b8:  mov    $0x0,%eax
08216a23 +0x0bd:  jmp    08216b94 <+0x22e>
08216a28 +0x0c2:  mov    0xc(%ebp),%eax
08216a2b +0x0c5:  mov    %eax,(%esp)
08216a2e +0x0c8:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08216a33 +0x0cd:  cmp    $0x2,%eax
08216a36 +0x0d0:  jle    08216a47 <+0xe1>
08216a38 +0x0d2:  mov    0xc(%ebp),%eax
08216a3b +0x0d5:  mov    %eax,(%esp)
08216a3e +0x0d8:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08216a43 +0x0dd:  test   %eax,%eax
08216a45 +0x0df:  jne    08216a4e <+0xe8>
08216a47 +0x0e1:  mov    $0x1,%eax
08216a4c +0x0e6:  jmp    08216a53 <+0xed>
08216a4e +0x0e8:  mov    $0x0,%eax
08216a53 +0x0ed:  test   %al,%al
08216a55 +0x0ef:  je     08216a80 <+0x11a>
08216a57 +0x0f1:  movl   $0x0,0xc(%esp)
08216a5f +0x0f9:  movl   $0x0,0x8(%esp)
08216a67 +0x101:  movl   $&_ZZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216a6f +0x109:  movl   $0xc7b6,(%esp)
08216a76 +0x110:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216a7b +0x115:  jmp    08216b94 <+0x22e>
08216a80 +0x11a:  cmpl   $0x1,-0x10(%ebp)
08216a84 +0x11e:  jne    08216acb <+0x165>
08216a86 +0x120:  lea    -0x3b(%ebp),%eax
08216a89 +0x123:  mov    %eax,(%esp)
08216a8c +0x126:  call   0822eb70 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x421a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x421a
08216a91 +0x12b:  mov    0xc(%ebp),%eax
08216a94 +0x12e:  mov    %eax,(%esp)
08216a97 +0x131:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08216a9c +0x136:  mov    %eax,-0x29(%ebp)
08216a9f +0x139:  mov    0xc(%ebp),%eax
08216aa2 +0x13c:  mov    %eax,(%esp)
08216aa5 +0x13f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216aaa +0x144:  mov    %eax,-0x25(%ebp)
08216aad +0x147:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
08216ab2 +0x14c:  lea    -0x3b(%ebp),%edx
08216ab5 +0x14f:  mov    %edx,0x4(%esp)
08216ab9 +0x153:  mov    %eax,(%esp)
08216abc +0x156:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08216ac1 +0x15b:  mov    $0x0,%eax
08216ac6 +0x160:  jmp    08216b94 <+0x22e>
08216acb +0x165:  lea    -0x55(%ebp),%eax
08216ace +0x168:  mov    %eax,(%esp)
08216ad1 +0x16b:  call   0822e7ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3e56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3e56
08216ad6 +0x170:  mov    0xc(%ebp),%eax
08216ad9 +0x173:  mov    %eax,(%esp)
08216adc +0x176:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08216ae1 +0x17b:  mov    %eax,-0x43(%ebp)
08216ae4 +0x17e:  mov    0xc(%ebp),%eax
08216ae7 +0x181:  mov    %eax,(%esp)
08216aea +0x184:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216aef +0x189:  mov    %eax,-0x3f(%ebp)
08216af2 +0x18c:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08216af7 +0x191:  lea    -0x55(%ebp),%edx
08216afa +0x194:  mov    %edx,0x4(%esp)
08216afe +0x198:  mov    %eax,(%esp)
08216b01 +0x19b:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08216b06 +0x1a0:  movl   $0x0,-0xc(%ebp)
08216b0d +0x1a7:  jmp    08216b84 <+0x21e>
08216b0f +0x1a9:  mov    -0xc(%ebp),%eax
08216b12 +0x1ac:  mov    &_ZL6gmList(,%eax,4),%eax
08216b19 +0x1b3:  mov    %eax,%ebx
08216b1b +0x1b5:  mov    0xc(%ebp),%eax
08216b1e +0x1b8:  mov    %eax,(%esp)
08216b21 +0x1bb:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216b26 +0x1c0:  cmp    %eax,%ebx
08216b28 +0x1c2:  sete   %al
08216b2b +0x1c5:  test   %al,%al
08216b2d +0x1c7:  je     08216b80 <+0x21a>
08216b2f +0x1c9:  mov    0xc(%ebp),%eax
08216b32 +0x1cc:  mov    %eax,(%esp)
08216b35 +0x1cf:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216b3a +0x1d4:  mov    %eax,%ebx
08216b3c +0x1d6:  movl   $0x0,0xc(%esp)
08216b44 +0x1de:  movl   $0xc823,0x8(%esp)
08216b4c +0x1e6:  movl   $&_ZZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216b54 +0x1ee:  lea    -0x20(%ebp),%eax
08216b57 +0x1f1:  mov    %eax,(%esp)
08216b5a +0x1f4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08216b5f +0x1f9:  mov    %ebx,0xc(%esp)
08216b63 +0x1fd:  movl   $"REQ AuctionMyRegistedItemInfo",0x8(%esp)
08216b6b +0x205:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
08216b73 +0x20d:  lea    -0x20(%ebp),%eax
08216b76 +0x210:  mov    %eax,(%esp)
08216b79 +0x213:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08216b7e +0x218:  jmp    08216b8f <+0x229>
08216b80 +0x21a:  addl   $0x1,-0xc(%ebp)
08216b84 +0x21e:  cmpl   $0x4,-0xc(%ebp)
08216b88 +0x222:  setle  %al
08216b8b +0x225:  test   %al,%al
08216b8d +0x227:  jne    08216b0f <+0x1a9>
08216b8f +0x229:  mov    $0x0,%eax
08216b94 +0x22e:  add    $0x64,%esp
08216b97 +0x231:  pop    %ebx
08216b98 +0x232:  pop    %ebp
08216b99 +0x233:  ret
```

## 反编译 C

```c
// Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig @ 0x8216966

/* Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig
          (Dispatcher_AuctionMyRegistedItemInfo *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  PCK_AUCTION_MY_REGISTED_ITEM_INFO_GA local_59 [18];
  undefined4 local_47;
  undefined4 local_43;
  PCK_AUCTION_MY_REGISTED_ITEM_INFO_GP local_3f [18];
  undefined4 local_2d;
  undefined4 local_29;
  byte local_25;
  cMyTrace local_24 [16];
  uint local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_25);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xc78e,
                     "virtual int Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (1 < local_25) {
    uVar3 = LineFunc(0xc791,
                     "virtual int Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_14 = (uint)local_25;
  cVar2 = IsAuctionServerDisconnected(local_25);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xbf,0x8c,local_14);
    return 0;
  }
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = LineFunc(0xc7b6,
                     "virtual int Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (local_14 == 1) {
    PCK_AUCTION_MY_REGISTED_ITEM_INFO_GP::PCK_AUCTION_MY_REGISTED_ITEM_INFO_GP(local_3f);
    local_2d = CUser::GetUID(param_1);
    local_29 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    CCeraAuctionServerProxy::SendPacket(GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_3f);
    uVar3 = 0;
  }
  else {
    PCK_AUCTION_MY_REGISTED_ITEM_INFO_GA::PCK_AUCTION_MY_REGISTED_ITEM_INFO_GA(local_59);
    local_47 = CUser::GetUID(param_1);
    local_43 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_59);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      iVar4 = *(int *)(gmList + local_10 * 4);
      iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      if (iVar4 == iVar5) {
        uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_24,
                           "virtual int Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)"
                           ,0xc823,0);
        cMyTrace::operator()
                  (local_24,"Trace Auction Delay, %s(%d)","REQ AuctionMyRegistedItemInfo",uVar3);
        break;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
