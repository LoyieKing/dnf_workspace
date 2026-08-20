# send

`_ZN31Dispatcher_ItemHyperLinkMessage4sendEP5CUserR9ParamBase`

`Dispatcher_ItemHyperLinkMessage::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ItemHyperLinkMessage` | `0x081da584` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081da584  _ZN31Dispatcher_ItemHyperLinkMessage4sendEP5CUserR9ParamBase
#           Dispatcher_ItemHyperLinkMessage::send(CUser*, ParamBase&)
# range [0x081da584, 0x081da5d1]
081da584 +0x00:  push   %ebp
081da585 +0x01:  mov    %esp,%ebp
081da587 +0x03:  sub    $0x28,%esp
081da58a +0x06:  mov    0x10(%ebp),%eax
081da58d +0x09:  mov    %eax,-0xc(%ebp)
081da590 +0x0c:  mov    -0xc(%ebp),%eax
081da593 +0x0f:  mov    0x4(%eax),%eax
081da596 +0x12:  test   %eax,%eax
081da598 +0x14:  jne    081da5af <+0x2b>
081da59a +0x16:  movl   $0x1a9,0x4(%esp)
081da5a2 +0x1e:  mov    0xc(%ebp),%eax
081da5a5 +0x21:  mov    %eax,(%esp)
081da5a8 +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081da5ad +0x29:  jmp    081da5cf <+0x4b>
081da5af +0x2b:  mov    -0xc(%ebp),%eax
081da5b2 +0x2e:  mov    0x4(%eax),%eax
081da5b5 +0x31:  movzbl %al,%eax
081da5b8 +0x34:  mov    %eax,0x8(%esp)
081da5bc +0x38:  movl   $0x1a9,0x4(%esp)
081da5c4 +0x40:  mov    0xc(%ebp),%eax
081da5c7 +0x43:  mov    %eax,(%esp)
081da5ca +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081da5cf +0x4b:  leave
081da5d0 +0x4c:  ret
081da5d1 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_ItemHyperLinkMessage::send @ 0x81da584

/* Dispatcher_ItemHyperLinkMessage::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ItemHyperLinkMessage::send
          (Dispatcher_ItemHyperLinkMessage *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1a9);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1a9,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
