# get

`_ZNK25StringResourceDelayedItem3getEPPK10CharString`

`StringResourceDelayedItem::get(CharString const**) const`

| 类 | 地址 |
|---|---|
| `StringResourceDelayedItem` | `0x08ad5302` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad5302  _ZNK25StringResourceDelayedItem3getEPPK10CharString
#           StringResourceDelayedItem::get(CharString const**) const
# range [0x08ad5302, 0x08ad5329]
08ad5302 +0x00:  push   %ebp
08ad5303 +0x01:  mov    %esp,%ebp
08ad5305 +0x03:  sub    $0x18,%esp
08ad5308 +0x06:  mov    0x8(%ebp),%eax
08ad530b +0x09:  mov    0xc(%eax),%edx
08ad530e +0x0c:  mov    0x8(%ebp),%eax
08ad5311 +0x0f:  mov    0x8(%eax),%eax
08ad5314 +0x12:  mov    0xc(%ebp),%ecx
08ad5317 +0x15:  mov    %ecx,0x8(%esp)
08ad531b +0x19:  mov    %edx,0x4(%esp)
08ad531f +0x1d:  mov    %eax,(%esp)
08ad5322 +0x20:  call   08ad4878 <_ZNK14StringResource3getEiPPK10CharString>  ; StringResource::get(int, CharString const**) const
08ad5327 +0x25:  leave
08ad5328 +0x26:  ret
08ad5329 +0x27:  nop
```

## 反编译 C

```c
// StringResourceDelayedItem::get @ 0x8ad5302

/* StringResourceDelayedItem::get(CharString const**) const */

void __thiscall StringResourceDelayedItem::get(StringResourceDelayedItem *this,CharString **param_1)

{
  StringResource::get(*(StringResource **)(this + 8),*(int *)(this + 0xc),param_1);
  return;
}
```
