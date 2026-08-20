# CloseFile

`_ZN10CSimpleLog9CloseFileEv`

`CSimpleLog::CloseFile()`

| 类 | 地址 |
|---|---|
| `CSimpleLog` | `0x0854fb06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fb06  _ZN10CSimpleLog9CloseFileEv
#           CSimpleLog::CloseFile()
# range [0x0854fb06, 0x0854fb31]
0854fb06 +0x00:  push   %ebp
0854fb07 +0x01:  mov    %esp,%ebp
0854fb09 +0x03:  sub    $0x18,%esp
0854fb0c +0x06:  mov    0x8(%ebp),%eax
0854fb0f +0x09:  mov    (%eax),%eax
0854fb11 +0x0b:  test   %eax,%eax
0854fb13 +0x0d:  je     0854fb2b <+0x25>
0854fb15 +0x0f:  mov    0x8(%ebp),%eax
0854fb18 +0x12:  mov    (%eax),%eax
0854fb1a +0x14:  mov    %eax,(%esp)
0854fb1d +0x17:  call   0807dea0 <_init+0x798>
0854fb22 +0x1c:  mov    0x8(%ebp),%eax
0854fb25 +0x1f:  movl   $0x0,(%eax)
0854fb2b +0x25:  mov    $0x1,%eax
0854fb30 +0x2a:  leave
0854fb31 +0x2b:  ret
```

## 反编译 C

```c
// CSimpleLog::CloseFile @ 0x854fb06

/* CSimpleLog::CloseFile() */

undefined4 __thiscall CSimpleLog::CloseFile(CSimpleLog *this)

{
  if (*(int *)this != 0) {
    fclose(*(FILE **)this);
    *(undefined4 *)this = 0;
  }
  return 1;
}
```
