# GetInputStream

`_ZN14CompiledDNFLex14GetInputStreamEv`

`CompiledDNFLex::GetInputStream()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acfea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acfea0  _ZN14CompiledDNFLex14GetInputStreamEv
#           CompiledDNFLex::GetInputStream()
# range [0x08acfea0, 0x08acfedc]
08acfea0 +0x00:  push   %ebp
08acfea1 +0x01:  xor    %eax,%eax
08acfea3 +0x03:  mov    %esp,%ebp
08acfea5 +0x05:  mov    0x8(%ebp),%edx
08acfea8 +0x08:  mov    0x2030(%edx),%ecx
08acfeae +0x0e:  cmp    0x2020(%edx),%ecx
08acfeb4 +0x14:  je     08acfec7 <+0x27>
08acfeb6 +0x16:  cmp    0x2034(%edx),%ecx
08acfebc +0x1c:  mov    0x203c(%edx),%eax
08acfec2 +0x22:  je     08acfed0 <+0x30>
08acfec4 +0x24:  lea    -0x14(%ecx),%eax
08acfec7 +0x27:  pop    %ebp
08acfec8 +0x28:  ret
08acfec9 +0x29:  lea    0x0(%esi,%eiz,1),%esi
08acfed0 +0x30:  mov    -0x4(%eax),%ecx
08acfed3 +0x33:  add    $0x1f4,%ecx
08acfed9 +0x39:  jmp    08acfec4 <+0x24>
08acfedb +0x3b:  nop
08acfedc +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::GetInputStream @ 0x8acfea0

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
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
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
