# SendIncreaseGuildExp

`_ZN17CGuildServerProxy20SendIncreaseGuildExpEjjjc`

`CGuildServerProxy::SendIncreaseGuildExp(unsigned int, unsigned int, unsigned int, char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ece2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ece2  _ZN17CGuildServerProxy20SendIncreaseGuildExpEjjjc
#           CGuildServerProxy::SendIncreaseGuildExp(unsigned int, unsigned int, unsigned int, char)
# range [0x0846ece2, 0x0846ed35]
0846ece2 +0x00:  push   %ebp
0846ece3 +0x01:  mov    %esp,%ebp
0846ece5 +0x03:  sub    $0x48,%esp
0846ece8 +0x06:  mov    0x18(%ebp),%eax
0846eceb +0x09:  mov    %al,-0x2c(%ebp)
0846ecee +0x0c:  lea    -0x24(%ebp),%eax
0846ecf1 +0x0f:  mov    %eax,(%esp)
0846ecf4 +0x12:  call   0846f376 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x146>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x146
0846ecf9 +0x17:  mov    0x10(%ebp),%eax
0846ecfc +0x1a:  mov    %eax,-0x1a(%ebp)
0846ecff +0x1d:  mov    0xc(%ebp),%eax
0846ed02 +0x20:  mov    %eax,-0x16(%ebp)
0846ed05 +0x23:  mov    0x14(%ebp),%eax
0846ed08 +0x26:  mov    %eax,-0x12(%ebp)
0846ed0b +0x29:  movb   $0x1,-0xd(%ebp)
0846ed0f +0x2d:  movzbl -0x2c(%ebp),%eax
0846ed13 +0x31:  mov    %al,-0xe(%ebp)
0846ed16 +0x34:  movzwl -0x22(%ebp),%eax
0846ed1a +0x38:  movzwl %ax,%edx
0846ed1d +0x3b:  lea    -0x24(%ebp),%eax
0846ed20 +0x3e:  mov    %edx,0x8(%esp)
0846ed24 +0x42:  mov    %eax,0x4(%esp)
0846ed28 +0x46:  mov    0x8(%ebp),%eax
0846ed2b +0x49:  mov    %eax,(%esp)
0846ed2e +0x4c:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846ed33 +0x51:  leave
0846ed34 +0x52:  ret
0846ed35 +0x53:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendIncreaseGuildExp @ 0x846ece2

/* CGuildServerProxy::SendIncreaseGuildExp(unsigned int, unsigned int, unsigned int, char) */

void __thiscall
CGuildServerProxy::SendIncreaseGuildExp
          (CGuildServerProxy *this,uint param_1,uint param_2,uint param_3,char param_4)

{
  Packet_Monitor_Increase_Guild_Exp local_28 [2];
  ushort local_26;
  uint local_1e;
  uint local_1a;
  uint local_16;
  char local_12;
  undefined1 local_11;
  
  Packet_Monitor_Increase_Guild_Exp::Packet_Monitor_Increase_Guild_Exp(local_28);
  local_1e = param_2;
  local_1a = param_1;
  local_16 = param_3;
  local_11 = 1;
  local_12 = param_4;
  SendTcpPacket(this,(char *)local_28,(uint)local_26);
  return;
}
```
