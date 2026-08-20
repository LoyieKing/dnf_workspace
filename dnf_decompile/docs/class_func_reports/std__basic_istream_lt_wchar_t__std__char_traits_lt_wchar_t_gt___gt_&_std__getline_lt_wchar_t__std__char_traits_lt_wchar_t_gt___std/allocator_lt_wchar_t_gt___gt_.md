# allocator<wchar_t> >

`_ZSt7getlineIwSt11char_traitsIwESaIwEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_ES4_`

`std::basic_istream<wchar_t, std::char_traits<wchar_t> >& std::getline<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >(std::basic_istream<wchar_t, std::char_traits<wchar_t> >&, std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >&, wchar_t)`

| 类 | 地址 |
|---|---|
| `std::basic_istream<wchar_t, std::char_traits<wchar_t> >& std::getline<wchar_t, std::char_traits<wchar_t>, std` | `0x086e7410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e7410  _ZSt7getlineIwSt11char_traitsIwESaIwEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_ES4_
#           std::basic_istream<wchar_t, std::char_traits<wchar_t> >& std::getline<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >(std::basic_istream<wchar_t, std::char_traits<wchar_t> >&, std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >&, wchar_t)
# range [0x086e7410, 0x086e76df]
086e7410 +0x000:  push   %ebp
086e7411 +0x001:  mov    %esp,%ebp
086e7413 +0x003:  push   %edi
086e7414 +0x004:  xor    %edi,%edi
086e7416 +0x006:  push   %esi
086e7417 +0x007:  push   %ebx
086e7418 +0x008:  sub    $0x4c,%esp
086e741b +0x00b:  mov    0x8(%ebp),%eax
086e741e +0x00e:  movl   $0x1,0x8(%esp)
086e7426 +0x016:  mov    %eax,0x4(%esp)
086e742a +0x01a:  lea    -0x19(%ebp),%eax
086e742d +0x01d:  mov    %eax,(%esp)
086e7430 +0x020:  call   086e2f70 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2ed0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2ed0
086e7435 +0x025:  mov    $0x4,%eax
086e743a +0x02a:  cmpb   $0x0,-0x19(%ebp)
086e743e +0x02e:  jne    086e7468 <+0x58>
086e7440 +0x030:  mov    0x8(%ebp),%ebx
086e7443 +0x033:  mov    (%ebx),%edx
086e7445 +0x035:  mov    -0xc(%edx),%edx
086e7448 +0x038:  add    %ebx,%edx
086e744a +0x03a:  or     0x14(%edx),%eax
086e744d +0x03d:  mov    %edx,(%esp)
086e7450 +0x040:  mov    %eax,0x4(%esp)
086e7454 +0x044:  call   086e0cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc50
086e7459 +0x049:  mov    0x8(%ebp),%eax
086e745c +0x04c:  add    $0x4c,%esp
086e745f +0x04f:  pop    %ebx
086e7460 +0x050:  pop    %esi
086e7461 +0x051:  pop    %edi
086e7462 +0x052:  pop    %ebp
086e7463 +0x053:  ret
086e7464 +0x054:  lea    0x0(%esi,%eiz,1),%esi
086e7468 +0x058:  mov    0xc(%ebp),%edx
086e746b +0x05b:  movl   $0x0,0xc(%esp)
086e7473 +0x063:  mov    (%edx),%eax
086e7475 +0x065:  mov    -0xc(%eax),%eax
086e7478 +0x068:  movl   $0x0,0x4(%esp)
086e7480 +0x070:  mov    %edx,(%esp)
086e7483 +0x073:  mov    %eax,0x8(%esp)
086e7487 +0x077:  call   0871dee0 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x88c4>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x88c4
086e748c +0x07c:  mov    0x8(%ebp),%ecx
086e748f +0x07f:  mov    (%ecx),%eax
086e7491 +0x081:  mov    -0xc(%eax),%eax
086e7494 +0x084:  mov    0x7c(%ecx,%eax,1),%esi
086e7498 +0x088:  mov    0x8(%esi),%eax
086e749b +0x08b:  cmp    0xc(%esi),%eax
086e749e +0x08e:  jae    086e766b <+0x25b>
086e74a4 +0x094:  mov    (%eax),%ebx
086e74a6 +0x096:  cmp    $0xffffffff,%ebx
086e74a9 +0x099:  je     086e7630 <+0x220>
086e74af +0x09f:  xor    %edi,%edi
086e74b1 +0x0a1:  cmp    %ebx,0x10(%ebp)
086e74b4 +0x0a4:  je     086e754e <+0x13e>
086e74ba +0x0aa:  lea    0x0(%esi),%esi
086e74c0 +0x0b0:  mov    0x8(%esi),%edx
086e74c3 +0x0b3:  mov    $0xffffffe,%eax
086e74c8 +0x0b8:  mov    0xc(%esi),%ecx
086e74cb +0x0bb:  sub    %edi,%eax
086e74cd +0x0bd:  sub    %edx,%ecx
086e74cf +0x0bf:  sar    $0x2,%ecx
086e74d2 +0x0c2:  cmp    %ecx,%eax
086e74d4 +0x0c4:  jle    086e74d8 <+0xc8>
086e74d6 +0x0c6:  mov    %ecx,%eax
086e74d8 +0x0c8:  cmp    $0x1,%eax
086e74db +0x0cb:  jle    086e7598 <+0x188>
086e74e1 +0x0d1:  mov    %eax,0x8(%esp)
086e74e5 +0x0d5:  mov    %eax,%ebx
086e74e7 +0x0d7:  mov    0x10(%ebp),%eax
086e74ea +0x0da:  mov    %edx,(%esp)
086e74ed +0x0dd:  mov    %edx,-0x34(%ebp)
086e74f0 +0x0e0:  mov    %eax,0x4(%esp)
086e74f4 +0x0e4:  call   0807e4b0 <_init+0xda8>
086e74f9 +0x0e9:  mov    -0x34(%ebp),%edx
086e74fc +0x0ec:  test   %eax,%eax
086e74fe +0x0ee:  je     086e7507 <+0xf7>
086e7500 +0x0f0:  mov    %eax,%ebx
086e7502 +0x0f2:  sub    %edx,%ebx
086e7504 +0x0f4:  sar    $0x2,%ebx
086e7507 +0x0f7:  mov    %edx,0x4(%esp)
086e750b +0x0fb:  mov    0xc(%ebp),%edx
086e750e +0x0fe:  mov    %ebx,0x8(%esp)
086e7512 +0x102:  mov    %edx,(%esp)
086e7515 +0x105:  call   0871da30 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8414>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8414
086e751a +0x10a:  lea    0x0(,%ebx,4),%eax
086e7521 +0x111:  add    %ebx,%edi
086e7523 +0x113:  add    0x8(%esi),%eax
086e7526 +0x116:  cmp    0xc(%esi),%eax
086e7529 +0x119:  mov    %eax,0x8(%esi)
086e752c +0x11c:  jae    086e761b <+0x20b>
086e7532 +0x122:  mov    (%eax),%ebx
086e7534 +0x124:  cmp    $0xffffffd,%edi
086e753a +0x12a:  ja     086e7580 <+0x170>
086e753c +0x12c:  cmp    $0xffffffff,%ebx
086e753f +0x12f:  je     086e7638 <+0x228>
086e7545 +0x135:  cmp    %ebx,0x10(%ebp)
086e7548 +0x138:  jne    086e74c0 <+0xb0>
086e754e +0x13e:  add    $0x1,%edi
086e7551 +0x141:  mov    %esi,(%esp)
086e7554 +0x144:  call   08705e40 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x115d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x115d4
086e7559 +0x149:  xor    %eax,%eax
086e755b +0x14b:  nop
086e755c +0x14c:  lea    0x0(%esi,%eiz,1),%esi
086e7560 +0x150:  test   %edi,%edi
086e7562 +0x152:  je     086e76a2 <+0x292>
086e7568 +0x158:  test   %eax,%eax
086e756a +0x15a:  jne    086e7440 <+0x30>
086e7570 +0x160:  mov    0x8(%ebp),%eax
086e7573 +0x163:  add    $0x4c,%esp
086e7576 +0x166:  pop    %ebx
086e7577 +0x167:  pop    %esi
086e7578 +0x168:  pop    %edi
086e7579 +0x169:  pop    %ebp
086e757a +0x16a:  ret
086e757b +0x16b:  nop
086e757c +0x16c:  lea    0x0(%esi,%eiz,1),%esi
086e7580 +0x170:  cmp    $0xffffffff,%ebx
086e7583 +0x173:  je     086e7638 <+0x228>
086e7589 +0x179:  cmp    %ebx,0x10(%ebp)
086e758c +0x17c:  mov    $0x4,%eax
086e7591 +0x181:  jne    086e7560 <+0x150>
086e7593 +0x183:  jmp    086e754e <+0x13e>
086e7595 +0x185:  lea    0x0(%esi),%esi
086e7598 +0x188:  mov    0xc(%ebp),%ecx
086e759b +0x18b:  mov    (%ecx),%ecx
086e759d +0x18d:  mov    %ecx,-0x40(%ebp)
086e75a0 +0x190:  mov    -0x40(%ebp),%eax
086e75a3 +0x193:  sub    $0xc,%ecx
086e75a6 +0x196:  mov    %ecx,-0x30(%ebp)
086e75a9 +0x199:  mov    -0xc(%eax),%eax
086e75ac +0x19c:  mov    %eax,-0x3c(%ebp)
086e75af +0x19f:  add    $0x1,%eax
086e75b2 +0x1a2:  cmp    0x4(%ecx),%eax
086e75b5 +0x1a5:  mov    %eax,-0x2c(%ebp)
086e75b8 +0x1a8:  ja     086e75c1 <+0x1b1>
086e75ba +0x1aa:  mov    0x8(%ecx),%eax
086e75bd +0x1ad:  test   %eax,%eax
086e75bf +0x1af:  jle    086e75e4 <+0x1d4>
086e75c1 +0x1b1:  mov    -0x2c(%ebp),%edx
086e75c4 +0x1b4:  mov    0xc(%ebp),%ecx
086e75c7 +0x1b7:  mov    %edx,0x4(%esp)
086e75cb +0x1bb:  mov    %ecx,(%esp)
086e75ce +0x1be:  call   0871d850 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8234>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8234
086e75d3 +0x1c3:  mov    0xc(%ebp),%eax
086e75d6 +0x1c6:  mov    (%eax),%eax
086e75d8 +0x1c8:  mov    -0xc(%eax),%edx
086e75db +0x1cb:  mov    %eax,-0x40(%ebp)
086e75de +0x1ce:  mov    %edx,-0x3c(%ebp)
086e75e1 +0x1d1:  mov    0x8(%esi),%edx
086e75e4 +0x1d4:  mov    -0x3c(%ebp),%ecx
086e75e7 +0x1d7:  mov    -0x40(%ebp),%eax
086e75ea +0x1da:  mov    %ebx,(%eax,%ecx,4)
086e75ed +0x1dd:  mov    %eax,%ecx
086e75ef +0x1df:  sub    $0xc,%ecx
086e75f2 +0x1e2:  cmp    $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE,%ecx
086e75f8 +0x1e8:  jne    086e764a <+0x23a>
086e75fa +0x1ea:  add    $0x1,%edi
086e75fd +0x1ed:  cmp    0xc(%esi),%edx
086e7600 +0x1f0:  jae    086e7661 <+0x251>
086e7602 +0x1f2:  mov    (%edx),%eax
086e7604 +0x1f4:  add    $0x4,%edx
086e7607 +0x1f7:  mov    %edx,0x8(%esi)
086e760a +0x1fa:  cmp    $0xffffffff,%eax
086e760d +0x1fd:  je     086e7642 <+0x232>
086e760f +0x1ff:  mov    0x8(%esi),%eax
086e7612 +0x202:  cmp    0xc(%esi),%eax
086e7615 +0x205:  jb     086e7532 <+0x122>
086e761b +0x20b:  mov    (%esi),%eax
086e761d +0x20d:  mov    %esi,(%esp)
086e7620 +0x210:  call   *0x24(%eax)
086e7623 +0x213:  mov    %eax,%ebx
086e7625 +0x215:  jmp    086e7534 <+0x124>
086e762a +0x21a:  lea    0x0(%esi),%esi
086e7630 +0x220:  xor    %edi,%edi
086e7632 +0x222:  lea    0x0(%esi),%esi
086e7638 +0x228:  mov    $0x2,%eax
086e763d +0x22d:  jmp    086e7560 <+0x150>
086e7642 +0x232:  or     $0xffffffff,%ebx
086e7645 +0x235:  jmp    086e7534 <+0x124>
086e764a +0x23a:  mov    -0x2c(%ebp),%ebx
086e764d +0x23d:  movl   $0x0,0x8(%ecx)
086e7654 +0x244:  mov    %ebx,-0xc(%eax)
086e7657 +0x247:  movl   $0x0,0xc(%ecx,%ebx,4)
086e765f +0x24f:  jmp    086e75fa <+0x1ea>
086e7661 +0x251:  mov    (%esi),%eax
086e7663 +0x253:  mov    %esi,(%esp)
086e7666 +0x256:  call   *0x28(%eax)
086e7669 +0x259:  jmp    086e760a <+0x1fa>
086e766b +0x25b:  mov    (%esi),%eax
086e766d +0x25d:  mov    %esi,(%esp)
086e7670 +0x260:  call   *0x24(%eax)
086e7673 +0x263:  mov    %eax,%ebx
086e7675 +0x265:  jmp    086e74a6 <+0x96>
086e767a +0x26a:  cmp    $0x2,%edx
086e767d +0x26d:  je     086e76b9 <+0x2a9>
086e767f +0x26f:  mov    %eax,(%esp)
086e7682 +0x272:  call   08725ce0 <__cxa_begin_catch>
086e7687 +0x277:  mov    0x8(%ebp),%ecx
086e768a +0x27a:  mov    (%ecx),%eax
086e768c +0x27c:  mov    -0xc(%eax),%eax
086e768f +0x27f:  add    %ecx,%eax
086e7691 +0x281:  call   086e73f0 <_ZNSt9basic_iosIwSt11char_traitsIwEE11_M_setstateESt12_Ios_Iostate.clone.4>  ; std::basic_ios<wchar_t, std::char_traits<wchar_t> >::_M_setstate(std::_Ios_Iostate) [clone .clone.4]
086e7696 +0x286:  call   08725c30 <__cxa_end_catch>
086e769b +0x28b:  xor    %eax,%eax
086e769d +0x28d:  jmp    086e7560 <+0x150>
086e76a2 +0x292:  or     $0x4,%eax
086e76a5 +0x295:  jmp    086e7440 <+0x30>
086e76aa +0x29a:  mov    %eax,%ebx
086e76ac +0x29c:  call   08725c30 <__cxa_end_catch>
086e76b1 +0x2a1:  mov    %ebx,(%esp)
086e76b4 +0x2a4:  call   08ae3750 <_Unwind_Resume>
086e76b9 +0x2a9:  mov    %eax,(%esp)
086e76bc +0x2ac:  call   08725ce0 <__cxa_begin_catch>
086e76c1 +0x2b1:  mov    0x8(%ebp),%edx
086e76c4 +0x2b4:  mov    (%edx),%eax
086e76c6 +0x2b6:  mov    -0xc(%eax),%eax
086e76c9 +0x2b9:  add    %edx,%eax
086e76cb +0x2bb:  call   086e73f0 <_ZNSt9basic_iosIwSt11char_traitsIwEE11_M_setstateESt12_Ios_Iostate.clone.4>  ; std::basic_ios<wchar_t, std::char_traits<wchar_t> >::_M_setstate(std::_Ios_Iostate) [clone .clone.4]
086e76d0 +0x2c0:  call   08724be0 <__cxa_rethrow>
086e76d5 +0x2c5:  jmp    086e76aa <+0x29a>
086e76d7 +0x2c7:  nop
086e76d8 +0x2c8:  nop
086e76d9 +0x2c9:  nop
086e76da +0x2ca:  nop
086e76db +0x2cb:  nop
086e76dc +0x2cc:  nop
086e76dd +0x2cd:  nop
086e76de +0x2ce:  nop
086e76df +0x2cf:  nop
```

## 反编译 C

```c
// std::basic_istream<wchar_t, @ 0x86e7410

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::wistream& std::getline<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>
   >(std::wistream&, std::wstring&, wchar_t) */

wistream *
std::getline<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>
          (wistream *param_1,wstring *param_2,wchar_t param_3)

{
  wstreambuf *this;
  _Ios_Iostate _Var1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  size_t sVar6;
  size_t __n;
  uint uVar7;
  wchar_t *local_44;
  wchar_t local_40;
  sentry local_1d [13];
  
  wistream::sentry::sentry(local_1d,param_1,true);
  _Var1 = _S_failbit;
  if (local_1d[0] != (sentry)0x0) {
                    /* try { // try from 086e7487 to 086e7672 has its CatchHandler @ 086e767a */
    wstring::_M_mutate((wstring *)param_2,0,(param_2->_M_dataplus)._M_p[-3],0);
    this = *(wstreambuf **)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x7c);
    if (*(wchar_t **)(this + 8) < *(wchar_t **)(this + 0xc)) {
      wVar5 = **(wchar_t **)(this + 8);
    }
    else {
      wVar5 = (**(code **)(*(int *)this + 0x24))(this);
    }
    if (wVar5 == L'\xffffffff') {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if (param_3 == wVar5) {
LAB_086e754e:
          uVar7 = uVar7 + 1;
          wstreambuf::sbumpc(this);
          _Var1 = _S_goodbit;
          goto LAB_086e7560;
        }
        pwVar3 = *(wchar_t **)(this + 8);
        sVar6 = *(int *)(this + 0xc) - (int)pwVar3 >> 2;
        __n = 0xffffffe - uVar7;
        if ((int)sVar6 < (int)(0xffffffe - uVar7)) {
          __n = sVar6;
        }
        if ((int)__n < 2) {
          local_44 = (param_2->_M_dataplus)._M_p;
          local_40 = local_44[-3];
          wVar4 = local_40 + L'\x01';
          if (((uint)local_44[-2] < (uint)wVar4) || (L'\0' < local_44[-1])) {
            wstring::reserve((wstring *)param_2,wVar4);
            local_44 = (param_2->_M_dataplus)._M_p;
            local_40 = local_44[-3];
            pwVar3 = *(wchar_t **)(this + 8);
          }
          local_44[local_40] = wVar5;
          if (local_44 != (wchar_t *)&DAT_0948cd9c) {
            local_44[-1] = L'\0';
            local_44[-3] = wVar4;
            local_44[wVar4] = L'\0';
          }
          uVar7 = uVar7 + 1;
          if (pwVar3 < *(wchar_t **)(this + 0xc)) {
            wVar5 = *pwVar3;
            *(wchar_t **)(this + 8) = pwVar3 + 1;
          }
          else {
            wVar5 = (**(code **)(*(int *)this + 0x28))(this);
          }
          if (wVar5 != L'\xffffffff') {
            pwVar3 = *(wchar_t **)(this + 8);
            if (*(wchar_t **)(this + 0xc) <= pwVar3) goto LAB_086e761b;
            goto LAB_086e7532;
          }
          wVar5 = L'\xffffffff';
        }
        else {
          pwVar2 = wmemchr(pwVar3,param_3,__n);
          if (pwVar2 != (wchar_t *)0x0) {
            __n = (int)pwVar2 - (int)pwVar3 >> 2;
          }
          wstring::append((wstring *)param_2,pwVar3,__n);
          uVar7 = uVar7 + __n;
          pwVar3 = (wchar_t *)(__n * 4 + *(int *)(this + 8));
          *(wchar_t **)(this + 8) = pwVar3;
          if (pwVar3 < *(wchar_t **)(this + 0xc)) {
LAB_086e7532:
            wVar5 = *pwVar3;
          }
          else {
LAB_086e761b:
            wVar5 = (**(code **)(*(int *)this + 0x24))(this);
          }
        }
        if (0xffffffd < uVar7) {
          if (wVar5 != L'\xffffffff') {
            _Var1 = _S_failbit;
            if (param_3 == wVar5) goto LAB_086e754e;
            goto LAB_086e7560;
          }
          break;
        }
      } while (wVar5 != L'\xffffffff');
    }
    _Var1 = _S_eofbit;
LAB_086e7560:
    if (uVar7 == 0) {
      _Var1 = _Var1 | _S_failbit;
    }
    else if (_Var1 == _S_goodbit) {
      return param_1;
    }
  }
  wios::clear((wios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)),
              _Var1 | *(_Ios_Iostate *)((wios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)) + 0x14)
             );
  return param_1;
}
```
