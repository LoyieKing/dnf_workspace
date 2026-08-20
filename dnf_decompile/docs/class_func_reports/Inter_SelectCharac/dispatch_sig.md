# dispatch_sig

`_ZN18Inter_SelectCharac12dispatch_sigEP5CUserPci`

`Inter_SelectCharac::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SelectCharac` | `0x084c528a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c528a  _ZN18Inter_SelectCharac12dispatch_sigEP5CUserPci
#           Inter_SelectCharac::dispatch_sig(CUser*, char*, int)
# range [0x084c528a, 0x084c5293]
084c528a +0x00:  push   %ebp
084c528b +0x01:  mov    %esp,%ebp
084c528d +0x03:  mov    $0x0,%eax
084c5292 +0x08:  pop    %ebp
084c5293 +0x09:  ret
```

## 反编译 C

```c
// Inter_SelectCharac::dispatch_sig @ 0x84c528a

/* Inter_SelectCharac::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SelectCharac::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}
```
