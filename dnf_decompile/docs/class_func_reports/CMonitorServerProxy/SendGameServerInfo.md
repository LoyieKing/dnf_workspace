# SendGameServerInfo

`_ZN19CMonitorServerProxy18SendGameServerInfoEPcthh`

`CMonitorServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x084714ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084714ec  _ZN19CMonitorServerProxy18SendGameServerInfoEPcthh
#           CMonitorServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char)
# range [0x084714ec, 0x08471565]
084714ec +0x00:  push   %ebp
084714ed +0x01:  mov    %esp,%ebp
084714ef +0x03:  sub    $0x48,%esp
084714f2 +0x06:  mov    0x10(%ebp),%ecx
084714f5 +0x09:  mov    0x14(%ebp),%edx
084714f8 +0x0c:  mov    0x18(%ebp),%eax
084714fb +0x0f:  mov    %cx,-0x2c(%ebp)
084714ff +0x13:  mov    %dl,-0x30(%ebp)
08471502 +0x16:  mov    %al,-0x34(%ebp)
08471505 +0x19:  lea    -0x27(%ebp),%eax
08471508 +0x1c:  mov    %eax,(%esp)
0847150b +0x1f:  call   0846fac0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x890>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x890
08471510 +0x24:  movzbl -0x30(%ebp),%eax
08471514 +0x28:  mov    %al,-0x1c(%ebp)
08471517 +0x2b:  movzbl -0x34(%ebp),%eax
0847151b +0x2f:  mov    %al,-0x1b(%ebp)
0847151e +0x32:  movb   $0x1,-0x1d(%ebp)
08471522 +0x36:  movzwl -0x2c(%ebp),%eax
08471526 +0x3a:  mov    %ax,-0xa(%ebp)
0847152a +0x3e:  lea    -0x27(%ebp),%eax
0847152d +0x41:  lea    0xd(%eax),%edx
08471530 +0x44:  movl   $0x10,0x8(%esp)
08471538 +0x4c:  mov    0xc(%ebp),%eax
0847153b +0x4f:  mov    %eax,0x4(%esp)
0847153f +0x53:  mov    %edx,(%esp)
08471542 +0x56:  call   0807d8d0 <_init+0x1c8>
08471547 +0x5b:  movzwl -0x25(%ebp),%eax
0847154b +0x5f:  movzwl %ax,%edx
0847154e +0x62:  lea    -0x27(%ebp),%eax
08471551 +0x65:  mov    %edx,0x8(%esp)
08471555 +0x69:  mov    %eax,0x4(%esp)
08471559 +0x6d:  mov    0x8(%ebp),%eax
0847155c +0x70:  mov    %eax,(%esp)
0847155f +0x73:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08471564 +0x78:  leave
08471565 +0x79:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendGameServerInfo @ 0x84714ec

/* CMonitorServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char) */

void __thiscall
CMonitorServerProxy::SendGameServerInfo
          (CMonitorServerProxy *this,char *param_1,ushort param_2,uchar param_3,uchar param_4)

{
  Packet_Game_Server_Regist local_2b [2];
  ushort local_29;
  undefined1 local_21;
  uchar local_20;
  uchar local_1f;
  char local_1e [16];
  ushort local_e;
  
  Packet_Game_Server_Regist::Packet_Game_Server_Regist(local_2b);
  local_21 = 1;
  local_20 = param_3;
  local_1f = param_4;
  local_e = param_2;
  strncpy(local_1e,param_1,0x10);
  SendTcpPacket(this,(char *)local_2b,(uint)local_29);
  return;
}
```
