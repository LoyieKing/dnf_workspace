# send

`_ZN38Dispatcher_Direct_Entrance_Quick_Party4sendEP5CUserR9ParamBase`

`Dispatcher_Direct_Entrance_Quick_Party::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Direct_Entrance_Quick_Party` | `0x081de3b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de3b8  _ZN38Dispatcher_Direct_Entrance_Quick_Party4sendEP5CUserR9ParamBase
#           Dispatcher_Direct_Entrance_Quick_Party::send(CUser*, ParamBase&)
# range [0x081de3b8, 0x081de405]
081de3b8 +0x00:  push   %ebp
081de3b9 +0x01:  mov    %esp,%ebp
081de3bb +0x03:  sub    $0x28,%esp
081de3be +0x06:  mov    0x10(%ebp),%eax
081de3c1 +0x09:  mov    %eax,-0xc(%ebp)
081de3c4 +0x0c:  mov    -0xc(%ebp),%eax
081de3c7 +0x0f:  mov    0x4(%eax),%eax
081de3ca +0x12:  test   %eax,%eax
081de3cc +0x14:  jne    081de3e3 <+0x2b>
081de3ce +0x16:  movl   $0x1be,0x4(%esp)
081de3d6 +0x1e:  mov    0xc(%ebp),%eax
081de3d9 +0x21:  mov    %eax,(%esp)
081de3dc +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081de3e1 +0x29:  jmp    081de403 <+0x4b>
081de3e3 +0x2b:  mov    -0xc(%ebp),%eax
081de3e6 +0x2e:  mov    0x4(%eax),%eax
081de3e9 +0x31:  movzbl %al,%eax
081de3ec +0x34:  mov    %eax,0x8(%esp)
081de3f0 +0x38:  movl   $0x1be,0x4(%esp)
081de3f8 +0x40:  mov    0xc(%ebp),%eax
081de3fb +0x43:  mov    %eax,(%esp)
081de3fe +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081de403 +0x4b:  leave
081de404 +0x4c:  ret
081de405 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_Direct_Entrance_Quick_Party::send @ 0x81de3b8

/* Dispatcher_Direct_Entrance_Quick_Party::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Direct_Entrance_Quick_Party::send
          (Dispatcher_Direct_Entrance_Quick_Party *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1be);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1be,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
