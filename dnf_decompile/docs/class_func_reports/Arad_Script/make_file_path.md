# make_file_path

`_ZN11Arad_Script14make_file_pathEPKc`

`Arad_Script::make_file_path(char const*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817b70a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817b70a  _ZN11Arad_Script14make_file_pathEPKc
#           Arad_Script::make_file_path(char const*)
# range [0x0817b70a, 0x0817b729]
0817b70a +0x00:  push   %ebp
0817b70b +0x01:  mov    %esp,%ebp
0817b70d +0x03:  sub    $0x18,%esp
0817b710 +0x06:  mov    0x8(%ebp),%eax
0817b713 +0x09:  mov    %eax,0x4(%esp)
0817b717 +0x0d:  movl   $&_ZZN11Arad_Script14make_file_pathEPKcE9full_path,(%esp)
0817b71e +0x14:  call   0807def0 <_init+0x7e8>
0817b723 +0x19:  mov    $&_ZZN11Arad_Script14make_file_pathEPKcE9full_path,%eax
0817b728 +0x1e:  leave
0817b729 +0x1f:  ret
```

## 反编译 C

```c
// Arad_Script::make_file_path @ 0x817b70a

/* Arad_Script::make_file_path(char const*) */

undefined1 * Arad_Script::make_file_path(char *param_1)

{
  strcpy(make_file_path(char_const*)::full_path,param_1);
  return make_file_path(char_const*)::full_path;
}
```
