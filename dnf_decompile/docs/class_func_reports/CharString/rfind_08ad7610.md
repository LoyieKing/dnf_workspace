# rfind

`_ZNK10CharString5rfindEc`

`CharString::rfind(char) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad7610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad7610  _ZNK10CharString5rfindEc
#           CharString::rfind(char) const
# range [0x08ad7610, 0x08ad7647]
08ad7610 +0x00:  push   %ebp
08ad7611 +0x01:  mov    %esp,%ebp
08ad7613 +0x03:  push   %ebx
08ad7614 +0x04:  sub    $0x24,%esp
08ad7617 +0x07:  mov    0xc(%ebp),%eax
08ad761a +0x0a:  mov    %al,-0xc(%ebp)
08ad761d +0x0d:  movsbl -0xc(%ebp),%ebx
08ad7621 +0x11:  mov    0x8(%ebp),%eax
08ad7624 +0x14:  mov    %eax,(%esp)
08ad7627 +0x17:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad762c +0x1c:  sub    $0x1,%eax
08ad762f +0x1f:  mov    %ebx,0x8(%esp)
08ad7633 +0x23:  mov    %eax,0x4(%esp)
08ad7637 +0x27:  mov    0x8(%ebp),%eax
08ad763a +0x2a:  mov    %eax,(%esp)
08ad763d +0x2d:  call   08ad7648 <_ZNK10CharString5rfindEic>  ; CharString::rfind(int, char) const
08ad7642 +0x32:  add    $0x24,%esp
08ad7645 +0x35:  pop    %ebx
08ad7646 +0x36:  pop    %ebp
08ad7647 +0x37:  ret
```

## 反编译 C

```c
// CharString::rfind @ 0x8ad7610

/* DWARF original prototype: int32 rfind(CharString * this, char pat) */

int32 __thiscall CharString::rfind(CharString *this,char pat)

{
  int32 iVar1;
  
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 + -1,pat);
  return iVar1;
}
```
