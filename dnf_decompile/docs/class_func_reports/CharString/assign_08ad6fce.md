# assign

`_ZN10CharString6assignERKS_`

`CharString::assign(CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6fce  _ZN10CharString6assignERKS_
#           CharString::assign(CharString const&)
# range [0x08ad6fce, 0x08ad7019]
08ad6fce +0x00:  push   %ebp
08ad6fcf +0x01:  mov    %esp,%ebp
08ad6fd1 +0x03:  push   %ebx
08ad6fd2 +0x04:  sub    $0x14,%esp
08ad6fd5 +0x07:  mov    0x8(%ebp),%eax
08ad6fd8 +0x0a:  mov    %eax,(%esp)
08ad6fdb +0x0d:  call   08ad71bc <_ZNK10CharString7getDataEv>  ; CharString::getData() const
08ad6fe0 +0x12:  mov    %eax,%ebx
08ad6fe2 +0x14:  mov    0xc(%ebp),%eax
08ad6fe5 +0x17:  mov    %eax,(%esp)
08ad6fe8 +0x1a:  call   08ad71bc <_ZNK10CharString7getDataEv>  ; CharString::getData() const
08ad6fed +0x1f:  cmp    %eax,%ebx
08ad6fef +0x21:  sete   %al
08ad6ff2 +0x24:  test   %al,%al
08ad6ff4 +0x26:  jne    08ad7012 <+0x44>
08ad6ff6 +0x28:  mov    0xc(%ebp),%eax
08ad6ff9 +0x2b:  mov    %eax,(%esp)
08ad6ffc +0x2e:  call   08ad71bc <_ZNK10CharString7getDataEv>  ; CharString::getData() const
08ad7001 +0x33:  mov    %eax,0x4(%esp)
08ad7005 +0x37:  mov    0x8(%ebp),%eax
08ad7008 +0x3a:  mov    %eax,(%esp)
08ad700b +0x3d:  call   08ad7180 <_ZN10CharString11replaceDataEP14CharStringData>  ; CharString::replaceData(CharStringData*)
08ad7010 +0x42:  jmp    08ad7013 <+0x45>
08ad7012 +0x44:  nop
08ad7013 +0x45:  add    $0x14,%esp
08ad7016 +0x48:  pop    %ebx
08ad7017 +0x49:  pop    %ebp
08ad7018 +0x4a:  ret
08ad7019 +0x4b:  nop
```

## 反编译 C

```c
// CharString::assign @ 0x8ad6fce

/* DWARF original prototype: void assign(CharString * this, CharString * src) */

void __thiscall CharString::assign(CharString *this,CharString *src)

{
  CharStringData *pCVar1;
  CharStringData *pCVar2;
  
  pCVar1 = getData(this);
  pCVar2 = getData(src);
  if (pCVar1 != pCVar2) {
    pCVar1 = getData(src);
    replaceData(this,pCVar1);
  }
  return;
}
```
