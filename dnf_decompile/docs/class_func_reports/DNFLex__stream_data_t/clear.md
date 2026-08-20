# clear

`_ZN6DNFLex13stream_data_t5clearEv`

`DNFLex::stream_data_t::clear()`

| 类 | 地址 |
|---|---|
| `DNFLex::stream_data_t` | `0x08acd140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd140  _ZN6DNFLex13stream_data_t5clearEv
#           DNFLex::stream_data_t::clear()
# range [0x08acd140, 0x08acd15c]
08acd140 +0x00:  push   %ebp
08acd141 +0x01:  mov    %esp,%ebp
08acd143 +0x03:  mov    0x8(%ebp),%eax
08acd146 +0x06:  movl   $0x0,(%eax)
08acd14c +0x0c:  movl   $0x0,0x4(%eax)
08acd153 +0x13:  movl   $0x0,0x8(%eax)
08acd15a +0x1a:  pop    %ebp
08acd15b +0x1b:  ret
08acd15c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLex::stream_data_t::clear @ 0x8acd140

/* DWARF original prototype: void clear(stream_data_t * this) */

void __thiscall DNFLex::stream_data_t::clear(stream_data_t *this)

{
  this->stream = (istream *)0x0;
  this->size = 0;
  this->buffer = (char *)0x0;
  return;
}
```
