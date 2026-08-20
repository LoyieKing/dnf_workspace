# send

`_ZN23Dispatcher_MailBox_Send4sendEP5CUserR9ParamBase`

`Dispatcher_MailBox_Send::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Send` | `0x081ccdb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ccdb2  _ZN23Dispatcher_MailBox_Send4sendEP5CUserR9ParamBase
#           Dispatcher_MailBox_Send::send(CUser*, ParamBase&)
# range [0x081ccdb2, 0x081ccdf9]
081ccdb2 +0x00:  push   %ebp
081ccdb3 +0x01:  mov    %esp,%ebp
081ccdb5 +0x03:  sub    $0x28,%esp
081ccdb8 +0x06:  mov    0x10(%ebp),%eax
081ccdbb +0x09:  mov    %eax,-0xc(%ebp)
081ccdbe +0x0c:  mov    -0xc(%ebp),%eax
081ccdc1 +0x0f:  mov    0x4(%eax),%eax
081ccdc4 +0x12:  cmp    $0x7fffffff,%eax
081ccdc9 +0x17:  je     081ccdf7 <+0x45>
081ccdcb +0x19:  mov    -0xc(%ebp),%eax
081ccdce +0x1c:  mov    0x4(%eax),%eax
081ccdd1 +0x1f:  test   %eax,%eax
081ccdd3 +0x21:  je     081ccdf8 <+0x46>
081ccdd5 +0x23:  mov    -0xc(%ebp),%eax
081ccdd8 +0x26:  mov    0x4(%eax),%eax
081ccddb +0x29:  movzbl %al,%eax
081ccdde +0x2c:  mov    %eax,0x8(%esp)
081ccde2 +0x30:  movl   $0x61,0x4(%esp)
081ccdea +0x38:  mov    0xc(%ebp),%eax
081ccded +0x3b:  mov    %eax,(%esp)
081ccdf0 +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ccdf5 +0x43:  jmp    081ccdf8 <+0x46>
081ccdf7 +0x45:  nop
081ccdf8 +0x46:  leave
081ccdf9 +0x47:  ret
```

## 反编译 C

```c
// Dispatcher_MailBox_Send::send @ 0x81ccdb2

/* Dispatcher_MailBox_Send::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_MailBox_Send::send(Dispatcher_MailBox_Send *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x61,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
