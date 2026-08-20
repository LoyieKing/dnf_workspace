# LexerOutput

`_ZN11SlangFilter11LexerOutputEPKci`

`SlangFilter::LexerOutput(char const*, int)`

| 类 | 地址 |
|---|---|
| `SlangFilter` | `0x08095032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08095032  _ZN11SlangFilter11LexerOutputEPKci
#           SlangFilter::LexerOutput(char const*, int)
# range [0x08095032, 0x0809504d]
08095032 +0x00:  push   %ebp
08095033 +0x01:  mov    %esp,%ebp
08095035 +0x03:  sub    $0x18,%esp
08095038 +0x06:  mov    &stdout,%eax
0809503d +0x0b:  mov    0xc(%ebp),%edx
08095040 +0x0e:  mov    %edx,0x4(%esp)
08095044 +0x12:  mov    %eax,(%esp)
08095047 +0x15:  call   0807da90 <_init+0x388>
0809504c +0x1a:  leave
0809504d +0x1b:  ret
```

## 反编译 C

```c
// SlangFilter::LexerOutput @ 0x8095032

/* SlangFilter::LexerOutput(char const*, int) */

void SlangFilter::LexerOutput(char *param_1,int param_2)

{
  fprintf(stdout,(char *)param_2);
  return;
}
```
