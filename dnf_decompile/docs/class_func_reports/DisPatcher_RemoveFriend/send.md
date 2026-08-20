# send

`_ZN23DisPatcher_RemoveFriend4sendEP5CUserR9ParamBase`

`DisPatcher_RemoveFriend::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RemoveFriend` | `0x081cb738` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb738  _ZN23DisPatcher_RemoveFriend4sendEP5CUserR9ParamBase
#           DisPatcher_RemoveFriend::send(CUser*, ParamBase&)
# range [0x081cb738, 0x081cb77f]
081cb738 +0x00:  push   %ebp
081cb739 +0x01:  mov    %esp,%ebp
081cb73b +0x03:  sub    $0x28,%esp
081cb73e +0x06:  mov    0x10(%ebp),%eax
081cb741 +0x09:  mov    %eax,-0xc(%ebp)
081cb744 +0x0c:  mov    -0xc(%ebp),%eax
081cb747 +0x0f:  mov    0x4(%eax),%eax
081cb74a +0x12:  cmp    $0x7fffffff,%eax
081cb74f +0x17:  je     081cb77d <+0x45>
081cb751 +0x19:  mov    -0xc(%ebp),%eax
081cb754 +0x1c:  mov    0x4(%eax),%eax
081cb757 +0x1f:  test   %eax,%eax
081cb759 +0x21:  je     081cb77e <+0x46>
081cb75b +0x23:  mov    -0xc(%ebp),%eax
081cb75e +0x26:  mov    0x4(%eax),%eax
081cb761 +0x29:  movzbl %al,%eax
081cb764 +0x2c:  mov    %eax,0x8(%esp)
081cb768 +0x30:  movl   $0x40,0x4(%esp)
081cb770 +0x38:  mov    0xc(%ebp),%eax
081cb773 +0x3b:  mov    %eax,(%esp)
081cb776 +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cb77b +0x43:  jmp    081cb77e <+0x46>
081cb77d +0x45:  nop
081cb77e +0x46:  leave
081cb77f +0x47:  ret
```

## 反编译 C

```c
// DisPatcher_RemoveFriend::send @ 0x81cb738

/* DisPatcher_RemoveFriend::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_RemoveFriend::send(DisPatcher_RemoveFriend *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x40,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
