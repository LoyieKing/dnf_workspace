# dispatch_sig

`_ZN21Inter_LoadPuUserCheck12dispatch_sigEP5CUserPci`

`Inter_LoadPuUserCheck::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadPuUserCheck` | `0x084e7fe2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7fe2  _ZN21Inter_LoadPuUserCheck12dispatch_sigEP5CUserPci
#           Inter_LoadPuUserCheck::dispatch_sig(CUser*, char*, int)
# range [0x084e7fe2, 0x084e8003]
084e7fe2 +0x00:  push   %ebp
084e7fe3 +0x01:  mov    %esp,%ebp
084e7fe5 +0x03:  sub    $0x10,%esp
084e7fe8 +0x06:  mov    0x10(%ebp),%eax
084e7feb +0x09:  mov    %eax,-0x4(%ebp)
084e7fee +0x0c:  mov    -0x4(%ebp),%eax
084e7ff1 +0x0f:  movzbl (%eax),%edx
084e7ff4 +0x12:  mov    0xc(%ebp),%eax
084e7ff7 +0x15:  mov    %dl,0x796d8(%eax)
084e7ffd +0x1b:  mov    $0x0,%eax
084e8002 +0x20:  leave
084e8003 +0x21:  ret
```

## 反编译 C

```c
// Inter_LoadPuUserCheck::dispatch_sig @ 0x84e7fe2

/* Inter_LoadPuUserCheck::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPuUserCheck::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  param_2[0x796d8] = *(char *)param_3;
  return 0;
}
```
