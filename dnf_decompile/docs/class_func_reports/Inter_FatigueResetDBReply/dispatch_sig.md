# dispatch_sig

`_ZN25Inter_FatigueResetDBReply12dispatch_sigEP5CUserPci`

`Inter_FatigueResetDBReply::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_FatigueResetDBReply` | `0x084cf546` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf546  _ZN25Inter_FatigueResetDBReply12dispatch_sigEP5CUserPci
#           Inter_FatigueResetDBReply::dispatch_sig(CUser*, char*, int)
# range [0x084cf546, 0x084cf54f]
084cf546 +0x00:  push   %ebp
084cf547 +0x01:  mov    %esp,%ebp
084cf549 +0x03:  mov    $0x0,%eax
084cf54e +0x08:  pop    %ebp
084cf54f +0x09:  ret
```

## 反编译 C

```c
// Inter_FatigueResetDBReply::dispatch_sig @ 0x84cf546

/* Inter_FatigueResetDBReply::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_FatigueResetDBReply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}
```
