# strstreambuf

`_ZNSt12strstreambufC1Ei`

`std::strstreambuf::strstreambuf(int)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086ddb90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddb90  _ZNSt12strstreambufC1Ei
#           std::strstreambuf::strstreambuf(int)
# range [0x086ddb90, 0x086ddc4f]
086ddb90 +0x00:  push   %ebp
086ddb91 +0x01:  mov    %esp,%ebp
086ddb93 +0x03:  push   %esi
086ddb94 +0x04:  push   %ebx
086ddb95 +0x05:  sub    $0x10,%esp
086ddb98 +0x08:  mov    0x8(%ebp),%ebx
086ddb9b +0x0b:  lea    0x1c(%ebx),%eax
086ddb9e +0x0e:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,(%ebx)
086ddba4 +0x14:  movl   $0x0,0x4(%ebx)
086ddbab +0x1b:  movl   $0x0,0x8(%ebx)
086ddbb2 +0x22:  movl   $0x0,0xc(%ebx)
086ddbb9 +0x29:  movl   $0x0,0x10(%ebx)
086ddbc0 +0x30:  movl   $0x0,0x14(%ebx)
086ddbc7 +0x37:  movl   $0x0,0x18(%ebx)
086ddbce +0x3e:  mov    %eax,(%esp)
086ddbd1 +0x41:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086ddbd6 +0x46:  movzbl 0x28(%ebx),%eax
086ddbda +0x4a:  movl   $&_ZTVSt12strstreambuf+0x8,(%ebx)
086ddbe0 +0x50:  movl   $0x0,0x20(%ebx)
086ddbe7 +0x57:  movl   $0x0,0x24(%ebx)
086ddbee +0x5e:  or     $0x1,%eax
086ddbf1 +0x61:  and    $0xfffffff9,%eax
086ddbf4 +0x64:  mov    %al,0x28(%ebx)
086ddbf7 +0x67:  mov    0xc(%ebp),%esi
086ddbfa +0x6a:  cmp    $0xf,%esi
086ddbfd +0x6d:  jg     086ddc04 <+0x74>
086ddbff +0x6f:  mov    $0x10,%esi
086ddc04 +0x74:  mov    %esi,0x4(%esp)
086ddc08 +0x78:  mov    %ebx,(%esp)
086ddc0b +0x7b:  call   086dda40 <_ZNSt12strstreambuf8_M_allocEj>  ; std::strstreambuf::_M_alloc(unsigned int)
086ddc10 +0x80:  test   %eax,%eax
086ddc12 +0x82:  je     086ddc29 <+0x99>
086ddc14 +0x84:  lea    (%eax,%esi,1),%esi
086ddc17 +0x87:  mov    %eax,0x14(%ebx)
086ddc1a +0x8a:  mov    %eax,0x10(%ebx)
086ddc1d +0x8d:  mov    %esi,0x18(%ebx)
086ddc20 +0x90:  mov    %eax,0x4(%ebx)
086ddc23 +0x93:  mov    %eax,0x8(%ebx)
086ddc26 +0x96:  mov    %eax,0xc(%ebx)
086ddc29 +0x99:  add    $0x10,%esp
086ddc2c +0x9c:  pop    %ebx
086ddc2d +0x9d:  pop    %esi
086ddc2e +0x9e:  pop    %ebp
086ddc2f +0x9f:  ret
086ddc30 +0xa0:  mov    %eax,%esi
086ddc32 +0xa2:  mov    %ebx,(%esp)
086ddc35 +0xa5:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
086ddc3a +0xaa:  mov    %esi,(%esp)
086ddc3d +0xad:  call   08ae3750 <_Unwind_Resume>
086ddc42 +0xb2:  nop
086ddc43 +0xb3:  nop
086ddc44 +0xb4:  nop
086ddc45 +0xb5:  nop
086ddc46 +0xb6:  nop
086ddc47 +0xb7:  nop
086ddc48 +0xb8:  nop
086ddc49 +0xb9:  nop
086ddc4a +0xba:  nop
086ddc4b +0xbb:  nop
086ddc4c +0xbc:  nop
086ddc4d +0xbd:  nop
086ddc4e +0xbe:  nop
086ddc4f +0xbf:  nop
```

## 反编译 C

```c
// std::strstreambuf::strstreambuf @ 0x86ddb90

/* std::strstreambuf::strstreambuf(int) */

void __thiscall std::strstreambuf::strstreambuf(strstreambuf *this,int param_1)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xf9 | 1);
  if (param_1 < 0x10) {
    param_1 = 0x10;
  }
                    /* try { // try from 086ddc0b to 086ddc0f has its CatchHandler @ 086ddc30 */
  iVar1 = _M_alloc(this,param_1);
  if (iVar1 != 0) {
    *(int *)(this + 0x14) = iVar1;
    *(int *)(this + 0x10) = iVar1;
    *(int *)(this + 0x18) = iVar1 + param_1;
    *(int *)(this + 4) = iVar1;
    *(int *)(this + 8) = iVar1;
    *(int *)(this + 0xc) = iVar1;
  }
  return;
}
```
