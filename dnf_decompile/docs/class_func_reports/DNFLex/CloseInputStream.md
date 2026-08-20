# CloseInputStream

`_ZN6DNFLex16CloseInputStreamEv`

`DNFLex::CloseInputStream()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd5b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd5b0  _ZN6DNFLex16CloseInputStreamEv
#           DNFLex::CloseInputStream()
# range [0x08acd5b0, 0x08acd5ec]
08acd5b0 +0x00:  push   %ebp
08acd5b1 +0x01:  mov    %esp,%ebp
08acd5b3 +0x03:  push   %ebx
08acd5b4 +0x04:  sub    $0x14,%esp
08acd5b7 +0x07:  mov    0x8(%ebp),%ebx
08acd5ba +0x0a:  mov    0x84(%ebx),%eax
08acd5c0 +0x10:  cmp    0x80(%ebx),%eax
08acd5c6 +0x16:  je     08acd5e6 <+0x36>
08acd5c8 +0x18:  movl   $0x1,0x4(%esp)
08acd5d0 +0x20:  mov    %ebx,(%esp)
08acd5d3 +0x23:  call   08acd490 <_ZN6DNFLex14PopInputStreamEb>  ; DNFLex::PopInputStream(bool)
08acd5d8 +0x28:  mov    0x84(%ebx),%eax
08acd5de +0x2e:  cmp    0x80(%ebx),%eax
08acd5e4 +0x34:  jne    08acd5c8 <+0x18>
08acd5e6 +0x36:  add    $0x14,%esp
08acd5e9 +0x39:  pop    %ebx
08acd5ea +0x3a:  pop    %ebp
08acd5eb +0x3b:  ret
08acd5ec +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLex::CloseInputStream @ 0x8acd5b0

/* DWARF original prototype: void CloseInputStream(DNFLex * this) */

void __thiscall DNFLex::CloseInputStream(DNFLex *this)

{
  if ((this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_finish !=
      (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_start) {
    do {
      PopInputStream(this,true);
    } while ((this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_finish !=
             (this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_start);
  }
  return;
}
```
