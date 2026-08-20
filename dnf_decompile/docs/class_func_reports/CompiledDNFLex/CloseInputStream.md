# CloseInputStream

`_ZN14CompiledDNFLex16CloseInputStreamEv`

`CompiledDNFLex::CloseInputStream()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0e90  _ZN14CompiledDNFLex16CloseInputStreamEv
#           CompiledDNFLex::CloseInputStream()
# range [0x08ad0e90, 0x08ad0ecc]
08ad0e90 +0x00:  push   %ebp
08ad0e91 +0x01:  mov    %esp,%ebp
08ad0e93 +0x03:  push   %ebx
08ad0e94 +0x04:  sub    $0x14,%esp
08ad0e97 +0x07:  mov    0x8(%ebp),%ebx
08ad0e9a +0x0a:  mov    0x2030(%ebx),%eax
08ad0ea0 +0x10:  cmp    0x2020(%ebx),%eax
08ad0ea6 +0x16:  je     08ad0ec6 <+0x36>
08ad0ea8 +0x18:  movl   $0x1,0x4(%esp)
08ad0eb0 +0x20:  mov    %ebx,(%esp)
08ad0eb3 +0x23:  call   08ad0c80 <_ZN14CompiledDNFLex14PopInputStreamEb>  ; CompiledDNFLex::PopInputStream(bool)
08ad0eb8 +0x28:  mov    0x2030(%ebx),%eax
08ad0ebe +0x2e:  cmp    0x2020(%ebx),%eax
08ad0ec4 +0x34:  jne    08ad0ea8 <+0x18>
08ad0ec6 +0x36:  add    $0x14,%esp
08ad0ec9 +0x39:  pop    %ebx
08ad0eca +0x3a:  pop    %ebp
08ad0ecb +0x3b:  ret
08ad0ecc +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::CloseInputStream @ 0x8ad0e90

/* DWARF original prototype: void CloseInputStream(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::CloseInputStream(CompiledDNFLex *this)

{
  if ((this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_cur !=
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_start._M_cur) {
    do {
      PopInputStream(this,true);
    } while ((this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur !=
             (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_cur);
  }
  return;
}
```
