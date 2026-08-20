# _SendError

`_ZN8WongWork15CCompoundAvatar10_SendErrorEP5CUser10ENUM_ERROR`

`WongWork::CCompoundAvatar::_SendError(CUser*, ENUM_ERROR)`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08333a76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08333a76  _ZN8WongWork15CCompoundAvatar10_SendErrorEP5CUser10ENUM_ERROR
#           WongWork::CCompoundAvatar::_SendError(CUser*, ENUM_ERROR)
# range [0x08333a76, 0x08333a9b]
08333a76 +0x00:  push   %ebp
08333a77 +0x01:  mov    %esp,%ebp
08333a79 +0x03:  sub    $0x18,%esp
08333a7c +0x06:  mov    0x10(%ebp),%eax
08333a7f +0x09:  movzbl %al,%eax
08333a82 +0x0c:  mov    %eax,0x8(%esp)
08333a86 +0x10:  movl   $0x66,0x4(%esp)
08333a8e +0x18:  mov    0xc(%ebp),%eax
08333a91 +0x1b:  mov    %eax,(%esp)
08333a94 +0x1e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08333a99 +0x23:  leave
08333a9a +0x24:  ret
08333a9b +0x25:  nop
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::_SendError @ 0x8333a76

/* WongWork::CCompoundAvatar::_SendError(CUser*, ENUM_ERROR) */

void __thiscall
WongWork::CCompoundAvatar::_SendError(undefined4 this,CUser *param_1,undefined1 param_3)

{
  CUser::SendCmdErrorPacket(param_1,0x66,param_3);
  return;
}
```
