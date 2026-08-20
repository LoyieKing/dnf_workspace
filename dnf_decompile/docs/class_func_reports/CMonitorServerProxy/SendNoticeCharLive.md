# SendNoticeCharLive

`_ZN19CMonitorServerProxy18SendNoticeCharLiveEj`

`CMonitorServerProxy::SendNoticeCharLive(unsigned int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08471170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471170  _ZN19CMonitorServerProxy18SendNoticeCharLiveEj
#           CMonitorServerProxy::SendNoticeCharLive(unsigned int)
# range [0x08471170, 0x084711a5]
08471170 +0x00:  push   %ebp
08471171 +0x01:  mov    %esp,%ebp
08471173 +0x03:  sub    $0x28,%esp
08471176 +0x06:  lea    -0x16(%ebp),%eax
08471179 +0x09:  mov    %eax,(%esp)
0847117c +0x0c:  call   084715e6 <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x40>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x40
08471181 +0x11:  mov    0xc(%ebp),%eax
08471184 +0x14:  mov    %eax,-0xc(%ebp)
08471187 +0x17:  movzwl -0x14(%ebp),%eax
0847118b +0x1b:  movzwl %ax,%edx
0847118e +0x1e:  lea    -0x16(%ebp),%eax
08471191 +0x21:  mov    %edx,0x8(%esp)
08471195 +0x25:  mov    %eax,0x4(%esp)
08471199 +0x29:  mov    0x8(%ebp),%eax
0847119c +0x2c:  mov    %eax,(%esp)
0847119f +0x2f:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084711a4 +0x34:  leave
084711a5 +0x35:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendNoticeCharLive @ 0x8471170

/* CMonitorServerProxy::SendNoticeCharLive(unsigned int) */

void __thiscall CMonitorServerProxy::SendNoticeCharLive(CMonitorServerProxy *this,uint param_1)

{
  Packet_Monitor_Notice_Charac_Live_On_Ten_Min local_1a [2];
  ushort local_18;
  uint local_10;
  
  Packet_Monitor_Notice_Charac_Live_On_Ten_Min::Packet_Monitor_Notice_Charac_Live_On_Ten_Min
            (local_1a);
  local_10 = param_1;
  SendPacket(this,(char *)local_1a,(uint)local_18);
  return;
}
```
