# SendCheckCeraAuctionReadyPacket

`_ZN23CCeraAuctionServerProxy31SendCheckCeraAuctionReadyPacketEv`

`CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket()`

| 类 | 地址 |
|---|---|
| `CCeraAuctionServerProxy` | `0x082f7c8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7c8a  _ZN23CCeraAuctionServerProxy31SendCheckCeraAuctionReadyPacketEv
#           CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket()
# range [0x082f7c8a, 0x082f7cae]
082f7c8a +0x00:  push   %ebp
082f7c8b +0x01:  mov    %esp,%ebp
082f7c8d +0x03:  sub    $0x38,%esp
082f7c90 +0x06:  lea    -0x1a(%ebp),%eax
082f7c93 +0x09:  mov    %eax,(%esp)
082f7c96 +0x0c:  call   082f7e6e <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x17f>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x17f
082f7c9b +0x11:  lea    -0x1a(%ebp),%eax
082f7c9e +0x14:  mov    %eax,0x4(%esp)
082f7ca2 +0x18:  mov    0x8(%ebp),%eax
082f7ca5 +0x1b:  mov    %eax,(%esp)
082f7ca8 +0x1e:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
082f7cad +0x23:  leave
082f7cae +0x24:  ret
```

## 反编译 C

```c
// CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket @ 0x82f7c8a

/* CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket() */

void __thiscall
CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket(CCeraAuctionServerProxy *this)

{
  PCK_AUCTION_CHECK_AUCTION_READY_GP local_1e [26];
  
  PCK_AUCTION_CHECK_AUCTION_READY_GP::PCK_AUCTION_CHECK_AUCTION_READY_GP(local_1e);
  SendPacket(this,(PACKET_HEADER *)local_1e);
  return;
}
```
