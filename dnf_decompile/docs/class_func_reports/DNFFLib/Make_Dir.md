# Make_Dir

`_ZN7DNFFLib8Make_DirEPc`

`DNFFLib::Make_Dir(char*)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108ad7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108ad7  _ZN7DNFFLib8Make_DirEPc
#           DNFFLib::Make_Dir(char*)
# range [0x08108ad7, 0x08108b05]
08108ad7 +0x00:  push   %ebp
08108ad8 +0x01:  mov    %esp,%ebp
08108ada +0x03:  sub    $0x28,%esp
08108add +0x06:  mov    0x8(%ebp),%eax
08108ae0 +0x09:  mov    %eax,(%esp)
08108ae3 +0x0c:  call   0807e050 <_init+0x948>
08108ae8 +0x11:  mov    %eax,-0xc(%ebp)
08108aeb +0x14:  cmpl   $0x0,-0xc(%ebp)
08108aef +0x18:  jne    08108b04 <+0x2d>
08108af1 +0x1a:  movl   $0x1ff,0x4(%esp)
08108af9 +0x22:  mov    0x8(%ebp),%eax
08108afc +0x25:  mov    %eax,(%esp)
08108aff +0x28:  call   0807d800 <_init+0xf8>
08108b04 +0x2d:  leave
08108b05 +0x2e:  ret
```

## 反编译 C

```c
// DNFFLib::Make_Dir @ 0x8108ad7

/* DNFFLib::Make_Dir(char*) */

void DNFFLib::Make_Dir(char *param_1)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(param_1);
  if (pDVar1 == (DIR *)0x0) {
    mkdir(param_1,0x1ff);
  }
  return;
}
```
