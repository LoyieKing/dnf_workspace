# find

`_ZNK10CharString4findEPKc`

`CharString::find(char const*) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad71ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad71ca  _ZNK10CharString4findEPKc
#           CharString::find(char const*) const
# range [0x08ad71ca, 0x08ad71fb]
08ad71ca +0x00:  push   %ebp
08ad71cb +0x01:  mov    %esp,%ebp
08ad71cd +0x03:  sub    $0x18,%esp
08ad71d0 +0x06:  mov    0xc(%ebp),%eax
08ad71d3 +0x09:  mov    %eax,(%esp)
08ad71d6 +0x0c:  call   0807e3b0 <_init+0xca8>
08ad71db +0x11:  mov    %eax,0xc(%esp)
08ad71df +0x15:  mov    0xc(%ebp),%eax
08ad71e2 +0x18:  mov    %eax,0x8(%esp)
08ad71e6 +0x1c:  movl   $0x0,0x4(%esp)
08ad71ee +0x24:  mov    0x8(%ebp),%eax
08ad71f1 +0x27:  mov    %eax,(%esp)
08ad71f4 +0x2a:  call   08ad7256 <_ZNK10CharString4findEiPKci>  ; CharString::find(int, char const*, int) const
08ad71f9 +0x2f:  leave
08ad71fa +0x30:  ret
08ad71fb +0x31:  nop
```

## 反编译 C

```c
// CharString::find @ 0x8ad71ca

/* DWARF original prototype: int32 find(CharString * this, char * pat) */

int32 __thiscall CharString::find(CharString *this,char *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = strlen(pat);
  iVar1 = find(this,0,pat,patLength);
  return iVar1;
}
```
