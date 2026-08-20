# SendPowerWarCfg

`_ZN17CGuildServerProxy15SendPowerWarCfgEtiiii`

`CGuildServerProxy::SendPowerWarCfg(unsigned short, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846dfce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846dfce  _ZN17CGuildServerProxy15SendPowerWarCfgEtiiii
#           CGuildServerProxy::SendPowerWarCfg(unsigned short, int, int, int, int)
# range [0x0846dfce, 0x0846e025]
0846dfce +0x00:  push   %ebp
0846dfcf +0x01:  mov    %esp,%ebp
0846dfd1 +0x03:  sub    $0x48,%esp
0846dfd4 +0x06:  mov    0xc(%ebp),%eax
0846dfd7 +0x09:  mov    %ax,-0x2c(%ebp)
0846dfdb +0x0d:  lea    -0x24(%ebp),%eax
0846dfde +0x10:  mov    %eax,(%esp)
0846dfe1 +0x13:  call   0846f7ca <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x59a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x59a
0846dfe6 +0x18:  movzwl -0x2c(%ebp),%eax
0846dfea +0x1c:  mov    %ax,-0x1a(%ebp)
0846dfee +0x20:  mov    0x10(%ebp),%eax
0846dff1 +0x23:  mov    %eax,-0x18(%ebp)
0846dff4 +0x26:  mov    0x14(%ebp),%eax
0846dff7 +0x29:  mov    %eax,-0x14(%ebp)
0846dffa +0x2c:  mov    0x18(%ebp),%eax
0846dffd +0x2f:  mov    %eax,-0x10(%ebp)
0846e000 +0x32:  mov    0x1c(%ebp),%eax
0846e003 +0x35:  mov    %eax,-0xc(%ebp)
0846e006 +0x38:  movzwl -0x22(%ebp),%eax
0846e00a +0x3c:  movzwl %ax,%edx
0846e00d +0x3f:  lea    -0x24(%ebp),%eax
0846e010 +0x42:  mov    %edx,0x8(%esp)
0846e014 +0x46:  mov    %eax,0x4(%esp)
0846e018 +0x4a:  mov    0x8(%ebp),%eax
0846e01b +0x4d:  mov    %eax,(%esp)
0846e01e +0x50:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e023 +0x55:  leave
0846e024 +0x56:  ret
0846e025 +0x57:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendPowerWarCfg @ 0x846dfce

/* CGuildServerProxy::SendPowerWarCfg(unsigned short, int, int, int, int) */

void __thiscall
CGuildServerProxy::SendPowerWarCfg
          (CGuildServerProxy *this,ushort param_1,int param_2,int param_3,int param_4,int param_5)

{
  Packet_Notice_Power_War_CFG local_28 [2];
  ushort local_26;
  ushort local_1e;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  Packet_Notice_Power_War_CFG::Packet_Notice_Power_War_CFG(local_28);
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  local_10 = param_5;
  local_1e = param_1;
  SendTcpPacket(this,(char *)local_28,(uint)local_26);
  return;
}
```
