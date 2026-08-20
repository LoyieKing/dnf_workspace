# find

`_ZNK10CharString4findEiPKc`

`CharString::find(int, char const*) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad71fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad71fc  _ZNK10CharString4findEiPKc
#           CharString::find(int, char const*) const
# range [0x08ad71fc, 0x08ad722b]
08ad71fc +0x00:  push   %ebp
08ad71fd +0x01:  mov    %esp,%ebp
08ad71ff +0x03:  sub    $0x18,%esp
08ad7202 +0x06:  mov    0x10(%ebp),%eax
08ad7205 +0x09:  mov    %eax,(%esp)
08ad7208 +0x0c:  call   0807e3b0 <_init+0xca8>
08ad720d +0x11:  mov    %eax,0xc(%esp)
08ad7211 +0x15:  mov    0x10(%ebp),%eax
08ad7214 +0x18:  mov    %eax,0x8(%esp)
08ad7218 +0x1c:  mov    0xc(%ebp),%eax
08ad721b +0x1f:  mov    %eax,0x4(%esp)
08ad721f +0x23:  mov    0x8(%ebp),%eax
08ad7222 +0x26:  mov    %eax,(%esp)
08ad7225 +0x29:  call   08ad7256 <_ZNK10CharString4findEiPKci>  ; CharString::find(int, char const*, int) const
08ad722a +0x2e:  leave
08ad722b +0x2f:  ret
```

## 反编译 C

```c
// CharString::find @ 0x8ad71fc

/* DWARF original prototype: int32 find(CharString * this, int32 pos, char * pat) */

int32 __thiscall CharString::find(CharString *this,int32 pos,char *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = strlen(pat);
  iVar1 = find(this,pos,pat,patLength);
  return iVar1;
}
```
