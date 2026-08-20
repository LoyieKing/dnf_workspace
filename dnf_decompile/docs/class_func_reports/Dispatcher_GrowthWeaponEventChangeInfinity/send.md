# send

`_ZN42Dispatcher_GrowthWeaponEventChangeInfinity4sendEP5CUserR9ParamBase`

`Dispatcher_GrowthWeaponEventChangeInfinity::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthWeaponEventChangeInfinity` | `0x081e80be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e80be  _ZN42Dispatcher_GrowthWeaponEventChangeInfinity4sendEP5CUserR9ParamBase
#           Dispatcher_GrowthWeaponEventChangeInfinity::send(CUser*, ParamBase&)
# range [0x081e80be, 0x081e810b]
081e80be +0x00:  push   %ebp
081e80bf +0x01:  mov    %esp,%ebp
081e80c1 +0x03:  sub    $0x28,%esp
081e80c4 +0x06:  mov    0x10(%ebp),%eax
081e80c7 +0x09:  mov    %eax,-0xc(%ebp)
081e80ca +0x0c:  mov    -0xc(%ebp),%eax
081e80cd +0x0f:  mov    0x4(%eax),%eax
081e80d0 +0x12:  test   %eax,%eax
081e80d2 +0x14:  jne    081e80e9 <+0x2b>
081e80d4 +0x16:  movl   $0x1f9,0x4(%esp)
081e80dc +0x1e:  mov    0xc(%ebp),%eax
081e80df +0x21:  mov    %eax,(%esp)
081e80e2 +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e80e7 +0x29:  jmp    081e8109 <+0x4b>
081e80e9 +0x2b:  mov    -0xc(%ebp),%eax
081e80ec +0x2e:  mov    0x4(%eax),%eax
081e80ef +0x31:  movzbl %al,%eax
081e80f2 +0x34:  mov    %eax,0x8(%esp)
081e80f6 +0x38:  movl   $0x1f9,0x4(%esp)
081e80fe +0x40:  mov    0xc(%ebp),%eax
081e8101 +0x43:  mov    %eax,(%esp)
081e8104 +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e8109 +0x4b:  leave
081e810a +0x4c:  ret
081e810b +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_GrowthWeaponEventChangeInfinity::send @ 0x81e80be

/* Dispatcher_GrowthWeaponEventChangeInfinity::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GrowthWeaponEventChangeInfinity::send
          (Dispatcher_GrowthWeaponEventChangeInfinity *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1f9);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1f9,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
