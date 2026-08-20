# GetOffset

`_ZNK14CompiledDNFLex9GetOffsetEv`

`CompiledDNFLex::GetOffset() const`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acff20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acff20  _ZNK14CompiledDNFLex9GetOffsetEv
#           CompiledDNFLex::GetOffset() const
# range [0x08acff20, 0x08acff6c]
08acff20 +0x00:  push   %ebp
08acff21 +0x01:  mov    %esp,%ebp
08acff23 +0x03:  mov    0x8(%ebp),%eax
08acff26 +0x06:  mov    0x2030(%eax),%edx
08acff2c +0x0c:  cmp    0x2020(%eax),%edx
08acff32 +0x12:  je     08acff47 <+0x27>
08acff34 +0x14:  cmp    0x2034(%eax),%edx
08acff3a +0x1a:  mov    0x203c(%eax),%ecx
08acff40 +0x20:  je     08acff60 <+0x40>
08acff42 +0x22:  sub    $0x14,%edx
08acff45 +0x25:  jne    08acff50 <+0x30>
08acff47 +0x27:  mov    $0xffffffff,%eax
08acff4c +0x2c:  pop    %ebp
08acff4d +0x2d:  ret
08acff4e +0x2e:  xchg   %ax,%ax
08acff50 +0x30:  mov    0xc(%edx),%edx
08acff53 +0x33:  test   %edx,%edx
08acff55 +0x35:  je     08acff47 <+0x27>
08acff57 +0x37:  mov    0x4(%eax),%eax
08acff5a +0x3a:  pop    %ebp
08acff5b +0x3b:  sub    %edx,%eax
08acff5d +0x3d:  ret
08acff5e +0x3e:  xchg   %ax,%ax
08acff60 +0x40:  mov    -0x4(%ecx),%edx
08acff63 +0x43:  add    $0x1f4,%edx
08acff69 +0x49:  jmp    08acff42 <+0x22>
08acff6b +0x4b:  nop
08acff6c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::GetOffset @ 0x8acff20

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: int GetOffset(CompiledDNFLex * this) */

int __thiscall CompiledDNFLex::GetOffset(CompiledDNFLex *this)

{
  stream_t *psVar1;
  
                    /* Unresolved local var: stream_t * stream@[???] */
  psVar1 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  if (psVar1 != (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_const_CompiledDNFLex::stream_t&,_const_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar1 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar1 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    if ((psVar1 != (stream_t *)0x14) && (psVar1[-1].buffer != (char *)0x0)) {
      return (int)this->offset_ - (int)psVar1[-1].buffer;
    }
  }
  return -1;
}
```
