# SendPacket

`_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE`

`CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)`

| 类 | 地址 |
|---|---|
| `CCeraAuctionServerProxy` | `0x082f7c2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7c2c  _ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE
#           CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
# range [0x082f7c2c, 0x082f7c55]
082f7c2c +0x00:  push   %ebp
082f7c2d +0x01:  mov    %esp,%ebp
082f7c2f +0x03:  sub    $0x18,%esp
082f7c32 +0x06:  mov    0xc(%ebp),%eax
082f7c35 +0x09:  mov    %eax,(%esp)
082f7c38 +0x0c:  call   082f7d1c <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x2d>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x2d
082f7c3d +0x11:  mov    0xc(%ebp),%ecx
082f7c40 +0x14:  mov    0x8(%ebp),%edx
082f7c43 +0x17:  mov    %eax,0x8(%esp)
082f7c47 +0x1b:  mov    %ecx,0x4(%esp)
082f7c4b +0x1f:  mov    %edx,(%esp)
082f7c4e +0x22:  call   082fd830 <_ZN15BaseServerProxy13SendTcpPacketEPci>  ; BaseServerProxy::SendTcpPacket(char*, int)
082f7c53 +0x27:  leave
082f7c54 +0x28:  ret
082f7c55 +0x29:  nop
```

## 反编译 C

```c
// CCeraAuctionServerProxy::SendPacket @ 0x82f7c2c

/* CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*) */

void __thiscall
CCeraAuctionServerProxy::SendPacket(CCeraAuctionServerProxy *this,PACKET_HEADER *param_1)

{
  int iVar1;
  
  iVar1 = nsl::PACKET_HEADER::getSize(param_1);
  BaseServerProxy::SendTcpPacket((BaseServerProxy *)this,(char *)param_1,iVar1);
  return;
}
```
