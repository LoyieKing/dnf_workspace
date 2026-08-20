# SendCreateGuildAgit

`_ZN17CGuildServerProxy19SendCreateGuildAgitEjjjj`

`CGuildServerProxy::SendCreateGuildAgit(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ed78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ed78  _ZN17CGuildServerProxy19SendCreateGuildAgitEjjjj
#           CGuildServerProxy::SendCreateGuildAgit(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x0846ed78, 0x0846edbf]
0846ed78 +0x00:  push   %ebp
0846ed79 +0x01:  mov    %esp,%ebp
0846ed7b +0x03:  sub    $0x38,%esp
0846ed7e +0x06:  lea    -0x22(%ebp),%eax
0846ed81 +0x09:  mov    %eax,(%esp)
0846ed84 +0x0c:  call   0846f600 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x3d0>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x3d0
0846ed89 +0x11:  mov    0xc(%ebp),%eax
0846ed8c +0x14:  mov    %eax,-0x18(%ebp)
0846ed8f +0x17:  mov    0x10(%ebp),%eax
0846ed92 +0x1a:  mov    %eax,-0x14(%ebp)
0846ed95 +0x1d:  mov    0x14(%ebp),%eax
0846ed98 +0x20:  mov    %eax,-0x10(%ebp)
0846ed9b +0x23:  mov    0x18(%ebp),%eax
0846ed9e +0x26:  mov    %eax,-0xc(%ebp)
0846eda1 +0x29:  movzwl -0x20(%ebp),%eax
0846eda5 +0x2d:  movzwl %ax,%edx
0846eda8 +0x30:  lea    -0x22(%ebp),%eax
0846edab +0x33:  mov    %edx,0x8(%esp)
0846edaf +0x37:  mov    %eax,0x4(%esp)
0846edb3 +0x3b:  mov    0x8(%ebp),%eax
0846edb6 +0x3e:  mov    %eax,(%esp)
0846edb9 +0x41:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846edbe +0x46:  leave
0846edbf +0x47:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendCreateGuildAgit @ 0x846ed78

/* CGuildServerProxy::SendCreateGuildAgit(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendCreateGuildAgit
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  Packet_Guild_Create_Guild_Agit local_26 [2];
  ushort local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Create_Guild_Agit::Packet_Guild_Create_Guild_Agit(local_26);
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  SendTcpPacket(this,(char *)local_26,(uint)local_24);
  return;
}
```
