# CMyFileLog

`_ZN10CMyFileLogC1EPKci`

`CMyFileLog::CMyFileLog(char const*, int)`

| 类 | 地址 |
|---|---|
| `CMyFileLog` | `0x0810786c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810786c  _ZN10CMyFileLogC1EPKci
#           CMyFileLog::CMyFileLog(char const*, int)
# range [0x0810786c, 0x08107881]
0810786c +0x00:  push   %ebp
0810786d +0x01:  mov    %esp,%ebp
0810786f +0x03:  mov    0x8(%ebp),%eax
08107872 +0x06:  mov    0xc(%ebp),%edx
08107875 +0x09:  mov    %edx,(%eax)
08107877 +0x0b:  mov    0x8(%ebp),%eax
0810787a +0x0e:  mov    0x10(%ebp),%edx
0810787d +0x11:  mov    %edx,0x4(%eax)
08107880 +0x14:  pop    %ebp
08107881 +0x15:  ret
```

## 反编译 C

```c
// CMyFileLog::CMyFileLog @ 0x810786c

/* CMyFileLog::CMyFileLog(char const*, int) */

void __thiscall CMyFileLog::CMyFileLog(CMyFileLog *this,char *param_1,int param_2)

{
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}
```
