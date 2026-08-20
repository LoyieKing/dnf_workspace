# dispatch_sig

`_ZN27Inter_GoblinPadSamePwdCheck12dispatch_sigEP5CUserPci`

`Inter_GoblinPadSamePwdCheck::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GoblinPadSamePwdCheck` | `0x084e4388` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4388  _ZN27Inter_GoblinPadSamePwdCheck12dispatch_sigEP5CUserPci
#           Inter_GoblinPadSamePwdCheck::dispatch_sig(CUser*, char*, int)
# range [0x084e4388, 0x084e43bb]
084e4388 +0x00:  push   %ebp
084e4389 +0x01:  mov    %esp,%ebp
084e438b +0x03:  sub    $0x28,%esp
084e438e +0x06:  mov    0x10(%ebp),%eax
084e4391 +0x09:  mov    %eax,-0xc(%ebp)
084e4394 +0x0c:  cmpl   $0x0,0xc(%ebp)
084e4398 +0x10:  je     084e43b5 <+0x2d>
084e439a +0x12:  movl   $0x8b,0x8(%esp)
084e43a2 +0x1a:  movl   $0x74,0x4(%esp)
084e43aa +0x22:  mov    0xc(%ebp),%eax
084e43ad +0x25:  mov    %eax,(%esp)
084e43b0 +0x28:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e43b5 +0x2d:  mov    $0x0,%eax
084e43ba +0x32:  leave
084e43bb +0x33:  ret
```

## 反编译 C

```c
// Inter_GoblinPadSamePwdCheck::dispatch_sig @ 0x84e4388

/* Inter_GoblinPadSamePwdCheck::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GoblinPadSamePwdCheck::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x74,0x8b);
  }
  return 0;
}
```
