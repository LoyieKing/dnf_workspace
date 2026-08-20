# send

`_ZN24Dispatcher_HatchCreature4sendEP5CUserR9ParamBase`

`Dispatcher_HatchCreature::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_HatchCreature` | `0x081cd572` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd572  _ZN24Dispatcher_HatchCreature4sendEP5CUserR9ParamBase
#           Dispatcher_HatchCreature::send(CUser*, ParamBase&)
# range [0x081cd572, 0x081cd5a9]
081cd572 +0x00:  push   %ebp
081cd573 +0x01:  mov    %esp,%ebp
081cd575 +0x03:  sub    $0x28,%esp
081cd578 +0x06:  mov    0x10(%ebp),%eax
081cd57b +0x09:  mov    %eax,-0xc(%ebp)
081cd57e +0x0c:  mov    -0xc(%ebp),%eax
081cd581 +0x0f:  mov    0x4(%eax),%eax
081cd584 +0x12:  test   %eax,%eax
081cd586 +0x14:  je     081cd5a8 <+0x36>
081cd588 +0x16:  mov    -0xc(%ebp),%eax
081cd58b +0x19:  mov    0x4(%eax),%eax
081cd58e +0x1c:  movzbl %al,%eax
081cd591 +0x1f:  mov    %eax,0x8(%esp)
081cd595 +0x23:  movl   $0x69,0x4(%esp)
081cd59d +0x2b:  mov    0xc(%ebp),%eax
081cd5a0 +0x2e:  mov    %eax,(%esp)
081cd5a3 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cd5a8 +0x36:  leave
081cd5a9 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_HatchCreature::send @ 0x81cd572

/* Dispatcher_HatchCreature::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_HatchCreature::send(Dispatcher_HatchCreature *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x69,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
