# SendGuildLevelup

`_ZN17CGuildServerProxy16SendGuildLevelupEijjj`

`CGuildServerProxy::SendGuildLevelup(int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846dd8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846dd8a  _ZN17CGuildServerProxy16SendGuildLevelupEijjj
#           CGuildServerProxy::SendGuildLevelup(int, unsigned int, unsigned int, unsigned int)
# range [0x0846dd8a, 0x0846ddd1]
0846dd8a +0x00:  push   %ebp
0846dd8b +0x01:  mov    %esp,%ebp
0846dd8d +0x03:  sub    $0x38,%esp
0846dd90 +0x06:  lea    -0x23(%ebp),%eax
0846dd93 +0x09:  mov    %eax,(%esp)
0846dd96 +0x0c:  call   0846f420 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x1f0>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x1f0
0846dd9b +0x11:  mov    0xc(%ebp),%eax
0846dd9e +0x14:  mov    %eax,-0x19(%ebp)
0846dda1 +0x17:  mov    0x10(%ebp),%eax
0846dda4 +0x1a:  mov    %eax,-0x15(%ebp)
0846dda7 +0x1d:  mov    0x14(%ebp),%eax
0846ddaa +0x20:  mov    %eax,-0x11(%ebp)
0846ddad +0x23:  mov    0x18(%ebp),%eax
0846ddb0 +0x26:  mov    %eax,-0xc(%ebp)
0846ddb3 +0x29:  movzwl -0x21(%ebp),%eax
0846ddb7 +0x2d:  movzwl %ax,%edx
0846ddba +0x30:  lea    -0x23(%ebp),%eax
0846ddbd +0x33:  mov    %edx,0x8(%esp)
0846ddc1 +0x37:  mov    %eax,0x4(%esp)
0846ddc5 +0x3b:  mov    0x8(%ebp),%eax
0846ddc8 +0x3e:  mov    %eax,(%esp)
0846ddcb +0x41:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846ddd0 +0x46:  leave
0846ddd1 +0x47:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildLevelup @ 0x846dd8a

/* CGuildServerProxy::SendGuildLevelup(int, unsigned int, unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::SendGuildLevelup
          (CGuildServerProxy *this,int param_1,uint param_2,uint param_3,uint param_4)

{
  Packet_Monitor_Call_Guild_Level_Up local_27 [2];
  ushort local_25;
  int local_1d;
  uint local_19;
  uint local_15;
  uint local_10;
  
  Packet_Monitor_Call_Guild_Level_Up::Packet_Monitor_Call_Guild_Level_Up(local_27);
  local_1d = param_1;
  local_19 = param_2;
  local_15 = param_3;
  local_10 = param_4;
  SendTcpPacket(this,(char *)local_27,(uint)local_25);
  return;
}
```
