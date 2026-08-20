# send

`_ZN18DisPatcher_GetItem4sendEP5CUserR9ParamBase`

`DisPatcher_GetItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GetItem` | `0x081c3ce8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3ce8  _ZN18DisPatcher_GetItem4sendEP5CUserR9ParamBase
#           DisPatcher_GetItem::send(CUser*, ParamBase&)
# range [0x081c3ce8, 0x081c3d45]
081c3ce8 +0x00:  push   %ebp
081c3ce9 +0x01:  mov    %esp,%ebp
081c3ceb +0x03:  sub    $0x28,%esp
081c3cee +0x06:  mov    0x10(%ebp),%eax
081c3cf1 +0x09:  mov    %eax,-0xc(%ebp)
081c3cf4 +0x0c:  mov    -0xc(%ebp),%eax
081c3cf7 +0x0f:  mov    0x4(%eax),%eax
081c3cfa +0x12:  cmp    $0x7fffffff,%eax
081c3cff +0x17:  je     081c3d42 <+0x5a>
081c3d01 +0x19:  mov    -0xc(%ebp),%eax
081c3d04 +0x1c:  mov    0x4(%eax),%eax
081c3d07 +0x1f:  test   %eax,%eax
081c3d09 +0x21:  jne    081c3d20 <+0x38>
081c3d0b +0x23:  movl   $0x2e,0x4(%esp)
081c3d13 +0x2b:  mov    0xc(%ebp),%eax
081c3d16 +0x2e:  mov    %eax,(%esp)
081c3d19 +0x31:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081c3d1e +0x36:  jmp    081c3d43 <+0x5b>
081c3d20 +0x38:  mov    -0xc(%ebp),%eax
081c3d23 +0x3b:  mov    0x4(%eax),%eax
081c3d26 +0x3e:  movzbl %al,%eax
081c3d29 +0x41:  mov    %eax,0x8(%esp)
081c3d2d +0x45:  movl   $0x2e,0x4(%esp)
081c3d35 +0x4d:  mov    0xc(%ebp),%eax
081c3d38 +0x50:  mov    %eax,(%esp)
081c3d3b +0x53:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c3d40 +0x58:  jmp    081c3d43 <+0x5b>
081c3d42 +0x5a:  nop
081c3d43 +0x5b:  leave
081c3d44 +0x5c:  ret
081c3d45 +0x5d:  nop
```

## 反编译 C

```c
// DisPatcher_GetItem::send @ 0x81c3ce8

/* DisPatcher_GetItem::send(CUser*, ParamBase&) */

void __thiscall DisPatcher_GetItem::send(DisPatcher_GetItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      CUser::SendCmdOkPacket(param_1,0x2e);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x2e,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```
