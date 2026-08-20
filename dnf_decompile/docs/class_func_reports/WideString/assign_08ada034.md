# assign

`_ZN10WideString6assignERKS_`

`WideString::assign(WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada034` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada034  _ZN10WideString6assignERKS_
#           WideString::assign(WideString const&)
# range [0x08ada034, 0x08ada07f]
08ada034 +0x00:  push   %ebp
08ada035 +0x01:  mov    %esp,%ebp
08ada037 +0x03:  push   %ebx
08ada038 +0x04:  sub    $0x14,%esp
08ada03b +0x07:  mov    0x8(%ebp),%eax
08ada03e +0x0a:  mov    %eax,(%esp)
08ada041 +0x0d:  call   08ada214 <_ZNK10WideString7getDataEv>  ; WideString::getData() const
08ada046 +0x12:  mov    %eax,%ebx
08ada048 +0x14:  mov    0xc(%ebp),%eax
08ada04b +0x17:  mov    %eax,(%esp)
08ada04e +0x1a:  call   08ada214 <_ZNK10WideString7getDataEv>  ; WideString::getData() const
08ada053 +0x1f:  cmp    %eax,%ebx
08ada055 +0x21:  sete   %al
08ada058 +0x24:  test   %al,%al
08ada05a +0x26:  jne    08ada078 <+0x44>
08ada05c +0x28:  mov    0xc(%ebp),%eax
08ada05f +0x2b:  mov    %eax,(%esp)
08ada062 +0x2e:  call   08ada214 <_ZNK10WideString7getDataEv>  ; WideString::getData() const
08ada067 +0x33:  mov    %eax,0x4(%esp)
08ada06b +0x37:  mov    0x8(%ebp),%eax
08ada06e +0x3a:  mov    %eax,(%esp)
08ada071 +0x3d:  call   08ada1d8 <_ZN10WideString11replaceDataEP14WideStringData>  ; WideString::replaceData(WideStringData*)
08ada076 +0x42:  jmp    08ada079 <+0x45>
08ada078 +0x44:  nop
08ada079 +0x45:  add    $0x14,%esp
08ada07c +0x48:  pop    %ebx
08ada07d +0x49:  pop    %ebp
08ada07e +0x4a:  ret
08ada07f +0x4b:  nop
```

## 反编译 C

```c
// WideString::assign @ 0x8ada034

/* DWARF original prototype: void assign(WideString * this, WideString * src) */

void __thiscall WideString::assign(WideString *this,WideString *src)

{
  WideStringData *pWVar1;
  WideStringData *pWVar2;
  
  pWVar1 = getData(this);
  pWVar2 = getData(src);
  if (pWVar1 != pWVar2) {
    pWVar1 = getData(src);
    replaceData(this,pWVar1);
  }
  return;
}
```
