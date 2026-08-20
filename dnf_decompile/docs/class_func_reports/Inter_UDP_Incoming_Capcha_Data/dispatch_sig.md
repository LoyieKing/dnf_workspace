# dispatch_sig

`_ZN30Inter_UDP_Incoming_Capcha_Data12dispatch_sigEP5CUserPci`

`Inter_UDP_Incoming_Capcha_Data::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UDP_Incoming_Capcha_Data` | `0x084d28c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d28c0  _ZN30Inter_UDP_Incoming_Capcha_Data12dispatch_sigEP5CUserPci
#           Inter_UDP_Incoming_Capcha_Data::dispatch_sig(CUser*, char*, int)
# range [0x084d28c0, 0x084d28c9]
084d28c0 +0x00:  push   %ebp
084d28c1 +0x01:  mov    %esp,%ebp
084d28c3 +0x03:  mov    $0x0,%eax
084d28c8 +0x08:  pop    %ebp
084d28c9 +0x09:  ret
```

## 反编译 C

```c
// Inter_UDP_Incoming_Capcha_Data::dispatch_sig @ 0x84d28c0

/* Inter_UDP_Incoming_Capcha_Data::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UDP_Incoming_Capcha_Data::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}
```
