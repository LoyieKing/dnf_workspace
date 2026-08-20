# printServer

`_ZN11game_master12CBoosterTest11printServerEPKcS2_`

`game_master::CBoosterTest::printServer(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084aebae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aebae  _ZN11game_master12CBoosterTest11printServerEPKcS2_
#           game_master::CBoosterTest::printServer(char const*, char const*)
# range [0x084aebae, 0x084aebf1]
084aebae +0x00:  push   %ebp
084aebaf +0x01:  mov    %esp,%ebp
084aebb1 +0x03:  sub    $0x28,%esp
084aebb4 +0x06:  movl   $"wt",0x4(%esp)
084aebbc +0x0e:  mov    0x8(%ebp),%eax
084aebbf +0x11:  mov    %eax,(%esp)
084aebc2 +0x14:  call   0807e770 <_init+0x1068>
084aebc7 +0x19:  mov    %eax,-0xc(%ebp)
084aebca +0x1c:  cmpl   $0x0,-0xc(%ebp)
084aebce +0x20:  je     084aebef <+0x41>
084aebd0 +0x22:  mov    -0xc(%ebp),%eax
084aebd3 +0x25:  mov    %eax,0x4(%esp)
084aebd7 +0x29:  mov    0xc(%ebp),%eax
084aebda +0x2c:  mov    %eax,(%esp)
084aebdd +0x2f:  call   0807e720 <_init+0x1018>
084aebe2 +0x34:  mov    -0xc(%ebp),%eax
084aebe5 +0x37:  mov    %eax,(%esp)
084aebe8 +0x3a:  call   0807dea0 <_init+0x798>
084aebed +0x3f:  jmp    084aebf0 <+0x42>
084aebef +0x41:  nop
084aebf0 +0x42:  leave
084aebf1 +0x43:  ret
```

## 反编译 C

```c
// game_master::CBoosterTest::printServer @ 0x84aebae

/* game_master::CBoosterTest::printServer(char const*, char const*) */

void game_master::CBoosterTest::printServer(char *param_1,char *param_2)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"wt");
  if (__stream != (FILE *)0x0) {
    fputs(param_2,__stream);
    fclose(__stream);
  }
  return;
}
```
