# IsStream

`_ZN6DNFLex8IsStreamEv`

`DNFLex::IsStream()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd260  _ZN6DNFLex8IsStreamEv
#           DNFLex::IsStream()
# range [0x08acd260, 0x08acd279]
08acd260 +0x00:  push   %ebp
08acd261 +0x01:  mov    %esp,%ebp
08acd263 +0x03:  mov    0x8(%ebp),%eax
08acd266 +0x06:  pop    %ebp
08acd267 +0x07:  mov    0x84(%eax),%edx
08acd26d +0x0d:  cmp    0x80(%eax),%edx
08acd273 +0x13:  setne  %al
08acd276 +0x16:  ret
08acd277 +0x17:  nop
08acd278 +0x18:  nop
08acd279 +0x19:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLex::IsStream @ 0x8acd260

/* DWARF original prototype: bool IsStream(DNFLex * this) */

bool __thiscall DNFLex::IsStream(DNFLex *this)

{
  return (this->stream_stack_).
         super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_finish
         != (this->stream_stack_).
            super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start
  ;
}
```
