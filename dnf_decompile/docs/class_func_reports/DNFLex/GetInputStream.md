# GetInputStream

`_ZN6DNFLex14GetInputStreamEv`

`DNFLex::GetInputStream()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd280  _ZN6DNFLex14GetInputStreamEv
#           DNFLex::GetInputStream()
# range [0x08acd280, 0x08acd2a9]
08acd280 +0x00:  push   %ebp
08acd281 +0x01:  mov    %esp,%ebp
08acd283 +0x03:  mov    0x8(%ebp),%edx
08acd286 +0x06:  pop    %ebp
08acd287 +0x07:  mov    0x84(%edx),%ecx
08acd28d +0x0d:  cmp    0x80(%edx),%ecx
08acd293 +0x13:  sete   %dl
08acd296 +0x16:  movzbl %dl,%edx
08acd299 +0x19:  lea    -0x18(%ecx),%eax
08acd29c +0x1c:  sub    $0x1,%edx
08acd29f +0x1f:  and    %edx,%eax
08acd2a1 +0x21:  ret
08acd2a2 +0x22:  lea    0x0(%esi,%eiz,1),%esi
08acd2a9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLex::GetInputStream @ 0x8acd280

/* DWARF original prototype: stream_t * GetInputStream(DNFLex * this) */

stream_t * __thiscall DNFLex::GetInputStream(DNFLex *this)

{
  stream_t *psVar1;
  
  psVar1 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_finish
  ;
  return (stream_t *)
         ((uint)(psVar1 + -1) &
         (psVar1 ==
         (this->stream_stack_).
         super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start) -
         1);
}
```
