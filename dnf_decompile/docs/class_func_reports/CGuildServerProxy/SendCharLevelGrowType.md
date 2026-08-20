# SendCharLevelGrowType

`_ZN17CGuildServerProxy21SendCharLevelGrowTypeEjjss`

`CGuildServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846da9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846da9a  _ZN17CGuildServerProxy21SendCharLevelGrowTypeEjjss
#           CGuildServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short)
# range [0x0846da9a, 0x0846daf3]
0846da9a +0x00:  push   %ebp
0846da9b +0x01:  mov    %esp,%ebp
0846da9d +0x03:  sub    $0x48,%esp
0846daa0 +0x06:  mov    0x14(%ebp),%edx
0846daa3 +0x09:  mov    0x18(%ebp),%eax
0846daa6 +0x0c:  mov    %dx,-0x2c(%ebp)
0846daaa +0x10:  mov    %ax,-0x30(%ebp)
0846daae +0x14:  lea    -0x1a(%ebp),%eax
0846dab1 +0x17:  mov    %eax,(%esp)
0846dab4 +0x1a:  call   0846f2b0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x80>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x80
0846dab9 +0x1f:  mov    0xc(%ebp),%eax
0846dabc +0x22:  mov    %eax,-0x10(%ebp)
0846dabf +0x25:  mov    0x10(%ebp),%eax
0846dac2 +0x28:  mov    %al,-0xc(%ebp)
0846dac5 +0x2b:  movzwl -0x2c(%ebp),%eax
0846dac9 +0x2f:  mov    %ax,-0xb(%ebp)
0846dacd +0x33:  movzwl -0x30(%ebp),%eax
0846dad1 +0x37:  mov    %al,-0x9(%ebp)
0846dad4 +0x3a:  movzwl -0x18(%ebp),%eax
0846dad8 +0x3e:  movzwl %ax,%edx
0846dadb +0x41:  lea    -0x1a(%ebp),%eax
0846dade +0x44:  mov    %edx,0x8(%esp)
0846dae2 +0x48:  mov    %eax,0x4(%esp)
0846dae6 +0x4c:  mov    0x8(%ebp),%eax
0846dae9 +0x4f:  mov    %eax,(%esp)
0846daec +0x52:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846daf1 +0x57:  leave
0846daf2 +0x58:  ret
0846daf3 +0x59:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendCharLevelGrowType @ 0x846da9a

/* CGuildServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short) */

void __thiscall
CGuildServerProxy::SendCharLevelGrowType
          (CGuildServerProxy *this,uint param_1,uint param_2,short param_3,short param_4)

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
