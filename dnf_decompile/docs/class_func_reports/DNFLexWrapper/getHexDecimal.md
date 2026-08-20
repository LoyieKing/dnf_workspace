# getHexDecimal

`_ZN13DNFLexWrapper13getHexDecimalEv`

`DNFLexWrapper::getHexDecimal()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace780  _ZN13DNFLexWrapper13getHexDecimalEv
#           DNFLexWrapper::getHexDecimal()
# range [0x08ace780, 0x08ace7d9]
08ace780 +0x00:  push   %ebp
08ace781 +0x01:  mov    %esp,%ebp
08ace783 +0x03:  sub    $0x28,%esp
08ace786 +0x06:  mov    0x8(%ebp),%ecx
08ace789 +0x09:  mov    0x14(%ecx),%edx
08ace78c +0x0c:  test   %edx,%edx
08ace78e +0x0e:  je     08ace7a8 <+0x28>
08ace790 +0x10:  xor    %eax,%eax
08ace792 +0x12:  cmp    $0x1,%edx
08ace795 +0x15:  je     08ace7a0 <+0x20>
08ace797 +0x17:  leave
08ace798 +0x18:  ret
08ace799 +0x19:  lea    0x0(%esi,%eiz,1),%esi
08ace7a0 +0x20:  mov    0x8(%ecx),%eax
08ace7a3 +0x23:  leave
08ace7a4 +0x24:  ret
08ace7a5 +0x25:  lea    0x0(%esi),%esi
08ace7a8 +0x28:  lea    -0xc(%ebp),%eax
08ace7ab +0x2b:  mov    %eax,0x8(%esp)
08ace7af +0x2f:  movl   $"%x",0x4(%esp)
08ace7b7 +0x37:  mov    0x1c(%ecx),%eax
08ace7ba +0x3a:  movl   $0x0,-0xc(%ebp)
08ace7c1 +0x41:  add    $0x2,%eax
08ace7c4 +0x44:  mov    %eax,(%esp)
08ace7c7 +0x47:  call   0807d9e0 <_init+0x2d8>
08ace7cc +0x4c:  mov    -0xc(%ebp),%eax
08ace7cf +0x4f:  leave
08ace7d0 +0x50:  ret
08ace7d1 +0x51:  nop
08ace7d2 +0x52:  lea    0x0(%esi,%eiz,1),%esi
08ace7d9 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLexWrapper::getHexDecimal @ 0x8ace780

/* DWARF original prototype: int getHexDecimal(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getHexDecimal(DNFLexWrapper *this)

{
  int local_10 [3];
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
                    /* Unresolved local var: int rval@[???] */
    local_10[0] = 0;
    sscanf((this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext + 2,"%x",local_10);
    return local_10[0];
  }
  if (this->lexType_ != LEX_TYPE_COMPILED) {
    return 0;
  }
  return this->lastIntValue_;
}
```
