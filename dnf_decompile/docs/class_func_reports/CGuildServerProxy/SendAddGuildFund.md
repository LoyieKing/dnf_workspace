# SendAddGuildFund

`_ZN17CGuildServerProxy16SendAddGuildFundEjjiN21Packet_Add_Guild_Fund9eFundTypeE`

`CGuildServerProxy::SendAddGuildFund(unsigned int, unsigned int, int, Packet_Add_Guild_Fund::eFundType)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846f1a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846f1a8  _ZN17CGuildServerProxy16SendAddGuildFundEjjiN21Packet_Add_Guild_Fund9eFundTypeE
#           CGuildServerProxy::SendAddGuildFund(unsigned int, unsigned int, int, Packet_Add_Guild_Fund::eFundType)
# range [0x0846f1a8, 0x0846f1ef]
0846f1a8 +0x00:  push   %ebp
0846f1a9 +0x01:  mov    %esp,%ebp
0846f1ab +0x03:  sub    $0x38,%esp
0846f1ae +0x06:  lea    -0x1f(%ebp),%eax
0846f1b1 +0x09:  mov    %eax,(%esp)
0846f1b4 +0x0c:  call   0846fb20 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x8f0>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x8f0
0846f1b9 +0x11:  mov    0xc(%ebp),%eax
0846f1bc +0x14:  mov    %eax,-0x10(%ebp)
0846f1bf +0x17:  mov    0x10(%ebp),%eax
0846f1c2 +0x1a:  mov    %eax,-0xc(%ebp)
0846f1c5 +0x1d:  mov    0x14(%ebp),%eax
0846f1c8 +0x20:  mov    %eax,-0x14(%ebp)
0846f1cb +0x23:  mov    0x18(%ebp),%eax
0846f1ce +0x26:  mov    %al,-0x15(%ebp)
0846f1d1 +0x29:  movzwl -0x1d(%ebp),%eax
0846f1d5 +0x2d:  movzwl %ax,%edx
0846f1d8 +0x30:  lea    -0x1f(%ebp),%eax
0846f1db +0x33:  mov    %edx,0x8(%esp)
0846f1df +0x37:  mov    %eax,0x4(%esp)
0846f1e3 +0x3b:  mov    0x8(%ebp),%eax
0846f1e6 +0x3e:  mov    %eax,(%esp)
0846f1e9 +0x41:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846f1ee +0x46:  leave
0846f1ef +0x47:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendAddGuildFund @ 0x846f1a8

/* CGuildServerProxy::SendAddGuildFund(unsigned int, unsigned int, int,
   Packet_Add_Guild_Fund::eFundType) */

void __thiscall
CGuildServerProxy::SendAddGuildFund
          (CGuildServerProxy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined1 param_5)

{
  Packet_Add_Guild_Fund local_23 [2];
  ushort local_21;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Packet_Add_Guild_Fund::Packet_Add_Guild_Fund(local_23);
  local_14 = param_1;
  local_10 = param_2;
  local_18 = param_3;
  local_19 = param_5;
  SendTcpPacket(this,(char *)local_23,(uint)local_21);
  return;
}
```
