# dispatch_sig

`_ZN18Inter_LoadPvPBuddy12dispatch_sigEP5CUserPci`

`Inter_LoadPvPBuddy::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadPvPBuddy` | `0x084e16f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e16f4  _ZN18Inter_LoadPvPBuddy12dispatch_sigEP5CUserPci
#           Inter_LoadPvPBuddy::dispatch_sig(CUser*, char*, int)
# range [0x084e16f4, 0x084e16fd]
084e16f4 +0x00:  push   %ebp
084e16f5 +0x01:  mov    %esp,%ebp
084e16f7 +0x03:  mov    $0x0,%eax
084e16fc +0x08:  pop    %ebp
084e16fd +0x09:  ret
```

## 反编译 C

```c
// Inter_LoadPvPBuddy::dispatch_sig @ 0x84e16f4

/* Inter_LoadPvPBuddy::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPvPBuddy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}
```
