# set_MailMsgData

`_ZN5CUser15set_MailMsgDataEP16MSG_MAILBOX_SEND`

`CUser::set_MailMsgData(MSG_MAILBOX_SEND*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868a4b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868a4b6  _ZN5CUser15set_MailMsgDataEP16MSG_MAILBOX_SEND
#           CUser::set_MailMsgData(MSG_MAILBOX_SEND*)
# range [0x0868a4b6, 0x0868a4e7]
0868a4b6 +0x00:  push   %ebp
0868a4b7 +0x01:  mov    %esp,%ebp
0868a4b9 +0x03:  sub    $0x18,%esp
0868a4bc +0x06:  mov    0x8(%ebp),%eax
0868a4bf +0x09:  movb   $0x0,0x8e3ec(%eax)
0868a4c6 +0x10:  mov    0x8(%ebp),%eax
0868a4c9 +0x13:  lea    0x8e101(%eax),%edx
0868a4cf +0x19:  movl   $0x145,0x8(%esp)
0868a4d7 +0x21:  mov    0xc(%ebp),%eax
0868a4da +0x24:  mov    %eax,0x4(%esp)
0868a4de +0x28:  mov    %edx,(%esp)
0868a4e1 +0x2b:  call   0807d8a0 <_init+0x198>
0868a4e6 +0x30:  leave
0868a4e7 +0x31:  ret
```

## 反编译 C

```c
// CUser::set_MailMsgData @ 0x868a4b6

/* CUser::set_MailMsgData(MSG_MAILBOX_SEND*) */

void __thiscall CUser::set_MailMsgData(CUser *this,MSG_MAILBOX_SEND *param_1)

{
  this[0x8e3ec] = (CUser)0x0;
  memcpy(this + 0x8e101,param_1,0x145);
  return;
}
```
