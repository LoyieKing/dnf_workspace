# send

`_ZN29Dispatcher_Cancel_Quick_Party4sendEP5CUserR9ParamBase`

`Dispatcher_Cancel_Quick_Party::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Cancel_Quick_Party` | `0x081de298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de298  _ZN29Dispatcher_Cancel_Quick_Party4sendEP5CUserR9ParamBase
#           Dispatcher_Cancel_Quick_Party::send(CUser*, ParamBase&)
# range [0x081de298, 0x081de2e5]
081de298 +0x00:  push   %ebp
081de299 +0x01:  mov    %esp,%ebp
081de29b +0x03:  sub    $0x28,%esp
081de29e +0x06:  mov    0x10(%ebp),%eax
081de2a1 +0x09:  mov    %eax,-0xc(%ebp)
081de2a4 +0x0c:  mov    -0xc(%ebp),%eax
081de2a7 +0x0f:  mov    0x4(%eax),%eax
081de2aa +0x12:  test   %eax,%eax
081de2ac +0x14:  jne    081de2c3 <+0x2b>
081de2ae +0x16:  movl   $0x1bd,0x4(%esp)
081de2b6 +0x1e:  mov    0xc(%ebp),%eax
081de2b9 +0x21:  mov    %eax,(%esp)
081de2bc +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081de2c1 +0x29:  jmp    081de2e3 <+0x4b>
081de2c3 +0x2b:  mov    -0xc(%ebp),%eax
081de2c6 +0x2e:  mov    0x4(%eax),%eax
081de2c9 +0x31:  movzbl %al,%eax
081de2cc +0x34:  mov    %eax,0x8(%esp)
081de2d0 +0x38:  movl   $0x1bd,0x4(%esp)
081de2d8 +0x40:  mov    0xc(%ebp),%eax
081de2db +0x43:  mov    %eax,(%esp)
081de2de +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081de2e3 +0x4b:  leave
081de2e4 +0x4c:  ret
081de2e5 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_Cancel_Quick_Party::send @ 0x81de298

/* Dispatcher_Cancel_Quick_Party::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Cancel_Quick_Party::send
          (Dispatcher_Cancel_Quick_Party *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1bd);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1bd,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
