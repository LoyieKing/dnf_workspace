# SendPowerWarProcessInfo

`_ZN17CGuildServerProxy23SendPowerWarProcessInfoEj`

`CGuildServerProxy::SendPowerWarProcessInfo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846df1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846df1c  _ZN17CGuildServerProxy23SendPowerWarProcessInfoEj
#           CGuildServerProxy::SendPowerWarProcessInfo(unsigned int)
# range [0x0846df1c, 0x0846df51]
0846df1c +0x00:  push   %ebp
0846df1d +0x01:  mov    %esp,%ebp
0846df1f +0x03:  sub    $0x28,%esp
0846df22 +0x06:  lea    -0x16(%ebp),%eax
0846df25 +0x09:  mov    %eax,(%esp)
0846df28 +0x0c:  call   0846f684 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x454>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x454
0846df2d +0x11:  mov    0xc(%ebp),%eax
0846df30 +0x14:  mov    %eax,-0xc(%ebp)
0846df33 +0x17:  movzwl -0x14(%ebp),%eax
0846df37 +0x1b:  movzwl %ax,%edx
0846df3a +0x1e:  lea    -0x16(%ebp),%eax
0846df3d +0x21:  mov    %edx,0x8(%esp)
0846df41 +0x25:  mov    %eax,0x4(%esp)
0846df45 +0x29:  mov    0x8(%ebp),%eax
0846df48 +0x2c:  mov    %eax,(%esp)
0846df4b +0x2f:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846df50 +0x34:  leave
0846df51 +0x35:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendPowerWarProcessInfo @ 0x846df1c

/* CGuildServerProxy::SendPowerWarProcessInfo(unsigned int) */

void __thiscall CGuildServerProxy::SendPowerWarProcessInfo(CGuildServerProxy *this,uint param_1)

{
  Packet_Guild_Power_War_Process_Info local_1a [2];
  ushort local_18;
  uint local_10;
  
  Packet_Guild_Power_War_Process_Info::Packet_Guild_Power_War_Process_Info(local_1a);
  local_10 = param_1;
  SendPacket(this,(char *)local_1a,(uint)local_18);
  return;
}
```
