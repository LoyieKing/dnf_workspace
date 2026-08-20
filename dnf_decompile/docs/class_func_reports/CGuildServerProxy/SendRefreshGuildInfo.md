# SendRefreshGuildInfo

`_ZN17CGuildServerProxy20SendRefreshGuildInfoEjj`

`CGuildServerProxy::SendRefreshGuildInfo(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846f16c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846f16c  _ZN17CGuildServerProxy20SendRefreshGuildInfoEjj
#           CGuildServerProxy::SendRefreshGuildInfo(unsigned int, unsigned int)
# range [0x0846f16c, 0x0846f1a7]
0846f16c +0x00:  push   %ebp
0846f16d +0x01:  mov    %esp,%ebp
0846f16f +0x03:  sub    $0x38,%esp
0846f172 +0x06:  lea    -0x1a(%ebp),%eax
0846f175 +0x09:  mov    %eax,(%esp)
0846f178 +0x0c:  call   0846fb68 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x938>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x938
0846f17d +0x11:  mov    0xc(%ebp),%eax
0846f180 +0x14:  mov    %eax,-0x10(%ebp)
0846f183 +0x17:  mov    0x10(%ebp),%eax
0846f186 +0x1a:  mov    %eax,-0xc(%ebp)
0846f189 +0x1d:  movzwl -0x18(%ebp),%eax
0846f18d +0x21:  movzwl %ax,%edx
0846f190 +0x24:  lea    -0x1a(%ebp),%eax
0846f193 +0x27:  mov    %edx,0x8(%esp)
0846f197 +0x2b:  mov    %eax,0x4(%esp)
0846f19b +0x2f:  mov    0x8(%ebp),%eax
0846f19e +0x32:  mov    %eax,(%esp)
0846f1a1 +0x35:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846f1a6 +0x3a:  leave
0846f1a7 +0x3b:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendRefreshGuildInfo @ 0x846f16c

/* CGuildServerProxy::SendRefreshGuildInfo(unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendRefreshGuildInfo(CGuildServerProxy *this,uint param_1,uint param_2)

{
  Packet_Refresh_Guild_Info local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Refresh_Guild_Info::Packet_Refresh_Guild_Info(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendTcpPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}
```
