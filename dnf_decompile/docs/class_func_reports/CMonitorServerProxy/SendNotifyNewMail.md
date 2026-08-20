# SendNotifyNewMail

`_ZN19CMonitorServerProxy17SendNotifyNewMailEj`

`CMonitorServerProxy::SendNotifyNewMail(unsigned int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08471072` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471072  _ZN19CMonitorServerProxy17SendNotifyNewMailEj
#           CMonitorServerProxy::SendNotifyNewMail(unsigned int)
# range [0x08471072, 0x084710a7]
08471072 +0x00:  push   %ebp
08471073 +0x01:  mov    %esp,%ebp
08471075 +0x03:  sub    $0x38,%esp
08471078 +0x06:  lea    -0x1a(%ebp),%eax
0847107b +0x09:  mov    %eax,(%esp)
0847107e +0x0c:  call   0847164c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0xa6>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa6
08471083 +0x11:  mov    0xc(%ebp),%eax
08471086 +0x14:  mov    %eax,-0x10(%ebp)
08471089 +0x17:  movzwl -0x18(%ebp),%eax
0847108d +0x1b:  movzwl %ax,%edx
08471090 +0x1e:  lea    -0x1a(%ebp),%eax
08471093 +0x21:  mov    %edx,0x8(%esp)
08471097 +0x25:  mov    %eax,0x4(%esp)
0847109b +0x29:  mov    0x8(%ebp),%eax
0847109e +0x2c:  mov    %eax,(%esp)
084710a1 +0x2f:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084710a6 +0x34:  leave
084710a7 +0x35:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendNotifyNewMail @ 0x8471072

/* CMonitorServerProxy::SendNotifyNewMail(unsigned int) */

void __thiscall CMonitorServerProxy::SendNotifyNewMail(CMonitorServerProxy *this,uint param_1)

{
  Packet_Monitor_Notify_New_Mail local_1e [2];
  ushort local_1c;
  uint local_14;
  
  Packet_Monitor_Notify_New_Mail::Packet_Monitor_Notify_New_Mail(local_1e);
  local_14 = param_1;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}
```
