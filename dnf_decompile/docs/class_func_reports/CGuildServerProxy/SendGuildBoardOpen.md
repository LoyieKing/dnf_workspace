# SendGuildBoardOpen

`_ZN17CGuildServerProxy18SendGuildBoardOpenEjjc`

`CGuildServerProxy::SendGuildBoardOpen(unsigned int, unsigned int, char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846efce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846efce  _ZN17CGuildServerProxy18SendGuildBoardOpenEjjc
#           CGuildServerProxy::SendGuildBoardOpen(unsigned int, unsigned int, char)
# range [0x0846efce, 0x0846f019]
0846efce +0x00:  push   %ebp
0846efcf +0x01:  mov    %esp,%ebp
0846efd1 +0x03:  sub    $0x48,%esp
0846efd4 +0x06:  mov    0x14(%ebp),%eax
0846efd7 +0x09:  mov    %al,-0x2c(%ebp)
0846efda +0x0c:  lea    -0x1b(%ebp),%eax
0846efdd +0x0f:  mov    %eax,(%esp)
0846efe0 +0x12:  call   0846fba0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x970>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x970
0846efe5 +0x17:  mov    0xc(%ebp),%eax
0846efe8 +0x1a:  mov    %eax,-0xc(%ebp)
0846efeb +0x1d:  mov    0x10(%ebp),%eax
0846efee +0x20:  mov    %eax,-0x10(%ebp)
0846eff1 +0x23:  cmpb   $0x0,-0x2c(%ebp)
0846eff5 +0x27:  setne  %al
0846eff8 +0x2a:  mov    %al,-0x11(%ebp)
0846effb +0x2d:  movzwl -0x19(%ebp),%eax
0846efff +0x31:  movzwl %ax,%edx
0846f002 +0x34:  lea    -0x1b(%ebp),%eax
0846f005 +0x37:  mov    %edx,0x8(%esp)
0846f009 +0x3b:  mov    %eax,0x4(%esp)
0846f00d +0x3f:  mov    0x8(%ebp),%eax
0846f010 +0x42:  mov    %eax,(%esp)
0846f013 +0x45:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846f018 +0x4a:  leave
0846f019 +0x4b:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildBoardOpen @ 0x846efce

/* CGuildServerProxy::SendGuildBoardOpen(unsigned int, unsigned int, char) */

void __thiscall
CGuildServerProxy::SendGuildBoardOpen
          (CGuildServerProxy *this,uint param_1,uint param_2,char param_3)

{
  Packet_Guild_Request_Guild_Board_Open local_1f [2];
  ushort local_1d;
  undefined1 local_15;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Request_Guild_Board_Open::Packet_Guild_Request_Guild_Board_Open(local_1f);
  local_10 = param_1;
  local_14 = param_2;
  local_15 = param_3 != '\0';
  SendTcpPacket(this,(char *)local_1f,(uint)local_1d);
  return;
}
```
