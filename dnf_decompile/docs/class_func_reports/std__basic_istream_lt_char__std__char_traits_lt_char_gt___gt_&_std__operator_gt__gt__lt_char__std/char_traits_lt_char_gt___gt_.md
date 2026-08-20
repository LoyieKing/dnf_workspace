# char_traits<char> >

`_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_`

`std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char> >(std::basic_istream<char, std::char_traits<char> >&, char*)`

| 类 | 地址 |
|---|---|
| `std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std` | `0x086e7ec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e7ec0  _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
#           std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char> >(std::basic_istream<char, std::char_traits<char> >&, char*)
# range [0x086e7ec0, 0x086e814f]
086e7ec0 +0x000:  push   %ebp
086e7ec1 +0x001:  mov    %esp,%ebp
086e7ec3 +0x003:  push   %edi
086e7ec4 +0x004:  push   %esi
086e7ec5 +0x005:  push   %ebx
086e7ec6 +0x006:  sub    $0x3c,%esp
086e7ec9 +0x009:  mov    0x8(%ebp),%eax
086e7ecc +0x00c:  movl   $0x0,-0x2c(%ebp)
086e7ed3 +0x013:  movl   $0x0,0x8(%esp)
086e7edb +0x01b:  mov    %eax,0x4(%esp)
086e7edf +0x01f:  lea    -0x19(%ebp),%eax
086e7ee2 +0x022:  mov    %eax,(%esp)
086e7ee5 +0x025:  call   086e4760 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x46c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x46c0
086e7eea +0x02a:  mov    $0x4,%eax
086e7eef +0x02f:  cmpb   $0x0,-0x19(%ebp)
086e7ef3 +0x033:  jne    086e7f19 <+0x59>
086e7ef5 +0x035:  mov    0x8(%ebp),%ecx
086e7ef8 +0x038:  mov    (%ecx),%edx
086e7efa +0x03a:  mov    -0xc(%edx),%edx
086e7efd +0x03d:  add    %ecx,%edx
086e7eff +0x03f:  or     0x14(%edx),%eax
086e7f02 +0x042:  mov    %edx,(%esp)
086e7f05 +0x045:  mov    %eax,0x4(%esp)
086e7f09 +0x049:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
086e7f0e +0x04e:  mov    0x8(%ebp),%eax
086e7f11 +0x051:  add    $0x3c,%esp
086e7f14 +0x054:  pop    %ebx
086e7f15 +0x055:  pop    %esi
086e7f16 +0x056:  pop    %edi
086e7f17 +0x057:  pop    %ebp
086e7f18 +0x058:  ret
086e7f19 +0x059:  mov    0x8(%ebp),%edx
086e7f1c +0x05c:  mov    (%edx),%eax
086e7f1e +0x05e:  mov    -0xc(%eax),%eax
086e7f21 +0x061:  add    %edx,%eax
086e7f23 +0x063:  mov    0x8(%eax),%edi
086e7f26 +0x066:  test   %edi,%edi
086e7f28 +0x068:  jle    086e8087 <+0x1c7>
086e7f2e +0x06e:  add    $0x6c,%eax
086e7f31 +0x071:  lea    -0x20(%ebp),%ebx
086e7f34 +0x074:  mov    %eax,0x4(%esp)
086e7f38 +0x078:  mov    %ebx,(%esp)
086e7f3b +0x07b:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e7f40 +0x080:  mov    %ebx,(%esp)
086e7f43 +0x083:  call   086eb2c0 <_GLOBAL__I_locale_inst.cc+0xf80>  ; global constructors keyed to locale_inst.cc+0xf80
086e7f48 +0x088:  mov    %eax,-0x34(%ebp)
086e7f4b +0x08b:  mov    %ebx,(%esp)
086e7f4e +0x08e:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e7f53 +0x093:  mov    0x8(%ebp),%ecx
086e7f56 +0x096:  mov    (%ecx),%eax
086e7f58 +0x098:  mov    -0xc(%eax),%eax
086e7f5b +0x09b:  mov    0x78(%ecx,%eax,1),%esi
086e7f5f +0x09f:  mov    0x8(%esi),%eax
086e7f62 +0x0a2:  cmp    0xc(%esi),%eax
086e7f65 +0x0a5:  jae    086e80a5 <+0x1e5>
086e7f6b +0x0ab:  movzbl (%eax),%eax
086e7f6e +0x0ae:  sub    $0x1,%edi
086e7f71 +0x0b1:  mov    %edi,-0x30(%ebp)
086e7f74 +0x0b4:  movl   $0x0,-0x2c(%ebp)
086e7f7b +0x0bb:  nop
086e7f7c +0x0bc:  lea    0x0(%esi,%eiz,1),%esi
086e7f80 +0x0c0:  mov    -0x30(%ebp),%ecx
086e7f83 +0x0c3:  cmp    %ecx,-0x2c(%ebp)
086e7f86 +0x0c6:  jl     086e7fd0 <+0x110>
086e7f88 +0x0c8:  cmp    $0xffffffff,%eax
086e7f8b +0x0cb:  je     086e8091 <+0x1d1>
086e7f91 +0x0d1:  lea    0x0(%esi,%eiz,1),%esi
086e7f98 +0x0d8:  xor    %eax,%eax
086e7f9a +0x0da:  mov    0xc(%ebp),%edx
086e7f9d +0x0dd:  movb   $0x0,(%edx)
086e7fa0 +0x0e0:  mov    0x8(%ebp),%ecx
086e7fa3 +0x0e3:  mov    (%ecx),%edx
086e7fa5 +0x0e5:  mov    -0xc(%edx),%edx
086e7fa8 +0x0e8:  movl   $0x0,0x8(%ecx,%edx,1)
086e7fb0 +0x0f0:  mov    -0x2c(%ebp),%edx
086e7fb3 +0x0f3:  test   %edx,%edx
086e7fb5 +0x0f5:  je     086e80f9 <+0x239>
086e7fbb +0x0fb:  test   %eax,%eax
086e7fbd +0x0fd:  jne    086e7ef5 <+0x35>
086e7fc3 +0x103:  mov    0x8(%ebp),%eax
086e7fc6 +0x106:  add    $0x3c,%esp
086e7fc9 +0x109:  pop    %ebx
086e7fca +0x10a:  pop    %esi
086e7fcb +0x10b:  pop    %edi
086e7fcc +0x10c:  pop    %ebp
086e7fcd +0x10d:  ret
086e7fce +0x10e:  xchg   %ax,%ax
086e7fd0 +0x110:  cmp    $0xffffffff,%eax
086e7fd3 +0x113:  je     086e8091 <+0x1d1>
086e7fd9 +0x119:  mov    -0x34(%ebp),%ecx
086e7fdc +0x11c:  mov    0x18(%ecx),%edx
086e7fdf +0x11f:  movzbl %al,%ecx
086e7fe2 +0x122:  testb  $0x20,0x1(%edx,%ecx,2)
086e7fe7 +0x127:  jne    086e7f98 <+0xd8>
086e7fe9 +0x129:  mov    0x8(%esi),%ecx
086e7fec +0x12c:  mov    0xc(%esi),%ebx
086e7fef +0x12f:  mov    -0x30(%ebp),%edi
086e7ff2 +0x132:  sub    -0x2c(%ebp),%edi
086e7ff5 +0x135:  sub    %ecx,%ebx
086e7ff7 +0x137:  cmp    %ebx,%edi
086e7ff9 +0x139:  jle    086e7ffd <+0x13d>
086e7ffb +0x13b:  mov    %ebx,%edi
086e7ffd +0x13d:  cmp    $0x1,%edi
086e8000 +0x140:  jle    086e805b <+0x19b>
086e8002 +0x142:  lea    (%ecx,%edi,1),%edi
086e8005 +0x145:  lea    0x1(%ecx),%ebx
086e8008 +0x148:  cmp    %ebx,%edi
086e800a +0x14a:  jbe    086e8018 <+0x158>
086e800c +0x14c:  movzbl 0x1(%ecx),%eax
086e8010 +0x150:  testb  $0x20,0x1(%edx,%eax,2)
086e8015 +0x155:  je     086e8048 <+0x188>
086e8017 +0x157:  nop
086e8018 +0x158:  mov    0xc(%ebp),%eax
086e801b +0x15b:  sub    %ecx,%ebx
086e801d +0x15d:  mov    %ebx,0x8(%esp)
086e8021 +0x161:  mov    %ecx,0x4(%esp)
086e8025 +0x165:  mov    %eax,(%esp)
086e8028 +0x168:  call   0807d8a0 <_init+0x198>
086e802d +0x16d:  mov    0x8(%esi),%eax
086e8030 +0x170:  add    %ebx,-0x2c(%ebp)
086e8033 +0x173:  add    %ebx,%eax
086e8035 +0x175:  cmp    0xc(%esi),%eax
086e8038 +0x178:  mov    %eax,0x8(%esi)
086e803b +0x17b:  jae    086e809b <+0x1db>
086e803d +0x17d:  movzbl (%eax),%eax
086e8040 +0x180:  add    %ebx,0xc(%ebp)
086e8043 +0x183:  jmp    086e7f80 <+0xc0>
086e8048 +0x188:  add    $0x1,%ebx
086e804b +0x18b:  cmp    %ebx,%edi
086e804d +0x18d:  jbe    086e8018 <+0x158>
086e804f +0x18f:  movzbl (%ebx),%eax
086e8052 +0x192:  testb  $0x20,0x1(%edx,%eax,2)
086e8057 +0x197:  jne    086e8018 <+0x158>
086e8059 +0x199:  jmp    086e8048 <+0x188>
086e805b +0x19b:  mov    0xc(%ebp),%edx
086e805e +0x19e:  mov    %al,(%edx)
086e8060 +0x1a0:  mov    0x8(%esi),%eax
086e8063 +0x1a3:  addl   $0x1,-0x2c(%ebp)
086e8067 +0x1a7:  cmp    0xc(%esi),%eax
086e806a +0x1aa:  jae    086e8101 <+0x241>
086e8070 +0x1b0:  add    $0x1,%eax
086e8073 +0x1b3:  mov    %eax,0x8(%esi)
086e8076 +0x1b6:  cmp    %eax,0xc(%esi)
086e8079 +0x1b9:  jbe    086e80ef <+0x22f>
086e807b +0x1bb:  movzbl (%eax),%eax
086e807e +0x1be:  addl   $0x1,0xc(%ebp)
086e8082 +0x1c2:  jmp    086e7f80 <+0xc0>
086e8087 +0x1c7:  mov    $0x7fffffff,%edi
086e808c +0x1cc:  jmp    086e7f2e <+0x6e>
086e8091 +0x1d1:  mov    $0x2,%eax
086e8096 +0x1d6:  jmp    086e7f9a <+0xda>
086e809b +0x1db:  mov    (%esi),%eax
086e809d +0x1dd:  mov    %esi,(%esp)
086e80a0 +0x1e0:  call   *0x24(%eax)
086e80a3 +0x1e3:  jmp    086e8040 <+0x180>
086e80a5 +0x1e5:  mov    (%esi),%eax
086e80a7 +0x1e7:  mov    %esi,(%esp)
086e80aa +0x1ea:  call   *0x24(%eax)
086e80ad +0x1ed:  lea    0x0(%esi),%esi
086e80b0 +0x1f0:  jmp    086e7f6e <+0xae>
086e80b5 +0x1f5:  mov    %eax,%esi
086e80b7 +0x1f7:  mov    %edx,%edi
086e80b9 +0x1f9:  cmp    $0x2,%edi
086e80bc +0x1fc:  je     086e812e <+0x26e>
086e80be +0x1fe:  mov    %esi,(%esp)
086e80c1 +0x201:  call   08725ce0 <__cxa_begin_catch>
086e80c6 +0x206:  mov    0x8(%ebp),%ecx
086e80c9 +0x209:  mov    (%ecx),%eax
086e80cb +0x20b:  mov    -0xc(%eax),%eax
086e80ce +0x20e:  add    %ecx,%eax
086e80d0 +0x210:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e80d5 +0x215:  call   08725c30 <__cxa_end_catch>
086e80da +0x21a:  xor    %eax,%eax
086e80dc +0x21c:  jmp    086e7fb0 <+0xf0>
086e80e1 +0x221:  mov    %eax,%esi
086e80e3 +0x223:  mov    %edx,%edi
086e80e5 +0x225:  mov    %ebx,(%esp)
086e80e8 +0x228:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e80ed +0x22d:  jmp    086e80b9 <+0x1f9>
086e80ef +0x22f:  mov    (%esi),%eax
086e80f1 +0x231:  mov    %esi,(%esp)
086e80f4 +0x234:  call   *0x24(%eax)
086e80f7 +0x237:  jmp    086e807e <+0x1be>
086e80f9 +0x239:  or     $0x4,%eax
086e80fc +0x23c:  jmp    086e7ef5 <+0x35>
086e8101 +0x241:  mov    (%esi),%eax
086e8103 +0x243:  mov    %esi,(%esp)
086e8106 +0x246:  call   *0x28(%eax)
086e8109 +0x249:  mov    %eax,%edx
086e810b +0x24b:  or     $0xffffffff,%eax
086e810e +0x24e:  cmp    $0xffffffff,%edx
086e8111 +0x251:  je     086e807e <+0x1be>
086e8117 +0x257:  mov    0x8(%esi),%eax
086e811a +0x25a:  jmp    086e8076 <+0x1b6>
086e811f +0x25f:  mov    %eax,%esi
086e8121 +0x261:  call   08725c30 <__cxa_end_catch>
086e8126 +0x266:  mov    %esi,(%esp)
086e8129 +0x269:  call   08ae3750 <_Unwind_Resume>
086e812e +0x26e:  mov    %esi,(%esp)
086e8131 +0x271:  call   08725ce0 <__cxa_begin_catch>
086e8136 +0x276:  mov    0x8(%ebp),%edx
086e8139 +0x279:  mov    (%edx),%eax
086e813b +0x27b:  mov    -0xc(%eax),%eax
086e813e +0x27e:  add    %edx,%eax
086e8140 +0x280:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e8145 +0x285:  call   08724be0 <__cxa_rethrow>
086e814a +0x28a:  jmp    086e811f <+0x25f>
086e814c +0x28c:  nop
086e814d +0x28d:  nop
086e814e +0x28e:  nop
086e814f +0x28f:  nop
```

## 反编译 C

```c
// std::basic_istream<char, @ 0x86e7ec0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::istream& std::TEMPNAMEPLACEHOLDERVALUE(std::istream&, char*) */

istream * std::operator>>(istream *param_1,char *param_2)

{
  byte bVar1;
  int *piVar2;
  void *__src;
  _Ios_Iostate _Var3;
  ctype *pcVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  size_t __n;
  int iVar8;
  int iVar9;
  int local_30;
  locale local_24;
  sentry local_1d [13];
  
  istream::sentry::sentry(local_1d,param_1,false);
  _Var3 = _S_failbit;
  if (local_1d[0] != (sentry)0x0) {
    iVar9 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 8);
    if (iVar9 < 1) {
      iVar9 = 0x7fffffff;
    }
    locale::locale(&local_24,(locale *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x6c));
                    /* try { // try from 086e7f43 to 086e7f47 has its CatchHandler @ 086e80e1 */
    pcVar4 = use_facet<std::ctype<char>>(&local_24);
    locale::~locale(&local_24);
    piVar2 = *(int **)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x78);
    if ((byte *)piVar2[2] < (byte *)piVar2[3]) {
      uVar5 = (uint)*(byte *)piVar2[2];
    }
    else {
      uVar5 = (**(code **)(*piVar2 + 0x24))(piVar2);
    }
    local_30 = 0;
    while (local_30 < iVar9 + -1) {
      if (uVar5 == 0xffffffff) goto LAB_086e8091;
      iVar7 = *(int *)(pcVar4 + 0x18);
      if ((*(byte *)(iVar7 + 1 + (uVar5 & 0xff) * 2) & 0x20) != 0) goto LAB_086e7f98;
      __src = (void *)piVar2[2];
      iVar8 = (iVar9 + -1) - local_30;
      if (piVar2[3] - (int)__src < iVar8) {
        iVar8 = piVar2[3] - (int)__src;
      }
      if (iVar8 < 2) {
        *param_2 = (char)uVar5;
        local_30 = local_30 + 1;
        if ((uint)piVar2[2] < (uint)piVar2[3]) {
          pbVar6 = (byte *)(piVar2[2] + 1);
          piVar2[2] = (int)pbVar6;
LAB_086e8076:
          if (pbVar6 < (byte *)piVar2[3]) {
            uVar5 = (uint)*pbVar6;
          }
          else {
                    /* try { // try from 086e80f4 to 086e8108 has its CatchHandler @ 086e80b5 */
            uVar5 = (**(code **)(*piVar2 + 0x24))(piVar2);
          }
        }
        else {
          iVar7 = (**(code **)(*piVar2 + 0x28))(piVar2);
          uVar5 = 0xffffffff;
          if (iVar7 != -1) {
            pbVar6 = (byte *)piVar2[2];
            goto LAB_086e8076;
          }
        }
        param_2 = param_2 + 1;
      }
      else {
        pbVar6 = (byte *)((int)__src + 1);
        if (pbVar6 < (byte *)((int)__src + iVar8)) {
          bVar1 = *(byte *)(iVar7 + 1 + (uint)*(byte *)((int)__src + 1) * 2);
          while (((bVar1 & 0x20) == 0 &&
                 (pbVar6 = pbVar6 + 1, pbVar6 < (byte *)((int)__src + iVar8)))) {
            bVar1 = *(byte *)(iVar7 + 1 + (uint)*pbVar6 * 2);
          }
        }
        __n = (int)pbVar6 - (int)__src;
        memcpy(param_2,__src,__n);
        local_30 = local_30 + __n;
        pbVar6 = (byte *)(piVar2[2] + __n);
        piVar2[2] = (int)pbVar6;
        if (pbVar6 < (byte *)piVar2[3]) {
          uVar5 = (uint)*pbVar6;
        }
        else {
                    /* try { // try from 086e80a0 to 086e80ac has its CatchHandler @ 086e80b5 */
          uVar5 = (**(code **)(*piVar2 + 0x24))(piVar2);
        }
        param_2 = param_2 + __n;
      }
    }
    if (uVar5 == 0xffffffff) {
LAB_086e8091:
      _Var3 = _S_eofbit;
    }
    else {
LAB_086e7f98:
      _Var3 = _S_goodbit;
    }
    *param_2 = '\0';
    *(undefined4 *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 8) = 0;
    if (local_30 == 0) {
      _Var3 = _Var3 | _S_failbit;
    }
    else if (_Var3 == _S_goodbit) {
      return param_1;
    }
  }
  ios::clear((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)),
             _Var3 | *(_Ios_Iostate *)((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)) + 0x14));
  return param_1;
}
```
