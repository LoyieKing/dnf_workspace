# IsStream

`_ZNK14CompiledDNFLex8IsStreamEv`

`CompiledDNFLex::IsStream() const`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acfe80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acfe80  _ZNK14CompiledDNFLex8IsStreamEv
#           CompiledDNFLex::IsStream() const
# range [0x08acfe80, 0x08acfe99]
08acfe80 +0x00:  push   %ebp
08acfe81 +0x01:  mov    %esp,%ebp
08acfe83 +0x03:  mov    0x8(%ebp),%eax
08acfe86 +0x06:  pop    %ebp
08acfe87 +0x07:  mov    0x2030(%eax),%edx
08acfe8d +0x0d:  cmp    0x2020(%eax),%edx
08acfe93 +0x13:  setne  %al
08acfe96 +0x16:  ret
08acfe97 +0x17:  nop
08acfe98 +0x18:  nop
08acfe99 +0x19:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::IsStream @ 0x8acfe80

/* DWARF original prototype: bool IsStream(CompiledDNFLex * this) */

bool __thiscall CompiledDNFLex::IsStream(CompiledDNFLex *this)

{
  return (this->stream_stack_).c.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_cur !=
         (this->stream_stack_).c.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_cur;
}
```
