# getInputStream

`_ZN13DNFLexWrapper14getInputStreamEv`

`DNFLexWrapper::getInputStream()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace900  _ZN13DNFLexWrapper14getInputStreamEv
#           DNFLexWrapper::getInputStream()
# range [0x08ace900, 0x08ace929]
08ace900 +0x00:  push   %ebp
08ace901 +0x01:  xor    %eax,%eax
08ace903 +0x03:  mov    %esp,%ebp
08ace905 +0x05:  sub    $0x18,%esp
08ace908 +0x08:  mov    0x8(%ebp),%edx
08ace90b +0x0b:  mov    0x14(%edx),%ecx
08ace90e +0x0e:  test   %ecx,%ecx
08ace910 +0x10:  je     08ace918 <+0x18>
08ace912 +0x12:  leave
08ace913 +0x13:  ret
08ace914 +0x14:  lea    0x0(%esi,%eiz,1),%esi
08ace918 +0x18:  add    $0x18,%edx
08ace91b +0x1b:  mov    %edx,(%esp)
08ace91e +0x1e:  call   08acd280 <_ZN6DNFLex14GetInputStreamEv>  ; DNFLex::GetInputStream()
08ace923 +0x23:  mov    0x8(%eax),%eax
08ace926 +0x26:  leave
08ace927 +0x27:  ret
08ace928 +0x28:  nop
08ace929 +0x29:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::getInputStream @ 0x8ace900

/* DWARF original prototype: istream * getInputStream(DNFLexWrapper * this) */

istream * __thiscall DNFLexWrapper::getInputStream(DNFLexWrapper *this)

{
  stream_t *psVar1;
  
  if (this->lexType_ != LEX_TYPE_NORMAL) {
    return (istream *)0x0;
  }
  psVar1 = DNFLex::GetInputStream(&this->dnfLex_);
  return (psVar1->s).stream;
}
```
