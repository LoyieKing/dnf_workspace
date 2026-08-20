# SendExchangeServerInfo

`_ZN19CMonitorServerProxy22SendExchangeServerInfoEiis`

`CMonitorServerProxy::SendExchangeServerInfo(int, int, short)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08471124` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471124  _ZN19CMonitorServerProxy22SendExchangeServerInfoEiis
#           CMonitorServerProxy::SendExchangeServerInfo(int, int, short)
# range [0x08471124, 0x0847116f]
08471124 +0x00:  push   %ebp
08471125 +0x01:  mov    %esp,%ebp
08471127 +0x03:  sub    $0x48,%esp
0847112a +0x06:  mov    0x14(%ebp),%eax
0847112d +0x09:  mov    %ax,-0x2c(%ebp)
08471131 +0x0d:  lea    -0x1c(%ebp),%eax
08471134 +0x10:  mov    %eax,(%esp)
08471137 +0x13:  call   08471670 <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0xca>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xca
0847113c +0x18:  mov    0xc(%ebp),%eax
0847113f +0x1b:  mov    %eax,-0x12(%ebp)
08471142 +0x1e:  mov    0x10(%ebp),%eax
08471145 +0x21:  mov    %eax,-0xc(%ebp)
08471148 +0x24:  movzwl -0x2c(%ebp),%eax
0847114c +0x28:  mov    %ax,-0xe(%ebp)
08471150 +0x2c:  movzwl -0x1a(%ebp),%eax
08471154 +0x30:  movzwl %ax,%edx
08471157 +0x33:  lea    -0x1c(%ebp),%eax
0847115a +0x36:  mov    %edx,0x8(%esp)
0847115e +0x3a:  mov    %eax,0x4(%esp)
08471162 +0x3e:  mov    0x8(%ebp),%eax
08471165 +0x41:  mov    %eax,(%esp)
08471168 +0x44:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
0847116d +0x49:  leave
0847116e +0x4a:  ret
0847116f +0x4b:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::SendExchangeServerInfo @ 0x8471124

/* CMonitorServerProxy::SendExchangeServerInfo(int, int, short) */

void __thiscall
CMonitorServerProxy::SendExchangeServerInfo
          (CMonitorServerProxy *this,int param_1,int param_2,short param_3)

{
  Packet_Exchange_Server_Info local_20 [2];
  ushort local_1e;
  int local_16;
  short local_12;
  int local_10;
  
  Packet_Exchange_Server_Info::Packet_Exchange_Server_Info(local_20);
  local_16 = param_1;
  local_10 = param_2;
  local_12 = param_3;
  SendPacket(this,(char *)local_20,(uint)local_1e);
  return;
}
```
