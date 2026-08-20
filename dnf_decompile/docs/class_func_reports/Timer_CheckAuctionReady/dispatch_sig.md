# dispatch_sig

`_ZN23Timer_CheckAuctionReady12dispatch_sigEiij`

`Timer_CheckAuctionReady::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_CheckAuctionReady` | `0x0863a808` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a808  _ZN23Timer_CheckAuctionReady12dispatch_sigEiij
#           Timer_CheckAuctionReady::dispatch_sig(int, int, unsigned int)
# range [0x0863a808, 0x0863a857]
0863a808 +0x00:  push   %ebp
0863a809 +0x01:  mov    %esp,%ebp
0863a80b +0x03:  sub    $0x18,%esp
0863a80e +0x06:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0863a813 +0x0b:  mov    %eax,(%esp)
0863a816 +0x0e:  call   08234f44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5ee
0863a81b +0x13:  xor    $0x1,%eax
0863a81e +0x16:  test   %al,%al
0863a820 +0x18:  je     0863a82f <+0x27>
0863a822 +0x1a:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0863a827 +0x1f:  mov    %eax,(%esp)
0863a82a +0x22:  call   082f7b7a <_ZN19CAuctionServerProxy27SendCheckAuctionReadyPacketEv>  ; CAuctionServerProxy::SendCheckAuctionReadyPacket()
0863a82f +0x27:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0863a834 +0x2c:  mov    %eax,(%esp)
0863a837 +0x2f:  call   08234f54 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5fe
0863a83c +0x34:  xor    $0x1,%eax
0863a83f +0x37:  test   %al,%al
0863a841 +0x39:  je     0863a850 <+0x48>
0863a843 +0x3b:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0863a848 +0x40:  mov    %eax,(%esp)
0863a84b +0x43:  call   082f7c8a <_ZN23CCeraAuctionServerProxy31SendCheckCeraAuctionReadyPacketEv>  ; CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket()
0863a850 +0x48:  mov    $0x1,%eax
0863a855 +0x4d:  leave
0863a856 +0x4e:  ret
0863a857 +0x4f:  nop
```

## 反编译 C

```c
// Timer_CheckAuctionReady::dispatch_sig @ 0x863a808

/* Timer_CheckAuctionReady::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_CheckAuctionReady::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  
  cVar1 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
  if (cVar1 != '\x01') {
    CAuctionServerProxy::SendCheckAuctionReadyPacket(GlobalData::s_auction_proxy);
  }
  cVar1 = CCeraAuctionServerProxy::IsRunning(GlobalData::s_cera_auction_proxy);
  if (cVar1 != '\x01') {
    CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket(GlobalData::s_cera_auction_proxy);
  }
  return 1;
}
```
