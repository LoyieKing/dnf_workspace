# send

`_ZN21DisPatcher_LeaveParty4sendEP5CUserR9ParamBase`

`DisPatcher_LeaveParty::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_LeaveParty` | `0x081c4326` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c4326  _ZN21DisPatcher_LeaveParty4sendEP5CUserR9ParamBase
#           DisPatcher_LeaveParty::send(CUser*, ParamBase&)
# range [0x081c4326, 0x081c436d]
081c4326 +0x00:  push   %ebp
081c4327 +0x01:  mov    %esp,%ebp
081c4329 +0x03:  sub    $0x28,%esp
081c432c +0x06:  mov    0x10(%ebp),%eax
081c432f +0x09:  mov    %eax,-0xc(%ebp)
081c4332 +0x0c:  mov    -0xc(%ebp),%eax
081c4335 +0x0f:  mov    0x4(%eax),%eax
081c4338 +0x12:  cmp    $0x7fffffff,%eax
081c433d +0x17:  je     081c436b <+0x45>
081c433f +0x19:  mov    -0xc(%ebp),%eax
081c4342 +0x1c:  mov    0x4(%eax),%eax
081c4345 +0x1f:  test   %eax,%eax
081c4347 +0x21:  je     081c436c <+0x46>
081c4349 +0x23:  mov    -0xc(%ebp),%eax
081c434c +0x26:  mov    0x4(%eax),%eax
081c434f +0x29:  movzbl %al,%eax
081c4352 +0x2c:  mov    %eax,0x8(%esp)
081c4356 +0x30:  movl   $0xd,0x4(%esp)
081c435e +0x38:  mov    0xc(%ebp),%eax
081c4361 +0x3b:  mov    %eax,(%esp)
081c4364 +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c4369 +0x43:  jmp    081c436c <+0x46>
081c436b +0x45:  nop
081c436c +0x46:  leave
081c436d +0x47:  ret
```

## 反编译 C

```c
// DisPatcher_LeaveParty::send @ 0x81c4326

/* DisPatcher_LeaveParty::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_LeaveParty::send(DisPatcher_LeaveParty *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0xd,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
