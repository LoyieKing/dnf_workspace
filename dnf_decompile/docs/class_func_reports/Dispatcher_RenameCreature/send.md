# send

`_ZN25Dispatcher_RenameCreature4sendEP5CUserR9ParamBase`

`Dispatcher_RenameCreature::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RenameCreature` | `0x081cd21c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd21c  _ZN25Dispatcher_RenameCreature4sendEP5CUserR9ParamBase
#           Dispatcher_RenameCreature::send(CUser*, ParamBase&)
# range [0x081cd21c, 0x081cd253]
081cd21c +0x00:  push   %ebp
081cd21d +0x01:  mov    %esp,%ebp
081cd21f +0x03:  sub    $0x28,%esp
081cd222 +0x06:  mov    0x10(%ebp),%eax
081cd225 +0x09:  mov    %eax,-0xc(%ebp)
081cd228 +0x0c:  mov    -0xc(%ebp),%eax
081cd22b +0x0f:  mov    0x4(%eax),%eax
081cd22e +0x12:  test   %eax,%eax
081cd230 +0x14:  je     081cd252 <+0x36>
081cd232 +0x16:  mov    -0xc(%ebp),%eax
081cd235 +0x19:  mov    0x4(%eax),%eax
081cd238 +0x1c:  movzbl %al,%eax
081cd23b +0x1f:  mov    %eax,0x8(%esp)
081cd23f +0x23:  movl   $0x67,0x4(%esp)
081cd247 +0x2b:  mov    0xc(%ebp),%eax
081cd24a +0x2e:  mov    %eax,(%esp)
081cd24d +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cd252 +0x36:  leave
081cd253 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_RenameCreature::send @ 0x81cd21c

/* Dispatcher_RenameCreature::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RenameCreature::send(Dispatcher_RenameCreature *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x67,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
