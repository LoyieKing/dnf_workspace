# snprintf

`_ZN6OS_API8snprintfEPcjPKcz`

`OS_API::snprintf(char*, unsigned int, char const*, ...)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c81c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c81c  _ZN6OS_API8snprintfEPcjPKcz
#           OS_API::snprintf(char*, unsigned int, char const*, ...)
# range [0x0858c81c, 0x0858c84f]
0858c81c +0x00:  push   %ebp
0858c81d +0x01:  mov    %esp,%ebp
0858c81f +0x03:  sub    $0x28,%esp
0858c822 +0x06:  lea    0x14(%ebp),%eax
0858c825 +0x09:  mov    %eax,-0x10(%ebp)
0858c828 +0x0c:  mov    -0x10(%ebp),%eax
0858c82b +0x0f:  mov    %eax,0xc(%esp)
0858c82f +0x13:  mov    0x10(%ebp),%eax
0858c832 +0x16:  mov    %eax,0x8(%esp)
0858c836 +0x1a:  mov    0xc(%ebp),%eax
0858c839 +0x1d:  mov    %eax,0x4(%esp)
0858c83d +0x21:  mov    0x8(%ebp),%eax
0858c840 +0x24:  mov    %eax,(%esp)
0858c843 +0x27:  call   0807e5f0 <_init+0xee8>
0858c848 +0x2c:  mov    %eax,-0xc(%ebp)
0858c84b +0x2f:  mov    -0xc(%ebp),%eax
0858c84e +0x32:  leave
0858c84f +0x33:  ret
```

## 反编译 C

```c
// OS_API::snprintf @ 0x858c81c

/* OS_API::snprintf(char*, unsigned int, char const*, ...) */

int OS_API::snprintf(char *param_1,uint param_2,char *param_3,...)

{
  int iVar1;
  
  iVar1 = vsnprintf(param_1,param_2,param_3,&stack0x00000010);
  return iVar1;
}
```
