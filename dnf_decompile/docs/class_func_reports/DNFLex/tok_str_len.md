# tok_str_len

`_ZN6DNFLex11tok_str_lenEv`

`DNFLex::tok_str_len()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd200  _ZN6DNFLex11tok_str_lenEv
#           DNFLex::tok_str_len()
# range [0x08acd200, 0x08acd219]
08acd200 +0x00:  push   %ebp
08acd201 +0x01:  mov    %esp,%ebp
08acd203 +0x03:  mov    0x8(%ebp),%eax
08acd206 +0x06:  pop    %ebp
08acd207 +0x07:  lea    0x208c(%eax),%edx
08acd20d +0x0d:  mov    0x408c(%eax),%eax
08acd213 +0x13:  sub    %edx,%eax
08acd215 +0x15:  ret
08acd216 +0x16:  lea    0x0(%esi),%esi
08acd219 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLex::tok_str_len @ 0x8acd200

/* DWARF original prototype: int tok_str_len(DNFLex * this) */

int __thiscall DNFLex::tok_str_len(DNFLex *this)

{
  return (int)this->m_str_tok_pos - (int)this->STR_TOK_BUF;
}
```
