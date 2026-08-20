# ~strstreambuf

`_ZNSt12strstreambufD1Ev`

`std::strstreambuf::~strstreambuf()`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086ddc50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddc50  _ZNSt12strstreambufD1Ev
#           std::strstreambuf::~strstreambuf()
# range [0x086ddc50, 0x086ddcaf]
086ddc50 +0x00:  push   %ebp
086ddc51 +0x01:  mov    %esp,%ebp
086ddc53 +0x03:  push   %ebx
086ddc54 +0x04:  sub    $0x24,%esp
086ddc57 +0x07:  mov    0x8(%ebp),%ebx
086ddc5a +0x0a:  movzbl 0x28(%ebx),%eax
086ddc5e +0x0e:  movl   $&_ZTVSt12strstreambuf+0x8,(%ebx)
086ddc64 +0x14:  test   $0x1,%al
086ddc66 +0x16:  je     086ddc6c <+0x1c>
086ddc68 +0x18:  test   $0x2,%al
086ddc6a +0x1a:  je     086ddc88 <+0x38>
086ddc6c +0x1c:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,(%ebx)
086ddc72 +0x22:  add    $0x1c,%ebx
086ddc75 +0x25:  mov    %ebx,0x8(%ebp)
086ddc78 +0x28:  add    $0x24,%esp
086ddc7b +0x2b:  pop    %ebx
086ddc7c +0x2c:  pop    %ebp
086ddc7d +0x2d:  jmp    086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086ddc82 +0x32:  lea    0x0(%esi),%esi
086ddc88 +0x38:  mov    0x4(%ebx),%eax
086ddc8b +0x3b:  mov    %ebx,(%esp)
086ddc8e +0x3e:  mov    %eax,0x4(%esp)
086ddc92 +0x42:  call   086dda00 <_ZNSt12strstreambuf7_M_freeEPc>  ; std::strstreambuf::_M_free(char*)
086ddc97 +0x47:  jmp    086ddc6c <+0x1c>
086ddc99 +0x49:  mov    %eax,-0xc(%ebp)
086ddc9c +0x4c:  mov    %ebx,(%esp)
086ddc9f +0x4f:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
086ddca4 +0x54:  mov    -0xc(%ebp),%eax
086ddca7 +0x57:  mov    %eax,(%esp)
086ddcaa +0x5a:  call   08ae3750 <_Unwind_Resume>
086ddcaf +0x5f:  nop
```

## 反编译 C

```c
// std::strstreambuf::~strstreambuf @ 0x86ddc50

/* std::strstreambuf::~strstreambuf() */

void __thiscall std::strstreambuf::~strstreambuf(strstreambuf *this)

{
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  if ((((byte)this[0x28] & 1) != 0) && (((byte)this[0x28] & 2) == 0)) {
                    /* try { // try from 086ddc92 to 086ddc96 has its CatchHandler @ 086ddc99 */
    _M_free(this,*(char **)(this + 4));
  }
  *(undefined ***)this = &PTR__streambuf_08d00368;
  locale::~locale((locale *)(this + 0x1c));
  return;
}
```
