# LoadStream

`_ZN14CompiledDNFLex10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE`

`CompiledDNFLex::LoadStream(char const*, char const*, DNFLex::stream_data_t*)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acfe40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acfe40  _ZN14CompiledDNFLex10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE
#           CompiledDNFLex::LoadStream(char const*, char const*, DNFLex::stream_data_t*)
# range [0x08acfe40, 0x08acfe79]
08acfe40 +0x00:  push   %ebp
08acfe41 +0x01:  mov    %esp,%ebp
08acfe43 +0x03:  push   %ebx
08acfe44 +0x04:  sub    $0x4,%esp
08acfe47 +0x07:  mov    0x8(%ebp),%eax
08acfe4a +0x0a:  mov    0xc(%ebp),%edx
08acfe4d +0x0d:  mov    0x10(%ebp),%ecx
08acfe50 +0x10:  mov    0x14(%ebp),%ebx
08acfe53 +0x13:  mov    0x2048(%eax),%eax
08acfe59 +0x19:  test   %eax,%eax
08acfe5b +0x1b:  je     08acfe70 <+0x30>
08acfe5d +0x1d:  mov    %ebx,0x10(%ebp)
08acfe60 +0x20:  mov    %ecx,0xc(%ebp)
08acfe63 +0x23:  mov    %edx,0x8(%ebp)
08acfe66 +0x26:  add    $0x4,%esp
08acfe69 +0x29:  pop    %ebx
08acfe6a +0x2a:  pop    %ebp
08acfe6b +0x2b:  jmp    *%eax
08acfe6d +0x2d:  lea    0x0(%esi),%esi
08acfe70 +0x30:  add    $0x4,%esp
08acfe73 +0x33:  pop    %ebx
08acfe74 +0x34:  pop    %ebp
08acfe75 +0x35:  ret
08acfe76 +0x36:  lea    0x0(%esi),%esi
08acfe79 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::LoadStream @ 0x8acfe40

/* DWARF original prototype: bool LoadStream(CompiledDNFLex * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall
CompiledDNFLex::LoadStream(CompiledDNFLex *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  
  if (this->LoadStream_ != (TLoadStream)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acfe6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*this->LoadStream_)(dir,filename,s);
    return bVar1;
  }
  return false;
}
```
