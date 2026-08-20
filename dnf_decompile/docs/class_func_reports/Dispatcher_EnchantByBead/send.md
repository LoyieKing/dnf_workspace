# send

`_ZN24Dispatcher_EnchantByBead4sendEP5CUserR9ParamBase`

`Dispatcher_EnchantByBead::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EnchantByBead` | `0x081d25b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d25b0  _ZN24Dispatcher_EnchantByBead4sendEP5CUserR9ParamBase
#           Dispatcher_EnchantByBead::send(CUser*, ParamBase&)
# range [0x081d25b0, 0x081d25f7]
081d25b0 +0x00:  push   %ebp
081d25b1 +0x01:  mov    %esp,%ebp
081d25b3 +0x03:  sub    $0x28,%esp
081d25b6 +0x06:  mov    0x10(%ebp),%eax
081d25b9 +0x09:  mov    %eax,-0xc(%ebp)
081d25bc +0x0c:  mov    -0xc(%ebp),%eax
081d25bf +0x0f:  mov    0x4(%eax),%eax
081d25c2 +0x12:  cmp    $0x7fffffff,%eax
081d25c7 +0x17:  je     081d25f5 <+0x45>
081d25c9 +0x19:  mov    -0xc(%ebp),%eax
081d25cc +0x1c:  mov    0x4(%eax),%eax
081d25cf +0x1f:  test   %eax,%eax
081d25d1 +0x21:  je     081d25f6 <+0x46>
081d25d3 +0x23:  mov    -0xc(%ebp),%eax
081d25d6 +0x26:  mov    0x4(%eax),%eax
081d25d9 +0x29:  movzbl %al,%eax
081d25dc +0x2c:  mov    %eax,0x8(%esp)
081d25e0 +0x30:  movl   $0x113,0x4(%esp)
081d25e8 +0x38:  mov    0xc(%ebp),%eax
081d25eb +0x3b:  mov    %eax,(%esp)
081d25ee +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d25f3 +0x43:  jmp    081d25f6 <+0x46>
081d25f5 +0x45:  nop
081d25f6 +0x46:  leave
081d25f7 +0x47:  ret
```

## 反编译 C

```c
// Dispatcher_EnchantByBead::send @ 0x81d25b0

/* Dispatcher_EnchantByBead::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_EnchantByBead::send(Dispatcher_EnchantByBead *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x113,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
