# set_query

`_ZN5MySQL9set_queryEv`

`MySQL::set_query()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f4782` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4782  _ZN5MySQL9set_queryEv
#           MySQL::set_query()
# range [0x083f4782, 0x083f48a9]
083f4782 +0x000:  push   %ebp
083f4783 +0x001:  mov    %esp,%ebp
083f4785 +0x003:  push   %esi
083f4786 +0x004:  push   %ebx
083f4787 +0x005:  sub    $0x30,%esp
083f478a +0x008:  mov    0x8(%ebp),%eax
083f478d +0x00b:  movzbl 0x4208a(%eax),%eax
083f4794 +0x012:  test   %al,%al
083f4796 +0x014:  je     083f4834 <+0xb2>
083f479c +0x01a:  mov    0x8(%ebp),%eax
083f479f +0x01d:  mov    (%eax),%eax
083f47a1 +0x01f:  test   %eax,%eax
083f47a3 +0x021:  jne    083f47af <+0x2d>
083f47a5 +0x023:  mov    $0x0,%eax
083f47aa +0x028:  jmp    083f48a2 <+0x120>
083f47af +0x02d:  lea    -0xd(%ebp),%eax
083f47b2 +0x030:  mov    %eax,(%esp)
083f47b5 +0x033:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
083f47ba +0x038:  mov    0x8(%ebp),%eax
083f47bd +0x03b:  lea    0x1c(%eax),%edx
083f47c0 +0x03e:  lea    -0xd(%ebp),%eax
083f47c3 +0x041:  mov    %eax,0x8(%esp)
083f47c7 +0x045:  mov    %edx,0x4(%esp)
083f47cb +0x049:  lea    -0x14(%ebp),%eax
083f47ce +0x04c:  mov    %eax,(%esp)
083f47d1 +0x04f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
083f47d6 +0x054:  mov    0x8(%ebp),%eax
083f47d9 +0x057:  mov    (%eax),%eax
083f47db +0x059:  lea    -0x14(%ebp),%edx
083f47de +0x05c:  mov    %edx,0x4(%esp)
083f47e2 +0x060:  mov    %eax,(%esp)
083f47e5 +0x063:  call   085ecc5e <_ZN13CQueryCounter18IncreaseQueryCountERKSs>  ; CQueryCounter::IncreaseQueryCount(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
083f47ea +0x068:  jmp    083f4801 <+0x7f>
083f47ec +0x06a:  mov    %edx,%ebx
083f47ee +0x06c:  mov    %eax,%esi
083f47f0 +0x06e:  lea    -0x14(%ebp),%eax
083f47f3 +0x071:  mov    %eax,(%esp)
083f47f6 +0x074:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083f47fb +0x079:  mov    %esi,%eax
083f47fd +0x07b:  mov    %ebx,%edx
083f47ff +0x07d:  jmp    083f480e <+0x8c>
083f4801 +0x07f:  lea    -0x14(%ebp),%eax
083f4804 +0x082:  mov    %eax,(%esp)
083f4807 +0x085:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083f480c +0x08a:  jmp    083f4829 <+0xa7>
083f480e +0x08c:  mov    %edx,%ebx
083f4810 +0x08e:  mov    %eax,%esi
083f4812 +0x090:  lea    -0xd(%ebp),%eax
083f4815 +0x093:  mov    %eax,(%esp)
083f4818 +0x096:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
083f481d +0x09b:  mov    %esi,%eax
083f481f +0x09d:  mov    %ebx,%edx
083f4821 +0x09f:  mov    %eax,(%esp)
083f4824 +0x0a2:  call   08ae3750 <_Unwind_Resume>
083f4829 +0x0a7:  lea    -0xd(%ebp),%eax
083f482c +0x0aa:  mov    %eax,(%esp)
083f482f +0x0ad:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
083f4834 +0x0b2:  mov    0x8(%ebp),%eax
083f4837 +0x0b5:  add    $0x1c,%eax
083f483a +0x0b8:  mov    %eax,(%esp)
083f483d +0x0bb:  call   0807e3b0 <_init+0xca8>
083f4842 +0x0c0:  mov    %eax,-0xc(%ebp)
083f4845 +0x0c3:  cmpl   $0x5fff,-0xc(%ebp)
083f484c +0x0ca:  jle    083f4891 <+0x10f>
083f484e +0x0cc:  movl   $0x2d1,0x18(%esp)
083f4856 +0x0d4:  movl   $&_ZZN5MySQL9set_queryEvE19__PRETTY_FUNCTION__,0x14(%esp)
083f485e +0x0dc:  movl   $"[%s][%d]",0x10(%esp)
083f4866 +0x0e4:  movl   $0x2d1,0xc(%esp)
083f486e +0x0ec:  movl   $&_ZZN5MySQL9set_queryEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f4876 +0x0f4:  movl   $"DBMgr.cpp",0x4(%esp)
083f487e +0x0fc:  movl   $0x1,(%esp)
083f4885 +0x103:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083f488a +0x108:  mov    $0x0,%eax
083f488f +0x10d:  jmp    083f48a2 <+0x120>
083f4891 +0x10f:  mov    0x8(%ebp),%eax
083f4894 +0x112:  mov    -0xc(%ebp),%edx
083f4897 +0x115:  mov    %edx,0x42028(%eax)
083f489d +0x11b:  mov    $0x1,%eax
083f48a2 +0x120:  add    $0x30,%esp
083f48a5 +0x123:  pop    %ebx
083f48a6 +0x124:  pop    %esi
083f48a7 +0x125:  pop    %ebp
083f48a8 +0x126:  ret
083f48a9 +0x127:  nop
```

## 反编译 C

```c
// MySQL::set_query @ 0x83f4782

/* MySQL::set_query() */

bool __thiscall MySQL::set_query(MySQL *this)

{
  bool bVar1;
  string local_18;
  allocator<char> local_11;
  size_t local_10;
  
  if (this[0x4208a] != (MySQL)0x0) {
    if (*(int *)this == 0) {
      return false;
    }
    std::allocator<char>::allocator();
                    /* try { // try from 083f47d1 to 083f47d5 has its CatchHandler @ 083f480e */
    std::string::string((string *)&local_18,(char *)(this + 0x1c),(allocator *)&local_11);
                    /* try { // try from 083f47e5 to 083f47e9 has its CatchHandler @ 083f47ec */
    CQueryCounter::IncreaseQueryCount(*(CQueryCounter **)this,&local_18);
                    /* try { // try from 083f4807 to 083f480b has its CatchHandler @ 083f480e */
    std::string::~string((string *)&local_18);
    std::allocator<char>::~allocator(&local_11);
  }
  local_10 = strlen((char *)(this + 0x1c));
  bVar1 = (int)local_10 < 0x6000;
  if (bVar1) {
    *(size_t *)(this + 0x42028) = local_10;
  }
  else {
    LogManager::logFormat
              (1,"DBMgr.cpp","bool MySQL::set_query()",0x2d1,"[%s][%d]","bool MySQL::set_query()",
               0x2d1);
  }
  return bVar1;
}
```
