# SendPacketCallGuildMembers

`_ZN19CMonitorServerProxy26SendPacketCallGuildMembersEjj`

`CMonitorServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470e88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470e88  _ZN19CMonitorServerProxy26SendPacketCallGuildMembersEjj
#           CMonitorServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int)
# range [0x08470e88, 0x08470ec3]
08470e88 +0x00:  push   %ebp
08470e89 +0x01:  mov    %esp,%ebp
08470e8b +0x03:  sub    $0x38,%esp
08470e8e +0x06:  lea    -0x1a(%ebp),%eax
08470e91 +0x09:  mov    %eax,(%esp)
08470e94 +0x0c:  call   0846f3a0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x170>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x170
08470e99 +0x11:  mov    0xc(%ebp),%eax
08470e9c +0x14:  mov    %eax,-0x10(%ebp)
08470e9f +0x17:  mov    0x10(%ebp),%eax
08470ea2 +0x1a:  mov    %eax,-0xc(%ebp)
08470ea5 +0x1d:  movzwl -0x18(%ebp),%eax
08470ea9 +0x21:  movzwl %ax,%edx
08470eac +0x24:  lea    -0x1a(%ebp),%eax
08470eaf +0x27:  mov    %edx,0x8(%esp)
08470eb3 +0x2b:  mov    %eax,0x4(%esp)
08470eb7 +0x2f:  mov    0x8(%ebp),%eax
08470eba +0x32:  mov    %eax,(%esp)
08470ebd +0x35:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08470ec2 +0x3a:  leave
08470ec3 +0x3b:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendPacketCallGuildMembers @ 0x8470e88

/* CMonitorServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int) */

void __thiscall
CMonitorServerProxy::SendPacketCallGuildMembers(CMonitorServerProxy *this,uint param_1,uint param_2)

{
  Packet_Monitor_Call_Guild_Members local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Monitor_Call_Guild_Members::Packet_Monitor_Call_Guild_Members(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}
```
