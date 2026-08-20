# WriteLog

`_ZN6OS_API8WriteLogEPKcS1_z`

`OS_API::WriteLog(char const*, char const*, ...)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c78a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c78a  _ZN6OS_API8WriteLogEPKcS1_z
#           OS_API::WriteLog(char const*, char const*, ...)
# range [0x0858c78a, 0x0858c801]
0858c78a +0x00:  push   %ebp
0858c78b +0x01:  mov    %esp,%ebp
0858c78d +0x03:  sub    $0x428,%esp
0858c793 +0x09:  movl   $"ab",0x4(%esp)
0858c79b +0x11:  mov    0x8(%ebp),%eax
0858c79e +0x14:  mov    %eax,(%esp)
0858c7a1 +0x17:  call   0807e770 <_init+0x1068>
0858c7a6 +0x1c:  mov    %eax,-0xc(%ebp)
0858c7a9 +0x1f:  cmpl   $0x0,-0xc(%ebp)
0858c7ad +0x23:  je     0858c7fe <+0x74>
0858c7af +0x25:  lea    0x10(%ebp),%eax
0858c7b2 +0x28:  mov    %eax,-0x10(%ebp)
0858c7b5 +0x2b:  mov    -0x10(%ebp),%eax
0858c7b8 +0x2e:  mov    %eax,0x8(%esp)
0858c7bc +0x32:  mov    0xc(%ebp),%eax
0858c7bf +0x35:  mov    %eax,0x4(%esp)
0858c7c3 +0x39:  lea    -0x410(%ebp),%eax
0858c7c9 +0x3f:  mov    %eax,(%esp)
0858c7cc +0x42:  call   0807d7d0 <_init+0xc8>
0858c7d1 +0x47:  mov    -0xc(%ebp),%eax
0858c7d4 +0x4a:  mov    %eax,0x4(%esp)
0858c7d8 +0x4e:  lea    -0x410(%ebp),%eax
0858c7de +0x54:  mov    %eax,(%esp)
0858c7e1 +0x57:  call   0807e720 <_init+0x1018>
0858c7e6 +0x5c:  mov    -0xc(%ebp),%eax
0858c7e9 +0x5f:  mov    %eax,(%esp)
0858c7ec +0x62:  call   0807e8d0 <_init+0x11c8>
0858c7f1 +0x67:  mov    -0xc(%ebp),%eax
0858c7f4 +0x6a:  mov    %eax,(%esp)
0858c7f7 +0x6d:  call   0807dea0 <_init+0x798>
0858c7fc +0x72:  jmp    0858c7ff <+0x75>
0858c7fe +0x74:  nop
0858c7ff +0x75:  leave
0858c800 +0x76:  ret
0858c801 +0x77:  nop
```

## 反编译 C

```c
// OS_API::WriteLog @ 0x858c78a

/* OS_API::WriteLog(char const*, char const*, ...) */

void OS_API::WriteLog(char *param_1,char *param_2,...)

{
  char local_414 [1024];
  undefined1 *local_14;
  FILE *local_10;
  
  local_10 = fopen(param_1,"ab");
  if (local_10 != (FILE *)0x0) {
    local_14 = &stack0x0000000c;
    vsprintf(local_414,param_2,local_14);
    fputs(local_414,local_10);
    fflush(local_10);
    fclose(local_10);
  }
  return;
}
```
