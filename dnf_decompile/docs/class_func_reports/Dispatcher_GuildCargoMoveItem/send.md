# send

`_ZN29Dispatcher_GuildCargoMoveItem4sendEP5CUserR9ParamBase`

`Dispatcher_GuildCargoMoveItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoMoveItem` | `0x081d1a96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1a96  _ZN29Dispatcher_GuildCargoMoveItem4sendEP5CUserR9ParamBase
#           Dispatcher_GuildCargoMoveItem::send(CUser*, ParamBase&)
# range [0x081d1a96, 0x081d1b07]
081d1a96 +0x00:  push   %ebp
081d1a97 +0x01:  mov    %esp,%ebp
081d1a99 +0x03:  sub    $0x28,%esp
081d1a9c +0x06:  mov    0x10(%ebp),%eax
081d1a9f +0x09:  mov    %eax,-0xc(%ebp)
081d1aa2 +0x0c:  mov    -0xc(%ebp),%eax
081d1aa5 +0x0f:  mov    0x4(%eax),%eax
081d1aa8 +0x12:  test   %eax,%eax
081d1aaa +0x14:  je     081d1b06 <+0x70>
081d1aac +0x16:  mov    -0xc(%ebp),%eax
081d1aaf +0x19:  mov    0x4(%eax),%eax
081d1ab2 +0x1c:  cmp    $0x64,%eax
081d1ab5 +0x1f:  je     081d1ac4 <+0x2e>
081d1ab7 +0x21:  mov    -0xc(%ebp),%eax
081d1aba +0x24:  mov    0x4(%eax),%eax
081d1abd +0x27:  cmp    $0xb5,%eax
081d1ac2 +0x2c:  jne    081d1ae6 <+0x50>
081d1ac4 +0x2e:  mov    -0xc(%ebp),%eax
081d1ac7 +0x31:  mov    0x4(%eax),%eax
081d1aca +0x34:  movzbl %al,%eax
081d1acd +0x37:  mov    %eax,0x8(%esp)
081d1ad1 +0x3b:  movl   $0x109,0x4(%esp)
081d1ad9 +0x43:  mov    0xc(%ebp),%eax
081d1adc +0x46:  mov    %eax,(%esp)
081d1adf +0x49:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d1ae4 +0x4e:  jmp    081d1b06 <+0x70>
081d1ae6 +0x50:  mov    -0xc(%ebp),%eax
081d1ae9 +0x53:  mov    0x4(%eax),%eax
081d1aec +0x56:  movzbl %al,%eax
081d1aef +0x59:  mov    %eax,0x8(%esp)
081d1af3 +0x5d:  movl   $0xfd,0x4(%esp)
081d1afb +0x65:  mov    0xc(%ebp),%eax
081d1afe +0x68:  mov    %eax,(%esp)
081d1b01 +0x6b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d1b06 +0x70:  leave
081d1b07 +0x71:  ret
```

## 反编译 C

```c
// Dispatcher_GuildCargoMoveItem::send @ 0x81d1a96

/* Dispatcher_GuildCargoMoveItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargoMoveItem::send
          (Dispatcher_GuildCargoMoveItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    if ((*(int *)(param_2 + 4) == 100) || (*(int *)(param_2 + 4) == 0xb5)) {
      CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xfd,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```
