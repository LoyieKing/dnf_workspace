# rfind

`_ZNK10CharString5rfindEiRKS_`

`CharString::rfind(int, CharString const&) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad75d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad75d0  _ZNK10CharString5rfindEiRKS_
#           CharString::rfind(int, CharString const&) const
# range [0x08ad75d0, 0x08ad760f]
08ad75d0 +0x00:  push   %ebp
08ad75d1 +0x01:  mov    %esp,%ebp
08ad75d3 +0x03:  push   %ebx
08ad75d4 +0x04:  sub    $0x14,%esp
08ad75d7 +0x07:  mov    0x10(%ebp),%eax
08ad75da +0x0a:  mov    %eax,(%esp)
08ad75dd +0x0d:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad75e2 +0x12:  mov    %eax,%ebx
08ad75e4 +0x14:  mov    0x10(%ebp),%eax
08ad75e7 +0x17:  mov    %eax,(%esp)
08ad75ea +0x1a:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad75ef +0x1f:  mov    %ebx,0xc(%esp)
08ad75f3 +0x23:  mov    %eax,0x8(%esp)
08ad75f7 +0x27:  mov    0xc(%ebp),%eax
08ad75fa +0x2a:  mov    %eax,0x4(%esp)
08ad75fe +0x2e:  mov    0x8(%ebp),%eax
08ad7601 +0x31:  mov    %eax,(%esp)
08ad7604 +0x34:  call   08ad74e8 <_ZNK10CharString5rfindEiPKci>  ; CharString::rfind(int, char const*, int) const
08ad7609 +0x39:  add    $0x14,%esp
08ad760c +0x3c:  pop    %ebx
08ad760d +0x3d:  pop    %ebp
08ad760e +0x3e:  ret
08ad760f +0x3f:  nop
```

## 反编译 C

```c
// CharString::rfind @ 0x8ad75d0

/* DWARF original prototype: int32 rfind(CharString * this, int32 pos, CharString * pat) */

int32 __thiscall CharString::rfind(CharString *this,int32 pos,CharString *pat)

{
  int32 iVar1;
  char *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = rfind(this,pos,pat_00,iVar1);
  return iVar1;
}
```
