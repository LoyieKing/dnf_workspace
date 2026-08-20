# SendRegistPacket

`_ZN23CCeraAuctionServerProxy16SendRegistPacketEv`

`CCeraAuctionServerProxy::SendRegistPacket()`

| 类 | 地址 |
|---|---|
| `CCeraAuctionServerProxy` | `0x082f7c56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7c56  _ZN23CCeraAuctionServerProxy16SendRegistPacketEv
#           CCeraAuctionServerProxy::SendRegistPacket()
# range [0x082f7c56, 0x082f7c89]
082f7c56 +0x00:  push   %ebp
082f7c57 +0x01:  mov    %esp,%ebp
082f7c59 +0x03:  sub    $0x38,%esp
082f7c5c +0x06:  lea    -0x1e(%ebp),%eax
082f7c5f +0x09:  mov    %eax,(%esp)
082f7c62 +0x0c:  call   082f7e06 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x117>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x117
082f7c67 +0x11:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082f7c6c +0x16:  mov    0x198(%eax),%eax
082f7c72 +0x1c:  mov    %eax,-0xc(%ebp)
082f7c75 +0x1f:  lea    -0x1e(%ebp),%eax
082f7c78 +0x22:  mov    %eax,0x4(%esp)
082f7c7c +0x26:  mov    0x8(%ebp),%eax
082f7c7f +0x29:  mov    %eax,(%esp)
082f7c82 +0x2c:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
082f7c87 +0x31:  leave
082f7c88 +0x32:  ret
082f7c89 +0x33:  nop
```

## 反编译 C

```c
// CCeraAuctionServerProxy::SendRegistPacket @ 0x82f7c56

/* CCeraAuctionServerProxy::SendRegistPacket() */

void __thiscall CCeraAuctionServerProxy::SendRegistPacket(CCeraAuctionServerProxy *this)

{
  int iVar1;
  PCK_AUCTION_REGIST_GP local_22 [18];
  undefined4 local_10;
  
  PCK_AUCTION_REGIST_GP::PCK_AUCTION_REGIST_GP(local_22);
  iVar1 = G_CEnvironment();
  local_10 = *(undefined4 *)(iVar1 + 0x198);
  SendPacket(this,(PACKET_HEADER *)local_22);
  return;
}
```
