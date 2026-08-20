# send

`_ZN28Dispatcher_GuildCargoPopItem4sendEP5CUserR9ParamBase`

`Dispatcher_GuildCargoPopItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoPopItem` | `0x081d1748` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1748  _ZN28Dispatcher_GuildCargoPopItem4sendEP5CUserR9ParamBase
#           Dispatcher_GuildCargoPopItem::send(CUser*, ParamBase&)
# range [0x081d1748, 0x081d17b9]
081d1748 +0x00:  push   %ebp
081d1749 +0x01:  mov    %esp,%ebp
081d174b +0x03:  sub    $0x28,%esp
081d174e +0x06:  mov    0x10(%ebp),%eax
081d1751 +0x09:  mov    %eax,-0xc(%ebp)
081d1754 +0x0c:  mov    -0xc(%ebp),%eax
081d1757 +0x0f:  mov    0x4(%eax),%eax
081d175a +0x12:  test   %eax,%eax
081d175c +0x14:  je     081d17b8 <+0x70>
081d175e +0x16:  mov    -0xc(%ebp),%eax
081d1761 +0x19:  mov    0x4(%eax),%eax
081d1764 +0x1c:  cmp    $0x64,%eax
081d1767 +0x1f:  je     081d1776 <+0x2e>
081d1769 +0x21:  mov    -0xc(%ebp),%eax
081d176c +0x24:  mov    0x4(%eax),%eax
081d176f +0x27:  cmp    $0xb5,%eax
081d1774 +0x2c:  jne    081d1798 <+0x50>
081d1776 +0x2e:  mov    -0xc(%ebp),%eax
081d1779 +0x31:  mov    0x4(%eax),%eax
081d177c +0x34:  movzbl %al,%eax
081d177f +0x37:  mov    %eax,0x8(%esp)
081d1783 +0x3b:  movl   $0x109,0x4(%esp)
081d178b +0x43:  mov    0xc(%ebp),%eax
081d178e +0x46:  mov    %eax,(%esp)
081d1791 +0x49:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d1796 +0x4e:  jmp    081d17b8 <+0x70>
081d1798 +0x50:  mov    -0xc(%ebp),%eax
081d179b +0x53:  mov    0x4(%eax),%eax
081d179e +0x56:  movzbl %al,%eax
081d17a1 +0x59:  mov    %eax,0x8(%esp)
081d17a5 +0x5d:  movl   $0xfc,0x4(%esp)
081d17ad +0x65:  mov    0xc(%ebp),%eax
081d17b0 +0x68:  mov    %eax,(%esp)
081d17b3 +0x6b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d17b8 +0x70:  leave
081d17b9 +0x71:  ret
```

## 反编译 C

```c
// Dispatcher_GuildCargoPopItem::send @ 0x81d1748

/* Dispatcher_GuildCargoPopItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargoPopItem::send
          (Dispatcher_GuildCargoPopItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    if ((*(int *)(param_2 + 4) == 100) || (*(int *)(param_2 + 4) == 0xb5)) {
      CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xfc,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```
