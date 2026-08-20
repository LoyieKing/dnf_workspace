# getCurrentLayeredMapInfo

`_ZN13CBattle_Field24getCurrentLayeredMapInfoEv`

`CBattle_Field::getCurrentLayeredMapInfo()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830df66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830df66  _ZN13CBattle_Field24getCurrentLayeredMapInfoEv
#           CBattle_Field::getCurrentLayeredMapInfo()
# range [0x0830df66, 0x0830df87]
0830df66 +0x00:  push   %ebp
0830df67 +0x01:  mov    %esp,%ebp
0830df69 +0x03:  sub    $0x18,%esp
0830df6c +0x06:  mov    0x8(%ebp),%eax
0830df6f +0x09:  mov    %eax,(%esp)
0830df72 +0x0c:  call   0830df2e <_ZN13CBattle_Field18getLayeredMapIndexEv>  ; CBattle_Field::getLayeredMapIndex()
0830df77 +0x11:  mov    %eax,0x4(%esp)
0830df7b +0x15:  mov    0x8(%ebp),%eax
0830df7e +0x18:  mov    %eax,(%esp)
0830df81 +0x1b:  call   0830df88 <_ZN13CBattle_Field22getLayeredMapInfoIndexEi>  ; CBattle_Field::getLayeredMapInfoIndex(int)
0830df86 +0x20:  leave
0830df87 +0x21:  ret
```

## 反编译 C

```c
// CBattle_Field::getCurrentLayeredMapInfo @ 0x830df66

/* CBattle_Field::getCurrentLayeredMapInfo() */

void __thiscall CBattle_Field::getCurrentLayeredMapInfo(CBattle_Field *this)

{
  int iVar1;
  
  iVar1 = getLayeredMapIndex(this);
  getLayeredMapInfoIndex(this,iVar1);
  return;
}
```
