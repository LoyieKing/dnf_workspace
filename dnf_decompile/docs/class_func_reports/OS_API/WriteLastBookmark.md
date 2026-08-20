# WriteLastBookmark

`_ZN6OS_API17WriteLastBookmarkEPKci`

`OS_API::WriteLastBookmark(char const*, int)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c6d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c6d4  _ZN6OS_API17WriteLastBookmarkEPKci
#           OS_API::WriteLastBookmark(char const*, int)
# range [0x0858c6d4, 0x0858c71d]
0858c6d4 +0x00:  push   %ebp
0858c6d5 +0x01:  mov    %esp,%ebp
0858c6d7 +0x03:  sub    $0x28,%esp
0858c6da +0x06:  movl   $"wb",0x4(%esp)
0858c6e2 +0x0e:  mov    0x8(%ebp),%eax
0858c6e5 +0x11:  mov    %eax,(%esp)
0858c6e8 +0x14:  call   0807e770 <_init+0x1068>
0858c6ed +0x19:  mov    %eax,-0xc(%ebp)
0858c6f0 +0x1c:  cmpl   $0x0,-0xc(%ebp)
0858c6f4 +0x20:  je     0858c71b <+0x47>
0858c6f6 +0x22:  mov    0xc(%ebp),%eax
0858c6f9 +0x25:  mov    %eax,0x8(%esp)
0858c6fd +0x29:  movl   $"bm:%d",0x4(%esp)
0858c705 +0x31:  mov    -0xc(%ebp),%eax
0858c708 +0x34:  mov    %eax,(%esp)
0858c70b +0x37:  call   0807da90 <_init+0x388>
0858c710 +0x3c:  mov    -0xc(%ebp),%eax
0858c713 +0x3f:  mov    %eax,(%esp)
0858c716 +0x42:  call   0807dea0 <_init+0x798>
0858c71b +0x47:  leave
0858c71c +0x48:  ret
0858c71d +0x49:  nop
```

## 反编译 C

```c
// OS_API::WriteLastBookmark @ 0x858c6d4

/* OS_API::WriteLastBookmark(char const*, int) */

void OS_API::WriteLastBookmark(char *param_1,int param_2)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"wb");
  if (__stream != (FILE *)0x0) {
    fprintf(__stream,"bm:%d",param_2);
    fclose(__stream);
  }
  return;
}
```
