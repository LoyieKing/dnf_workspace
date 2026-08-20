# dispatch_sig

`_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionMyBiddingInfo` | `0x08216b9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08216b9a  _ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08216b9a, 0x08216d01]
08216b9a +0x000:  push   %ebp
08216b9b +0x001:  mov    %esp,%ebp
08216b9d +0x003:  push   %ebx
08216b9e +0x004:  sub    $0x44,%esp
08216ba1 +0x007:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08216ba6 +0x00c:  mov    %eax,(%esp)
08216ba9 +0x00f:  call   08234f44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5ee
08216bae +0x014:  xor    $0x1,%eax
08216bb1 +0x017:  test   %al,%al
08216bb3 +0x019:  je     08216bda <+0x40>
08216bb5 +0x01b:  movl   $0x8c,0x8(%esp)
08216bbd +0x023:  movl   $0xc0,0x4(%esp)
08216bc5 +0x02b:  mov    0xc(%ebp),%eax
08216bc8 +0x02e:  mov    %eax,(%esp)
08216bcb +0x031:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08216bd0 +0x036:  mov    $0x0,%eax
08216bd5 +0x03b:  jmp    08216cfb <+0x161>
08216bda +0x040:  mov    0xc(%ebp),%eax
08216bdd +0x043:  mov    %eax,(%esp)
08216be0 +0x046:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08216be5 +0x04b:  cmp    $0x2,%eax
08216be8 +0x04e:  jle    08216bf9 <+0x5f>
08216bea +0x050:  mov    0xc(%ebp),%eax
08216bed +0x053:  mov    %eax,(%esp)
08216bf0 +0x056:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08216bf5 +0x05b:  test   %eax,%eax
08216bf7 +0x05d:  jne    08216c00 <+0x66>
08216bf9 +0x05f:  mov    $0x1,%eax
08216bfe +0x064:  jmp    08216c05 <+0x6b>
08216c00 +0x066:  mov    $0x0,%eax
08216c05 +0x06b:  test   %al,%al
08216c07 +0x06d:  je     08216c32 <+0x98>
08216c09 +0x06f:  movl   $0x0,0xc(%esp)
08216c11 +0x077:  movl   $0x0,0x8(%esp)
08216c19 +0x07f:  movl   $&_ZZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216c21 +0x087:  movl   $0xc836,(%esp)
08216c28 +0x08e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216c2d +0x093:  jmp    08216cfb <+0x161>
08216c32 +0x098:  lea    -0x36(%ebp),%eax
08216c35 +0x09b:  mov    %eax,(%esp)
08216c38 +0x09e:  call   0822e814 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3ebe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3ebe
08216c3d +0x0a3:  mov    0xc(%ebp),%eax
08216c40 +0x0a6:  mov    %eax,(%esp)
08216c43 +0x0a9:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08216c48 +0x0ae:  mov    %eax,-0x24(%ebp)
08216c4b +0x0b1:  mov    0xc(%ebp),%eax
08216c4e +0x0b4:  mov    %eax,(%esp)
08216c51 +0x0b7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216c56 +0x0bc:  mov    %eax,-0x20(%ebp)
08216c59 +0x0bf:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08216c5e +0x0c4:  lea    -0x36(%ebp),%edx
08216c61 +0x0c7:  mov    %edx,0x4(%esp)
08216c65 +0x0cb:  mov    %eax,(%esp)
08216c68 +0x0ce:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08216c6d +0x0d3:  movl   $0x0,-0xc(%ebp)
08216c74 +0x0da:  jmp    08216ceb <+0x151>
08216c76 +0x0dc:  mov    -0xc(%ebp),%eax
08216c79 +0x0df:  mov    &_ZL6gmList(,%eax,4),%eax
08216c80 +0x0e6:  mov    %eax,%ebx
08216c82 +0x0e8:  mov    0xc(%ebp),%eax
08216c85 +0x0eb:  mov    %eax,(%esp)
08216c88 +0x0ee:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216c8d +0x0f3:  cmp    %eax,%ebx
08216c8f +0x0f5:  sete   %al
08216c92 +0x0f8:  test   %al,%al
08216c94 +0x0fa:  je     08216ce7 <+0x14d>
08216c96 +0x0fc:  mov    0xc(%ebp),%eax
08216c99 +0x0ff:  mov    %eax,(%esp)
08216c9c +0x102:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216ca1 +0x107:  mov    %eax,%ebx
08216ca3 +0x109:  movl   $0x0,0xc(%esp)
08216cab +0x111:  movl   $0xc84e,0x8(%esp)
08216cb3 +0x119:  movl   $&_ZZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216cbb +0x121:  lea    -0x1c(%ebp),%eax
08216cbe +0x124:  mov    %eax,(%esp)
08216cc1 +0x127:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08216cc6 +0x12c:  mov    %ebx,0xc(%esp)
08216cca +0x130:  movl   $"REQ AuctionMyBiddingInfo",0x8(%esp)
08216cd2 +0x138:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
08216cda +0x140:  lea    -0x1c(%ebp),%eax
08216cdd +0x143:  mov    %eax,(%esp)
08216ce0 +0x146:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08216ce5 +0x14b:  jmp    08216cf6 <+0x15c>
08216ce7 +0x14d:  addl   $0x1,-0xc(%ebp)
08216ceb +0x151:  cmpl   $0x4,-0xc(%ebp)
08216cef +0x155:  setle  %al
08216cf2 +0x158:  test   %al,%al
08216cf4 +0x15a:  jne    08216c76 <+0xdc>
08216cf6 +0x15c:  mov    $0x0,%eax
08216cfb +0x161:  add    $0x44,%esp
08216cfe +0x164:  pop    %ebx
08216cff +0x165:  pop    %ebp
08216d00 +0x166:  ret
08216d01 +0x167:  nop
```

## 反编译 C

```c
// Dispatcher_AuctionMyBiddingInfo::dispatch_sig @ 0x8216b9a

/* Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  PCK_AUCTION_MY_BIDDING_INFO_GA local_3a [18];
  undefined4 local_28;
  undefined4 local_24;
  cMyTrace local_20 [16];
  int local_10;
  
  cVar2 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xc0,0x8c);
    return 0;
  }
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xc836,
                     "virtual int Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    PCK_AUCTION_MY_BIDDING_INFO_GA::PCK_AUCTION_MY_BIDDING_INFO_GA(local_3a);
    local_28 = CUser::GetUID((CUser *)param_2);
    local_24 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_3a);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      iVar3 = *(int *)(gmList + local_10 * 4);
      iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      if (iVar3 == iVar5) {
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        cMyTrace::cMyTrace(local_20,
                           "virtual int Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser*, PacketBuf&)"
                           ,0xc84e,0);
        cMyTrace::operator()
                  (local_20,"Trace Auction Delay, %s(%d)","REQ AuctionMyBiddingInfo",uVar4);
        break;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}
```
