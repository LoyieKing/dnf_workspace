# send

`_ZN23DisPatcher_SelectCharac4sendEP5CUserR9ParamBase`

`DisPatcher_SelectCharac::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c6826` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c6826  _ZN23DisPatcher_SelectCharac4sendEP5CUserR9ParamBase
#           DisPatcher_SelectCharac::send(CUser*, ParamBase&)
# range [0x081c6826, 0x081c686d]
081c6826 +0x00:  push   %ebp
081c6827 +0x01:  mov    %esp,%ebp
081c6829 +0x03:  sub    $0x28,%esp
081c682c +0x06:  mov    0x10(%ebp),%eax
081c682f +0x09:  mov    %eax,-0xc(%ebp)
081c6832 +0x0c:  mov    -0xc(%ebp),%eax
081c6835 +0x0f:  mov    0x4(%eax),%eax
081c6838 +0x12:  cmp    $0x7fffffff,%eax
081c683d +0x17:  je     081c686b <+0x45>
081c683f +0x19:  mov    -0xc(%ebp),%eax
081c6842 +0x1c:  mov    0x4(%eax),%eax
081c6845 +0x1f:  test   %eax,%eax
081c6847 +0x21:  je     081c686c <+0x46>
081c6849 +0x23:  mov    -0xc(%ebp),%eax
081c684c +0x26:  mov    0x4(%eax),%eax
081c684f +0x29:  movzbl %al,%eax
081c6852 +0x2c:  mov    %eax,0x8(%esp)
081c6856 +0x30:  movl   $0x4,0x4(%esp)
081c685e +0x38:  mov    0xc(%ebp),%eax
081c6861 +0x3b:  mov    %eax,(%esp)
081c6864 +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c6869 +0x43:  jmp    081c686c <+0x46>
081c686b +0x45:  nop
081c686c +0x46:  leave
081c686d +0x47:  ret
```

## 反编译 C

```c
// DisPatcher_SelectCharac::send @ 0x81c6826

/* DisPatcher_SelectCharac::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SelectCharac::send(DisPatcher_SelectCharac *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,4,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
