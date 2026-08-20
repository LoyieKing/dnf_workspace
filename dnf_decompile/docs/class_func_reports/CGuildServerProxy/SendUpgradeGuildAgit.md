# SendUpgradeGuildAgit

`_ZN17CGuildServerProxy20SendUpgradeGuildAgitEjjjj`

`CGuildServerProxy::SendUpgradeGuildAgit(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846edfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846edfc  _ZN17CGuildServerProxy20SendUpgradeGuildAgitEjjjj
#           CGuildServerProxy::SendUpgradeGuildAgit(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x0846edfc, 0x0846ee43]
0846edfc +0x00:  push   %ebp
0846edfd +0x01:  mov    %esp,%ebp
0846edff +0x03:  sub    $0x38,%esp
0846ee02 +0x06:  lea    -0x22(%ebp),%eax
0846ee05 +0x09:  mov    %eax,(%esp)
0846ee08 +0x0c:  call   0846f6b2 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x482>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x482
0846ee0d +0x11:  mov    0xc(%ebp),%eax
0846ee10 +0x14:  mov    %eax,-0x18(%ebp)
0846ee13 +0x17:  mov    0x10(%ebp),%eax
0846ee16 +0x1a:  mov    %eax,-0x14(%ebp)
0846ee19 +0x1d:  mov    0x14(%ebp),%eax
0846ee1c +0x20:  mov    %eax,-0x10(%ebp)
0846ee1f +0x23:  mov    0x18(%ebp),%eax
0846ee22 +0x26:  mov    %eax,-0xc(%ebp)
0846ee25 +0x29:  movzwl -0x20(%ebp),%eax
0846ee29 +0x2d:  movzwl %ax,%edx
0846ee2c +0x30:  lea    -0x22(%ebp),%eax
0846ee2f +0x33:  mov    %edx,0x8(%esp)
0846ee33 +0x37:  mov    %eax,0x4(%esp)
0846ee37 +0x3b:  mov    0x8(%ebp),%eax
0846ee3a +0x3e:  mov    %eax,(%esp)
0846ee3d +0x41:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846ee42 +0x46:  leave
0846ee43 +0x47:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendUpgradeGuildAgit @ 0x846edfc

/* CGuildServerProxy::SendUpgradeGuildAgit(unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
CGuildServerProxy::SendUpgradeGuildAgit
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  Packet_Guild_Upgrade_Guild_Agit local_26 [2];
  ushort local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_Guild_Upgrade_Guild_Agit::Packet_Guild_Upgrade_Guild_Agit(local_26);
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  SendTcpPacket(this,(char *)local_26,(uint)local_24);
  return;
}
```
