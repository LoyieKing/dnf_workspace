# isEnd

`_ZN14CompiledDNFLex5isEndEv`

`CompiledDNFLex::isEnd()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0000  _ZN14CompiledDNFLex5isEndEv
#           CompiledDNFLex::isEnd()
# range [0x08ad0000, 0x08ad004c]
08ad0000 +0x00:  push   %ebp
08ad0001 +0x01:  mov    %esp,%ebp
08ad0003 +0x03:  mov    0x8(%ebp),%eax
08ad0006 +0x06:  mov    0x2030(%eax),%edx
08ad000c +0x0c:  cmp    0x2020(%eax),%edx
08ad0012 +0x12:  je     08ad0048 <+0x48>
08ad0014 +0x14:  cmp    0x2034(%eax),%edx
08ad001a +0x1a:  mov    0x203c(%eax),%ecx
08ad0020 +0x20:  je     08ad0038 <+0x38>
08ad0022 +0x22:  sub    $0x14,%edx
08ad0025 +0x25:  je     08ad0048 <+0x48>
08ad0027 +0x27:  mov    0xc(%edx),%ecx
08ad002a +0x2a:  add    0x8(%edx),%ecx
08ad002d +0x2d:  cmp    %ecx,0x4(%eax)
08ad0030 +0x30:  pop    %ebp
08ad0031 +0x31:  setae  %al
08ad0034 +0x34:  ret
08ad0035 +0x35:  lea    0x0(%esi),%esi
08ad0038 +0x38:  mov    -0x4(%ecx),%edx
08ad003b +0x3b:  add    $0x1f4,%edx
08ad0041 +0x41:  jmp    08ad0022 <+0x22>
08ad0043 +0x43:  nop
08ad0044 +0x44:  lea    0x0(%esi,%eiz,1),%esi
08ad0048 +0x48:  xor    %eax,%eax
08ad004a +0x4a:  pop    %ebp
08ad004b +0x4b:  ret
08ad004c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::isEnd @ 0x8ad0000

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: bool isEnd(CompiledDNFLex * this) */

bool __thiscall CompiledDNFLex::isEnd(CompiledDNFLex *this)

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
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar1 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar1 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    if (psVar1 != (stream_t *)0x14) {
      return psVar1[-1].buffer + psVar1[-1].size <= this->offset_;
    }
  }
  return false;
}
```
