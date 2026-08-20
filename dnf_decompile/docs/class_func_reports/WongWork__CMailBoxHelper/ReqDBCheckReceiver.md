# ReqDBCheckReceiver

`_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER`

`WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08555464` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08555464  _ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER
#           WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)
# range [0x08555464, 0x08555485]
08555464 +0x00:  push   %ebp
08555465 +0x01:  mov    %esp,%ebp
08555467 +0x03:  sub    $0x28,%esp
0855546a +0x06:  mov    0x10(%ebp),%eax
0855546d +0x09:  mov    %eax,0x8(%esp)
08555471 +0x0d:  mov    0xc(%ebp),%eax
08555474 +0x10:  mov    %eax,0x4(%esp)
08555478 +0x14:  mov    0x8(%ebp),%eax
0855547b +0x17:  mov    %eax,(%esp)
0855547e +0x1a:  call   08555486 <_ZN8WongWork14CMailBoxHelper27ReqDBCheckReceiver_forchinaEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>  ; WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)
08555483 +0x1f:  leave
08555484 +0x20:  ret
08555485 +0x21:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBCheckReceiver @ 0x8555464

/* WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*) */

void WongWork::CMailBoxHelper::ReqDBCheckReceiver
               (CUser *param_1,char *param_2,MSG_CHECK_MAIL_RECEIVER *param_3)

{
  ReqDBCheckReceiver_forchina(param_1,param_2,param_3);
  return;
}
```
