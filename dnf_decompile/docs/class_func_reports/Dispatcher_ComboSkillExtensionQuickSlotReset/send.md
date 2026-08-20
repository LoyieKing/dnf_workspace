# send

`_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset4sendEP5CUserR9ParamBase`

`Dispatcher_ComboSkillExtensionQuickSlotReset::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkillExtensionQuickSlotReset` | `0x0825f60a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f60a  _ZN44Dispatcher_ComboSkillExtensionQuickSlotReset4sendEP5CUserR9ParamBase
#           Dispatcher_ComboSkillExtensionQuickSlotReset::send(CUser*, ParamBase&)
# range [0x0825f60a, 0x0825f657]
0825f60a +0x00:  push   %ebp
0825f60b +0x01:  mov    %esp,%ebp
0825f60d +0x03:  sub    $0x28,%esp
0825f610 +0x06:  mov    0x10(%ebp),%eax
0825f613 +0x09:  mov    %eax,-0xc(%ebp)
0825f616 +0x0c:  mov    -0xc(%ebp),%eax
0825f619 +0x0f:  mov    0x4(%eax),%eax
0825f61c +0x12:  test   %eax,%eax
0825f61e +0x14:  jne    0825f635 <+0x2b>
0825f620 +0x16:  movl   $0x1ff,0x4(%esp)
0825f628 +0x1e:  mov    0xc(%ebp),%eax
0825f62b +0x21:  mov    %eax,(%esp)
0825f62e +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
0825f633 +0x29:  jmp    0825f655 <+0x4b>
0825f635 +0x2b:  mov    -0xc(%ebp),%eax
0825f638 +0x2e:  mov    0x4(%eax),%eax
0825f63b +0x31:  movzbl %al,%eax
0825f63e +0x34:  mov    %eax,0x8(%esp)
0825f642 +0x38:  movl   $0x1ff,0x4(%esp)
0825f64a +0x40:  mov    0xc(%ebp),%eax
0825f64d +0x43:  mov    %eax,(%esp)
0825f650 +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0825f655 +0x4b:  leave
0825f656 +0x4c:  ret
0825f657 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_ComboSkillExtensionQuickSlotReset::send @ 0x825f60a

/* Dispatcher_ComboSkillExtensionQuickSlotReset::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ComboSkillExtensionQuickSlotReset::send
          (Dispatcher_ComboSkillExtensionQuickSlotReset *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1ff);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1ff,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
