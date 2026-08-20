# dispatch_sig

`_ZN30InterLoadServiceRestrictPolicy12dispatch_sigEP5CUserPci`

`InterLoadServiceRestrictPolicy::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterLoadServiceRestrictPolicy` | `0x08160796` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160796  _ZN30InterLoadServiceRestrictPolicy12dispatch_sigEP5CUserPci
#           InterLoadServiceRestrictPolicy::dispatch_sig(CUser*, char*, int)
# range [0x08160796, 0x08160889]
08160796 +0x00:  push   %ebp
08160797 +0x01:  mov    %esp,%ebp
08160799 +0x03:  push   %esi
0816079a +0x04:  push   %ebx
0816079b +0x05:  sub    $0x30,%esp
0816079e +0x08:  mov    0x10(%ebp),%eax
081607a1 +0x0b:  mov    %eax,-0xc(%ebp)
081607a4 +0x0e:  cmpl   $0x0,-0xc(%ebp)
081607a8 +0x12:  jne    081607ea <+0x54>
081607aa +0x14:  movl   $0x5,0xc(%esp)
081607b2 +0x1c:  movl   $0x94,0x8(%esp)
081607ba +0x24:  movl   $&_ZZN30InterLoadServiceRestrictPolicy12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
081607c2 +0x2c:  lea    -0x24(%ebp),%eax
081607c5 +0x2f:  mov    %eax,(%esp)
081607c8 +0x32:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081607cd +0x37:  movl   $"[Taiwan, Restrict] SigLoadRestrictPolicy is null.",0x4(%esp)
081607d5 +0x3f:  lea    -0x24(%ebp),%eax
081607d8 +0x42:  mov    %eax,(%esp)
081607db +0x45:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081607e0 +0x4a:  mov    $0x95,%eax
081607e5 +0x4f:  jmp    08160882 <+0xec>
081607ea +0x54:  lea    -0xd(%ebp),%eax
081607ed +0x57:  mov    %eax,(%esp)
081607f0 +0x5a:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081607f5 +0x5f:  mov    -0xc(%ebp),%eax
081607f8 +0x62:  lea    0x119d(%eax),%edx
081607fe +0x68:  lea    -0xd(%ebp),%eax
08160801 +0x6b:  mov    %eax,0x8(%esp)
08160805 +0x6f:  mov    %edx,0x4(%esp)
08160809 +0x73:  lea    -0x14(%ebp),%eax
0816080c +0x76:  mov    %eax,(%esp)
0816080f +0x79:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08160814 +0x7e:  mov    -0xc(%ebp),%eax
08160817 +0x81:  mov    (%eax),%eax
08160819 +0x83:  mov    %eax,%ebx
0816081b +0x85:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
08160820 +0x8a:  lea    -0x14(%ebp),%edx
08160823 +0x8d:  mov    %edx,0x8(%esp)
08160827 +0x91:  mov    %ebx,0x4(%esp)
0816082b +0x95:  mov    %eax,(%esp)
0816082e +0x98:  call   0816e54a <_ZN22ServiceRestrictManager11beginPolicyEN16RestrictCategory4EnumERKSs>  ; ServiceRestrictManager::beginPolicy(RestrictCategory::Enum, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08160833 +0x9d:  jmp    0816084a <+0xb4>
08160835 +0x9f:  mov    %edx,%ebx
08160837 +0xa1:  mov    %eax,%esi
08160839 +0xa3:  lea    -0x14(%ebp),%eax
0816083c +0xa6:  mov    %eax,(%esp)
0816083f +0xa9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08160844 +0xae:  mov    %esi,%eax
08160846 +0xb0:  mov    %ebx,%edx
08160848 +0xb2:  jmp    08160857 <+0xc1>
0816084a +0xb4:  lea    -0x14(%ebp),%eax
0816084d +0xb7:  mov    %eax,(%esp)
08160850 +0xba:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08160855 +0xbf:  jmp    08160872 <+0xdc>
08160857 +0xc1:  mov    %edx,%ebx
08160859 +0xc3:  mov    %eax,%esi
0816085b +0xc5:  lea    -0xd(%ebp),%eax
0816085e +0xc8:  mov    %eax,(%esp)
08160861 +0xcb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08160866 +0xd0:  mov    %esi,%eax
08160868 +0xd2:  mov    %ebx,%edx
0816086a +0xd4:  mov    %eax,(%esp)
0816086d +0xd7:  call   08ae3750 <_Unwind_Resume>
08160872 +0xdc:  lea    -0xd(%ebp),%eax
08160875 +0xdf:  mov    %eax,(%esp)
08160878 +0xe2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0816087d +0xe7:  mov    $0x0,%eax
08160882 +0xec:  add    $0x30,%esp
08160885 +0xef:  pop    %ebx
08160886 +0xf0:  pop    %esi
08160887 +0xf1:  pop    %ebp
08160888 +0xf2:  ret
08160889 +0xf3:  nop
```

## 反编译 C

```c
// InterLoadServiceRestrictPolicy::dispatch_sig @ 0x8160796

/* InterLoadServiceRestrictPolicy::dispatch_sig(CUser*, char*, int) */

undefined4 InterLoadServiceRestrictPolicy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  ServiceRestrictManager *pSVar2;
  cMyTrace local_28 [16];
  string local_18 [7];
  allocator<char> local_11;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_28,
                       "virtual int InterLoadServiceRestrictPolicy::dispatch_sig(CUser*, char*, int)"
                       ,0x94,5);
    cMyTrace::operator()(local_28,"[Taiwan, Restrict] SigLoadRestrictPolicy is null.");
    uVar1 = 0x95;
  }
  else {
    std::allocator<char>::allocator();
                    /* try { // try from 0816080f to 08160813 has its CatchHandler @ 08160857 */
    std::string::string(local_18,(char *)((int)local_10 + 0x119d),(allocator *)&local_11);
    uVar1 = *local_10;
                    /* try { // try from 0816081b to 08160832 has its CatchHandler @ 08160835 */
    pSVar2 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    ServiceRestrictManager::beginPolicy(pSVar2,uVar1,local_18);
                    /* try { // try from 08160850 to 08160854 has its CatchHandler @ 08160857 */
    std::string::~string(local_18);
    std::allocator<char>::~allocator(&local_11);
    uVar1 = 0;
  }
  return uVar1;
}
```
