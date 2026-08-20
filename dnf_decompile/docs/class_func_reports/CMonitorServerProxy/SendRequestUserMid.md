# SendRequestUserMid

`_ZN19CMonitorServerProxy18SendRequestUserMidEjjPci`

`CMonitorServerProxy::SendRequestUserMid(unsigned int, unsigned int, char*, int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x084711a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084711a6  _ZN19CMonitorServerProxy18SendRequestUserMidEjjPci
#           CMonitorServerProxy::SendRequestUserMid(unsigned int, unsigned int, char*, int)
# range [0x084711a6, 0x084711fd]
084711a6 +0x00:  push   %ebp
084711a7 +0x01:  mov    %esp,%ebp
084711a9 +0x03:  sub    $0x58,%esp
084711ac +0x06:  lea    -0x3c(%ebp),%eax
084711af +0x09:  mov    %eax,(%esp)
084711b2 +0x0c:  call   08471694 <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0xee>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xee
084711b7 +0x11:  mov    0x10(%ebp),%eax
084711ba +0x14:  mov    %eax,-0x32(%ebp)
084711bd +0x17:  mov    0xc(%ebp),%eax
084711c0 +0x1a:  mov    %eax,-0x2e(%ebp)
084711c3 +0x1d:  mov    0x18(%ebp),%eax
084711c6 +0x20:  mov    %eax,0x8(%esp)
084711ca +0x24:  mov    0x14(%ebp),%eax
084711cd +0x27:  mov    %eax,0x4(%esp)
084711d1 +0x2b:  lea    -0x3c(%ebp),%eax
084711d4 +0x2e:  add    $0x16,%eax
084711d7 +0x31:  mov    %eax,(%esp)
084711da +0x34:  call   0807d8a0 <_init+0x198>
084711df +0x39:  movzwl -0x3a(%ebp),%eax
084711e3 +0x3d:  movzwl %ax,%edx
084711e6 +0x40:  lea    -0x3c(%ebp),%eax
084711e9 +0x43:  mov    %edx,0x8(%esp)
084711ed +0x47:  mov    %eax,0x4(%esp)
084711f1 +0x4b:  mov    0x8(%ebp),%eax
084711f4 +0x4e:  mov    %eax,(%esp)
084711f7 +0x51:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084711fc +0x56:  leave
084711fd +0x57:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendRequestUserMid @ 0x84711a6

/* CMonitorServerProxy::SendRequestUserMid(unsigned int, unsigned int, char*, int) */

void __thiscall
CMonitorServerProxy::SendRequestUserMid
          (CMonitorServerProxy *this,uint param_1,uint param_2,char *param_3,int param_4)

{
  Packet_GM_Request_Mid local_40 [2];
  ushort local_3e;
  uint local_36;
  uint local_32;
  undefined1 auStack_2a [38];
  
  Packet_GM_Request_Mid::Packet_GM_Request_Mid(local_40);
  local_36 = param_2;
  local_32 = param_1;
  memcpy(auStack_2a,param_3,param_4);
  SendPacket(this,(char *)local_40,(uint)local_3e);
  return;
}
```
