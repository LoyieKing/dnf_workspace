# SendPowerWarStart

`_ZN17CGuildServerProxy17SendPowerWarStartEj`

`CGuildServerProxy::SendPowerWarStart(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846de80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846de80  _ZN17CGuildServerProxy17SendPowerWarStartEj
#           CGuildServerProxy::SendPowerWarStart(unsigned int)
# range [0x0846de80, 0x0846decd]
0846de80 +0x00:  push   %ebp
0846de81 +0x01:  mov    %esp,%ebp
0846de83 +0x03:  sub    $0x28,%esp
0846de86 +0x06:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
0846de8b +0x0b:  mov    0xc(%ebp),%edx
0846de8e +0x0e:  mov    %edx,0x4(%esp)
0846de92 +0x12:  mov    %eax,(%esp)
0846de95 +0x15:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
0846de9a +0x1a:  xor    $0x1,%eax
0846de9d +0x1d:  test   %al,%al
0846de9f +0x1f:  jne    0846decb <+0x4b>
0846dea1 +0x21:  lea    -0x12(%ebp),%eax
0846dea4 +0x24:  mov    %eax,(%esp)
0846dea7 +0x27:  call   0846f836 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x606>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x606
0846deac +0x2c:  movzwl -0x10(%ebp),%eax
0846deb0 +0x30:  movzwl %ax,%edx
0846deb3 +0x33:  lea    -0x12(%ebp),%eax
0846deb6 +0x36:  mov    %edx,0x8(%esp)
0846deba +0x3a:  mov    %eax,0x4(%esp)
0846debe +0x3e:  mov    0x8(%ebp),%eax
0846dec1 +0x41:  mov    %eax,(%esp)
0846dec4 +0x44:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846dec9 +0x49:  jmp    0846decc <+0x4c>
0846decb +0x4b:  nop
0846decc +0x4c:  leave
0846decd +0x4d:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendPowerWarStart @ 0x846de80

/* CGuildServerProxy::SendPowerWarStart(unsigned int) */

void __thiscall CGuildServerProxy::SendPowerWarStart(CGuildServerProxy *this,uint param_1)

{
  char cVar1;
  Packet_GM_PowerWar_Start local_16 [2];
  ushort local_14;
  
  cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,param_1);
  if (cVar1 == '\x01') {
    Packet_GM_PowerWar_Start::Packet_GM_PowerWar_Start(local_16);
    SendPacket(this,(char *)local_16,(uint)local_14);
  }
  return;
}
```
