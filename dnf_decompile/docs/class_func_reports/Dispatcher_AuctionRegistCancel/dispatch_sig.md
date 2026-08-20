# dispatch_sig

`_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionRegistCancel` | `0x08214b96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08214b96  _ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)
# range [0x08214b96, 0x08214e43]
08214b96 +0x000:  push   %ebp
08214b97 +0x001:  mov    %esp,%ebp
08214b99 +0x003:  push   %ebx
08214b9a +0x004:  sub    $0x64,%esp
08214b9d +0x007:  lea    -0x29(%ebp),%eax
08214ba0 +0x00a:  mov    %eax,0x4(%esp)
08214ba4 +0x00e:  mov    0x10(%ebp),%eax
08214ba7 +0x011:  mov    %eax,(%esp)
08214baa +0x014:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08214baf +0x019:  xor    $0x1,%eax
08214bb2 +0x01c:  test   %al,%al
08214bb4 +0x01e:  je     08214bdf <+0x49>
08214bb6 +0x020:  movl   $0x0,0xc(%esp)
08214bbe +0x028:  movl   $0x0,0x8(%esp)
08214bc6 +0x030:  movl   $&_ZZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214bce +0x038:  movl   $0xc47f,(%esp)
08214bd5 +0x03f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214bda +0x044:  jmp    08214e3e <+0x2a8>
08214bdf +0x049:  movzbl -0x29(%ebp),%eax
08214be3 +0x04d:  cmp    $0x1,%al
08214be5 +0x04f:  jbe    08214c10 <+0x7a>
08214be7 +0x051:  movl   $0x0,0xc(%esp)
08214bef +0x059:  movl   $0x0,0x8(%esp)
08214bf7 +0x061:  movl   $&_ZZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214bff +0x069:  movl   $0xc482,(%esp)
08214c06 +0x070:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214c0b +0x075:  jmp    08214e3e <+0x2a8>
08214c10 +0x07a:  movzbl -0x29(%ebp),%eax
08214c14 +0x07e:  movzbl %al,%eax
08214c17 +0x081:  mov    %eax,-0x18(%ebp)
08214c1a +0x084:  mov    -0x18(%ebp),%eax
08214c1d +0x087:  mov    %eax,0x8(%esp)
08214c21 +0x08b:  movl   $0xbb,0x4(%esp)
08214c29 +0x093:  mov    0xc(%ebp),%eax
08214c2c +0x096:  mov    %eax,(%esp)
08214c2f +0x099:  call   08680a96 <_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE>  ; CUser::AuctionPreCheck(ENUM_CMDPACKET, PAY_TYPE)
08214c34 +0x09e:  mov    %eax,-0x14(%ebp)
08214c37 +0x0a1:  cmpl   $0x0,-0x14(%ebp)
08214c3b +0x0a5:  js     08214c45 <+0xaf>
08214c3d +0x0a7:  mov    -0x14(%ebp),%eax
08214c40 +0x0aa:  jmp    08214e3e <+0x2a8>
08214c45 +0x0af:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08214c4a +0x0b4:  movl   $0x33,0x8(%esp)
08214c52 +0x0bc:  mov    0xc(%ebp),%edx
08214c55 +0x0bf:  mov    %edx,0x4(%esp)
08214c59 +0x0c3:  mov    %eax,(%esp)
08214c5c +0x0c6:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08214c61 +0x0cb:  mov    %eax,-0x10(%ebp)
08214c64 +0x0ce:  cmpl   $0x0,-0x10(%ebp)
08214c68 +0x0d2:  je     08214c91 <+0xfb>
08214c6a +0x0d4:  mov    -0x10(%ebp),%eax
08214c6d +0x0d7:  movzbl %al,%eax
08214c70 +0x0da:  mov    %eax,0x8(%esp)
08214c74 +0x0de:  movl   $0xbb,0x4(%esp)
08214c7c +0x0e6:  mov    0xc(%ebp),%eax
08214c7f +0x0e9:  mov    %eax,(%esp)
08214c82 +0x0ec:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08214c87 +0x0f1:  mov    $0x0,%eax
08214c8c +0x0f6:  jmp    08214e3e <+0x2a8>
08214c91 +0x0fb:  cmpl   $0x1,-0x18(%ebp)
08214c95 +0x0ff:  jne    08214d28 <+0x192>
08214c9b +0x105:  lea    -0x4b(%ebp),%eax
08214c9e +0x108:  mov    %eax,(%esp)
08214ca1 +0x10b:  call   0822ea1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x40c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x40c6
08214ca6 +0x110:  mov    0xc(%ebp),%eax
08214ca9 +0x113:  mov    %eax,(%esp)
08214cac +0x116:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08214cb1 +0x11b:  mov    %eax,-0x39(%ebp)
08214cb4 +0x11e:  mov    0xc(%ebp),%eax
08214cb7 +0x121:  mov    %eax,(%esp)
08214cba +0x124:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08214cbf +0x129:  mov    %eax,-0x35(%ebp)
08214cc2 +0x12c:  lea    -0x4b(%ebp),%eax
08214cc5 +0x12f:  add    $0x1a,%eax
08214cc8 +0x132:  movl   $0x8,0x8(%esp)
08214cd0 +0x13a:  mov    %eax,0x4(%esp)
08214cd4 +0x13e:  mov    0x10(%ebp),%eax
08214cd7 +0x141:  mov    %eax,(%esp)
08214cda +0x144:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08214cdf +0x149:  xor    $0x1,%eax
08214ce2 +0x14c:  test   %al,%al
08214ce4 +0x14e:  je     08214d0f <+0x179>
08214ce6 +0x150:  movl   $0x0,0xc(%esp)
08214cee +0x158:  movl   $0x0,0x8(%esp)
08214cf6 +0x160:  movl   $&_ZZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214cfe +0x168:  movl   $0xc4b1,(%esp)
08214d05 +0x16f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214d0a +0x174:  jmp    08214e3e <+0x2a8>
08214d0f +0x179:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
08214d14 +0x17e:  lea    -0x4b(%ebp),%edx
08214d17 +0x181:  mov    %edx,0x4(%esp)
08214d1b +0x185:  mov    %eax,(%esp)
08214d1e +0x188:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08214d23 +0x18d:  jmp    08214db0 <+0x21a>
08214d28 +0x192:  lea    -0x4b(%ebp),%eax
08214d2b +0x195:  mov    %eax,(%esp)
08214d2e +0x198:  call   0822e5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3c6e
08214d33 +0x19d:  mov    0xc(%ebp),%eax
08214d36 +0x1a0:  mov    %eax,(%esp)
08214d39 +0x1a3:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08214d3e +0x1a8:  mov    %eax,-0x39(%ebp)
08214d41 +0x1ab:  mov    0xc(%ebp),%eax
08214d44 +0x1ae:  mov    %eax,(%esp)
08214d47 +0x1b1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08214d4c +0x1b6:  mov    %eax,-0x35(%ebp)
08214d4f +0x1b9:  lea    -0x4b(%ebp),%eax
08214d52 +0x1bc:  add    $0x1a,%eax
08214d55 +0x1bf:  movl   $0x8,0x8(%esp)
08214d5d +0x1c7:  mov    %eax,0x4(%esp)
08214d61 +0x1cb:  mov    0x10(%ebp),%eax
08214d64 +0x1ce:  mov    %eax,(%esp)
08214d67 +0x1d1:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08214d6c +0x1d6:  xor    $0x1,%eax
08214d6f +0x1d9:  test   %al,%al
08214d71 +0x1db:  je     08214d9c <+0x206>
08214d73 +0x1dd:  movl   $0x0,0xc(%esp)
08214d7b +0x1e5:  movl   $0x0,0x8(%esp)
08214d83 +0x1ed:  movl   $&_ZZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214d8b +0x1f5:  movl   $0xc4c4,(%esp)
08214d92 +0x1fc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214d97 +0x201:  jmp    08214e3e <+0x2a8>
08214d9c +0x206:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08214da1 +0x20b:  lea    -0x4b(%ebp),%edx
08214da4 +0x20e:  mov    %edx,0x4(%esp)
08214da8 +0x212:  mov    %eax,(%esp)
08214dab +0x215:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08214db0 +0x21a:  movl   $0x0,-0xc(%ebp)
08214db7 +0x221:  jmp    08214e2e <+0x298>
08214db9 +0x223:  mov    -0xc(%ebp),%eax
08214dbc +0x226:  mov    &_ZL6gmList(,%eax,4),%eax
08214dc3 +0x22d:  mov    %eax,%ebx
08214dc5 +0x22f:  mov    0xc(%ebp),%eax
08214dc8 +0x232:  mov    %eax,(%esp)
08214dcb +0x235:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08214dd0 +0x23a:  cmp    %eax,%ebx
08214dd2 +0x23c:  sete   %al
08214dd5 +0x23f:  test   %al,%al
08214dd7 +0x241:  je     08214e2a <+0x294>
08214dd9 +0x243:  mov    0xc(%ebp),%eax
08214ddc +0x246:  mov    %eax,(%esp)
08214ddf +0x249:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08214de4 +0x24e:  mov    %eax,%ebx
08214de6 +0x250:  movl   $0x0,0xc(%esp)
08214dee +0x258:  movl   $0xc4d4,0x8(%esp)
08214df6 +0x260:  movl   $&_ZZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214dfe +0x268:  lea    -0x28(%ebp),%eax
08214e01 +0x26b:  mov    %eax,(%esp)
08214e04 +0x26e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08214e09 +0x273:  mov    %ebx,0xc(%esp)
08214e0d +0x277:  movl   $"REQ AuctionRegistCancel",0x8(%esp)
08214e15 +0x27f:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
08214e1d +0x287:  lea    -0x28(%ebp),%eax
08214e20 +0x28a:  mov    %eax,(%esp)
08214e23 +0x28d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08214e28 +0x292:  jmp    08214e39 <+0x2a3>
08214e2a +0x294:  addl   $0x1,-0xc(%ebp)
08214e2e +0x298:  cmpl   $0x4,-0xc(%ebp)
08214e32 +0x29c:  setle  %al
08214e35 +0x29f:  test   %al,%al
08214e37 +0x2a1:  jne    08214db9 <+0x223>
08214e39 +0x2a3:  mov    $0x0,%eax
08214e3e +0x2a8:  add    $0x64,%esp
08214e41 +0x2ab:  pop    %ebx
08214e42 +0x2ac:  pop    %ebp
08214e43 +0x2ad:  ret
```

## 反编译 C

```c
// Dispatcher_AuctionRegistCancel::dispatch_sig @ 0x8214b96

/* Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&) */

int __thiscall
Dispatcher_AuctionRegistCancel::dispatch_sig
          (Dispatcher_AuctionRegistCancel *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  PCK_AUCTION_REGIST_CANCEL_GP local_4f [18];
  undefined4 local_3d;
  undefined4 local_39;
  char acStack_35 [8];
  byte local_2d;
  cMyTrace local_2c [16];
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_2,&local_2d);
  if (cVar1 == '\x01') {
    if (local_2d < 2) {
      local_1c = (uint)local_2d;
      local_18 = CUser::AuctionPreCheck(param_1,0xbb,local_1c);
      if (local_18 < 0) {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x33);
        if (local_14 == 0) {
          if (local_1c == 1) {
            PCK_AUCTION_REGIST_CANCEL_GP::PCK_AUCTION_REGIST_CANCEL_GP(local_4f);
            local_3d = CUser::GetUID(param_1);
            local_39 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cVar1 = PacketBuf::get_binary(param_2,acStack_35,8);
            if (cVar1 != '\x01') {
              iVar2 = LineFunc(0xc4b1,
                               "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return iVar2;
            }
            CCeraAuctionServerProxy::SendPacket
                      (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_4f);
          }
          else {
            PCK_AUCTION_REGIST_CANCEL_GA::PCK_AUCTION_REGIST_CANCEL_GA
                      ((PCK_AUCTION_REGIST_CANCEL_GA *)local_4f);
            local_3d = CUser::GetUID(param_1);
            local_39 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cVar1 = PacketBuf::get_binary(param_2,acStack_35,8);
            if (cVar1 != '\x01') {
              iVar2 = LineFunc(0xc4c4,
                               "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return iVar2;
            }
            CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_4f);
          }
          for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
            iVar2 = *(int *)(gmList + local_10 * 4);
            iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            if (iVar2 == iVar3) {
              uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_2c,
                                 "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0xc4d4,0);
              cMyTrace::operator()
                        (local_2c,"Trace Auction Delay, %s(%d)","REQ AuctionRegistCancel",uVar4);
              break;
            }
          }
          local_18 = 0;
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0xbb,local_14 & 0xff);
          local_18 = 0;
        }
      }
    }
    else {
      local_18 = LineFunc(0xc482,
                          "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                          ,0,0);
    }
  }
  else {
    local_18 = LineFunc(0xc47f,
                        "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                        ,0,0);
  }
  return local_18;
}
```
