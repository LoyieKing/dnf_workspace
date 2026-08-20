# getStr

`_ZN14CompiledDNFLex6getStrERSs`

`CompiledDNFLex::getStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad00d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad00d0  _ZN14CompiledDNFLex6getStrERSs
#           CompiledDNFLex::getStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x08ad00d0, 0x08ad0129]
08ad00d0 +0x00:  push   %ebp
08ad00d1 +0x01:  mov    %esp,%ebp
08ad00d3 +0x03:  sub    $0x18,%esp
08ad00d6 +0x06:  mov    0x8(%ebp),%edx
08ad00d9 +0x09:  mov    0x8(%edx),%eax
08ad00dc +0x0c:  lea    -0x2(%eax),%ecx
08ad00df +0x0f:  cmp    $0x1,%ecx
08ad00e2 +0x12:  jbe    08ad00e9 <+0x19>
08ad00e4 +0x14:  cmp    $0x9,%eax
08ad00e7 +0x17:  jne    08ad00f0 <+0x20>
08ad00e9 +0x19:  xor    %eax,%eax
08ad00eb +0x1b:  leave
08ad00ec +0x1c:  ret
08ad00ed +0x1d:  lea    0x0(%esi),%esi
08ad00f0 +0x20:  cmp    $0x4,%eax
08ad00f3 +0x23:  je     08ad00e9 <+0x19>
08ad00f5 +0x25:  test   %eax,%eax
08ad00f7 +0x27:  je     08ad00e9 <+0x19>
08ad00f9 +0x29:  cmp    $0x1,%eax
08ad00fc +0x2c:  je     08ad00e9 <+0x19>
08ad00fe +0x2e:  mov    0x4(%edx),%ecx
08ad0101 +0x31:  mov    (%ecx),%eax
08ad0103 +0x33:  add    $0x4,%ecx
08ad0106 +0x36:  mov    %ecx,0x4(%edx)
08ad0109 +0x39:  mov    0xc(%ebp),%ecx
08ad010c +0x3c:  mov    %eax,0x4(%esp)
08ad0110 +0x40:  mov    %ecx,0x8(%esp)
08ad0114 +0x44:  mov    %eax,&_ZZ17readIntFromBufferRPcE9intBuffer
08ad0119 +0x49:  mov    0x10(%edx),%eax
08ad011c +0x4c:  mov    %eax,(%esp)
08ad011f +0x4f:  call   08acf160 <_ZNK19ScriptStringManager9getStringEiPSs>  ; ScriptStringManager::getString(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const
08ad0124 +0x54:  leave
08ad0125 +0x55:  ret
08ad0126 +0x56:  lea    0x0(%esi),%esi
08ad0129 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::getStr @ 0x8ad00d0

/* DWARF original prototype: bool getStr(CompiledDNFLex * this, string * stringBuffer) */

bool __thiscall CompiledDNFLex::getStr(CompiledDNFLex *this,string *stringBuffer)

{
  DNFLEX_TOKEN DVar1;
  bool bVar2;
  
                    /* Unresolved local var: bool useStringTable@[???] */
  DVar1 = this->lastToken_;
  if ((((1 < DVar1 - DNF_TOK_DECIMAL) && (DVar1 != DNF_TOK_PAIR_INT)) && (DVar1 != DNF_TOK_FLOAT))
     && ((DVar1 != DNF_TOK_EOF && (DVar1 != DNF_TOK_ERROR)))) {
                    /* Unresolved local var: int index@[???] */
    readIntFromBuffer::lexical_block_0::intBuffer = *(int *)this->offset_;
    this->offset_ = (char *)((int)this->offset_ + 4);
    bVar2 = ScriptStringManager::getString
                      (this->stringManager_,readIntFromBuffer::lexical_block_0::intBuffer,
                       stringBuffer);
    return bVar2;
  }
  return false;
}
```
