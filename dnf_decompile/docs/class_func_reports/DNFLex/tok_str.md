# tok_str

`_ZN6DNFLex7tok_strEv`

`DNFLex::tok_str()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd1f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd1f0  _ZN6DNFLex7tok_strEv
#           DNFLex::tok_str()
# range [0x08acd1f0, 0x08acd1fe]
08acd1f0 +0x00:  push   %ebp
08acd1f1 +0x01:  mov    %esp,%ebp
08acd1f3 +0x03:  mov    0x8(%ebp),%eax
08acd1f6 +0x06:  pop    %ebp
08acd1f7 +0x07:  add    $0x208c,%eax
08acd1fc +0x0c:  ret
08acd1fd +0x0d:  nop
08acd1fe +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// DNFLex::tok_str @ 0x8acd1f0

/* DWARF original prototype: char * tok_str(DNFLex * this) */

char * __thiscall DNFLex::tok_str(DNFLex *this)

{
  return this->STR_TOK_BUF;
}
```
