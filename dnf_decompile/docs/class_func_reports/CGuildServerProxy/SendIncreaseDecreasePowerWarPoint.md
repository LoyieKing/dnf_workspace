# SendIncreaseDecreasePowerWarPoint

`_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji`

`CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ed36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ed36  _ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji
#           CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(unsigned int, unsigned int, int)
# range [0x0846ed36, 0x0846ed77]
0846ed36 +0x00:  push   %ebp
0846ed37 +0x01:  mov    %esp,%ebp
0846ed39 +0x03:  sub    $0x38,%esp
0846ed3c +0x06:  lea    -0x1e(%ebp),%eax
0846ed3f +0x09:  mov    %eax,(%esp)
0846ed42 +0x0c:  call   0846f5be <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x38e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x38e
0846ed47 +0x11:  mov    0xc(%ebp),%eax
0846ed4a +0x14:  mov    %eax,-0x14(%ebp)
0846ed4d +0x17:  mov    0x10(%ebp),%eax
0846ed50 +0x1a:  mov    %eax,-0x10(%ebp)
0846ed53 +0x1d:  mov    0x14(%ebp),%eax
0846ed56 +0x20:  mov    %eax,-0xc(%ebp)
0846ed59 +0x23:  movzwl -0x1c(%ebp),%eax
0846ed5d +0x27:  movzwl %ax,%edx
0846ed60 +0x2a:  lea    -0x1e(%ebp),%eax
0846ed63 +0x2d:  mov    %edx,0x8(%esp)
0846ed67 +0x31:  mov    %eax,0x4(%esp)
0846ed6b +0x35:  mov    0x8(%ebp),%eax
0846ed6e +0x38:  mov    %eax,(%esp)
0846ed71 +0x3b:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846ed76 +0x40:  leave
0846ed77 +0x41:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendIncreaseDecreasePowerWarPoint @ 0x846ed36

/* CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(unsigned int, unsigned int, int) */

void __thiscall
CGuildServerProxy::SendIncreaseDecreasePowerWarPoint
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3)

{
  Packet_Guild_Increase_Decrease_Power_War_Point local_22 [2];
  ushort local_20;
  uint local_18;
  uint local_14;
  int local_10;
  
  Packet_Guild_Increase_Decrease_Power_War_Point::Packet_Guild_Increase_Decrease_Power_War_Point
            (local_22);
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  SendTcpPacket(this,(char *)local_22,(uint)local_20);
  return;
}
```
