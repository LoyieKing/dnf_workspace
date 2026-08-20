# send

`_ZN21Dispatcher_GuildCargo4sendEP5CUserR9ParamBase`

`Dispatcher_GuildCargo::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargo` | `0x081d0bfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0bfa  _ZN21Dispatcher_GuildCargo4sendEP5CUserR9ParamBase
#           Dispatcher_GuildCargo::send(CUser*, ParamBase&)
# range [0x081d0bfa, 0x081d0c31]
081d0bfa +0x00:  push   %ebp
081d0bfb +0x01:  mov    %esp,%ebp
081d0bfd +0x03:  sub    $0x28,%esp
081d0c00 +0x06:  mov    0x10(%ebp),%eax
081d0c03 +0x09:  mov    %eax,-0xc(%ebp)
081d0c06 +0x0c:  mov    -0xc(%ebp),%eax
081d0c09 +0x0f:  mov    0x4(%eax),%eax
081d0c0c +0x12:  test   %eax,%eax
081d0c0e +0x14:  je     081d0c30 <+0x36>
081d0c10 +0x16:  mov    -0xc(%ebp),%eax
081d0c13 +0x19:  mov    0x4(%eax),%eax
081d0c16 +0x1c:  movzbl %al,%eax
081d0c19 +0x1f:  mov    %eax,0x8(%esp)
081d0c1d +0x23:  movl   $0x109,0x4(%esp)
081d0c25 +0x2b:  mov    0xc(%ebp),%eax
081d0c28 +0x2e:  mov    %eax,(%esp)
081d0c2b +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d0c30 +0x36:  leave
081d0c31 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_GuildCargo::send @ 0x81d0bfa

/* Dispatcher_GuildCargo::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargo::send(Dispatcher_GuildCargo *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
