# getFloat

`_ZN14CompiledDNFLex8getFloatEPb`

`CompiledDNFLex::getFloat(bool*)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acffc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acffc0  _ZN14CompiledDNFLex8getFloatEPb
#           CompiledDNFLex::getFloat(bool*)
# range [0x08acffc0, 0x08acfffa]
08acffc0 +0x00:  push   %ebp
08acffc1 +0x01:  mov    %esp,%ebp
08acffc3 +0x03:  mov    0x8(%ebp),%edx
08acffc6 +0x06:  mov    0xc(%ebp),%eax
08acffc9 +0x09:  cmpl   $0x4,0x8(%edx)
08acffcd +0x0d:  je     08acffe0 <+0x20>
08acffcf +0x0f:  test   %eax,%eax
08acffd1 +0x11:  je     08acffd6 <+0x16>
08acffd3 +0x13:  movb   $0x0,(%eax)
08acffd6 +0x16:  fldz
08acffd8 +0x18:  pop    %ebp
08acffd9 +0x19:  ret
08acffda +0x1a:  lea    0x0(%esi),%esi
08acffe0 +0x20:  test   %eax,%eax
08acffe2 +0x22:  je     08acffe7 <+0x27>
08acffe4 +0x24:  movb   $0x1,(%eax)
08acffe7 +0x27:  mov    0x4(%edx),%eax
08acffea +0x2a:  flds   (%eax)
08acffec +0x2c:  add    $0x4,%eax
08acffef +0x2f:  fsts   &_ZZ19readFloatFromBufferRPcE11floatBuffer
08acfff5 +0x35:  mov    %eax,0x4(%edx)
08acfff8 +0x38:  pop    %ebp
08acfff9 +0x39:  ret
08acfffa +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// CompiledDNFLex::getFloat @ 0x8acffc0

/* DWARF original prototype: float getFloat(CompiledDNFLex * this, bool * result) */

float __thiscall CompiledDNFLex::getFloat(CompiledDNFLex *this,bool *result)

{
  float fVar1;
  
  if (this->lastToken_ != DNF_TOK_FLOAT) {
    if (result != (bool *)0x0) {
      *result = false;
    }
    return 0.0;
  }
  if (result != (bool *)0x0) {
    *result = true;
  }
  fVar1 = *(float *)this->offset_;
  readFloatFromBuffer::lexical_block_0::floatBuffer = fVar1;
  this->offset_ = (char *)((int)this->offset_ + 4);
  return fVar1;
}
```
