# send

`_ZN33Dispatcher_UpgradeDisjointMachine4sendEP5CUserR9ParamBase`

`Dispatcher_UpgradeDisjointMachine::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeDisjointMachine` | `0x081d004a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d004a  _ZN33Dispatcher_UpgradeDisjointMachine4sendEP5CUserR9ParamBase
#           Dispatcher_UpgradeDisjointMachine::send(CUser*, ParamBase&)
# range [0x081d004a, 0x081d0081]
081d004a +0x00:  push   %ebp
081d004b +0x01:  mov    %esp,%ebp
081d004d +0x03:  sub    $0x28,%esp
081d0050 +0x06:  mov    0x10(%ebp),%eax
081d0053 +0x09:  mov    %eax,-0xc(%ebp)
081d0056 +0x0c:  mov    -0xc(%ebp),%eax
081d0059 +0x0f:  mov    0x4(%eax),%eax
081d005c +0x12:  test   %eax,%eax
081d005e +0x14:  je     081d0080 <+0x36>
081d0060 +0x16:  mov    -0xc(%ebp),%eax
081d0063 +0x19:  mov    0x4(%eax),%eax
081d0066 +0x1c:  movzbl %al,%eax
081d0069 +0x1f:  mov    %eax,0x8(%esp)
081d006d +0x23:  movl   $0xf4,0x4(%esp)
081d0075 +0x2b:  mov    0xc(%ebp),%eax
081d0078 +0x2e:  mov    %eax,(%esp)
081d007b +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d0080 +0x36:  leave
081d0081 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_UpgradeDisjointMachine::send @ 0x81d004a

/* Dispatcher_UpgradeDisjointMachine::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_UpgradeDisjointMachine::send
          (Dispatcher_UpgradeDisjointMachine *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xf4,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
