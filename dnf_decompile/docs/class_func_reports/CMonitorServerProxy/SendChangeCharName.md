# SendChangeCharName

`_ZN19CMonitorServerProxy18SendChangeCharNameEjjjPc`

`CMonitorServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08471288` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471288  _ZN19CMonitorServerProxy18SendChangeCharNameEjjjPc
#           CMonitorServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*)
# range [0x08471288, 0x084712df]
08471288 +0x00:  push   %ebp
08471289 +0x01:  mov    %esp,%ebp
0847128b +0x03:  sub    $0x58,%esp
0847128e +0x06:  lea    -0x3c(%ebp),%eax
08471291 +0x09:  mov    %eax,(%esp)
08471294 +0x0c:  call   0846fa00 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x7d0>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x7d0
08471299 +0x11:  mov    0xc(%ebp),%eax
0847129c +0x14:  mov    %eax,-0x32(%ebp)
0847129f +0x17:  mov    0x10(%ebp),%eax
084712a2 +0x1a:  mov    %eax,-0x2e(%ebp)
084712a5 +0x1d:  mov    0x14(%ebp),%eax
084712a8 +0x20:  mov    %eax,-0x2a(%ebp)
084712ab +0x23:  mov    0x18(%ebp),%eax
084712ae +0x26:  mov    %eax,0x4(%esp)
084712b2 +0x2a:  lea    -0x3c(%ebp),%eax
084712b5 +0x2d:  add    $0x16,%eax
084712b8 +0x30:  mov    %eax,(%esp)
084712bb +0x33:  call   0807def0 <_init+0x7e8>
084712c0 +0x38:  movzwl -0x3a(%ebp),%eax
084712c4 +0x3c:  movzwl %ax,%edx
084712c7 +0x3f:  lea    -0x3c(%ebp),%eax
084712ca +0x42:  mov    %edx,0x8(%esp)
084712ce +0x46:  mov    %eax,0x4(%esp)
084712d2 +0x4a:  mov    0x8(%ebp),%eax
084712d5 +0x4d:  mov    %eax,(%esp)
084712d8 +0x50:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084712dd +0x55:  leave
084712de +0x56:  ret
084712df +0x57:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::SendChangeCharName @ 0x8471288

/* CMonitorServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*) */

void __thiscall
CMonitorServerProxy::SendChangeCharName
          (CMonitorServerProxy *this,uint param_1,uint param_2,uint param_3,char *param_4)

{
  Packet_Change_Char_Name local_40 [2];
  ushort local_3e;
  uint local_36;
  uint local_32;
  uint local_2e;
  char acStack_2a [38];
  
  Packet_Change_Char_Name::Packet_Change_Char_Name(local_40);
  local_36 = param_1;
  local_32 = param_2;
  local_2e = param_3;
  strcpy(acStack_2a,param_4);
  SendTcpPacket(this,(char *)local_40,(uint)local_3e);
  return;
}
```
