# SendDeleteGuildAgit

`_ZN17CGuildServerProxy19SendDeleteGuildAgitEjj`

`CGuildServerProxy::SendDeleteGuildAgit(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846edc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846edc0  _ZN17CGuildServerProxy19SendDeleteGuildAgitEjj
#           CGuildServerProxy::SendDeleteGuildAgit(unsigned int, unsigned int)
# range [0x0846edc0, 0x0846edfb]
0846edc0 +0x00:  push   %ebp
0846edc1 +0x01:  mov    %esp,%ebp
0846edc3 +0x03:  sub    $0x38,%esp
0846edc6 +0x06:  lea    -0x1a(%ebp),%eax
0846edc9 +0x09:  mov    %eax,(%esp)
0846edcc +0x0c:  call   0846f64c <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x41c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x41c
0846edd1 +0x11:  mov    0xc(%ebp),%eax
0846edd4 +0x14:  mov    %eax,-0x10(%ebp)
0846edd7 +0x17:  mov    0x10(%ebp),%eax
0846edda +0x1a:  mov    %eax,-0xc(%ebp)
0846eddd +0x1d:  movzwl -0x18(%ebp),%eax
0846ede1 +0x21:  movzwl %ax,%edx
0846ede4 +0x24:  lea    -0x1a(%ebp),%eax
0846ede7 +0x27:  mov    %edx,0x8(%esp)
0846edeb +0x2b:  mov    %eax,0x4(%esp)
0846edef +0x2f:  mov    0x8(%ebp),%eax
0846edf2 +0x32:  mov    %eax,(%esp)
0846edf5 +0x35:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846edfa +0x3a:  leave
0846edfb +0x3b:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendDeleteGuildAgit @ 0x846edc0

/* CGuildServerProxy::SendDeleteGuildAgit(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendDeleteGuildAgit(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Guild_Delete_Guild_Agit local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Delete_Guild_Agit::Packet_Guild_Delete_Guild_Agit(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendTcpPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}
```
