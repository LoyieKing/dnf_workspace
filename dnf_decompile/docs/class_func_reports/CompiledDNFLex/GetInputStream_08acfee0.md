# GetInputStream

`_ZNK14CompiledDNFLex14GetInputStreamEv`

`CompiledDNFLex::GetInputStream() const`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acfee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acfee0  _ZNK14CompiledDNFLex14GetInputStreamEv
#           CompiledDNFLex::GetInputStream() const
# range [0x08acfee0, 0x08acff1c]
08acfee0 +0x00:  push   %ebp
08acfee1 +0x01:  xor    %eax,%eax
08acfee3 +0x03:  mov    %esp,%ebp
08acfee5 +0x05:  mov    0x8(%ebp),%edx
08acfee8 +0x08:  mov    0x2030(%edx),%ecx
08acfeee +0x0e:  cmp    0x2020(%edx),%ecx
08acfef4 +0x14:  je     08acff07 <+0x27>
08acfef6 +0x16:  cmp    0x2034(%edx),%ecx
08acfefc +0x1c:  mov    0x203c(%edx),%eax
08acff02 +0x22:  je     08acff10 <+0x30>
08acff04 +0x24:  lea    -0x14(%ecx),%eax
08acff07 +0x27:  pop    %ebp
08acff08 +0x28:  ret
08acff09 +0x29:  lea    0x0(%esi,%eiz,1),%esi
08acff10 +0x30:  mov    -0x4(%eax),%ecx
08acff13 +0x33:  add    $0x1f4,%ecx
08acff19 +0x39:  jmp    08acff04 <+0x24>
08acff1b +0x3b:  nop
08acff1c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::GetInputStream @ 0x8acfee0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: stream_t * GetInputStream(CompiledDNFLex * this) */

stream_t * __thiscall CompiledDNFLex::GetInputStream(CompiledDNFLex *this)

{
  stream_t *psVar1;
  stream_t *psVar2;
  
  psVar1 = (stream_t *)0x0;
  psVar2 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  if (psVar2 != (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_const_CompiledDNFLex::stream_t&,_const_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar2 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar2 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    psVar1 = psVar2 + -1;
  }
  return psVar1;
}
```
