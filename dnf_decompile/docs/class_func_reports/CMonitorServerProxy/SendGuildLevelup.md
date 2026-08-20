# SendGuildLevelup

`_ZN19CMonitorServerProxy16SendGuildLevelupEijj`

`CMonitorServerProxy::SendGuildLevelup(int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470ec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470ec4  _ZN19CMonitorServerProxy16SendGuildLevelupEijj
#           CMonitorServerProxy::SendGuildLevelup(int, unsigned int, unsigned int)
# range [0x08470ec4, 0x08470f05]
08470ec4 +0x00:  push   %ebp
08470ec5 +0x01:  mov    %esp,%ebp
08470ec7 +0x03:  sub    $0x38,%esp
08470eca +0x06:  lea    -0x23(%ebp),%eax
08470ecd +0x09:  mov    %eax,(%esp)
08470ed0 +0x0c:  call   0846f420 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x1f0>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x1f0
08470ed5 +0x11:  mov    0xc(%ebp),%eax
08470ed8 +0x14:  mov    %eax,-0x19(%ebp)
08470edb +0x17:  mov    0x10(%ebp),%eax
08470ede +0x1a:  mov    %eax,-0x15(%ebp)
08470ee1 +0x1d:  mov    0x14(%ebp),%eax
08470ee4 +0x20:  mov    %eax,-0x11(%ebp)
08470ee7 +0x23:  movzwl -0x21(%ebp),%eax
08470eeb +0x27:  movzwl %ax,%edx
08470eee +0x2a:  lea    -0x23(%ebp),%eax
08470ef1 +0x2d:  mov    %edx,0x8(%esp)
08470ef5 +0x31:  mov    %eax,0x4(%esp)
08470ef9 +0x35:  mov    0x8(%ebp),%eax
08470efc +0x38:  mov    %eax,(%esp)
08470eff +0x3b:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08470f04 +0x40:  leave
08470f05 +0x41:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendGuildLevelup @ 0x8470ec4

/* CMonitorServerProxy::SendGuildLevelup(int, unsigned int, unsigned int) */

void __thiscall
CMonitorServerProxy::SendGuildLevelup
          (CMonitorServerProxy *this,int param_1,uint param_2,uint param_3)

{
  Packet_Monitor_Call_Guild_Level_Up local_27 [2];
  ushort local_25;
  int local_1d;
  uint local_19;
  uint local_15;
  
  Packet_Monitor_Call_Guild_Level_Up::Packet_Monitor_Call_Guild_Level_Up(local_27);
  local_1d = param_1;
  local_19 = param_2;
  local_15 = param_3;
  SendTcpPacket(this,(char *)local_27,(uint)local_25);
  return;
}
```
