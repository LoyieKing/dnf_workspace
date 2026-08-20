# send

`_ZN25Dispatcher_ItemDictionary4sendEP5CUserR9ParamBase`

`Dispatcher_ItemDictionary::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ItemDictionary` | `0x081dd8b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dd8b6  _ZN25Dispatcher_ItemDictionary4sendEP5CUserR9ParamBase
#           Dispatcher_ItemDictionary::send(CUser*, ParamBase&)
# range [0x081dd8b6, 0x081dd903]
081dd8b6 +0x00:  push   %ebp
081dd8b7 +0x01:  mov    %esp,%ebp
081dd8b9 +0x03:  sub    $0x28,%esp
081dd8bc +0x06:  mov    0x10(%ebp),%eax
081dd8bf +0x09:  mov    %eax,-0xc(%ebp)
081dd8c2 +0x0c:  mov    -0xc(%ebp),%eax
081dd8c5 +0x0f:  mov    0x4(%eax),%eax
081dd8c8 +0x12:  test   %eax,%eax
081dd8ca +0x14:  jne    081dd8e1 <+0x2b>
081dd8cc +0x16:  movl   $0x1b8,0x4(%esp)
081dd8d4 +0x1e:  mov    0xc(%ebp),%eax
081dd8d7 +0x21:  mov    %eax,(%esp)
081dd8da +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081dd8df +0x29:  jmp    081dd901 <+0x4b>
081dd8e1 +0x2b:  mov    -0xc(%ebp),%eax
081dd8e4 +0x2e:  mov    0x4(%eax),%eax
081dd8e7 +0x31:  movzbl %al,%eax
081dd8ea +0x34:  mov    %eax,0x8(%esp)
081dd8ee +0x38:  movl   $0x1b8,0x4(%esp)
081dd8f6 +0x40:  mov    0xc(%ebp),%eax
081dd8f9 +0x43:  mov    %eax,(%esp)
081dd8fc +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd901 +0x4b:  leave
081dd902 +0x4c:  ret
081dd903 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_ItemDictionary::send @ 0x81dd8b6

/* Dispatcher_ItemDictionary::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ItemDictionary::send(Dispatcher_ItemDictionary *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1b8);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1b8,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
