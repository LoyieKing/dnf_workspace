# send

`_ZN23DisPatcher_CreateCharac4sendEP5CUserR9ParamBase`

`DisPatcher_CreateCharac::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CreateCharac` | `0x081c07e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c07e8  _ZN23DisPatcher_CreateCharac4sendEP5CUserR9ParamBase
#           DisPatcher_CreateCharac::send(CUser*, ParamBase&)
# range [0x081c07e8, 0x081c082f]
081c07e8 +0x00:  push   %ebp
081c07e9 +0x01:  mov    %esp,%ebp
081c07eb +0x03:  sub    $0x28,%esp
081c07ee +0x06:  mov    0x10(%ebp),%eax
081c07f1 +0x09:  mov    %eax,-0xc(%ebp)
081c07f4 +0x0c:  mov    -0xc(%ebp),%eax
081c07f7 +0x0f:  mov    0x4(%eax),%eax
081c07fa +0x12:  cmp    $0x7fffffff,%eax
081c07ff +0x17:  je     081c082d <+0x45>
081c0801 +0x19:  mov    -0xc(%ebp),%eax
081c0804 +0x1c:  mov    0x4(%eax),%eax
081c0807 +0x1f:  test   %eax,%eax
081c0809 +0x21:  je     081c082e <+0x46>
081c080b +0x23:  mov    -0xc(%ebp),%eax
081c080e +0x26:  mov    0x4(%eax),%eax
081c0811 +0x29:  movzbl %al,%eax
081c0814 +0x2c:  mov    %eax,0x8(%esp)
081c0818 +0x30:  movl   $0x5,0x4(%esp)
081c0820 +0x38:  mov    0xc(%ebp),%eax
081c0823 +0x3b:  mov    %eax,(%esp)
081c0826 +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c082b +0x43:  jmp    081c082e <+0x46>
081c082d +0x45:  nop
081c082e +0x46:  leave
081c082f +0x47:  ret
```

## 反编译 C

```c
// DisPatcher_CreateCharac::send @ 0x81c07e8

/* DisPatcher_CreateCharac::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_CreateCharac::send(DisPatcher_CreateCharac *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,5,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
