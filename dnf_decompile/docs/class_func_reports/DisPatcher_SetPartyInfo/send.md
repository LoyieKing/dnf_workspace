# send

`_ZN23DisPatcher_SetPartyInfo4sendEP5CUserR9ParamBase`

`DisPatcher_SetPartyInfo::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPartyInfo` | `0x081c46c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c46c0  _ZN23DisPatcher_SetPartyInfo4sendEP5CUserR9ParamBase
#           DisPatcher_SetPartyInfo::send(CUser*, ParamBase&)
# range [0x081c46c0, 0x081c4707]
081c46c0 +0x00:  push   %ebp
081c46c1 +0x01:  mov    %esp,%ebp
081c46c3 +0x03:  sub    $0x28,%esp
081c46c6 +0x06:  mov    0x10(%ebp),%eax
081c46c9 +0x09:  mov    %eax,-0xc(%ebp)
081c46cc +0x0c:  mov    -0xc(%ebp),%eax
081c46cf +0x0f:  mov    0x4(%eax),%eax
081c46d2 +0x12:  cmp    $0x7fffffff,%eax
081c46d7 +0x17:  je     081c4705 <+0x45>
081c46d9 +0x19:  mov    -0xc(%ebp),%eax
081c46dc +0x1c:  mov    0x4(%eax),%eax
081c46df +0x1f:  test   %eax,%eax
081c46e1 +0x21:  je     081c4706 <+0x46>
081c46e3 +0x23:  mov    -0xc(%ebp),%eax
081c46e6 +0x26:  mov    0x4(%eax),%eax
081c46e9 +0x29:  movzbl %al,%eax
081c46ec +0x2c:  mov    %eax,0x8(%esp)
081c46f0 +0x30:  movl   $0xc,0x4(%esp)
081c46f8 +0x38:  mov    0xc(%ebp),%eax
081c46fb +0x3b:  mov    %eax,(%esp)
081c46fe +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c4703 +0x43:  jmp    081c4706 <+0x46>
081c4705 +0x45:  nop
081c4706 +0x46:  leave
081c4707 +0x47:  ret
```

## 反编译 C

```c
// DisPatcher_SetPartyInfo::send @ 0x81c46c0

/* DisPatcher_SetPartyInfo::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SetPartyInfo::send(DisPatcher_SetPartyInfo *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0xc,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
