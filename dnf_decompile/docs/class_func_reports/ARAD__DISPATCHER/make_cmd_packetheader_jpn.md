# make_cmd_packetheader_jpn

`_ZN4ARAD10DISPATCHER25make_cmd_packetheader_jpnER11PacketGuard14ENUM_CMDPACKETb`

`ARAD::DISPATCHER::make_cmd_packetheader_jpn(PacketGuard&, ENUM_CMDPACKET, bool)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER` | `0x08197812` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197812  _ZN4ARAD10DISPATCHER25make_cmd_packetheader_jpnER11PacketGuard14ENUM_CMDPACKETb
#           ARAD::DISPATCHER::make_cmd_packetheader_jpn(PacketGuard&, ENUM_CMDPACKET, bool)
# range [0x08197812, 0x08197861]
08197812 +0x00:  push   %ebp
08197813 +0x01:  mov    %esp,%ebp
08197815 +0x03:  sub    $0x38,%esp
08197818 +0x06:  mov    0x10(%ebp),%eax
0819781b +0x09:  mov    %al,-0x1c(%ebp)
0819781e +0x0c:  cmpb   $0x0,-0x1c(%ebp)
08197822 +0x10:  je     0819782b <+0x19>
08197824 +0x12:  mov    $0x1,%eax
08197829 +0x17:  jmp    08197830 <+0x1e>
0819782b +0x19:  mov    $0x0,%eax
08197830 +0x1e:  mov    %al,-0x9(%ebp)
08197833 +0x21:  mov    0xc(%ebp),%edx
08197836 +0x24:  mov    0x8(%ebp),%eax
08197839 +0x27:  mov    %edx,0x8(%esp)
0819783d +0x2b:  movl   $0x1,0x4(%esp)
08197845 +0x33:  mov    %eax,(%esp)
08197848 +0x36:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0819784d +0x3b:  movsbl -0x9(%ebp),%edx
08197851 +0x3f:  mov    0x8(%ebp),%eax
08197854 +0x42:  mov    %edx,0x4(%esp)
08197858 +0x46:  mov    %eax,(%esp)
0819785b +0x49:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08197860 +0x4e:  leave
08197861 +0x4f:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::make_cmd_packetheader_jpn @ 0x8197812

/* ARAD::DISPATCHER::make_cmd_packetheader_jpn(PacketGuard&, ENUM_CMDPACKET, bool) */

void ARAD::DISPATCHER::make_cmd_packetheader_jpn
               (InterfacePacketBuf *param_1,int param_2,char param_3)

{
  InterfacePacketBuf::put_header(param_1,1,param_2);
  InterfacePacketBuf::put_byte(param_1,(int)(param_3 != '\0'));
  return;
}
```
