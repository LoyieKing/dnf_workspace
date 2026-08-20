# allocator<char> >

`_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_E`

`std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char>, std::allocator<char> >(std::basic_istream<char, std::char_traits<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char>, std` | `0x086e76e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e76e0  _ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_E
#           std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char>, std::allocator<char> >(std::basic_istream<char, std::char_traits<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x086e76e0, 0x086e7a0f]
086e76e0 +0x000:  push   %ebp
086e76e1 +0x001:  mov    %esp,%ebp
086e76e3 +0x003:  push   %edi
086e76e4 +0x004:  push   %esi
086e76e5 +0x005:  push   %ebx
086e76e6 +0x006:  sub    $0x3c,%esp
086e76e9 +0x009:  mov    0x8(%ebp),%eax
086e76ec +0x00c:  movl   $0x0,-0x2c(%ebp)
086e76f3 +0x013:  movl   $0x0,0x8(%esp)
086e76fb +0x01b:  mov    %eax,0x4(%esp)
086e76ff +0x01f:  lea    -0x19(%ebp),%eax
086e7702 +0x022:  mov    %eax,(%esp)
086e7705 +0x025:  call   086e4760 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x46c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x46c0
086e770a +0x02a:  mov    $0x4,%eax
086e770f +0x02f:  cmpb   $0x0,-0x19(%ebp)
086e7713 +0x033:  jne    086e7739 <+0x59>
086e7715 +0x035:  mov    0x8(%ebp),%ecx
086e7718 +0x038:  mov    (%ecx),%edx
086e771a +0x03a:  mov    -0xc(%edx),%edx
086e771d +0x03d:  add    %ecx,%edx
086e771f +0x03f:  or     0x14(%edx),%eax
086e7722 +0x042:  mov    %edx,(%esp)
086e7725 +0x045:  mov    %eax,0x4(%esp)
086e7729 +0x049:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
086e772e +0x04e:  mov    0x8(%ebp),%eax
086e7731 +0x051:  add    $0x3c,%esp
086e7734 +0x054:  pop    %ebx
086e7735 +0x055:  pop    %esi
086e7736 +0x056:  pop    %edi
086e7737 +0x057:  pop    %ebp
086e7738 +0x058:  ret
086e7739 +0x059:  mov    0xc(%ebp),%edx
086e773c +0x05c:  movl   $0x0,0xc(%esp)
086e7744 +0x064:  mov    (%edx),%eax
086e7746 +0x066:  mov    -0xc(%eax),%eax
086e7749 +0x069:  movl   $0x0,0x4(%esp)
086e7751 +0x071:  mov    %edx,(%esp)
086e7754 +0x074:  mov    %eax,0x8(%esp)
086e7758 +0x078:  call   08708370 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1f80>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1f80
086e775d +0x07d:  mov    0x8(%ebp),%ecx
086e7760 +0x080:  mov    (%ecx),%eax
086e7762 +0x082:  mov    -0xc(%eax),%eax
086e7765 +0x085:  add    %ecx,%eax
086e7767 +0x087:  mov    0x8(%eax),%edx
086e776a +0x08a:  test   %edx,%edx
086e776c +0x08c:  mov    %edx,-0x30(%ebp)
086e776f +0x08f:  jle    086e7937 <+0x257>
086e7775 +0x095:  add    $0x6c,%eax
086e7778 +0x098:  lea    -0x20(%ebp),%ebx
086e777b +0x09b:  mov    %eax,0x4(%esp)
086e777f +0x09f:  mov    %ebx,(%esp)
086e7782 +0x0a2:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e7787 +0x0a7:  mov    %ebx,(%esp)
086e778a +0x0aa:  call   086eb2c0 <_GLOBAL__I_locale_inst.cc+0xf80>  ; global constructors keyed to locale_inst.cc+0xf80
086e778f +0x0af:  mov    %eax,-0x34(%ebp)
086e7792 +0x0b2:  mov    %ebx,(%esp)
086e7795 +0x0b5:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e779a +0x0ba:  mov    0x8(%ebp),%ecx
086e779d +0x0bd:  mov    (%ecx),%eax
086e779f +0x0bf:  mov    -0xc(%eax),%eax
086e77a2 +0x0c2:  mov    0x78(%ecx,%eax,1),%ebx
086e77a6 +0x0c6:  mov    0x8(%ebx),%eax
086e77a9 +0x0c9:  cmp    0xc(%ebx),%eax
086e77ac +0x0cc:  jae    086e797d <+0x29d>
086e77b2 +0x0d2:  movzbl (%eax),%esi
086e77b5 +0x0d5:  mov    %esi,%edx
086e77b7 +0x0d7:  movzbl %dl,%eax
086e77ba +0x0da:  mov    -0x34(%ebp),%edx
086e77bd +0x0dd:  movl   $0x0,-0x2c(%ebp)
086e77c4 +0x0e4:  mov    0x18(%edx),%ecx
086e77c7 +0x0e7:  testb  $0x20,0x1(%ecx,%eax,2)
086e77cc +0x0ec:  jne    086e785f <+0x17f>
086e77d2 +0x0f2:  lea    0x0(%esi),%esi
086e77d8 +0x0f8:  mov    0x8(%ebx),%edx
086e77db +0x0fb:  mov    0xc(%ebx),%eax
086e77de +0x0fe:  mov    -0x30(%ebp),%edi
086e77e1 +0x101:  sub    -0x2c(%ebp),%edi
086e77e4 +0x104:  sub    %edx,%eax
086e77e6 +0x106:  cmp    %eax,%edi
086e77e8 +0x108:  jle    086e77ec <+0x10c>
086e77ea +0x10a:  mov    %eax,%edi
086e77ec +0x10c:  cmp    $0x1,%edi
086e77ef +0x10f:  jle    086e78c0 <+0x1e0>
086e77f5 +0x115:  lea    (%edx,%edi,1),%edi
086e77f8 +0x118:  lea    0x1(%edx),%esi
086e77fb +0x11b:  cmp    %esi,%edi
086e77fd +0x11d:  jbe    086e7810 <+0x130>
086e77ff +0x11f:  movzbl 0x1(%edx),%eax
086e7803 +0x123:  testb  $0x20,0x1(%ecx,%eax,2)
086e7808 +0x128:  je     086e7890 <+0x1b0>
086e780e +0x12e:  xchg   %ax,%ax
086e7810 +0x130:  mov    0xc(%ebp),%ecx
086e7813 +0x133:  sub    %edx,%esi
086e7815 +0x135:  mov    %esi,0x8(%esp)
086e7819 +0x139:  mov    %edx,0x4(%esp)
086e781d +0x13d:  mov    %ecx,(%esp)
086e7820 +0x140:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
086e7825 +0x145:  mov    0x8(%ebx),%eax
086e7828 +0x148:  add    %esi,-0x2c(%ebp)
086e782b +0x14b:  add    %esi,%eax
086e782d +0x14d:  cmp    0xc(%ebx),%eax
086e7830 +0x150:  mov    %eax,0x8(%ebx)
086e7833 +0x153:  jae    086e7928 <+0x248>
086e7839 +0x159:  movzbl (%eax),%esi
086e783c +0x15c:  mov    -0x30(%ebp),%edx
086e783f +0x15f:  cmp    %edx,-0x2c(%ebp)
086e7842 +0x162:  jae    086e78b0 <+0x1d0>
086e7844 +0x164:  cmp    $0xffffffff,%esi
086e7847 +0x167:  je     086e78b5 <+0x1d5>
086e7849 +0x169:  mov    -0x34(%ebp),%edx
086e784c +0x16c:  mov    %esi,%ecx
086e784e +0x16e:  movzbl %cl,%eax
086e7851 +0x171:  mov    0x18(%edx),%ecx
086e7854 +0x174:  testb  $0x20,0x1(%ecx,%eax,2)
086e7859 +0x179:  je     086e77d8 <+0xf8>
086e785f +0x17f:  xor    %eax,%eax
086e7861 +0x181:  mov    0x8(%ebp),%ecx
086e7864 +0x184:  mov    (%ecx),%edx
086e7866 +0x186:  mov    -0xc(%edx),%edx
086e7869 +0x189:  movl   $0x0,0x8(%ecx,%edx,1)
086e7871 +0x191:  mov    -0x2c(%ebp),%edx
086e7874 +0x194:  test   %edx,%edx
086e7876 +0x196:  je     086e79f7 <+0x317>
086e787c +0x19c:  test   %eax,%eax
086e787e +0x19e:  jne    086e7715 <+0x35>
086e7884 +0x1a4:  mov    0x8(%ebp),%eax
086e7887 +0x1a7:  add    $0x3c,%esp
086e788a +0x1aa:  pop    %ebx
086e788b +0x1ab:  pop    %esi
086e788c +0x1ac:  pop    %edi
086e788d +0x1ad:  pop    %ebp
086e788e +0x1ae:  ret
086e788f +0x1af:  nop
086e7890 +0x1b0:  add    $0x1,%esi
086e7893 +0x1b3:  cmp    %esi,%edi
086e7895 +0x1b5:  jbe    086e7810 <+0x130>
086e789b +0x1bb:  movzbl (%esi),%eax
086e789e +0x1be:  testb  $0x20,0x1(%ecx,%eax,2)
086e78a3 +0x1c3:  jne    086e7810 <+0x130>
086e78a9 +0x1c9:  jmp    086e7890 <+0x1b0>
086e78ab +0x1cb:  nop
086e78ac +0x1cc:  lea    0x0(%esi,%eiz,1),%esi
086e78b0 +0x1d0:  cmp    $0xffffffff,%esi
086e78b3 +0x1d3:  jne    086e785f <+0x17f>
086e78b5 +0x1d5:  mov    $0x2,%eax
086e78ba +0x1da:  jmp    086e7861 <+0x181>
086e78bc +0x1dc:  lea    0x0(%esi,%eiz,1),%esi
086e78c0 +0x1e0:  mov    0xc(%ebp),%edx
086e78c3 +0x1e3:  mov    (%edx),%eax
086e78c5 +0x1e5:  mov    -0xc(%eax),%edx
086e78c8 +0x1e8:  lea    -0xc(%eax),%ecx
086e78cb +0x1eb:  lea    0x1(%edx),%edi
086e78ce +0x1ee:  cmp    0x4(%ecx),%edi
086e78d1 +0x1f1:  ja     086e78da <+0x1fa>
086e78d3 +0x1f3:  mov    0x8(%ecx),%ecx
086e78d6 +0x1f6:  test   %ecx,%ecx
086e78d8 +0x1f8:  jle    086e78f1 <+0x211>
086e78da +0x1fa:  mov    0xc(%ebp),%ecx
086e78dd +0x1fd:  mov    %edi,0x4(%esp)
086e78e1 +0x201:  mov    %ecx,(%esp)
086e78e4 +0x204:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
086e78e9 +0x209:  mov    0xc(%ebp),%edx
086e78ec +0x20c:  mov    (%edx),%eax
086e78ee +0x20e:  mov    -0xc(%eax),%edx
086e78f1 +0x211:  mov    %esi,%ecx
086e78f3 +0x213:  mov    %cl,(%eax,%edx,1)
086e78f6 +0x216:  mov    0xc(%ebp),%eax
086e78f9 +0x219:  mov    (%eax),%edx
086e78fb +0x21b:  lea    -0xc(%edx),%eax
086e78fe +0x21e:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086e7903 +0x223:  jne    086e79c7 <+0x2e7>
086e7909 +0x229:  mov    0x8(%ebx),%eax
086e790c +0x22c:  addl   $0x1,-0x2c(%ebp)
086e7910 +0x230:  cmp    0xc(%ebx),%eax
086e7913 +0x233:  jae    086e79db <+0x2fb>
086e7919 +0x239:  add    $0x1,%eax
086e791c +0x23c:  mov    %eax,0x8(%ebx)
086e791f +0x23f:  cmp    %eax,0xc(%ebx)
086e7922 +0x242:  ja     086e7839 <+0x159>
086e7928 +0x248:  mov    (%ebx),%eax
086e792a +0x24a:  mov    %ebx,(%esp)
086e792d +0x24d:  call   *0x24(%eax)
086e7930 +0x250:  mov    %eax,%esi
086e7932 +0x252:  jmp    086e783c <+0x15c>
086e7937 +0x257:  movl   $0x3ffffffc,-0x30(%ebp)
086e793e +0x25e:  jmp    086e7775 <+0x95>
086e7943 +0x263:  mov    %eax,%esi
086e7945 +0x265:  mov    %edx,%edi
086e7947 +0x267:  cmp    $0x2,%edi
086e794a +0x26a:  je     086e79ab <+0x2cb>
086e794c +0x26c:  mov    %esi,(%esp)
086e794f +0x26f:  call   08725ce0 <__cxa_begin_catch>
086e7954 +0x274:  mov    0x8(%ebp),%ecx
086e7957 +0x277:  mov    (%ecx),%eax
086e7959 +0x279:  mov    -0xc(%eax),%eax
086e795c +0x27c:  add    %ecx,%eax
086e795e +0x27e:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e7963 +0x283:  call   08725c30 <__cxa_end_catch>
086e7968 +0x288:  xor    %eax,%eax
086e796a +0x28a:  jmp    086e7871 <+0x191>
086e796f +0x28f:  mov    %eax,%esi
086e7971 +0x291:  mov    %edx,%edi
086e7973 +0x293:  mov    %ebx,(%esp)
086e7976 +0x296:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e797b +0x29b:  jmp    086e7947 <+0x267>
086e797d +0x29d:  mov    (%ebx),%eax
086e797f +0x29f:  mov    %ebx,(%esp)
086e7982 +0x2a2:  call   *0x24(%eax)
086e7985 +0x2a5:  cmp    $0xffffffff,%eax
086e7988 +0x2a8:  mov    %eax,%esi
086e798a +0x2aa:  movl   $0x0,-0x2c(%ebp)
086e7991 +0x2b1:  je     086e78b5 <+0x1d5>
086e7997 +0x2b7:  jmp    086e77b5 <+0xd5>
086e799c +0x2bc:  mov    %eax,%esi
086e799e +0x2be:  call   08725c30 <__cxa_end_catch>
086e79a3 +0x2c3:  mov    %esi,(%esp)
086e79a6 +0x2c6:  call   08ae3750 <_Unwind_Resume>
086e79ab +0x2cb:  mov    %esi,(%esp)
086e79ae +0x2ce:  call   08725ce0 <__cxa_begin_catch>
086e79b3 +0x2d3:  mov    0x8(%ebp),%edx
086e79b6 +0x2d6:  mov    (%edx),%eax
086e79b8 +0x2d8:  mov    -0xc(%eax),%eax
086e79bb +0x2db:  add    %edx,%eax
086e79bd +0x2dd:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e79c2 +0x2e2:  call   08724be0 <__cxa_rethrow>
086e79c7 +0x2e7:  movl   $0x0,0x8(%eax)
086e79ce +0x2ee:  mov    %edi,-0xc(%edx)
086e79d1 +0x2f1:  movb   $0x0,0xc(%eax,%edi,1)
086e79d6 +0x2f6:  jmp    086e7909 <+0x229>
086e79db +0x2fb:  mov    (%ebx),%eax
086e79dd +0x2fd:  mov    %ebx,(%esp)
086e79e0 +0x300:  call   *0x28(%eax)
086e79e3 +0x303:  or     $0xffffffff,%esi
086e79e6 +0x306:  cmp    $0xffffffff,%eax
086e79e9 +0x309:  je     086e783c <+0x15c>
086e79ef +0x30f:  mov    0x8(%ebx),%eax
086e79f2 +0x312:  jmp    086e791f <+0x23f>
086e79f7 +0x317:  or     $0x4,%eax
086e79fa +0x31a:  jmp    086e7715 <+0x35>
086e79ff +0x31f:  nop
086e7a00 +0x320:  jmp    086e799c <+0x2bc>
086e7a02 +0x322:  nop
086e7a03 +0x323:  nop
086e7a04 +0x324:  nop
086e7a05 +0x325:  nop
086e7a06 +0x326:  nop
086e7a07 +0x327:  nop
086e7a08 +0x328:  nop
086e7a09 +0x329:  nop
086e7a0a +0x32a:  nop
086e7a0b +0x32b:  nop
086e7a0c +0x32c:  nop
086e7a0d +0x32d:  nop
086e7a0e +0x32e:  nop
086e7a0f +0x32f:  nop
```

## 反编译 C

```c
// std::basic_istream<char, @ 0x86e76e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::istream& std::TEMPNAMEPLACEHOLDERVALUE(std::istream&, std::string&) */

istream * std::operator>>(istream *param_1,string *param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  _Ios_Iostate _Var4;
  ctype *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_34;
  uint local_30;
  locale local_24;
  sentry local_1d [13];
  
  istream::sentry::sentry(local_1d,param_1,false);
  _Var4 = _S_failbit;
  if (local_1d[0] == (sentry)0x0) goto LAB_086e7715;
                    /* try { // try from 086e7758 to 086e775c has its CatchHandler @ 086e7943 */
  string::_M_mutate((string *)param_2,0,*(uint *)((param_2->_M_dataplus)._M_p + -0xc),0);
  local_34 = *(uint *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 8);
  if ((int)local_34 < 1) {
    local_34 = 0x3ffffffc;
  }
  locale::locale(&local_24,(locale *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x6c));
                    /* try { // try from 086e778a to 086e778e has its CatchHandler @ 086e796f */
  pcVar5 = use_facet<std::ctype<char>>(&local_24);
  locale::~locale(&local_24);
  piVar3 = *(int **)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x78);
  if ((byte *)piVar3[2] < (byte *)piVar3[3]) {
    uVar9 = (uint)*(byte *)piVar3[2];
LAB_086e77b5:
    local_30 = 0;
    iVar8 = *(int *)(pcVar5 + 0x18);
    bVar2 = *(byte *)(iVar8 + 1 + (uVar9 & 0xff) * 2);
    while ((bVar2 & 0x20) == 0) {
      pcVar7 = (char *)piVar3[2];
      iVar10 = local_34 - local_30;
      if (piVar3[3] - (int)pcVar7 < (int)(local_34 - local_30)) {
        iVar10 = piVar3[3] - (int)pcVar7;
      }
      if (iVar10 < 2) {
        pcVar7 = (param_2->_M_dataplus)._M_p;
        iVar8 = *(int *)(pcVar7 + -0xc);
        uVar1 = iVar8 + 1;
        if ((*(uint *)(pcVar7 + -8) < uVar1) || (0 < *(int *)(pcVar7 + -4))) {
          string::reserve((string *)param_2,uVar1);
          pcVar7 = (param_2->_M_dataplus)._M_p;
          iVar8 = *(int *)(pcVar7 + -0xc);
        }
        pcVar7[iVar8] = (char)uVar9;
        pcVar7 = (param_2->_M_dataplus)._M_p;
        if (pcVar7 != &DAT_0948ccfc) {
          pcVar7[-0xffffffff00000004] = '\0';
          pcVar7[-0xffffffff00000003] = '\0';
          pcVar7[-0xffffffff00000002] = '\0';
          pcVar7[-0xffffffff00000001] = '\0';
          *(uint *)(pcVar7 + -0xc) = uVar1;
          pcVar7[uVar1] = '\0';
        }
        local_30 = local_30 + 1;
        if ((uint)piVar3[2] < (uint)piVar3[3]) {
          pbVar6 = (byte *)(piVar3[2] + 1);
          piVar3[2] = (int)pbVar6;
LAB_086e791f:
          if ((byte *)piVar3[3] <= pbVar6) goto LAB_086e7928;
          goto LAB_086e7839;
        }
                    /* try { // try from 086e79e0 to 086e79e2 has its CatchHandler @ 086e7943 */
        iVar8 = (**(code **)(*piVar3 + 0x28))(piVar3);
        uVar9 = 0xffffffff;
        if (iVar8 != -1) {
          pbVar6 = (byte *)piVar3[2];
          goto LAB_086e791f;
        }
      }
      else {
        pbVar6 = (byte *)(pcVar7 + 1);
        if (pbVar6 < pcVar7 + iVar10) {
          bVar2 = *(byte *)(iVar8 + 1 + (uint)(byte)pcVar7[1] * 2);
          while (((bVar2 & 0x20) == 0 && (pbVar6 = pbVar6 + 1, pbVar6 < pcVar7 + iVar10))) {
            bVar2 = *(byte *)(iVar8 + 1 + (uint)*pbVar6 * 2);
          }
        }
        uVar9 = (int)pbVar6 - (int)pcVar7;
                    /* try { // try from 086e7820 to 086e792f has its CatchHandler @ 086e7943 */
        string::append((string *)param_2,pcVar7,uVar9);
        local_30 = local_30 + uVar9;
        pbVar6 = (byte *)(piVar3[2] + uVar9);
        piVar3[2] = (int)pbVar6;
        if (pbVar6 < (byte *)piVar3[3]) {
LAB_086e7839:
          uVar9 = (uint)*pbVar6;
        }
        else {
LAB_086e7928:
          uVar9 = (**(code **)(*piVar3 + 0x24))(piVar3);
        }
      }
      if (local_34 <= local_30) {
        if (uVar9 == 0xffffffff) goto LAB_086e78b5;
        break;
      }
      if (uVar9 == 0xffffffff) goto LAB_086e78b5;
      iVar8 = *(int *)(pcVar5 + 0x18);
      bVar2 = *(byte *)(iVar8 + 1 + (uVar9 & 0xff) * 2);
    }
    _Var4 = _S_goodbit;
  }
  else {
                    /* try { // try from 086e7982 to 086e7984 has its CatchHandler @ 086e7943 */
    uVar9 = (**(code **)(*piVar3 + 0x24))(piVar3);
    local_30 = 0;
    if (uVar9 != 0xffffffff) goto LAB_086e77b5;
LAB_086e78b5:
    _Var4 = _S_eofbit;
  }
  *(undefined4 *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 8) = 0;
  if (local_30 == 0) {
    _Var4 = _Var4 | _S_failbit;
  }
  else if (_Var4 == _S_goodbit) {
    return param_1;
  }
LAB_086e7715:
  ios::clear((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)),
             _Var4 | *(_Ios_Iostate *)((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)) + 0x14));
  return param_1;
}
```
