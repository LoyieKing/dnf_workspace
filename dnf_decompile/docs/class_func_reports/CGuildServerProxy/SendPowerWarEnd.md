# SendPowerWarEnd

`_ZN17CGuildServerProxy15SendPowerWarEndEj`

`CGuildServerProxy::SendPowerWarEnd(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846dece` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846dece  _ZN17CGuildServerProxy15SendPowerWarEndEj
#           CGuildServerProxy::SendPowerWarEnd(unsigned int)
# range [0x0846dece, 0x0846df1b]
0846dece +0x00:  push   %ebp
0846decf +0x01:  mov    %esp,%ebp
0846ded1 +0x03:  sub    $0x28,%esp
0846ded4 +0x06:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
0846ded9 +0x0b:  mov    0xc(%ebp),%edx
0846dedc +0x0e:  mov    %edx,0x4(%esp)
0846dee0 +0x12:  mov    %eax,(%esp)
0846dee3 +0x15:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
0846dee8 +0x1a:  xor    $0x1,%eax
0846deeb +0x1d:  test   %al,%al
0846deed +0x1f:  jne    0846df19 <+0x4b>
0846deef +0x21:  lea    -0x12(%ebp),%eax
0846def2 +0x24:  mov    %eax,(%esp)
0846def5 +0x27:  call   0846f85a <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x62a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x62a
0846defa +0x2c:  movzwl -0x10(%ebp),%eax
0846defe +0x30:  movzwl %ax,%edx
0846df01 +0x33:  lea    -0x12(%ebp),%eax
0846df04 +0x36:  mov    %edx,0x8(%esp)
0846df08 +0x3a:  mov    %eax,0x4(%esp)
0846df0c +0x3e:  mov    0x8(%ebp),%eax
0846df0f +0x41:  mov    %eax,(%esp)
0846df12 +0x44:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846df17 +0x49:  jmp    0846df1a <+0x4c>
0846df19 +0x4b:  nop
0846df1a +0x4c:  leave
0846df1b +0x4d:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendPowerWarEnd @ 0x846dece

/* CGuildServerProxy::SendPowerWarEnd(unsigned int) */

void __thiscall CGuildServerProxy::SendPowerWarEnd(CGuildServerProxy *this,uint param_1)

{
  char cVar1;
  Packet_GM_PowerWar_End local_16 [2];
  ushort local_14;
  
  cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,param_1);
  if (cVar1 == '\x01') {
    Packet_GM_PowerWar_End::Packet_GM_PowerWar_End(local_16);
    SendPacket(this,(char *)local_16,(uint)local_14);
  }
  return;
}
```
