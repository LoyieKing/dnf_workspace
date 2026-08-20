# send

`_ZN23DisPatcher_DeleteCharac4sendEP5CUserR9ParamBase`

`DisPatcher_DeleteCharac::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteCharac` | `0x081c14b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c14b8  _ZN23DisPatcher_DeleteCharac4sendEP5CUserR9ParamBase
#           DisPatcher_DeleteCharac::send(CUser*, ParamBase&)
# range [0x081c14b8, 0x081c14ef]
081c14b8 +0x00:  push   %ebp
081c14b9 +0x01:  mov    %esp,%ebp
081c14bb +0x03:  sub    $0x28,%esp
081c14be +0x06:  mov    0x10(%ebp),%eax
081c14c1 +0x09:  mov    %eax,-0xc(%ebp)
081c14c4 +0x0c:  mov    -0xc(%ebp),%eax
081c14c7 +0x0f:  mov    0x4(%eax),%eax
081c14ca +0x12:  test   %eax,%eax
081c14cc +0x14:  je     081c14ee <+0x36>
081c14ce +0x16:  mov    -0xc(%ebp),%eax
081c14d1 +0x19:  mov    0x4(%eax),%eax
081c14d4 +0x1c:  movzbl %al,%eax
081c14d7 +0x1f:  mov    %eax,0x8(%esp)
081c14db +0x23:  movl   $0x6,0x4(%esp)
081c14e3 +0x2b:  mov    0xc(%ebp),%eax
081c14e6 +0x2e:  mov    %eax,(%esp)
081c14e9 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c14ee +0x36:  leave
081c14ef +0x37:  ret
```

## 反编译 C

```c
// DisPatcher_DeleteCharac::send @ 0x81c14b8

/* DisPatcher_DeleteCharac::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_DeleteCharac::send(DisPatcher_DeleteCharac *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,6,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
