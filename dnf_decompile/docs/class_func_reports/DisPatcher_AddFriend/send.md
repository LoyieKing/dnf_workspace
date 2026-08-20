# send

`_ZN20DisPatcher_AddFriend4sendEP5CUserR9ParamBase`

`DisPatcher_AddFriend::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_AddFriend` | `0x081cb4e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb4e6  _ZN20DisPatcher_AddFriend4sendEP5CUserR9ParamBase
#           DisPatcher_AddFriend::send(CUser*, ParamBase&)
# range [0x081cb4e6, 0x081cb52d]
081cb4e6 +0x00:  push   %ebp
081cb4e7 +0x01:  mov    %esp,%ebp
081cb4e9 +0x03:  sub    $0x28,%esp
081cb4ec +0x06:  mov    0x10(%ebp),%eax
081cb4ef +0x09:  mov    %eax,-0xc(%ebp)
081cb4f2 +0x0c:  mov    -0xc(%ebp),%eax
081cb4f5 +0x0f:  mov    0x4(%eax),%eax
081cb4f8 +0x12:  cmp    $0x7fffffff,%eax
081cb4fd +0x17:  je     081cb52b <+0x45>
081cb4ff +0x19:  mov    -0xc(%ebp),%eax
081cb502 +0x1c:  mov    0x4(%eax),%eax
081cb505 +0x1f:  test   %eax,%eax
081cb507 +0x21:  je     081cb52c <+0x46>
081cb509 +0x23:  mov    -0xc(%ebp),%eax
081cb50c +0x26:  mov    0x4(%eax),%eax
081cb50f +0x29:  movzbl %al,%eax
081cb512 +0x2c:  mov    %eax,0x8(%esp)
081cb516 +0x30:  movl   $0x3f,0x4(%esp)
081cb51e +0x38:  mov    0xc(%ebp),%eax
081cb521 +0x3b:  mov    %eax,(%esp)
081cb524 +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cb529 +0x43:  jmp    081cb52c <+0x46>
081cb52b +0x45:  nop
081cb52c +0x46:  leave
081cb52d +0x47:  ret
```

## 反编译 C

```c
// DisPatcher_AddFriend::send @ 0x81cb4e6

/* DisPatcher_AddFriend::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_AddFriend::send(DisPatcher_AddFriend *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x3f,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
