# dispatch_sig

`_ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci`

`InterLoadGeolocation::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterLoadGeolocation` | `0x0816088a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816088a  _ZN20InterLoadGeolocation12dispatch_sigEP5CUserPci
#           InterLoadGeolocation::dispatch_sig(CUser*, char*, int)
# range [0x0816088a, 0x08160a41]
0816088a +0x000:  push   %ebp
0816088b +0x001:  mov    %esp,%ebp
0816088d +0x003:  push   %esi
0816088e +0x004:  push   %ebx
0816088f +0x005:  sub    $0x60,%esp
08160892 +0x008:  mov    0x10(%ebp),%eax
08160895 +0x00b:  mov    %eax,-0x10(%ebp)
08160898 +0x00e:  cmpl   $0x0,-0x10(%ebp)
0816089c +0x012:  jne    081608de <+0x54>
0816089e +0x014:  movl   $0x5,0xc(%esp)
081608a6 +0x01c:  movl   $0xac,0x8(%esp)
081608ae +0x024:  movl   $&_ZZN20InterLoadGeolocation12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
081608b6 +0x02c:  lea    -0x48(%ebp),%eax
081608b9 +0x02f:  mov    %eax,(%esp)
081608bc +0x032:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081608c1 +0x037:  movl   $"[Taiwan, GeoIP] SigLoadRestrictPolicy is null.",0x4(%esp)
081608c9 +0x03f:  lea    -0x48(%ebp),%eax
081608cc +0x042:  mov    %eax,(%esp)
081608cf +0x045:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081608d4 +0x04a:  mov    $0xad,%eax
081608d9 +0x04f:  jmp    08160a3b <+0x1b1>
081608de +0x054:  mov    -0x10(%ebp),%eax
081608e1 +0x057:  mov    (%eax),%eax
081608e3 +0x059:  cmp    $0x2d,%eax
081608e6 +0x05c:  jbe    08160930 <+0xa6>
081608e8 +0x05e:  mov    -0x10(%ebp),%eax
081608eb +0x061:  mov    (%eax),%ebx
081608ed +0x063:  movl   $0x5,0xc(%esp)
081608f5 +0x06b:  movl   $0xb2,0x8(%esp)
081608fd +0x073:  movl   $&_ZZN20InterLoadGeolocation12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
08160905 +0x07b:  lea    -0x38(%ebp),%eax
08160908 +0x07e:  mov    %eax,(%esp)
0816090b +0x081:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08160910 +0x086:  mov    %ebx,0x8(%esp)
08160914 +0x08a:  movl   $"[Taiwan, GeoIP] Invalid GeoIP country count. (%d)",0x4(%esp)
0816091c +0x092:  lea    -0x38(%ebp),%eax
0816091f +0x095:  mov    %eax,(%esp)
08160922 +0x098:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08160927 +0x09d:  mov    -0x10(%ebp),%eax
0816092a +0x0a0:  movl   $0x2d,(%eax)
08160930 +0x0a6:  movl   $0x0,-0xc(%ebp)
08160937 +0x0ad:  jmp    08160a23 <+0x199>
0816093c +0x0b2:  lea    -0x21(%ebp),%eax
0816093f +0x0b5:  mov    %eax,(%esp)
08160942 +0x0b8:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08160947 +0x0bd:  mov    -0xc(%ebp),%eax
0816094a +0x0c0:  shl    $0x4,%eax
0816094d +0x0c3:  add    -0x10(%ebp),%eax
08160950 +0x0c6:  add    $0x4,%eax
08160953 +0x0c9:  lea    -0x21(%ebp),%edx
08160956 +0x0cc:  mov    %edx,0x8(%esp)
0816095a +0x0d0:  mov    %eax,0x4(%esp)
0816095e +0x0d4:  lea    -0x28(%ebp),%eax
08160961 +0x0d7:  mov    %eax,(%esp)
08160964 +0x0da:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08160969 +0x0df:  call   08162679 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x8e7>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x8e7
0816096e +0x0e4:  lea    -0x28(%ebp),%edx
08160971 +0x0e7:  mov    %edx,0x4(%esp)
08160975 +0x0eb:  mov    %eax,(%esp)
08160978 +0x0ee:  call   08170a9e <_ZN19RestrictGeolocation15addAllowCountryESs>  ; RestrictGeolocation::addAllowCountry(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
0816097d +0x0f3:  jmp    08160994 <+0x10a>
0816097f +0x0f5:  mov    %edx,%ebx
08160981 +0x0f7:  mov    %eax,%esi
08160983 +0x0f9:  lea    -0x28(%ebp),%eax
08160986 +0x0fc:  mov    %eax,(%esp)
08160989 +0x0ff:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0816098e +0x104:  mov    %esi,%eax
08160990 +0x106:  mov    %ebx,%edx
08160992 +0x108:  jmp    081609a1 <+0x117>
08160994 +0x10a:  lea    -0x28(%ebp),%eax
08160997 +0x10d:  mov    %eax,(%esp)
0816099a +0x110:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0816099f +0x115:  jmp    081609bc <+0x132>
081609a1 +0x117:  mov    %edx,%ebx
081609a3 +0x119:  mov    %eax,%esi
081609a5 +0x11b:  lea    -0x21(%ebp),%eax
081609a8 +0x11e:  mov    %eax,(%esp)
081609ab +0x121:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081609b0 +0x126:  mov    %esi,%eax
081609b2 +0x128:  mov    %ebx,%edx
081609b4 +0x12a:  mov    %eax,(%esp)
081609b7 +0x12d:  call   08ae3750 <_Unwind_Resume>
081609bc +0x132:  lea    -0x21(%ebp),%eax
081609bf +0x135:  mov    %eax,(%esp)
081609c2 +0x138:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081609c7 +0x13d:  mov    -0xc(%ebp),%eax
081609ca +0x140:  shl    $0x4,%eax
081609cd +0x143:  add    -0x10(%ebp),%eax
081609d0 +0x146:  add    $0x4,%eax
081609d3 +0x149:  mov    %eax,%ebx
081609d5 +0x14b:  movl   $0x1,0x14(%esp)
081609dd +0x153:  movl   $0x1,0x10(%esp)
081609e5 +0x15b:  movl   $0x9,0xc(%esp)
081609ed +0x163:  movl   $0xb9,0x8(%esp)
081609f5 +0x16b:  movl   $&_ZZN20InterLoadGeolocation12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
081609fd +0x173:  lea    -0x20(%ebp),%eax
08160a00 +0x176:  mov    %eax,(%esp)
08160a03 +0x179:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08160a08 +0x17e:  mov    %ebx,0x8(%esp)
08160a0c +0x182:  movl   $"GeoIP Allow Country Code : %s",0x4(%esp)
08160a14 +0x18a:  lea    -0x20(%ebp),%eax
08160a17 +0x18d:  mov    %eax,(%esp)
08160a1a +0x190:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08160a1f +0x195:  addl   $0x1,-0xc(%ebp)
08160a23 +0x199:  mov    -0x10(%ebp),%eax
08160a26 +0x19c:  mov    (%eax),%eax
08160a28 +0x19e:  cmp    -0xc(%ebp),%eax
08160a2b +0x1a1:  setg   %al
08160a2e +0x1a4:  test   %al,%al
08160a30 +0x1a6:  jne    0816093c <+0xb2>
08160a36 +0x1ac:  mov    $0x0,%eax
08160a3b +0x1b1:  add    $0x60,%esp
08160a3e +0x1b4:  pop    %ebx
08160a3f +0x1b5:  pop    %esi
08160a40 +0x1b6:  pop    %ebp
08160a41 +0x1b7:  ret
```

## 反编译 C

```c
// InterLoadGeolocation::dispatch_sig @ 0x816088a

/* InterLoadGeolocation::dispatch_sig(CUser*, char*, int) */

undefined4 InterLoadGeolocation::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  string sVar2;
  int *piVar3;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  string local_2c [7];
  allocator<char> local_25;
  cMyTrace local_24 [16];
  int *local_14;
  int local_10;
  
  local_14 = (int *)param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_4c,"virtual int InterLoadGeolocation::dispatch_sig(CUser*, char*, int)"
                       ,0xac,5);
    cMyTrace::operator()(local_4c,"[Taiwan, GeoIP] SigLoadRestrictPolicy is null.");
    uVar1 = 0xad;
  }
  else {
    if (0x2d < *(uint *)param_3) {
      uVar1 = *(undefined4 *)param_3;
      cMyTrace::cMyTrace(local_3c,
                         "virtual int InterLoadGeolocation::dispatch_sig(CUser*, char*, int)",0xb2,5
                        );
      cMyTrace::operator()(local_3c,"[Taiwan, GeoIP] Invalid GeoIP country count. (%d)",uVar1);
      *local_14 = 0x2d;
    }
    for (local_10 = 0; local_10 < *local_14; local_10 = local_10 + 1) {
      std::allocator<char>::allocator();
                    /* try { // try from 08160964 to 08160968 has its CatchHandler @ 081609a1 */
      std::string::string(local_2c,(char *)(local_14 + local_10 * 4 + 1),(allocator *)&local_25);
                    /* try { // try from 08160969 to 0816097c has its CatchHandler @ 0816097f */
      sVar2._M_dataplus._M_p = (_Alloc_hider)ARAD::Singleton<RestrictGeolocation>::Get();
      RestrictGeolocation::addAllowCountry(sVar2);
                    /* try { // try from 0816099a to 0816099e has its CatchHandler @ 081609a1 */
      std::string::~string(local_2c);
      std::allocator<char>::~allocator(&local_25);
      piVar3 = local_14 + local_10 * 4 + 1;
      cMyTrace::cMyTrace(local_24,
                         "virtual int InterLoadGeolocation::dispatch_sig(CUser*, char*, int)",0xb9,9
                         ,true,true);
      cMyTrace::operator()(local_24,"GeoIP Allow Country Code : %s",piVar3);
    }
    uVar1 = 0;
  }
  return uVar1;
}
```
