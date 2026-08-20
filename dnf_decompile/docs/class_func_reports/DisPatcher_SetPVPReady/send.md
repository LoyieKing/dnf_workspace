# send

`_ZN22DisPatcher_SetPVPReady4sendEP5CUserR9ParamBase`

`DisPatcher_SetPVPReady::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPVPReady` | `0x081c9bc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9bc6  _ZN22DisPatcher_SetPVPReady4sendEP5CUserR9ParamBase
#           DisPatcher_SetPVPReady::send(CUser*, ParamBase&)
# range [0x081c9bc6, 0x081c9bfd]
081c9bc6 +0x00:  push   %ebp
081c9bc7 +0x01:  mov    %esp,%ebp
081c9bc9 +0x03:  sub    $0x28,%esp
081c9bcc +0x06:  mov    0x10(%ebp),%eax
081c9bcf +0x09:  mov    %eax,-0xc(%ebp)
081c9bd2 +0x0c:  mov    -0xc(%ebp),%eax
081c9bd5 +0x0f:  mov    0x4(%eax),%eax
081c9bd8 +0x12:  test   %eax,%eax
081c9bda +0x14:  jle    081c9bfc <+0x36>
081c9bdc +0x16:  mov    -0xc(%ebp),%eax
081c9bdf +0x19:  mov    0x4(%eax),%eax
081c9be2 +0x1c:  movzbl %al,%eax
081c9be5 +0x1f:  mov    %eax,0x8(%esp)
081c9be9 +0x23:  movl   $0x38,0x4(%esp)
081c9bf1 +0x2b:  mov    0xc(%ebp),%eax
081c9bf4 +0x2e:  mov    %eax,(%esp)
081c9bf7 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c9bfc +0x36:  leave
081c9bfd +0x37:  ret
```

## 反编译 C

```c
// DisPatcher_SetPVPReady::send @ 0x81c9bc6

/* DisPatcher_SetPVPReady::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SetPVPReady::send(DisPatcher_SetPVPReady *this,CUser *param_1,ParamBase *param_2)

{
  if (0 < *(int *)(param_2 + 4)) {
    CUser::SendCmdErrorPacket(param_1,0x38,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
