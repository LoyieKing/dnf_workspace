# getline

`_ZNSt13basic_istreamIwSt11char_traitsIwEE7getlineEPwiw`

`std::basic_istream<wchar_t, std::char_traits<wchar_t> >::getline(wchar_t*, int, wchar_t)`

| 类 | 地址 |
|---|---|
| `std::basic_istream<wchar_t, std::char_traits<wchar_t> >` | `0x086e7c80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e7c80  _ZNSt13basic_istreamIwSt11char_traitsIwEE7getlineEPwiw
#           std::basic_istream<wchar_t, std::char_traits<wchar_t> >::getline(wchar_t*, int, wchar_t)
# range [0x086e7c80, 0x086e7ebf]
086e7c80 +0x000:  push   %ebp
086e7c81 +0x001:  mov    %esp,%ebp
086e7c83 +0x003:  push   %edi
086e7c84 +0x004:  push   %esi
086e7c85 +0x005:  push   %ebx
086e7c86 +0x006:  sub    $0x3c,%esp
086e7c89 +0x009:  mov    0x8(%ebp),%eax
086e7c8c +0x00c:  movl   $0x0,0x4(%eax)
086e7c93 +0x013:  mov    %eax,0x4(%esp)
086e7c97 +0x017:  lea    -0x19(%ebp),%eax
086e7c9a +0x01a:  movl   $0x1,0x8(%esp)
086e7ca2 +0x022:  mov    %eax,(%esp)
086e7ca5 +0x025:  call   086e2f70 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2ed0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2ed0
086e7caa +0x02a:  xor    %ecx,%ecx
086e7cac +0x02c:  cmpb   $0x0,-0x19(%ebp)
086e7cb0 +0x030:  jne    086e7d08 <+0x88>
086e7cb2 +0x032:  mov    0x10(%ebp),%edi
086e7cb5 +0x035:  test   %edi,%edi
086e7cb7 +0x037:  jle    086e7cc2 <+0x42>
086e7cb9 +0x039:  mov    0xc(%ebp),%eax
086e7cbc +0x03c:  movl   $0x0,(%eax)
086e7cc2 +0x042:  mov    0x8(%ebp),%edx
086e7cc5 +0x045:  mov    0x4(%edx),%esi
086e7cc8 +0x048:  test   %esi,%esi
086e7cca +0x04a:  jne    086e7cf8 <+0x78>
086e7ccc +0x04c:  or     $0x4,%ecx
086e7ccf +0x04f:  mov    0x8(%ebp),%edx
086e7cd2 +0x052:  mov    (%edx),%eax
086e7cd4 +0x054:  mov    -0xc(%eax),%eax
086e7cd7 +0x057:  add    %edx,%eax
086e7cd9 +0x059:  or     0x14(%eax),%ecx
086e7cdc +0x05c:  mov    %eax,(%esp)
086e7cdf +0x05f:  mov    %ecx,0x4(%esp)
086e7ce3 +0x063:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
086e7ce8 +0x068:  mov    0x8(%ebp),%eax
086e7ceb +0x06b:  add    $0x3c,%esp
086e7cee +0x06e:  pop    %ebx
086e7cef +0x06f:  pop    %esi
086e7cf0 +0x070:  pop    %edi
086e7cf1 +0x071:  pop    %ebp
086e7cf2 +0x072:  ret
086e7cf3 +0x073:  nop
086e7cf4 +0x074:  lea    0x0(%esi,%eiz,1),%esi
086e7cf8 +0x078:  test   %ecx,%ecx
086e7cfa +0x07a:  jne    086e7ccf <+0x4f>
086e7cfc +0x07c:  mov    0x8(%ebp),%eax
086e7cff +0x07f:  add    $0x3c,%esp
086e7d02 +0x082:  pop    %ebx
086e7d03 +0x083:  pop    %esi
086e7d04 +0x084:  pop    %edi
086e7d05 +0x085:  pop    %ebp
086e7d06 +0x086:  ret
086e7d07 +0x087:  nop
086e7d08 +0x088:  mov    0x8(%ebp),%edx
086e7d0b +0x08b:  mov    (%edx),%eax
086e7d0d +0x08d:  mov    -0xc(%eax),%eax
086e7d10 +0x090:  mov    0x7c(%edx,%eax,1),%ebx
086e7d14 +0x094:  mov    0x8(%ebx),%eax
086e7d17 +0x097:  cmp    0xc(%ebx),%eax
086e7d1a +0x09a:  jae    086e7e52 <+0x1d2>
086e7d20 +0x0a0:  mov    (%eax),%eax
086e7d22 +0x0a2:  mov    0x8(%ebp),%ecx
086e7d25 +0x0a5:  mov    0x4(%ecx),%esi
086e7d28 +0x0a8:  jmp    086e7dc0 <+0x140>
086e7d2d +0x0ad:  lea    0x0(%esi),%esi
086e7d30 +0x0b0:  cmp    $0xffffffff,%eax
086e7d33 +0x0b3:  je     086e7e30 <+0x1b0>
086e7d39 +0x0b9:  cmp    0x14(%ebp),%eax
086e7d3c +0x0bc:  je     086e7de0 <+0x160>
086e7d42 +0x0c2:  mov    0x8(%ebx),%edi
086e7d45 +0x0c5:  not    %esi
086e7d47 +0x0c7:  mov    0xc(%ebx),%edx
086e7d4a +0x0ca:  mov    0x10(%ebp),%ecx
086e7d4d +0x0cd:  sub    %edi,%edx
086e7d4f +0x0cf:  sar    $0x2,%edx
086e7d52 +0x0d2:  add    %ecx,%esi
086e7d54 +0x0d4:  cmp    %edx,%esi
086e7d56 +0x0d6:  jle    086e7d5a <+0xda>
086e7d58 +0x0d8:  mov    %edx,%esi
086e7d5a +0x0da:  cmp    $0x1,%esi
086e7d5d +0x0dd:  jle    086e7df8 <+0x178>
086e7d63 +0x0e3:  mov    0x14(%ebp),%eax
086e7d66 +0x0e6:  mov    %esi,0x8(%esp)
086e7d6a +0x0ea:  mov    %edi,(%esp)
086e7d6d +0x0ed:  mov    %esi,-0x2c(%ebp)
086e7d70 +0x0f0:  mov    %eax,0x4(%esp)
086e7d74 +0x0f4:  call   0807e4b0 <_init+0xda8>
086e7d79 +0x0f9:  test   %eax,%eax
086e7d7b +0x0fb:  je     086e7d87 <+0x107>
086e7d7d +0x0fd:  mov    %eax,%esi
086e7d7f +0x0ff:  sub    %edi,%esi
086e7d81 +0x101:  sar    $0x2,%esi
086e7d84 +0x104:  mov    %esi,-0x2c(%ebp)
086e7d87 +0x107:  mov    -0x2c(%ebp),%edx
086e7d8a +0x10a:  mov    0xc(%ebp),%ecx
086e7d8d +0x10d:  mov    %edi,0x4(%esp)
086e7d91 +0x111:  mov    %edx,0x8(%esp)
086e7d95 +0x115:  mov    %ecx,(%esp)
086e7d98 +0x118:  call   0807dc30 <_init+0x528>
086e7d9d +0x11d:  mov    -0x2c(%ebp),%eax
086e7da0 +0x120:  shl    $0x2,%eax
086e7da3 +0x123:  add    %eax,0xc(%ebp)
086e7da6 +0x126:  add    %eax,0x8(%ebx)
086e7da9 +0x129:  mov    0x8(%ebp),%eax
086e7dac +0x12c:  add    0x4(%eax),%esi
086e7daf +0x12f:  mov    %esi,0x4(%eax)
086e7db2 +0x132:  mov    0x8(%ebx),%eax
086e7db5 +0x135:  cmp    0xc(%ebx),%eax
086e7db8 +0x138:  jae    086e7e3a <+0x1ba>
086e7dbe +0x13e:  mov    (%eax),%eax
086e7dc0 +0x140:  lea    0x1(%esi),%edx
086e7dc3 +0x143:  cmp    0x10(%ebp),%edx
086e7dc6 +0x146:  jl     086e7d30 <+0xb0>
086e7dcc +0x14c:  cmp    $0xffffffff,%eax
086e7dcf +0x14f:  je     086e7e30 <+0x1b0>
086e7dd1 +0x151:  cmp    0x14(%ebp),%eax
086e7dd4 +0x154:  mov    $0x4,%ecx
086e7dd9 +0x159:  jne    086e7cb2 <+0x32>
086e7ddf +0x15f:  nop
086e7de0 +0x160:  mov    0x8(%ebp),%eax
086e7de3 +0x163:  mov    %edx,0x4(%eax)
086e7de6 +0x166:  mov    %ebx,(%esp)
086e7de9 +0x169:  call   08705e40 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x115d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x115d4
086e7dee +0x16e:  xor    %ecx,%ecx
086e7df0 +0x170:  jmp    086e7cb2 <+0x32>
086e7df5 +0x175:  lea    0x0(%esi),%esi
086e7df8 +0x178:  mov    0xc(%ebp),%ecx
086e7dfb +0x17b:  mov    %eax,(%ecx)
086e7dfd +0x17d:  mov    0x8(%ebp),%eax
086e7e00 +0x180:  add    $0x4,%ecx
086e7e03 +0x183:  mov    %ecx,0xc(%ebp)
086e7e06 +0x186:  addl   $0x1,0x4(%eax)
086e7e0a +0x18a:  cmp    0xc(%ebx),%edi
086e7e0d +0x18d:  jae    086e7e44 <+0x1c4>
086e7e0f +0x18f:  mov    (%edi),%eax
086e7e11 +0x191:  add    $0x4,%edi
086e7e14 +0x194:  mov    %edi,0x8(%ebx)
086e7e17 +0x197:  cmp    $0xffffffff,%eax
086e7e1a +0x19a:  je     086e7e26 <+0x1a6>
086e7e1c +0x19c:  mov    0x8(%ebx),%eax
086e7e1f +0x19f:  cmp    0xc(%ebx),%eax
086e7e22 +0x1a2:  jae    086e7e3a <+0x1ba>
086e7e24 +0x1a4:  mov    (%eax),%eax
086e7e26 +0x1a6:  mov    0x8(%ebp),%edx
086e7e29 +0x1a9:  mov    0x4(%edx),%esi
086e7e2c +0x1ac:  jmp    086e7dc0 <+0x140>
086e7e2e +0x1ae:  xchg   %ax,%ax
086e7e30 +0x1b0:  mov    $0x2,%ecx
086e7e35 +0x1b5:  jmp    086e7cb2 <+0x32>
086e7e3a +0x1ba:  mov    (%ebx),%eax
086e7e3c +0x1bc:  mov    %ebx,(%esp)
086e7e3f +0x1bf:  call   *0x24(%eax)
086e7e42 +0x1c2:  jmp    086e7e26 <+0x1a6>
086e7e44 +0x1c4:  mov    (%ebx),%eax
086e7e46 +0x1c6:  mov    %ebx,(%esp)
086e7e49 +0x1c9:  call   *0x28(%eax)
086e7e4c +0x1cc:  lea    0x0(%esi,%eiz,1),%esi
086e7e50 +0x1d0:  jmp    086e7e17 <+0x197>
086e7e52 +0x1d2:  mov    (%ebx),%eax
086e7e54 +0x1d4:  mov    %ebx,(%esp)
086e7e57 +0x1d7:  call   *0x24(%eax)
086e7e5a +0x1da:  jmp    086e7d22 <+0xa2>
086e7e5f +0x1df:  cmp    $0x2,%edx
086e7e62 +0x1e2:  je     086e7e87 <+0x207>
086e7e64 +0x1e4:  mov    %eax,(%esp)
086e7e67 +0x1e7:  call   08725ce0 <__cxa_begin_catch>
086e7e6c +0x1ec:  mov    0x8(%ebp),%ecx
086e7e6f +0x1ef:  mov    (%ecx),%eax
086e7e71 +0x1f1:  mov    -0xc(%eax),%eax
086e7e74 +0x1f4:  add    %ecx,%eax
086e7e76 +0x1f6:  call   086e73f0 <_ZNSt9basic_iosIwSt11char_traitsIwEE11_M_setstateESt12_Ios_Iostate.clone.4>  ; std::basic_ios<wchar_t, std::char_traits<wchar_t> >::_M_setstate(std::_Ios_Iostate) [clone .clone.4]
086e7e7b +0x1fb:  call   08725c30 <__cxa_end_catch>
086e7e80 +0x200:  xor    %ecx,%ecx
086e7e82 +0x202:  jmp    086e7cb2 <+0x32>
086e7e87 +0x207:  mov    %eax,(%esp)
086e7e8a +0x20a:  call   08725ce0 <__cxa_begin_catch>
086e7e8f +0x20f:  mov    0x8(%ebp),%edx
086e7e92 +0x212:  mov    (%edx),%eax
086e7e94 +0x214:  mov    -0xc(%eax),%eax
086e7e97 +0x217:  add    %edx,%eax
086e7e99 +0x219:  call   086e73f0 <_ZNSt9basic_iosIwSt11char_traitsIwEE11_M_setstateESt12_Ios_Iostate.clone.4>  ; std::basic_ios<wchar_t, std::char_traits<wchar_t> >::_M_setstate(std::_Ios_Iostate) [clone .clone.4]
086e7e9e +0x21e:  call   08724be0 <__cxa_rethrow>
086e7ea3 +0x223:  mov    %eax,%ebx
086e7ea5 +0x225:  call   08725c30 <__cxa_end_catch>
086e7eaa +0x22a:  mov    %ebx,(%esp)
086e7ead +0x22d:  call   08ae3750 <_Unwind_Resume>
086e7eb2 +0x232:  jmp    086e7ea3 <+0x223>
086e7eb4 +0x234:  nop
086e7eb5 +0x235:  nop
086e7eb6 +0x236:  nop
086e7eb7 +0x237:  nop
086e7eb8 +0x238:  nop
086e7eb9 +0x239:  nop
086e7eba +0x23a:  nop
086e7ebb +0x23b:  nop
086e7ebc +0x23c:  nop
086e7ebd +0x23d:  nop
086e7ebe +0x23e:  nop
086e7ebf +0x23f:  nop
```

## 反编译 C

```c
// std::basic_istream<wchar_t, @ 0x86e7c80

/* std::wistream::getline(wchar_t*, int, wchar_t) */

wistream * __thiscall
std::wistream::getline(wistream *this,wchar_t *param_1,int param_2,wchar_t param_3)

{
  wstreambuf *this_00;
  wchar_t *__s;
  wchar_t *pwVar1;
  wchar_t wVar2;
  _Ios_Iostate _Var3;
  size_t sVar4;
  size_t __n;
  uint uVar5;
  sentry local_1d [13];
  
  *(undefined4 *)(this + 4) = 0;
  sentry::sentry(local_1d,this,true);
  _Var3 = _S_goodbit;
  if (local_1d[0] != (sentry)0x0) {
    this_00 = *(wstreambuf **)(this + *(int *)(*(int *)this + -0xc) + 0x7c);
    if (*(wchar_t **)(this_00 + 8) < *(wchar_t **)(this_00 + 0xc)) {
      wVar2 = **(wchar_t **)(this_00 + 8);
    }
    else {
      wVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
    }
    uVar5 = *(uint *)(this + 4);
LAB_086e7dc0:
    do {
      if (param_2 <= (int)(uVar5 + 1)) goto code_r0x086e7dcc;
      if (wVar2 == L'\xffffffff') goto LAB_086e7e30;
      if (wVar2 == param_3) goto LAB_086e7de0;
      __s = *(wchar_t **)(this_00 + 8);
      sVar4 = *(int *)(this_00 + 0xc) - (int)__s >> 2;
      __n = ~uVar5 + param_2;
      if ((int)sVar4 < (int)(~uVar5 + param_2)) {
        __n = sVar4;
      }
      if ((int)__n < 2) {
        *param_1 = wVar2;
        param_1 = param_1 + 1;
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        if (__s < *(wchar_t **)(this_00 + 0xc)) {
          wVar2 = *__s;
          *(wchar_t **)(this_00 + 8) = __s + 1;
        }
        else {
          wVar2 = (**(code **)(*(int *)this_00 + 0x28))(this_00);
        }
        if (wVar2 != L'\xffffffff') {
          if (*(wchar_t **)(this_00 + 0xc) <= *(wchar_t **)(this_00 + 8)) goto LAB_086e7e3a;
          wVar2 = **(wchar_t **)(this_00 + 8);
        }
      }
      else {
        pwVar1 = wmemchr(__s,param_3,__n);
        if (pwVar1 != (wchar_t *)0x0) {
          __n = (int)pwVar1 - (int)__s >> 2;
        }
        wmemcpy(param_1,__s,__n);
        param_1 = param_1 + __n;
        *(size_t *)(this_00 + 8) = *(int *)(this_00 + 8) + __n * 4;
        uVar5 = __n + *(int *)(this + 4);
        *(uint *)(this + 4) = uVar5;
        if (*(wchar_t **)(this_00 + 8) < *(wchar_t **)(this_00 + 0xc)) {
          wVar2 = **(wchar_t **)(this_00 + 8);
          goto LAB_086e7dc0;
        }
LAB_086e7e3a:
        wVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
      }
      uVar5 = *(uint *)(this + 4);
    } while( true );
  }
LAB_086e7cb2:
  if (0 < param_2) {
    *param_1 = L'\0';
  }
  if (*(int *)(this + 4) == 0) {
    _Var3 = _Var3 | _S_failbit;
  }
  else if (_Var3 == _S_goodbit) {
    return this;
  }
  wios::clear((wios *)(this + *(int *)(*(int *)this + -0xc)),
              _Var3 | *(_Ios_Iostate *)((wios *)(this + *(int *)(*(int *)this + -0xc)) + 0x14));
  return this;
code_r0x086e7dcc:
  if (wVar2 == L'\xffffffff') {
LAB_086e7e30:
    _Var3 = _S_eofbit;
  }
  else {
    _Var3 = _S_failbit;
    if (wVar2 == param_3) {
LAB_086e7de0:
      *(uint *)(this + 4) = uVar5 + 1;
                    /* try { // try from 086e7de9 to 086e7e59 has its CatchHandler @ 086e7e5f */
      wstreambuf::sbumpc(this_00);
      _Var3 = _S_goodbit;
    }
  }
  goto LAB_086e7cb2;
}
```
