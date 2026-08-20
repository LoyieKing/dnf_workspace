# OpenFile

`_ZN10CSimpleLog8OpenFileEPKc`

`CSimpleLog::OpenFile(char const*)`

| 类 | 地址 |
|---|---|
| `CSimpleLog` | `0x0854fabc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fabc  _ZN10CSimpleLog8OpenFileEPKc
#           CSimpleLog::OpenFile(char const*)
# range [0x0854fabc, 0x0854fb05]
0854fabc +0x00:  push   %ebp
0854fabd +0x01:  mov    %esp,%ebp
0854fabf +0x03:  sub    $0x18,%esp
0854fac2 +0x06:  mov    0x8(%ebp),%eax
0854fac5 +0x09:  mov    (%eax),%eax
0854fac7 +0x0b:  test   %eax,%eax
0854fac9 +0x0d:  je     0854fad2 <+0x16>
0854facb +0x0f:  mov    $0x0,%eax
0854fad0 +0x14:  jmp    0854fb04 <+0x48>
0854fad2 +0x16:  movl   $"ab",0x4(%esp)
0854fada +0x1e:  mov    0xc(%ebp),%eax
0854fadd +0x21:  mov    %eax,(%esp)
0854fae0 +0x24:  call   0807e770 <_init+0x1068>
0854fae5 +0x29:  mov    0x8(%ebp),%edx
0854fae8 +0x2c:  mov    %eax,(%edx)
0854faea +0x2e:  mov    0x8(%ebp),%eax
0854faed +0x31:  mov    (%eax),%eax
0854faef +0x33:  test   %eax,%eax
0854faf1 +0x35:  sete   %al
0854faf4 +0x38:  test   %al,%al
0854faf6 +0x3a:  je     0854faff <+0x43>
0854faf8 +0x3c:  mov    $0x0,%eax
0854fafd +0x41:  jmp    0854fb04 <+0x48>
0854faff +0x43:  mov    $0x1,%eax
0854fb04 +0x48:  leave
0854fb05 +0x49:  ret
```

## 反编译 C

```c
// CSimpleLog::OpenFile @ 0x854fabc

/* CSimpleLog::OpenFile(char const*) */

undefined4 __thiscall CSimpleLog::OpenFile(CSimpleLog *this,char *param_1)

{
  undefined4 uVar1;
  FILE *pFVar2;
  
  if (*(int *)this == 0) {
    pFVar2 = fopen(param_1,"ab");
    *(FILE **)this = pFVar2;
    if (*(int *)this == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
