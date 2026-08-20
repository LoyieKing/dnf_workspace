# SendApplyOriginalPowerSide

`_ZN17CGuildServerProxy26SendApplyOriginalPowerSideEjjh`

`CGuildServerProxy::SendApplyOriginalPowerSide(unsigned int, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846eeda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846eeda  _ZN17CGuildServerProxy26SendApplyOriginalPowerSideEjjh
#           CGuildServerProxy::SendApplyOriginalPowerSide(unsigned int, unsigned int, unsigned char)
# range [0x0846eeda, 0x0846ef23]
0846eeda +0x00:  push   %ebp
0846eedb +0x01:  mov    %esp,%ebp
0846eedd +0x03:  sub    $0x48,%esp
0846eee0 +0x06:  mov    0x14(%ebp),%eax
0846eee3 +0x09:  mov    %al,-0x2c(%ebp)
0846eee6 +0x0c:  lea    -0x1b(%ebp),%eax
0846eee9 +0x0f:  mov    %eax,(%esp)
0846eeec +0x12:  call   0846f78c <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x55c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x55c
0846eef1 +0x17:  mov    0xc(%ebp),%eax
0846eef4 +0x1a:  mov    %eax,-0x11(%ebp)
0846eef7 +0x1d:  mov    0x10(%ebp),%eax
0846eefa +0x20:  mov    %eax,-0xd(%ebp)
0846eefd +0x23:  movzbl -0x2c(%ebp),%eax
0846ef01 +0x27:  mov    %al,-0x9(%ebp)
0846ef04 +0x2a:  movzwl -0x19(%ebp),%eax
0846ef08 +0x2e:  movzwl %ax,%edx
0846ef0b +0x31:  lea    -0x1b(%ebp),%eax
0846ef0e +0x34:  mov    %edx,0x8(%esp)
0846ef12 +0x38:  mov    %eax,0x4(%esp)
0846ef16 +0x3c:  mov    0x8(%ebp),%eax
0846ef19 +0x3f:  mov    %eax,(%esp)
0846ef1c +0x42:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846ef21 +0x47:  leave
0846ef22 +0x48:  ret
0846ef23 +0x49:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendApplyOriginalPowerSide @ 0x846eeda

/* CGuildServerProxy::SendApplyOriginalPowerSide(unsigned int, unsigned int, unsigned char) */

void __thiscall
CGuildServerProxy::SendApplyOriginalPowerSide
          (CGuildServerProxy *this,uint param_1,uint param_2,uchar param_3)

{
  Packet_Guild_Apply_Origial_Power_Side local_1f [2];
  ushort local_1d;
  uint local_15;
  uint local_11;
  uchar local_d;
  
  Packet_Guild_Apply_Origial_Power_Side::Packet_Guild_Apply_Origial_Power_Side(local_1f);
  local_15 = param_1;
  local_11 = param_2;
  local_d = param_3;
  SendTcpPacket(this,(char *)local_1f,(uint)local_1d);
  return;
}
```
