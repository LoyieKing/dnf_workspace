# SendCharLevelGrowType

`_ZN19CMonitorServerProxy21SendCharLevelGrowTypeEjjss`

`CMonitorServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470c04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470c04  _ZN19CMonitorServerProxy21SendCharLevelGrowTypeEjjss
#           CMonitorServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short)
# range [0x08470c04, 0x08470c5d]
08470c04 +0x00:  push   %ebp
08470c05 +0x01:  mov    %esp,%ebp
08470c07 +0x03:  sub    $0x48,%esp
08470c0a +0x06:  mov    0x14(%ebp),%edx
08470c0d +0x09:  mov    0x18(%ebp),%eax
08470c10 +0x0c:  mov    %dx,-0x2c(%ebp)
08470c14 +0x10:  mov    %ax,-0x30(%ebp)
08470c18 +0x14:  lea    -0x1a(%ebp),%eax
08470c1b +0x17:  mov    %eax,(%esp)
08470c1e +0x1a:  call   0846f2b0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x80>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x80
08470c23 +0x1f:  mov    0xc(%ebp),%eax
08470c26 +0x22:  mov    %eax,-0x10(%ebp)
08470c29 +0x25:  mov    0x10(%ebp),%eax
08470c2c +0x28:  mov    %al,-0xc(%ebp)
08470c2f +0x2b:  movzwl -0x2c(%ebp),%eax
08470c33 +0x2f:  mov    %ax,-0xb(%ebp)
08470c37 +0x33:  movzwl -0x30(%ebp),%eax
08470c3b +0x37:  mov    %al,-0x9(%ebp)
08470c3e +0x3a:  movzwl -0x18(%ebp),%eax
08470c42 +0x3e:  movzwl %ax,%edx
08470c45 +0x41:  lea    -0x1a(%ebp),%eax
08470c48 +0x44:  mov    %edx,0x8(%esp)
08470c4c +0x48:  mov    %eax,0x4(%esp)
08470c50 +0x4c:  mov    0x8(%ebp),%eax
08470c53 +0x4f:  mov    %eax,(%esp)
08470c56 +0x52:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08470c5b +0x57:  leave
08470c5c +0x58:  ret
08470c5d +0x59:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::SendCharLevelGrowType @ 0x8470c04

/* CMonitorServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short) */

void __thiscall
CMonitorServerProxy::SendCharLevelGrowType
          (CMonitorServerProxy *this,uint param_1,uint param_2,short param_3,short param_4)

{
  Packet_Monitor_Char_Changable_Info local_1e [2];
  ushort local_1c;
  uint local_14;
  undefined1 local_10;
  short local_f;
  undefined1 local_d;
  
  Packet_Monitor_Char_Changable_Info::Packet_Monitor_Char_Changable_Info(local_1e);
  local_14 = param_1;
  local_10 = (undefined1)param_2;
  local_d = (undefined1)param_4;
  local_f = param_3;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}
```
