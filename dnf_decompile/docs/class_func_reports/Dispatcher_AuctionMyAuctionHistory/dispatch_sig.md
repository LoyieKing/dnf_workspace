# dispatch_sig

`_ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionMyAuctionHistory::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionMyAuctionHistory` | `0x08216d02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08216d02  _ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionMyAuctionHistory::dispatch_sig(CUser*, PacketBuf&)
# range [0x08216d02, 0x08216dcb]
08216d02 +0x00:  push   %ebp
08216d03 +0x01:  mov    %esp,%ebp
08216d05 +0x03:  sub    $0x38,%esp
08216d08 +0x06:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08216d0d +0x0b:  mov    %eax,(%esp)
08216d10 +0x0e:  call   08234f44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5ee
08216d15 +0x13:  xor    $0x1,%eax
08216d18 +0x16:  test   %al,%al
08216d1a +0x18:  je     08216d26 <+0x24>
08216d1c +0x1a:  mov    $0x0,%eax
08216d21 +0x1f:  jmp    08216dc9 <+0xc7>
08216d26 +0x24:  mov    0xc(%ebp),%eax
08216d29 +0x27:  mov    %eax,(%esp)
08216d2c +0x2a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08216d31 +0x2f:  cmp    $0x2,%eax
08216d34 +0x32:  jle    08216d45 <+0x43>
08216d36 +0x34:  mov    0xc(%ebp),%eax
08216d39 +0x37:  mov    %eax,(%esp)
08216d3c +0x3a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08216d41 +0x3f:  test   %eax,%eax
08216d43 +0x41:  jne    08216d4c <+0x4a>
08216d45 +0x43:  mov    $0x1,%eax
08216d4a +0x48:  jmp    08216d51 <+0x4f>
08216d4c +0x4a:  mov    $0x0,%eax
08216d51 +0x4f:  test   %al,%al
08216d53 +0x51:  je     08216d7b <+0x79>
08216d55 +0x53:  movl   $0x0,0xc(%esp)
08216d5d +0x5b:  movl   $0x0,0x8(%esp)
08216d65 +0x63:  movl   $&_ZZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216d6d +0x6b:  movl   $0xc864,(%esp)
08216d74 +0x72:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216d79 +0x77:  jmp    08216dc9 <+0xc7>
08216d7b +0x79:  lea    -0x26(%ebp),%eax
08216d7e +0x7c:  mov    %eax,(%esp)
08216d81 +0x7f:  call   0822e87c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3f26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3f26
08216d86 +0x84:  mov    0xc(%ebp),%eax
08216d89 +0x87:  mov    %eax,(%esp)
08216d8c +0x8a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08216d91 +0x8f:  mov    %eax,-0x14(%ebp)
08216d94 +0x92:  mov    0xc(%ebp),%eax
08216d97 +0x95:  mov    %eax,(%esp)
08216d9a +0x98:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08216d9f +0x9d:  mov    %eax,-0x10(%ebp)
08216da2 +0xa0:  mov    0xc(%ebp),%eax
08216da5 +0xa3:  mov    %eax,(%esp)
08216da8 +0xa6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08216dad +0xab:  mov    %eax,-0xc(%ebp)
08216db0 +0xae:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08216db5 +0xb3:  lea    -0x26(%ebp),%edx
08216db8 +0xb6:  mov    %edx,0x4(%esp)
08216dbc +0xba:  mov    %eax,(%esp)
08216dbf +0xbd:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08216dc4 +0xc2:  mov    $0x0,%eax
08216dc9 +0xc7:  leave
08216dca +0xc8:  ret
08216dcb +0xc9:  nop
```

## 反编译 C

```c
// Dispatcher_AuctionMyAuctionHistory::dispatch_sig @ 0x8216d02

/* Dispatcher_AuctionMyAuctionHistory::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_AuctionMyAuctionHistory::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  PCK_AUCTION_MY_AUCTION_HISTORY_GA local_2a [18];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar2 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
  if (cVar2 == '\x01') {
    iVar3 = CUser::get_state((CUser *)param_2);
    if ((iVar3 < 3) ||
       (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = LineFunc(0xc864,
                       "virtual int Dispatcher_AuctionMyAuctionHistory::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      PCK_AUCTION_MY_AUCTION_HISTORY_GA::PCK_AUCTION_MY_AUCTION_HISTORY_GA(local_2a);
      local_18 = CUser::GetUID((CUser *)param_2);
      local_14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      local_10 = CUser::get_acc_id((CUser *)param_2);
      CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_2a);
      uVar4 = 0;
    }
    return uVar4;
  }
  return 0;
}
```
