# ignore

`_ZNSt13basic_istreamIwSt11char_traitsIwEE6ignoreEij`

`std::basic_istream<wchar_t, std::char_traits<wchar_t> >::ignore(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::basic_istream<wchar_t, std::char_traits<wchar_t> >` | `0x086e7a10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e7a10  _ZNSt13basic_istreamIwSt11char_traitsIwEE6ignoreEij
#           std::basic_istream<wchar_t, std::char_traits<wchar_t> >::ignore(int, unsigned int)
# range [0x086e7a10, 0x086e7c7f]
086e7a10 +0x000:  push   %ebp
086e7a11 +0x001:  mov    %esp,%ebp
086e7a13 +0x003:  push   %edi
086e7a14 +0x004:  push   %esi
086e7a15 +0x005:  push   %ebx
086e7a16 +0x006:  sub    $0x3c,%esp
086e7a19 +0x009:  cmpl   $0xffffffff,0x10(%ebp)
086e7a1d +0x00d:  je     086e7b8c <+0x17c>
086e7a23 +0x013:  mov    0x8(%ebp),%ecx
086e7a26 +0x016:  lea    -0x19(%ebp),%eax
086e7a29 +0x019:  movl   $0x0,0x4(%ecx)
086e7a30 +0x020:  movl   $0x1,0x8(%esp)
086e7a38 +0x028:  mov    %ecx,0x4(%esp)
086e7a3c +0x02c:  mov    %eax,(%esp)
086e7a3f +0x02f:  call   086e2f70 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2ed0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2ed0
086e7a44 +0x034:  cmpb   $0x0,-0x19(%ebp)
086e7a48 +0x038:  je     086e7b20 <+0x110>
086e7a4e +0x03e:  mov    0xc(%ebp),%ebx
086e7a51 +0x041:  test   %ebx,%ebx
086e7a53 +0x043:  jle    086e7b20 <+0x110>
086e7a59 +0x049:  mov    0x8(%ebp),%edx
086e7a5c +0x04c:  mov    (%edx),%eax
086e7a5e +0x04e:  mov    -0xc(%eax),%eax
086e7a61 +0x051:  mov    0x7c(%edx,%eax,1),%ebx
086e7a65 +0x055:  mov    0x8(%ebx),%eax
086e7a68 +0x058:  cmp    0xc(%ebx),%eax
086e7a6b +0x05b:  jae    086e7c3c <+0x22c>
086e7a71 +0x061:  mov    (%eax),%eax
086e7a73 +0x063:  mov    0x8(%ebp),%ecx
086e7a76 +0x066:  movb   $0x0,-0x29(%ebp)
086e7a7a +0x06a:  mov    0x4(%ecx),%edx
086e7a7d +0x06d:  lea    0x0(%esi),%esi
086e7a80 +0x070:  cmp    %edx,0xc(%ebp)
086e7a83 +0x073:  jle    086e7af4 <+0xe4>
086e7a85 +0x075:  cmp    $0xffffffff,%eax
086e7a88 +0x078:  je     086e7af4 <+0xe4>
086e7a8a +0x07a:  cmp    %eax,0x10(%ebp)
086e7a8d +0x07d:  je     086e7af4 <+0xe4>
086e7a8f +0x07f:  mov    0x8(%ebx),%edi
086e7a92 +0x082:  mov    0xc(%ebx),%eax
086e7a95 +0x085:  mov    0xc(%ebp),%esi
086e7a98 +0x088:  sub    %edi,%eax
086e7a9a +0x08a:  sar    $0x2,%eax
086e7a9d +0x08d:  sub    %edx,%esi
086e7a9f +0x08f:  cmp    %eax,%esi
086e7aa1 +0x091:  jle    086e7aa5 <+0x95>
086e7aa3 +0x093:  mov    %eax,%esi
086e7aa5 +0x095:  cmp    $0x1,%esi
086e7aa8 +0x098:  jle    086e7b58 <+0x148>
086e7aae +0x09e:  mov    0x10(%ebp),%eax
086e7ab1 +0x0a1:  mov    %esi,0x8(%esp)
086e7ab5 +0x0a5:  mov    %edi,(%esp)
086e7ab8 +0x0a8:  mov    %esi,-0x30(%ebp)
086e7abb +0x0ab:  mov    %eax,0x4(%esp)
086e7abf +0x0af:  call   0807e4b0 <_init+0xda8>
086e7ac4 +0x0b4:  mov    %esi,%edx
086e7ac6 +0x0b6:  test   %eax,%eax
086e7ac8 +0x0b8:  je     086e7ad3 <+0xc3>
086e7aca +0x0ba:  mov    %eax,%esi
086e7acc +0x0bc:  sub    %edi,%esi
086e7ace +0x0be:  sar    $0x2,%esi
086e7ad1 +0x0c1:  mov    %esi,%edx
086e7ad3 +0x0c3:  mov    0x8(%ebp),%ecx
086e7ad6 +0x0c6:  lea    (%edi,%edx,4),%eax
086e7ad9 +0x0c9:  mov    %esi,%edx
086e7adb +0x0cb:  mov    %eax,0x8(%ebx)
086e7ade +0x0ce:  add    0x4(%ecx),%edx
086e7ae1 +0x0d1:  cmp    0xc(%ebx),%eax
086e7ae4 +0x0d4:  mov    %edx,0x4(%ecx)
086e7ae7 +0x0d7:  jae    086e7bfc <+0x1ec>
086e7aed +0x0dd:  cmp    %edx,0xc(%ebp)
086e7af0 +0x0e0:  mov    (%eax),%eax
086e7af2 +0x0e2:  jg     086e7a85 <+0x75>
086e7af4 +0x0e4:  cmpl   $0x7fffffff,0xc(%ebp)
086e7afb +0x0eb:  je     086e7b30 <+0x120>
086e7afd +0x0ed:  cmpb   $0x0,-0x29(%ebp)
086e7b01 +0x0f1:  jne    086e7bac <+0x19c>
086e7b07 +0x0f7:  cmp    $0xffffffff,%eax
086e7b0a +0x0fa:  je     086e7bdb <+0x1cb>
086e7b10 +0x100:  cmp    %eax,0x10(%ebp)
086e7b13 +0x103:  je     086e7bbb <+0x1ab>
086e7b19 +0x109:  lea    0x0(%esi,%eiz,1),%esi
086e7b20 +0x110:  mov    0x8(%ebp),%eax
086e7b23 +0x113:  add    $0x3c,%esp
086e7b26 +0x116:  pop    %ebx
086e7b27 +0x117:  pop    %esi
086e7b28 +0x118:  pop    %edi
086e7b29 +0x119:  pop    %ebp
086e7b2a +0x11a:  ret
086e7b2b +0x11b:  nop
086e7b2c +0x11c:  lea    0x0(%esi,%eiz,1),%esi
086e7b30 +0x120:  cmp    $0xffffffff,%eax
086e7b33 +0x123:  je     086e7afd <+0xed>
086e7b35 +0x125:  cmp    %eax,0x10(%ebp)
086e7b38 +0x128:  je     086e7afd <+0xed>
086e7b3a +0x12a:  mov    0x8(%ebp),%edx
086e7b3d +0x12d:  movb   $0x1,-0x29(%ebp)
086e7b41 +0x131:  movl   $0x80000000,0x4(%edx)
086e7b48 +0x138:  mov    $0x80000000,%edx
086e7b4d +0x13d:  jmp    086e7a80 <+0x70>
086e7b52 +0x142:  lea    0x0(%esi),%esi
086e7b58 +0x148:  mov    0x8(%ebp),%eax
086e7b5b +0x14b:  add    $0x1,%edx
086e7b5e +0x14e:  cmp    0xc(%ebx),%edi
086e7b61 +0x151:  mov    %edx,0x4(%eax)
086e7b64 +0x154:  jae    086e7c2f <+0x21f>
086e7b6a +0x15a:  mov    (%edi),%eax
086e7b6c +0x15c:  add    $0x4,%edi
086e7b6f +0x15f:  mov    %edi,0x8(%ebx)
086e7b72 +0x162:  cmp    $0xffffffff,%eax
086e7b75 +0x165:  je     086e7b81 <+0x171>
086e7b77 +0x167:  mov    0x8(%ebx),%eax
086e7b7a +0x16a:  cmp    0xc(%ebx),%eax
086e7b7d +0x16d:  jae    086e7bfc <+0x1ec>
086e7b7f +0x16f:  mov    (%eax),%eax
086e7b81 +0x171:  mov    0x8(%ebp),%ecx
086e7b84 +0x174:  mov    0x4(%ecx),%edx
086e7b87 +0x177:  jmp    086e7a80 <+0x70>
086e7b8c +0x17c:  mov    0xc(%ebp),%eax
086e7b8f +0x17f:  mov    0x8(%ebp),%edx
086e7b92 +0x182:  mov    %eax,0x4(%esp)
086e7b96 +0x186:  mov    %edx,(%esp)
086e7b99 +0x189:  call   08726470 <_ZNSt13basic_istreamIwSt11char_traitsIwEE6ignoreEi>  ; std::basic_istream<wchar_t, std::char_traits<wchar_t> >::ignore(int)
086e7b9e +0x18e:  mov    %eax,0x8(%ebp)
086e7ba1 +0x191:  mov    0x8(%ebp),%eax
086e7ba4 +0x194:  add    $0x3c,%esp
086e7ba7 +0x197:  pop    %ebx
086e7ba8 +0x198:  pop    %esi
086e7ba9 +0x199:  pop    %edi
086e7baa +0x19a:  pop    %ebp
086e7bab +0x19b:  ret
086e7bac +0x19c:  mov    0x8(%ebp),%ecx
086e7baf +0x19f:  movl   $0x7fffffff,0x4(%ecx)
086e7bb6 +0x1a6:  jmp    086e7b07 <+0xf7>
086e7bbb +0x1ab:  mov    0x8(%ebp),%edx
086e7bbe +0x1ae:  mov    0x4(%edx),%eax
086e7bc1 +0x1b1:  cmp    $0x7fffffff,%eax
086e7bc6 +0x1b6:  je     086e7bce <+0x1be>
086e7bc8 +0x1b8:  add    $0x1,%eax
086e7bcb +0x1bb:  mov    %eax,0x4(%edx)
086e7bce +0x1be:  mov    %ebx,(%esp)
086e7bd1 +0x1c1:  call   08705e40 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x115d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x115d4
086e7bd6 +0x1c6:  jmp    086e7b20 <+0x110>
086e7bdb +0x1cb:  mov    0x8(%ebp),%ecx
086e7bde +0x1ce:  mov    (%ecx),%eax
086e7be0 +0x1d0:  mov    -0xc(%eax),%edx
086e7be3 +0x1d3:  add    %ecx,%edx
086e7be5 +0x1d5:  mov    0x14(%edx),%eax
086e7be8 +0x1d8:  mov    %edx,(%esp)
086e7beb +0x1db:  or     $0x2,%eax
086e7bee +0x1de:  mov    %eax,0x4(%esp)
086e7bf2 +0x1e2:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
086e7bf7 +0x1e7:  jmp    086e7b20 <+0x110>
086e7bfc +0x1ec:  mov    (%ebx),%eax
086e7bfe +0x1ee:  mov    %ebx,(%esp)
086e7c01 +0x1f1:  call   *0x24(%eax)
086e7c04 +0x1f4:  jmp    086e7b81 <+0x171>
086e7c09 +0x1f9:  cmp    $0x2,%edx
086e7c0c +0x1fc:  je     086e7c58 <+0x248>
086e7c0e +0x1fe:  mov    %eax,(%esp)
086e7c11 +0x201:  call   08725ce0 <__cxa_begin_catch>
086e7c16 +0x206:  mov    0x8(%ebp),%edx
086e7c19 +0x209:  mov    (%edx),%eax
086e7c1b +0x20b:  mov    -0xc(%eax),%eax
086e7c1e +0x20e:  add    %edx,%eax
086e7c20 +0x210:  call   086e73f0 <_ZNSt9basic_iosIwSt11char_traitsIwEE11_M_setstateESt12_Ios_Iostate.clone.4>  ; std::basic_ios<wchar_t, std::char_traits<wchar_t> >::_M_setstate(std::_Ios_Iostate) [clone .clone.4]
086e7c25 +0x215:  call   08725c30 <__cxa_end_catch>
086e7c2a +0x21a:  jmp    086e7b20 <+0x110>
086e7c2f +0x21f:  mov    (%ebx),%eax
086e7c31 +0x221:  mov    %ebx,(%esp)
086e7c34 +0x224:  call   *0x28(%eax)
086e7c37 +0x227:  jmp    086e7b72 <+0x162>
086e7c3c +0x22c:  mov    (%ebx),%eax
086e7c3e +0x22e:  mov    %ebx,(%esp)
086e7c41 +0x231:  call   *0x24(%eax)
086e7c44 +0x234:  jmp    086e7a73 <+0x63>
086e7c49 +0x239:  mov    %eax,%ebx
086e7c4b +0x23b:  call   08725c30 <__cxa_end_catch>
086e7c50 +0x240:  mov    %ebx,(%esp)
086e7c53 +0x243:  call   08ae3750 <_Unwind_Resume>
086e7c58 +0x248:  mov    %eax,(%esp)
086e7c5b +0x24b:  call   08725ce0 <__cxa_begin_catch>
086e7c60 +0x250:  mov    0x8(%ebp),%ecx
086e7c63 +0x253:  mov    (%ecx),%eax
086e7c65 +0x255:  mov    -0xc(%eax),%eax
086e7c68 +0x258:  add    %ecx,%eax
086e7c6a +0x25a:  call   086e73f0 <_ZNSt9basic_iosIwSt11char_traitsIwEE11_M_setstateESt12_Ios_Iostate.clone.4>  ; std::basic_ios<wchar_t, std::char_traits<wchar_t> >::_M_setstate(std::_Ios_Iostate) [clone .clone.4]
086e7c6f +0x25f:  call   08724be0 <__cxa_rethrow>
086e7c74 +0x264:  jmp    086e7c49 <+0x239>
086e7c76 +0x266:  nop
086e7c77 +0x267:  nop
086e7c78 +0x268:  nop
086e7c79 +0x269:  nop
086e7c7a +0x26a:  nop
086e7c7b +0x26b:  nop
086e7c7c +0x26c:  nop
086e7c7d +0x26d:  nop
086e7c7e +0x26e:  nop
086e7c7f +0x26f:  nop
```

## 反编译 C

```c
// std::basic_istream<wchar_t, @ 0x86e7a10

/* std::wistream::ignore(int, unsigned int) */

wistream * __thiscall std::wistream::ignore(wistream *this,int param_1,uint param_2)

{
  wstreambuf *this_00;
  wchar_t *pwVar1;
  bool bVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wistream *pwVar5;
  wchar_t wVar6;
  int iVar7;
  size_t __n;
  sentry local_1d [13];
  
  if (param_2 == 0xffffffff) {
    pwVar5 = (wistream *)ignore(this,param_1);
    return pwVar5;
  }
  *(undefined4 *)(this + 4) = 0;
  sentry::sentry(local_1d,this,true);
  if ((local_1d[0] == (sentry)0x0) || (param_1 < 1)) {
    return this;
  }
  this_00 = *(wstreambuf **)(this + *(int *)(*(int *)this + -0xc) + 0x7c);
  if (*(wchar_t **)(this_00 + 8) < *(wchar_t **)(this_00 + 0xc)) {
    wVar6 = **(wchar_t **)(this_00 + 8);
  }
  else {
    wVar6 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
  }
  bVar2 = false;
  iVar7 = *(int *)(this + 4);
  do {
    while( true ) {
      while (((param_1 <= iVar7 || (wVar6 == L'\xffffffff')) || (param_2 == wVar6))) {
        if (((param_1 != 0x7fffffff) || (wVar6 == L'\xffffffff')) || (param_2 == wVar6)) {
          if (bVar2) {
            *(undefined4 *)(this + 4) = 0x7fffffff;
          }
          if (wVar6 != L'\xffffffff') {
            if (param_2 != wVar6) {
              return this;
            }
            if (*(int *)(this + 4) != 0x7fffffff) {
              *(int *)(this + 4) = *(int *)(this + 4) + 1;
            }
                    /* try { // try from 086e7bd1 to 086e7bd5 has its CatchHandler @ 086e7c09 */
            wstreambuf::sbumpc(this_00);
            return this;
          }
          wios::clear((wios *)(this + *(int *)(*(int *)this + -0xc)),
                      *(_Ios_Iostate *)((wios *)(this + *(int *)(*(int *)this + -0xc)) + 0x14) |
                      _S_eofbit);
          return this;
        }
        bVar2 = true;
        *(undefined4 *)(this + 4) = 0x80000000;
        iVar7 = -0x80000000;
      }
      pwVar1 = *(wchar_t **)(this_00 + 8);
      sVar3 = *(int *)(this_00 + 0xc) - (int)pwVar1 >> 2;
      __n = param_1 - iVar7;
      if ((int)sVar3 < param_1 - iVar7) {
        __n = sVar3;
      }
      if (1 < (int)__n) break;
      pwVar4 = *(wchar_t **)(this_00 + 0xc);
      *(int *)(this + 4) = iVar7 + 1;
      if (pwVar1 < pwVar4) {
        wVar6 = *pwVar1;
        *(wchar_t **)(this_00 + 8) = pwVar1 + 1;
      }
      else {
                    /* try { // try from 086e7c34 to 086e7c43 has its CatchHandler @ 086e7c09 */
        wVar6 = (**(code **)(*(int *)this_00 + 0x28))(this_00);
      }
      if (wVar6 != L'\xffffffff') {
        if (*(wchar_t **)(this_00 + 0xc) <= *(wchar_t **)(this_00 + 8)) goto LAB_086e7bfc;
        wVar6 = **(wchar_t **)(this_00 + 8);
      }
LAB_086e7b81:
      iVar7 = *(int *)(this + 4);
    }
    pwVar4 = wmemchr(pwVar1,param_2,__n);
    if (pwVar4 != (wchar_t *)0x0) {
      __n = (int)pwVar4 - (int)pwVar1 >> 2;
    }
    pwVar1 = pwVar1 + __n;
    *(wchar_t **)(this_00 + 8) = pwVar1;
    iVar7 = __n + *(int *)(this + 4);
    pwVar4 = *(wchar_t **)(this_00 + 0xc);
    *(int *)(this + 4) = iVar7;
    if (pwVar4 <= pwVar1) {
LAB_086e7bfc:
                    /* try { // try from 086e7c01 to 086e7c03 has its CatchHandler @ 086e7c09 */
      wVar6 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
      goto LAB_086e7b81;
    }
    wVar6 = *pwVar1;
  } while( true );
}
```
