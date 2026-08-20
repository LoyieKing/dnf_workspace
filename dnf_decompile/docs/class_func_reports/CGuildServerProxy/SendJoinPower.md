# SendJoinPower

`_ZN17CGuildServerProxy13SendJoinPowerEjjh`

`CGuildServerProxy::SendJoinPower(unsigned int, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e4b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e4b6  _ZN17CGuildServerProxy13SendJoinPowerEjjh
#           CGuildServerProxy::SendJoinPower(unsigned int, unsigned int, unsigned char)
# range [0x0846e4b6, 0x0846e4ff]
0846e4b6 +0x00:  push   %ebp
0846e4b7 +0x01:  mov    %esp,%ebp
0846e4b9 +0x03:  sub    $0x48,%esp
0846e4bc +0x06:  mov    0x14(%ebp),%eax
0846e4bf +0x09:  mov    %al,-0x2c(%ebp)
0846e4c2 +0x0c:  lea    -0x1b(%ebp),%eax
0846e4c5 +0x0f:  mov    %eax,(%esp)
0846e4c8 +0x12:  call   0846f7ee <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x5be>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x5be
0846e4cd +0x17:  mov    0xc(%ebp),%eax
0846e4d0 +0x1a:  mov    %eax,-0x11(%ebp)
0846e4d3 +0x1d:  mov    0x10(%ebp),%eax
0846e4d6 +0x20:  mov    %eax,-0xd(%ebp)
0846e4d9 +0x23:  movzbl -0x2c(%ebp),%eax
0846e4dd +0x27:  mov    %al,-0x9(%ebp)
0846e4e0 +0x2a:  movzwl -0x19(%ebp),%eax
0846e4e4 +0x2e:  movzwl %ax,%edx
0846e4e7 +0x31:  lea    -0x1b(%ebp),%eax
0846e4ea +0x34:  mov    %edx,0x8(%esp)
0846e4ee +0x38:  mov    %eax,0x4(%esp)
0846e4f2 +0x3c:  mov    0x8(%ebp),%eax
0846e4f5 +0x3f:  mov    %eax,(%esp)
0846e4f8 +0x42:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e4fd +0x47:  leave
0846e4fe +0x48:  ret
0846e4ff +0x49:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendJoinPower @ 0x846e4b6

/* CGuildServerProxy::SendJoinPower(unsigned int, unsigned int, unsigned char) */

void __thiscall
CGuildServerProxy::SendJoinPower(CGuildServerProxy *this,uint param_1,uint param_2,uchar param_3)

{
  Packet_Request_Join_Power local_1f [2];
  ushort local_1d;
  uint local_15;
  uint local_11;
  uchar local_d;
  
  Packet_Request_Join_Power::Packet_Request_Join_Power(local_1f);
  local_15 = param_1;
  local_11 = param_2;
  local_d = param_3;
  SendTcpPacket(this,(char *)local_1f,(uint)local_1d);
  return;
}
```
