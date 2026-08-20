# send

`_ZN26Dispatcher_MailBox_Extract4sendEP5CUserR9ParamBase`

`Dispatcher_MailBox_Extract::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Extract` | `0x081ccf94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ccf94  _ZN26Dispatcher_MailBox_Extract4sendEP5CUserR9ParamBase
#           Dispatcher_MailBox_Extract::send(CUser*, ParamBase&)
# range [0x081ccf94, 0x081ccfdb]
081ccf94 +0x00:  push   %ebp
081ccf95 +0x01:  mov    %esp,%ebp
081ccf97 +0x03:  sub    $0x28,%esp
081ccf9a +0x06:  mov    0x10(%ebp),%eax
081ccf9d +0x09:  mov    %eax,-0xc(%ebp)
081ccfa0 +0x0c:  mov    -0xc(%ebp),%eax
081ccfa3 +0x0f:  mov    0x4(%eax),%eax
081ccfa6 +0x12:  cmp    $0x7fffffff,%eax
081ccfab +0x17:  je     081ccfd9 <+0x45>
081ccfad +0x19:  mov    -0xc(%ebp),%eax
081ccfb0 +0x1c:  mov    0x4(%eax),%eax
081ccfb3 +0x1f:  test   %eax,%eax
081ccfb5 +0x21:  je     081ccfda <+0x46>
081ccfb7 +0x23:  mov    -0xc(%ebp),%eax
081ccfba +0x26:  mov    0x4(%eax),%eax
081ccfbd +0x29:  movzbl %al,%eax
081ccfc0 +0x2c:  mov    %eax,0x8(%esp)
081ccfc4 +0x30:  movl   $0x62,0x4(%esp)
081ccfcc +0x38:  mov    0xc(%ebp),%eax
081ccfcf +0x3b:  mov    %eax,(%esp)
081ccfd2 +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ccfd7 +0x43:  jmp    081ccfda <+0x46>
081ccfd9 +0x45:  nop
081ccfda +0x46:  leave
081ccfdb +0x47:  ret
```

## 反编译 C

```c
// Dispatcher_MailBox_Extract::send @ 0x81ccf94

/* Dispatcher_MailBox_Extract::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_MailBox_Extract::send(Dispatcher_MailBox_Extract *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x62,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
