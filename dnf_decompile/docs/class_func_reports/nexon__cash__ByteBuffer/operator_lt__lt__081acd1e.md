# operator<<

`_ZN5nexon4cash10ByteBufferlsEPKw`

`nexon::cash::ByteBuffer::operator<<(wchar_t const*)`

| 类 | 地址 |
|---|---|
| `nexon::cash::ByteBuffer` | `0x081acd1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081acd1e  _ZN5nexon4cash10ByteBufferlsEPKw
#           nexon::cash::ByteBuffer::operator<<(wchar_t const*)
# range [0x081acd1e, 0x081ace9c]
081acd1e +0x000:  push   %ebp
081acd1f +0x001:  mov    %esp,%ebp
081acd21 +0x003:  push   %edi
081acd22 +0x004:  push   %esi
081acd23 +0x005:  push   %ebx
081acd24 +0x006:  sub    $0x2c,%esp
081acd27 +0x009:  mov    0xc(%ebp),%eax
081acd2a +0x00c:  mov    %eax,(%esp)
081acd2d +0x00f:  call   0807e130 <_init+0xa28>
081acd32 +0x014:  add    %eax,%eax
081acd34 +0x016:  mov    %eax,-0x1c(%ebp)
081acd37 +0x019:  call   080cb39f <_GLOBAL__I__ZN10BingoEventC2Ev+0x1ec>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1ec
081acd3c +0x01e:  movzwl %ax,%eax
081acd3f +0x021:  cmp    -0x1c(%ebp),%eax
081acd42 +0x024:  setb   %al
081acd45 +0x027:  test   %al,%al
081acd47 +0x029:  je     081ace29 <+0x10b>
081acd4d +0x02f:  lea    -0x1d(%ebp),%eax
081acd50 +0x032:  mov    %eax,(%esp)
081acd53 +0x035:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081acd58 +0x03a:  lea    -0x1d(%ebp),%eax
081acd5b +0x03d:  mov    %eax,0x8(%esp)
081acd5f +0x041:  movl   $"string length too long: must shorter than max(unsigned short)",0x4(%esp)
081acd67 +0x049:  lea    -0x24(%ebp),%eax
081acd6a +0x04c:  mov    %eax,(%esp)
081acd6d +0x04f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081acd72 +0x054:  lea    -0x24(%ebp),%esi
081acd75 +0x057:  movl   $0x8,(%esp)
081acd7c +0x05e:  call   08725800 <__cxa_allocate_exception>
081acd81 +0x063:  mov    %eax,%ebx
081acd83 +0x065:  mov    %ebx,%eax
081acd85 +0x067:  mov    %esi,0x4(%esp)
081acd89 +0x06b:  mov    %eax,(%esp)
081acd8c +0x06e:  call   086dd2f0 <_ZNSt16invalid_argumentC1ERKSs>  ; std::invalid_argument::invalid_argument(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081acd91 +0x073:  jmp    081acdcc <+0xae>
081acd93 +0x075:  mov    %eax,%ecx
081acd95 +0x077:  mov    %edx,%eax
081acd97 +0x079:  mov    %eax,%esi
081acd99 +0x07b:  mov    %ecx,%edi
081acd9b +0x07d:  mov    %ebx,(%esp)
081acd9e +0x080:  call   087255a0 <__cxa_free_exception>
081acda3 +0x085:  mov    %edi,%ecx
081acda5 +0x087:  mov    %esi,%eax
081acda7 +0x089:  mov    %eax,%ebx
081acda9 +0x08b:  mov    %ecx,%esi
081acdab +0x08d:  lea    -0x24(%ebp),%eax
081acdae +0x090:  mov    %eax,(%esp)
081acdb1 +0x093:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081acdb6 +0x098:  jmp    081acdc6 <+0xa8>
081acdb8 +0x09a:  mov    %eax,%ecx
081acdba +0x09c:  mov    %edx,%eax
081acdbc +0x09e:  cmp    $0xffffffff,%eax
081acdbf +0x0a1:  jne    081acdeb <+0xcd>
081acdc1 +0x0a3:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
081acdc6 +0x0a8:  mov    %esi,%ecx
081acdc8 +0x0aa:  mov    %ebx,%eax
081acdca +0x0ac:  jmp    081acdeb <+0xcd>
081acdcc +0x0ae:  lea    -0x24(%ebp),%eax
081acdcf +0x0b1:  mov    %eax,(%esp)
081acdd2 +0x0b4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081acdd7 +0x0b9:  jmp    081ace06 <+0xe8>
081acdd9 +0x0bb:  mov    %eax,%ecx
081acddb +0x0bd:  mov    %edx,%eax
081acddd +0x0bf:  cmp    $0xffffffff,%eax
081acde0 +0x0c2:  jne    081acdeb <+0xcd>
081acde2 +0x0c4:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
081acde7 +0x0c9:  mov    %eax,%ecx
081acde9 +0x0cb:  mov    %edx,%eax
081acdeb +0x0cd:  mov    %eax,%ebx
081acded +0x0cf:  mov    %ecx,%esi
081acdef +0x0d1:  lea    -0x1d(%ebp),%eax
081acdf2 +0x0d4:  mov    %eax,(%esp)
081acdf5 +0x0d7:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081acdfa +0x0dc:  mov    %esi,%ecx
081acdfc +0x0de:  mov    %ebx,%eax
081acdfe +0x0e0:  mov    %ecx,(%esp)
081ace01 +0x0e3:  call   08ae3750 <_Unwind_Resume>
081ace06 +0x0e8:  lea    -0x1d(%ebp),%eax
081ace09 +0x0eb:  mov    %eax,(%esp)
081ace0c +0x0ee:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081ace11 +0x0f3:  movl   $&_ZNSt16invalid_argumentD1Ev,0x8(%esp)
081ace19 +0x0fb:  movl   $&_ZTISt16invalid_argument,0x4(%esp)
081ace21 +0x103:  mov    %ebx,(%esp)
081ace24 +0x106:  call   08724c50 <__cxa_throw>
081ace29 +0x10b:  mov    0x8(%ebp),%eax
081ace2c +0x10e:  mov    %eax,(%esp)
081ace2f +0x111:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ace34 +0x116:  mov    %eax,%edx
081ace36 +0x118:  add    -0x1c(%ebp),%edx
081ace39 +0x11b:  mov    0x8(%ebp),%eax
081ace3c +0x11e:  mov    0xc(%eax),%eax
081ace3f +0x121:  cmp    %eax,%edx
081ace41 +0x123:  setbe  %al
081ace44 +0x126:  test   %al,%al
081ace46 +0x128:  je     081ace92 <+0x174>
081ace48 +0x12a:  mov    -0x1c(%ebp),%eax
081ace4b +0x12d:  movzwl %ax,%eax
081ace4e +0x130:  mov    %eax,0x4(%esp)
081ace52 +0x134:  mov    0x8(%ebp),%eax
081ace55 +0x137:  mov    %eax,(%esp)
081ace58 +0x13a:  call   081acefa <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x1d>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x1d
081ace5d +0x13f:  mov    0xc(%ebp),%eax
081ace60 +0x142:  mov    %eax,(%esp)
081ace63 +0x145:  call   0807e130 <_init+0xa28>
081ace68 +0x14a:  mov    0x8(%ebp),%edx
081ace6b +0x14d:  mov    0x4(%edx),%edx
081ace6e +0x150:  mov    %eax,0x8(%esp)
081ace72 +0x154:  mov    0xc(%ebp),%eax
081ace75 +0x157:  mov    %eax,0x4(%esp)
081ace79 +0x15b:  mov    %edx,(%esp)
081ace7c +0x15e:  call   0807e460 <_init+0xd58>
081ace81 +0x163:  mov    0x8(%ebp),%eax
081ace84 +0x166:  mov    0x4(%eax),%eax
081ace87 +0x169:  mov    %eax,%edx
081ace89 +0x16b:  add    -0x1c(%ebp),%edx
081ace8c +0x16e:  mov    0x8(%ebp),%eax
081ace8f +0x171:  mov    %edx,0x4(%eax)
081ace92 +0x174:  mov    0x8(%ebp),%eax
081ace95 +0x177:  add    $0x2c,%esp
081ace98 +0x17a:  pop    %ebx
081ace99 +0x17b:  pop    %esi
081ace9a +0x17c:  pop    %edi
081ace9b +0x17d:  pop    %ebp
081ace9c +0x17e:  ret
```

## 反编译 C

```c
// nexon::cash::ByteBuffer::operator<< @ 0x81acd1e

/* nexon::cash::ByteBuffer::TEMPNAMEPLACEHOLDERVALUE(wchar_t const*) */

ByteBuffer * __thiscall nexon::cash::ByteBuffer::operator<<(ByteBuffer *this,wchar_t *param_1)

{
  size_t sVar1;
  uint uVar2;
  invalid_argument *this_00;
  int iVar3;
  string local_28;
  allocator<char> local_21;
  uint local_20;
  
  sVar1 = wcslen(param_1);
  local_20 = sVar1 * 2;
  uVar2 = std::numeric_limits<unsigned_short>::max();
  if ((uVar2 & 0xffff) < local_20) {
    std::allocator<char>::allocator();
                    /* try { // try from 081acd6d to 081acd71 has its CatchHandler @ 081acde7 */
    std::string::string((string *)&local_28,
                        "string length too long: must shorter than max(unsigned short)",
                        (allocator *)&local_21);
    this_00 = (invalid_argument *)__cxa_allocate_exception(8);
                    /* try { // try from 081acd8c to 081acd90 has its CatchHandler @ 081acd93 */
    std::invalid_argument::invalid_argument(this_00,&local_28);
                    /* try { // try from 081acdd2 to 081acdd6 has its CatchHandler @ 081acdd9 */
    std::string::~string((string *)&local_28);
    std::allocator<char>::~allocator(&local_21);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&std::invalid_argument::typeinfo,std::invalid_argument::~invalid_argument);
  }
  iVar3 = length(this);
  if (iVar3 + local_20 <= *(uint *)(this + 0xc)) {
    operator<<(this,(ushort)local_20);
    sVar1 = wcslen(param_1);
    wcsncpy(*(wchar_t **)(this + 4),param_1,sVar1);
    *(uint *)(this + 4) = *(int *)(this + 4) + local_20;
  }
  return this;
}
```
