# LoadStream

`_ZN13DNFLexWrapper10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE`

`DNFLexWrapper::LoadStream(char const*, char const*, DNFLex::stream_data_t*)`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace2b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace2b0  _ZN13DNFLexWrapper10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE
#           DNFLexWrapper::LoadStream(char const*, char const*, DNFLex::stream_data_t*)
# range [0x08ace2b0, 0x08ace2e9]
08ace2b0 +0x00:  push   %ebp
08ace2b1 +0x01:  mov    %esp,%ebp
08ace2b3 +0x03:  push   %ebx
08ace2b4 +0x04:  sub    $0x4,%esp
08ace2b7 +0x07:  mov    0x8(%ebp),%eax
08ace2ba +0x0a:  mov    0xc(%ebp),%edx
08ace2bd +0x0d:  mov    0x10(%ebp),%ecx
08ace2c0 +0x10:  mov    0x14(%ebp),%ebx
08ace2c3 +0x13:  mov    0x610c(%eax),%eax
08ace2c9 +0x19:  test   %eax,%eax
08ace2cb +0x1b:  je     08ace2e0 <+0x30>
08ace2cd +0x1d:  mov    %ebx,0x10(%ebp)
08ace2d0 +0x20:  mov    %ecx,0xc(%ebp)
08ace2d3 +0x23:  mov    %edx,0x8(%ebp)
08ace2d6 +0x26:  add    $0x4,%esp
08ace2d9 +0x29:  pop    %ebx
08ace2da +0x2a:  pop    %ebp
08ace2db +0x2b:  jmp    *%eax
08ace2dd +0x2d:  lea    0x0(%esi),%esi
08ace2e0 +0x30:  add    $0x4,%esp
08ace2e3 +0x33:  pop    %ebx
08ace2e4 +0x34:  pop    %ebp
08ace2e5 +0x35:  ret
08ace2e6 +0x36:  lea    0x0(%esi),%esi
08ace2e9 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLexWrapper::LoadStream @ 0x8ace2b0

/* DWARF original prototype: bool LoadStream(DNFLexWrapper * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall
DNFLexWrapper::LoadStream(DNFLexWrapper *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  
  if (this->LoadStream_ != (TLoadStream)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08ace2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*this->LoadStream_)(dir,filename,s);
    return bVar1;
  }
  return false;
}
```
