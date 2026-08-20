# set_MultimailMsgData

`_ZN5CUser20set_MultimailMsgDataEP22MSG_MULTI_MAILBOX_SEND`

`CUser::set_MultimailMsgData(MSG_MULTI_MAILBOX_SEND*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868a4e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868a4e8  _ZN5CUser20set_MultimailMsgDataEP22MSG_MULTI_MAILBOX_SEND
#           CUser::set_MultimailMsgData(MSG_MULTI_MAILBOX_SEND*)
# range [0x0868a4e8, 0x0868a519]
0868a4e8 +0x00:  push   %ebp
0868a4e9 +0x01:  mov    %esp,%ebp
0868a4eb +0x03:  sub    $0x18,%esp
0868a4ee +0x06:  mov    0x8(%ebp),%eax
0868a4f1 +0x09:  movb   $0x1,0x8e3ec(%eax)
0868a4f8 +0x10:  mov    0x8(%ebp),%eax
0868a4fb +0x13:  lea    0x8e246(%eax),%edx
0868a501 +0x19:  movl   $0x1a6,0x8(%esp)
0868a509 +0x21:  mov    0xc(%ebp),%eax
0868a50c +0x24:  mov    %eax,0x4(%esp)
0868a510 +0x28:  mov    %edx,(%esp)
0868a513 +0x2b:  call   0807d8a0 <_init+0x198>
0868a518 +0x30:  leave
0868a519 +0x31:  ret
```

## 反编译 C

```c
// CUser::set_MultimailMsgData @ 0x868a4e8

/* CUser::set_MultimailMsgData(MSG_MULTI_MAILBOX_SEND*) */

void __thiscall CUser::set_MultimailMsgData(CUser *this,MSG_MULTI_MAILBOX_SEND *param_1)

{
  this[0x8e3ec] = (CUser)0x1;
  memcpy(this + 0x8e246,param_1,0x1a6);
  return;
}
```
