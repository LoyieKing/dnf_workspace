# clear

`_ZN10CharString5clearEv`

`CharString::clear()`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad706e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad706e  _ZN10CharString5clearEv
#           CharString::clear()
# range [0x08ad706e, 0x08ad709b]
08ad706e +0x00:  push   %ebp
08ad706f +0x01:  mov    %esp,%ebp
08ad7071 +0x03:  sub    $0x18,%esp
08ad7074 +0x06:  mov    0x8(%ebp),%eax
08ad7077 +0x09:  mov    %eax,(%esp)
08ad707a +0x0c:  call   08add284 <_ZN10WideString8isupunctEw+0x734>  ; WideString::isupunct(wchar_t)+0x734
08ad707f +0x11:  test   %al,%al
08ad7081 +0x13:  jne    08ad7099 <+0x2b>
08ad7083 +0x15:  mov    &_ZL21s_emptyCharStringData,%eax
08ad7088 +0x1a:  mov    %eax,0x4(%esp)
08ad708c +0x1e:  mov    0x8(%ebp),%eax
08ad708f +0x21:  mov    %eax,(%esp)
08ad7092 +0x24:  call   08ad7180 <_ZN10CharString11replaceDataEP14CharStringData>  ; CharString::replaceData(CharStringData*)
08ad7097 +0x29:  jmp    08ad709a <+0x2c>
08ad7099 +0x2b:  nop
08ad709a +0x2c:  leave
08ad709b +0x2d:  ret
```

## 反编译 C

```c
// CharString::clear @ 0x8ad706e

/* DWARF original prototype: void clear(CharString * this) */

void __thiscall CharString::clear(CharString *this)

{
  bool bVar1;
  
  bVar1 = isEmpty(this);
  if (!bVar1) {
    replaceData(this,s_emptyCharStringData);
  }
  return;
}
```
