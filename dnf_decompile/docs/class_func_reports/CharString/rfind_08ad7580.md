# rfind

`_ZNK10CharString5rfindERKS_`

`CharString::rfind(CharString const&) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad7580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad7580  _ZNK10CharString5rfindERKS_
#           CharString::rfind(CharString const&) const
# range [0x08ad7580, 0x08ad75cf]
08ad7580 +0x00:  push   %ebp
08ad7581 +0x01:  mov    %esp,%ebp
08ad7583 +0x03:  push   %ebx
08ad7584 +0x04:  sub    $0x24,%esp
08ad7587 +0x07:  mov    0xc(%ebp),%eax
08ad758a +0x0a:  mov    %eax,(%esp)
08ad758d +0x0d:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad7592 +0x12:  mov    %eax,-0xc(%ebp)
08ad7595 +0x15:  mov    0xc(%ebp),%eax
08ad7598 +0x18:  mov    %eax,(%esp)
08ad759b +0x1b:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad75a0 +0x20:  mov    %eax,%ebx
08ad75a2 +0x22:  mov    0x8(%ebp),%eax
08ad75a5 +0x25:  mov    %eax,(%esp)
08ad75a8 +0x28:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad75ad +0x2d:  sub    -0xc(%ebp),%eax
08ad75b0 +0x30:  mov    -0xc(%ebp),%edx
08ad75b3 +0x33:  mov    %edx,0xc(%esp)
08ad75b7 +0x37:  mov    %ebx,0x8(%esp)
08ad75bb +0x3b:  mov    %eax,0x4(%esp)
08ad75bf +0x3f:  mov    0x8(%ebp),%eax
08ad75c2 +0x42:  mov    %eax,(%esp)
08ad75c5 +0x45:  call   08ad74e8 <_ZNK10CharString5rfindEiPKci>  ; CharString::rfind(int, char const*, int) const
08ad75ca +0x4a:  add    $0x24,%esp
08ad75cd +0x4d:  pop    %ebx
08ad75ce +0x4e:  pop    %ebp
08ad75cf +0x4f:  ret
```

## 反编译 C

```c
// CharString::rfind @ 0x8ad7580

/* DWARF original prototype: int32 rfind(CharString * this, CharString * pat) */

int32 __thiscall CharString::rfind(CharString *this,CharString *pat)

{
  int32 iVar1;
  char *pat_00;
  int32 iVar2;
  
                    /* Unresolved local var: int32 patLength@[???] */
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar2 = length(this);
  iVar1 = rfind(this,iVar2 - iVar1,pat_00,iVar1);
  return iVar1;
}
```
