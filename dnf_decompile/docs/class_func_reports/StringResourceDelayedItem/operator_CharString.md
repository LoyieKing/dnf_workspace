# operator CharString

`_ZNK25StringResourceDelayedItemcv10CharStringEv`

`StringResourceDelayedItem::operator CharString() const`

| 类 | 地址 |
|---|---|
| `StringResourceDelayedItem` | `0x08ad532a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad532a  _ZNK25StringResourceDelayedItemcv10CharStringEv
#           StringResourceDelayedItem::operator CharString() const
# range [0x08ad532a, 0x08ad5365]
08ad532a +0x00:  push   %ebp
08ad532b +0x01:  mov    %esp,%ebp
08ad532d +0x03:  push   %ebx
08ad532e +0x04:  sub    $0x14,%esp
08ad5331 +0x07:  mov    0x8(%ebp),%ebx
08ad5334 +0x0a:  mov    0xc(%ebp),%eax
08ad5337 +0x0d:  mov    (%eax),%eax
08ad5339 +0x0f:  test   %eax,%eax
08ad533b +0x11:  jne    08ad5348 <+0x1e>
08ad533d +0x13:  mov    0xc(%ebp),%eax
08ad5340 +0x16:  mov    %eax,(%esp)
08ad5343 +0x19:  call   08ad538a <_ZN25StringResourceDelayedItem12makeCacheStrEv>  ; StringResourceDelayedItem::makeCacheStr()
08ad5348 +0x1e:  mov    %ebx,%eax
08ad534a +0x20:  mov    0xc(%ebp),%edx
08ad534d +0x23:  add    $0x4,%edx
08ad5350 +0x26:  mov    %edx,0x4(%esp)
08ad5354 +0x2a:  mov    %eax,(%esp)
08ad5357 +0x2d:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
08ad535c +0x32:  mov    %ebx,%eax
08ad535e +0x34:  mov    %ebx,%eax
08ad5360 +0x36:  add    $0x14,%esp
08ad5363 +0x39:  pop    %ebx
08ad5364 +0x3a:  pop    %ebp
08ad5365 +0x3b:  ret    $0x4
```

## 反编译 C

```c
// StringResourceDelayedItem::operator @ 0x8ad532a

/* StringResourceDelayedItem::operator CharString() const */

CharString * __thiscall
StringResourceDelayedItem::operator_cast_to_CharString(StringResourceDelayedItem *this)

{
  StringResourceDelayedItem *in_stack_00000008;
  
  if (*(int *)in_stack_00000008 == 0) {
    makeCacheStr(in_stack_00000008);
  }
  CharString::CharString((CharString *)this,(CharString *)(in_stack_00000008 + 4));
  return (CharString *)this;
}
```
