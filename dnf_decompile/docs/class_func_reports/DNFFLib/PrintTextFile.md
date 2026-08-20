# PrintTextFile

`_ZN7DNFFLib13PrintTextFileEPcS0_`

`DNFFLib::PrintTextFile(char*, char*)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108927` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108927  _ZN7DNFFLib13PrintTextFileEPcS0_
#           DNFFLib::PrintTextFile(char*, char*)
# range [0x08108927, 0x08108967]
08108927 +0x00:  push   %ebp
08108928 +0x01:  mov    %esp,%ebp
0810892a +0x03:  sub    $0x28,%esp
0810892d +0x06:  movl   $"a",0x4(%esp)
08108935 +0x0e:  mov    0x8(%ebp),%eax
08108938 +0x11:  mov    %eax,(%esp)
0810893b +0x14:  call   0807e770 <_init+0x1068>
08108940 +0x19:  mov    %eax,-0xc(%ebp)
08108943 +0x1c:  cmpl   $0x0,-0xc(%ebp)
08108947 +0x20:  je     08108966 <+0x3f>
08108949 +0x22:  mov    0xc(%ebp),%eax
0810894c +0x25:  mov    %eax,0x4(%esp)
08108950 +0x29:  mov    -0xc(%ebp),%eax
08108953 +0x2c:  mov    %eax,(%esp)
08108956 +0x2f:  call   0807da90 <_init+0x388>
0810895b +0x34:  mov    -0xc(%ebp),%eax
0810895e +0x37:  mov    %eax,(%esp)
08108961 +0x3a:  call   0807dea0 <_init+0x798>
08108966 +0x3f:  leave
08108967 +0x40:  ret
```

## 反编译 C

```c
// DNFFLib::PrintTextFile @ 0x8108927

/* DNFFLib::PrintTextFile(char*, char*) */

void DNFFLib::PrintTextFile(char *param_1,char *param_2)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"a");
  if (__stream != (FILE *)0x0) {
    fprintf(__stream,param_2);
    fclose(__stream);
  }
  return;
}
```
