# SendRegistPacket

`_ZN19CAuctionServerProxy16SendRegistPacketEv`

`CAuctionServerProxy::SendRegistPacket()`

| 类 | 地址 |
|---|---|
| `CAuctionServerProxy` | `0x082f7b46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7b46  _ZN19CAuctionServerProxy16SendRegistPacketEv
#           CAuctionServerProxy::SendRegistPacket()
# range [0x082f7b46, 0x082f7b79]
082f7b46 +0x00:  push   %ebp
082f7b47 +0x01:  mov    %esp,%ebp
082f7b49 +0x03:  sub    $0x38,%esp
082f7b4c +0x06:  lea    -0x1e(%ebp),%eax
082f7b4f +0x09:  mov    %eax,(%esp)
082f7b52 +0x0c:  call   082f7d36 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x47>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x47
082f7b57 +0x11:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082f7b5c +0x16:  mov    0x198(%eax),%eax
082f7b62 +0x1c:  mov    %eax,-0xc(%ebp)
082f7b65 +0x1f:  lea    -0x1e(%ebp),%eax
082f7b68 +0x22:  mov    %eax,0x4(%esp)
082f7b6c +0x26:  mov    0x8(%ebp),%eax
082f7b6f +0x29:  mov    %eax,(%esp)
082f7b72 +0x2c:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
082f7b77 +0x31:  leave
082f7b78 +0x32:  ret
082f7b79 +0x33:  nop
```

## 反编译 C

```c
// CAuctionServerProxy::SendRegistPacket @ 0x82f7b46

/* CAuctionServerProxy::SendRegistPacket() */

void __thiscall CAuctionServerProxy::SendRegistPacket(CAuctionServerProxy *this)

{
  int iVar1;
  PCK_AUCTION_REGIST_GA local_22 [18];
  undefined4 local_10;
  
  PCK_AUCTION_REGIST_GA::PCK_AUCTION_REGIST_GA(local_22);
  iVar1 = G_CEnvironment();
  local_10 = *(undefined4 *)(iVar1 + 0x198);
  SendPacket(this,(PACKET_HEADER *)local_22);
  return;
}
```
