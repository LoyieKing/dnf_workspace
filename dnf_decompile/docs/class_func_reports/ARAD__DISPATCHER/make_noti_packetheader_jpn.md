# make_noti_packetheader_jpn

`_ZN4ARAD10DISPATCHER26make_noti_packetheader_jpnER11PacketGuard15ENUM_NOTIPACKETb`

`ARAD::DISPATCHER::make_noti_packetheader_jpn(PacketGuard&, ENUM_NOTIPACKET, bool)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER` | `0x08197862` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197862  _ZN4ARAD10DISPATCHER26make_noti_packetheader_jpnER11PacketGuard15ENUM_NOTIPACKETb
#           ARAD::DISPATCHER::make_noti_packetheader_jpn(PacketGuard&, ENUM_NOTIPACKET, bool)
# range [0x08197862, 0x081978b1]
08197862 +0x00:  push   %ebp
08197863 +0x01:  mov    %esp,%ebp
08197865 +0x03:  sub    $0x38,%esp
08197868 +0x06:  mov    0x10(%ebp),%eax
0819786b +0x09:  mov    %al,-0x1c(%ebp)
0819786e +0x0c:  cmpb   $0x0,-0x1c(%ebp)
08197872 +0x10:  je     0819787b <+0x19>
08197874 +0x12:  mov    $0x1,%eax
08197879 +0x17:  jmp    08197880 <+0x1e>
0819787b +0x19:  mov    $0x0,%eax
08197880 +0x1e:  mov    %al,-0x9(%ebp)
08197883 +0x21:  mov    0xc(%ebp),%edx
08197886 +0x24:  mov    0x8(%ebp),%eax
08197889 +0x27:  mov    %edx,0x8(%esp)
0819788d +0x2b:  movl   $0x0,0x4(%esp)
08197895 +0x33:  mov    %eax,(%esp)
08197898 +0x36:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0819789d +0x3b:  movsbl -0x9(%ebp),%edx
081978a1 +0x3f:  mov    0x8(%ebp),%eax
081978a4 +0x42:  mov    %edx,0x4(%esp)
081978a8 +0x46:  mov    %eax,(%esp)
081978ab +0x49:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081978b0 +0x4e:  leave
081978b1 +0x4f:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::make_noti_packetheader_jpn @ 0x8197862

/* ARAD::DISPATCHER::make_noti_packetheader_jpn(PacketGuard&, ENUM_NOTIPACKET, bool) */

void ARAD::DISPATCHER::make_noti_packetheader_jpn
               (InterfacePacketBuf *param_1,int param_2,char param_3)

{
  InterfacePacketBuf::put_header(param_1,0,param_2);
  InterfacePacketBuf::put_byte(param_1,(int)(param_3 != '\0'));
  return;
}
```
