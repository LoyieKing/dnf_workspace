# getInt

`_ZN14CompiledDNFLex6getIntEPb`

`CompiledDNFLex::getInt(bool*)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acff70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acff70  _ZN14CompiledDNFLex6getIntEPb
#           CompiledDNFLex::getInt(bool*)
# range [0x08acff70, 0x08acffb9]
08acff70 +0x00:  push   %ebp
08acff71 +0x01:  mov    %esp,%ebp
08acff73 +0x03:  mov    0x8(%ebp),%edx
08acff76 +0x06:  push   %ebx
08acff77 +0x07:  mov    0xc(%ebp),%ecx
08acff7a +0x0a:  mov    0x8(%edx),%eax
08acff7d +0x0d:  lea    -0x2(%eax),%ebx
08acff80 +0x10:  cmp    $0x1,%ebx
08acff83 +0x13:  jbe    08acff98 <+0x28>
08acff85 +0x15:  cmp    $0x9,%eax
08acff88 +0x18:  je     08acff98 <+0x28>
08acff8a +0x1a:  xor    %eax,%eax
08acff8c +0x1c:  test   %ecx,%ecx
08acff8e +0x1e:  je     08acff93 <+0x23>
08acff90 +0x20:  movb   $0x0,(%ecx)
08acff93 +0x23:  pop    %ebx
08acff94 +0x24:  pop    %ebp
08acff95 +0x25:  ret
08acff96 +0x26:  xchg   %ax,%ax
08acff98 +0x28:  test   %ecx,%ecx
08acff9a +0x2a:  je     08acff9f <+0x2f>
08acff9c +0x2c:  movb   $0x1,(%ecx)
08acff9f +0x2f:  mov    0x4(%edx),%ecx
08acffa2 +0x32:  mov    (%ecx),%eax
08acffa4 +0x34:  add    $0x4,%ecx
08acffa7 +0x37:  mov    %ecx,0x4(%edx)
08acffaa +0x3a:  pop    %ebx
08acffab +0x3b:  pop    %ebp
08acffac +0x3c:  mov    %eax,&_ZZ17readIntFromBufferRPcE9intBuffer
08acffb1 +0x41:  ret
08acffb2 +0x42:  lea    0x0(%esi,%eiz,1),%esi
08acffb9 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::getInt @ 0x8acff70

/* DWARF original prototype: int getInt(CompiledDNFLex * this, bool * result) */

int __thiscall CompiledDNFLex::getInt(CompiledDNFLex *this,bool *result)

{
  if ((1 < this->lastToken_ - DNF_TOK_DECIMAL) && (this->lastToken_ != DNF_TOK_PAIR_INT)) {
    if (result != (bool *)0x0) {
      *result = false;
    }
    return 0;
  }
  if (result != (bool *)0x0) {
    *result = true;
  }
  readIntFromBuffer::lexical_block_0::intBuffer = *(int *)this->offset_;
  this->offset_ = (char *)((int)this->offset_ + 4);
  return readIntFromBuffer::lexical_block_0::intBuffer;
}
```
