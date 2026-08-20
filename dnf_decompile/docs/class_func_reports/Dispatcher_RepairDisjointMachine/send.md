# send

`_ZN32Dispatcher_RepairDisjointMachine4sendEP5CUserR9ParamBase`

`Dispatcher_RepairDisjointMachine::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RepairDisjointMachine` | `0x081cfef2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cfef2  _ZN32Dispatcher_RepairDisjointMachine4sendEP5CUserR9ParamBase
#           Dispatcher_RepairDisjointMachine::send(CUser*, ParamBase&)
# range [0x081cfef2, 0x081cff29]
081cfef2 +0x00:  push   %ebp
081cfef3 +0x01:  mov    %esp,%ebp
081cfef5 +0x03:  sub    $0x28,%esp
081cfef8 +0x06:  mov    0x10(%ebp),%eax
081cfefb +0x09:  mov    %eax,-0xc(%ebp)
081cfefe +0x0c:  mov    -0xc(%ebp),%eax
081cff01 +0x0f:  mov    0x4(%eax),%eax
081cff04 +0x12:  test   %eax,%eax
081cff06 +0x14:  je     081cff28 <+0x36>
081cff08 +0x16:  mov    -0xc(%ebp),%eax
081cff0b +0x19:  mov    0x4(%eax),%eax
081cff0e +0x1c:  movzbl %al,%eax
081cff11 +0x1f:  mov    %eax,0x8(%esp)
081cff15 +0x23:  movl   $0xf0,0x4(%esp)
081cff1d +0x2b:  mov    0xc(%ebp),%eax
081cff20 +0x2e:  mov    %eax,(%esp)
081cff23 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cff28 +0x36:  leave
081cff29 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_RepairDisjointMachine::send @ 0x81cfef2

/* Dispatcher_RepairDisjointMachine::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RepairDisjointMachine::send
          (Dispatcher_RepairDisjointMachine *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xf0,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
