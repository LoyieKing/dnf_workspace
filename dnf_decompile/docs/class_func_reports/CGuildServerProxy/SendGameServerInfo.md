# SendGameServerInfo

`_ZN17CGuildServerProxy18SendGameServerInfoEPcthh`

`CGuildServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846f0f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846f0f2  _ZN17CGuildServerProxy18SendGameServerInfoEPcthh
#           CGuildServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char)
# range [0x0846f0f2, 0x0846f16b]
0846f0f2 +0x00:  push   %ebp
0846f0f3 +0x01:  mov    %esp,%ebp
0846f0f5 +0x03:  sub    $0x48,%esp
0846f0f8 +0x06:  mov    0x10(%ebp),%ecx
0846f0fb +0x09:  mov    0x14(%ebp),%edx
0846f0fe +0x0c:  mov    0x18(%ebp),%eax
0846f101 +0x0f:  mov    %cx,-0x2c(%ebp)
0846f105 +0x13:  mov    %dl,-0x30(%ebp)
0846f108 +0x16:  mov    %al,-0x34(%ebp)
0846f10b +0x19:  lea    -0x27(%ebp),%eax
0846f10e +0x1c:  mov    %eax,(%esp)
0846f111 +0x1f:  call   0846fac0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x890>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x890
0846f116 +0x24:  movzbl -0x30(%ebp),%eax
0846f11a +0x28:  mov    %al,-0x1c(%ebp)
0846f11d +0x2b:  movzbl -0x34(%ebp),%eax
0846f121 +0x2f:  mov    %al,-0x1b(%ebp)
0846f124 +0x32:  movb   $0x1,-0x1d(%ebp)
0846f128 +0x36:  movzwl -0x2c(%ebp),%eax
0846f12c +0x3a:  mov    %ax,-0xa(%ebp)
0846f130 +0x3e:  lea    -0x27(%ebp),%eax
0846f133 +0x41:  lea    0xd(%eax),%edx
0846f136 +0x44:  movl   $0x10,0x8(%esp)
0846f13e +0x4c:  mov    0xc(%ebp),%eax
0846f141 +0x4f:  mov    %eax,0x4(%esp)
0846f145 +0x53:  mov    %edx,(%esp)
0846f148 +0x56:  call   0807d8d0 <_init+0x1c8>
0846f14d +0x5b:  movzwl -0x25(%ebp),%eax
0846f151 +0x5f:  movzwl %ax,%edx
0846f154 +0x62:  lea    -0x27(%ebp),%eax
0846f157 +0x65:  mov    %edx,0x8(%esp)
0846f15b +0x69:  mov    %eax,0x4(%esp)
0846f15f +0x6d:  mov    0x8(%ebp),%eax
0846f162 +0x70:  mov    %eax,(%esp)
0846f165 +0x73:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846f16a +0x78:  leave
0846f16b +0x79:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendGameServerInfo @ 0x846f0f2

/* CGuildServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char) */

void __thiscall
CGuildServerProxy::SendGameServerInfo
          (CGuildServerProxy *this,char *param_1,ushort param_2,uchar param_3,uchar param_4)

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
