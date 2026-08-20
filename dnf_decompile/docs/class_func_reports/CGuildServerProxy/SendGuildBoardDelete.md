# SendGuildBoardDelete

`_ZN17CGuildServerProxy20SendGuildBoardDeleteEjjj`

`CGuildServerProxy::SendGuildBoardDelete(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846f0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846f0b0  _ZN17CGuildServerProxy20SendGuildBoardDeleteEjjj
#           CGuildServerProxy::SendGuildBoardDelete(unsigned int, unsigned int, unsigned int)
# range [0x0846f0b0, 0x0846f0f1]
0846f0b0 +0x00:  push   %ebp
0846f0b1 +0x01:  mov    %esp,%ebp
0846f0b3 +0x03:  sub    $0x38,%esp
0846f0b6 +0x06:  lea    -0x1e(%ebp),%eax
0846f0b9 +0x09:  mov    %eax,(%esp)
0846f0bc +0x0c:  call   0846fc4c <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa1c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa1c
0846f0c1 +0x11:  mov    0x10(%ebp),%eax
0846f0c4 +0x14:  mov    %eax,-0xc(%ebp)
0846f0c7 +0x17:  mov    0x14(%ebp),%eax
0846f0ca +0x1a:  mov    %eax,-0x10(%ebp)
0846f0cd +0x1d:  mov    0xc(%ebp),%eax
0846f0d0 +0x20:  mov    %eax,-0x14(%ebp)
0846f0d3 +0x23:  movzwl -0x1c(%ebp),%eax
0846f0d7 +0x27:  movzwl %ax,%edx
0846f0da +0x2a:  lea    -0x1e(%ebp),%eax
0846f0dd +0x2d:  mov    %edx,0x8(%esp)
0846f0e1 +0x31:  mov    %eax,0x4(%esp)
0846f0e5 +0x35:  mov    0x8(%ebp),%eax
0846f0e8 +0x38:  mov    %eax,(%esp)
0846f0eb +0x3b:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846f0f0 +0x40:  leave
0846f0f1 +0x41:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildBoardDelete @ 0x846f0b0

/* CGuildServerProxy::SendGuildBoardDelete(unsigned int, unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendGuildBoardDelete
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3)

{
  Packet_Guild_Request_Guild_Board_Delete local_22 [2];
  ushort local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Request_Guild_Board_Delete::Packet_Guild_Request_Guild_Board_Delete(local_22);
  local_10 = param_2;
  local_14 = param_3;
  local_18 = param_1;
  SendTcpPacket(this,(char *)local_22,(uint)local_20);
  return;
}
```
