# checkFitInPathObject

`_ZNK4CMap20checkFitInPathObjectEii`

`CMap::checkFitInPathObject(int, int) const`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834e9a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834e9a6  _ZNK4CMap20checkFitInPathObjectEii
#           CMap::checkFitInPathObject(int, int) const
# range [0x0834e9a6, 0x0834e9d3]
0834e9a6 +0x00:  push   %ebp
0834e9a7 +0x01:  mov    %esp,%ebp
0834e9a9 +0x03:  sub    $0x18,%esp
0834e9ac +0x06:  mov    0x8(%ebp),%eax
0834e9af +0x09:  lea    0x4c(%eax),%edx
0834e9b2 +0x0c:  mov    0x8(%ebp),%eax
0834e9b5 +0x0f:  add    $0x2c,%eax
0834e9b8 +0x12:  mov    %edx,0xc(%esp)
0834e9bc +0x16:  mov    %eax,0x8(%esp)
0834e9c0 +0x1a:  mov    0x10(%ebp),%eax
0834e9c3 +0x1d:  mov    %eax,0x4(%esp)
0834e9c7 +0x21:  mov    0xc(%ebp),%eax
0834e9ca +0x24:  mov    %eax,(%esp)
0834e9cd +0x27:  call   08891f20 <_Z12isInPathAreaiiPA2_KiS1_>  ; isInPathArea(int, int, int const (*) [2], int const (*) [2])
0834e9d2 +0x2c:  leave
0834e9d3 +0x2d:  ret
```

## 反编译 C

```c
// CMap::checkFitInPathObject @ 0x834e9a6

/* CMap::checkFitInPathObject(int, int) const */

void __thiscall CMap::checkFitInPathObject(CMap *this,int param_1,int param_2)

{
  isInPathArea(param_1,param_2,(int *)(this + 0x2c),(int *)(this + 0x4c));
  return;
}
```
