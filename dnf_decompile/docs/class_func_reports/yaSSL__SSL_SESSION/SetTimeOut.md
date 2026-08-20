# SetTimeOut

`_ZN5yaSSL11SSL_SESSION10SetTimeOutEj`

`yaSSL::SSL_SESSION::SetTimeOut(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x0874e380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e380  _ZN5yaSSL11SSL_SESSION10SetTimeOutEj
#           yaSSL::SSL_SESSION::SetTimeOut(unsigned int)
# range [0x0874e380, 0x0874e38e]
0874e380 +0x00:  push   %ebp
0874e381 +0x01:  mov    %esp,%ebp
0874e383 +0x03:  mov    0xc(%ebp),%edx
0874e386 +0x06:  mov    0x8(%ebp),%eax
0874e389 +0x09:  mov    %edx,0x58(%eax)
0874e38c +0x0c:  pop    %ebp
0874e38d +0x0d:  ret
0874e38e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::SetTimeOut @ 0x874e380

/* yaSSL::SSL_SESSION::SetTimeOut(unsigned int) */

void __thiscall yaSSL::SSL_SESSION::SetTimeOut(SSL_SESSION *this,uint param_1)

{
  *(uint *)(this + 0x58) = param_1;
  return;
}
```
