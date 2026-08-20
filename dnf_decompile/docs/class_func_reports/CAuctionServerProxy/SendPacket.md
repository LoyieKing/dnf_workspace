# SendPacket

`_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE`

`CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)`

| 类 | 地址 |
|---|---|
| `CAuctionServerProxy` | `0x082f7b1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7b1c  _ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE
#           CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
# range [0x082f7b1c, 0x082f7b45]
082f7b1c +0x00:  push   %ebp
082f7b1d +0x01:  mov    %esp,%ebp
082f7b1f +0x03:  sub    $0x18,%esp
082f7b22 +0x06:  mov    0xc(%ebp),%eax
082f7b25 +0x09:  mov    %eax,(%esp)
082f7b28 +0x0c:  call   082f7d1c <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x2d>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x2d
082f7b2d +0x11:  mov    0xc(%ebp),%ecx
082f7b30 +0x14:  mov    0x8(%ebp),%edx
082f7b33 +0x17:  mov    %eax,0x8(%esp)
082f7b37 +0x1b:  mov    %ecx,0x4(%esp)
082f7b3b +0x1f:  mov    %edx,(%esp)
082f7b3e +0x22:  call   082fd830 <_ZN15BaseServerProxy13SendTcpPacketEPci>  ; BaseServerProxy::SendTcpPacket(char*, int)
082f7b43 +0x27:  leave
082f7b44 +0x28:  ret
082f7b45 +0x29:  nop
```

## 反编译 C

```c
// CAuctionServerProxy::SendPacket @ 0x82f7b1c

/* CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*) */

void __thiscall CAuctionServerProxy::SendPacket(CAuctionServerProxy *this,PACKET_HEADER *param_1)

{
  int iVar1;
  
  iVar1 = nsl::PACKET_HEADER::getSize(param_1);
  BaseServerProxy::SendTcpPacket((BaseServerProxy *)this,(char *)param_1,iVar1);
  return;
}
```
