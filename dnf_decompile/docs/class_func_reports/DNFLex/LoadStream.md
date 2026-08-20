# LoadStream

`_ZN6DNFLex10LoadStreamEPKcS1_PNS_13stream_data_tE`

`DNFLex::LoadStream(char const*, char const*, DNFLex::stream_data_t*)`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd220  _ZN6DNFLex10LoadStreamEPKcS1_PNS_13stream_data_tE
#           DNFLex::LoadStream(char const*, char const*, DNFLex::stream_data_t*)
# range [0x08acd220, 0x08acd259]
08acd220 +0x00:  push   %ebp
08acd221 +0x01:  mov    %esp,%ebp
08acd223 +0x03:  push   %ebx
08acd224 +0x04:  sub    $0x4,%esp
08acd227 +0x07:  mov    0x8(%ebp),%eax
08acd22a +0x0a:  mov    0xc(%ebp),%edx
08acd22d +0x0d:  mov    0x10(%ebp),%ecx
08acd230 +0x10:  mov    0x14(%ebp),%ebx
08acd233 +0x13:  mov    0x40a0(%eax),%eax
08acd239 +0x19:  test   %eax,%eax
08acd23b +0x1b:  je     08acd250 <+0x30>
08acd23d +0x1d:  mov    %ebx,0x10(%ebp)
08acd240 +0x20:  mov    %ecx,0xc(%ebp)
08acd243 +0x23:  mov    %edx,0x8(%ebp)
08acd246 +0x26:  add    $0x4,%esp
08acd249 +0x29:  pop    %ebx
08acd24a +0x2a:  pop    %ebp
08acd24b +0x2b:  jmp    *%eax
08acd24d +0x2d:  lea    0x0(%esi),%esi
08acd250 +0x30:  add    $0x4,%esp
08acd253 +0x33:  pop    %ebx
08acd254 +0x34:  pop    %ebp
08acd255 +0x35:  ret
08acd256 +0x36:  lea    0x0(%esi),%esi
08acd259 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLex::LoadStream @ 0x8acd220

/* DWARF original prototype: bool LoadStream(DNFLex * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall DNFLex::LoadStream(DNFLex *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  
  if (this->LoadStream_ != (TLoadStream)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acd24b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*this->LoadStream_)(dir,filename,s);
    return bVar1;
  }
  return false;
}
```
