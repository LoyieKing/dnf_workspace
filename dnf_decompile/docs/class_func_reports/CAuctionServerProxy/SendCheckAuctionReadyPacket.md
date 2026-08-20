# SendCheckAuctionReadyPacket

`_ZN19CAuctionServerProxy27SendCheckAuctionReadyPacketEv`

`CAuctionServerProxy::SendCheckAuctionReadyPacket()`

| 类 | 地址 |
|---|---|
| `CAuctionServerProxy` | `0x082f7b7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7b7a  _ZN19CAuctionServerProxy27SendCheckAuctionReadyPacketEv
#           CAuctionServerProxy::SendCheckAuctionReadyPacket()
# range [0x082f7b7a, 0x082f7b9f]
082f7b7a +0x00:  push   %ebp
082f7b7b +0x01:  mov    %esp,%ebp
082f7b7d +0x03:  sub    $0x38,%esp
082f7b80 +0x06:  lea    -0x1a(%ebp),%eax
082f7b83 +0x09:  mov    %eax,(%esp)
082f7b86 +0x0c:  call   082f7d9e <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0xaf>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0xaf
082f7b8b +0x11:  lea    -0x1a(%ebp),%eax
082f7b8e +0x14:  mov    %eax,0x4(%esp)
082f7b92 +0x18:  mov    0x8(%ebp),%eax
082f7b95 +0x1b:  mov    %eax,(%esp)
082f7b98 +0x1e:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
082f7b9d +0x23:  leave
082f7b9e +0x24:  ret
082f7b9f +0x25:  nop
```

## 反编译 C

```c
// CAuctionServerProxy::SendCheckAuctionReadyPacket @ 0x82f7b7a

/* CAuctionServerProxy::SendCheckAuctionReadyPacket() */

void __thiscall CAuctionServerProxy::SendCheckAuctionReadyPacket(CAuctionServerProxy *this)

{
  PCK_AUCTION_CHECK_AUCTION_READY_GA local_1e [26];
  
  PCK_AUCTION_CHECK_AUCTION_READY_GA::PCK_AUCTION_CHECK_AUCTION_READY_GA(local_1e);
  SendPacket(this,(PACKET_HEADER *)local_1e);
  return;
}
```
