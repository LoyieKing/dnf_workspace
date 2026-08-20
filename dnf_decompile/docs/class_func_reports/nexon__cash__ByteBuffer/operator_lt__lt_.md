# operator<<

`_ZN5nexon4cash10ByteBufferlsEPKc`

`nexon::cash::ByteBuffer::operator<<(char const*)`

| 类 | 地址 |
|---|---|
| `nexon::cash::ByteBuffer` | `0x081acba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081acba0  _ZN5nexon4cash10ByteBufferlsEPKc
#           nexon::cash::ByteBuffer::operator<<(char const*)
# range [0x081acba0, 0x081acd1d]
081acba0 +0x000:  push   %ebp
081acba1 +0x001:  mov    %esp,%ebp
081acba3 +0x003:  push   %edi
081acba4 +0x004:  push   %esi
081acba5 +0x005:  push   %ebx
081acba6 +0x006:  sub    $0x2c,%esp
081acba9 +0x009:  mov    0xc(%ebp),%eax
081acbac +0x00c:  mov    %eax,(%esp)
081acbaf +0x00f:  call   0807e3b0 <_init+0xca8>
081acbb4 +0x014:  mov    %eax,-0x1c(%ebp)
081acbb7 +0x017:  call   080cb39f <_GLOBAL__I__ZN10BingoEventC2Ev+0x1ec>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1ec
081acbbc +0x01c:  movzwl %ax,%eax
081acbbf +0x01f:  cmp    -0x1c(%ebp),%eax
081acbc2 +0x022:  setb   %al
081acbc5 +0x025:  test   %al,%al
081acbc7 +0x027:  je     081acca9 <+0x109>
081acbcd +0x02d:  lea    -0x1d(%ebp),%eax
081acbd0 +0x030:  mov    %eax,(%esp)
081acbd3 +0x033:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081acbd8 +0x038:  lea    -0x1d(%ebp),%eax
081acbdb +0x03b:  mov    %eax,0x8(%esp)
081acbdf +0x03f:  movl   $"string length too long: must shorter than max(unsigned short)",0x4(%esp)
081acbe7 +0x047:  lea    -0x24(%ebp),%eax
081acbea +0x04a:  mov    %eax,(%esp)
081acbed +0x04d:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081acbf2 +0x052:  lea    -0x24(%ebp),%esi
081acbf5 +0x055:  movl   $0x8,(%esp)
081acbfc +0x05c:  call   08725800 <__cxa_allocate_exception>
081acc01 +0x061:  mov    %eax,%ebx
081acc03 +0x063:  mov    %ebx,%eax
081acc05 +0x065:  mov    %esi,0x4(%esp)
081acc09 +0x069:  mov    %eax,(%esp)
081acc0c +0x06c:  call   086dd2f0 <_ZNSt16invalid_argumentC1ERKSs>  ; std::invalid_argument::invalid_argument(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081acc11 +0x071:  jmp    081acc4c <+0xac>
081acc13 +0x073:  mov    %eax,%ecx
081acc15 +0x075:  mov    %edx,%eax
081acc17 +0x077:  mov    %eax,%esi
081acc19 +0x079:  mov    %ecx,%edi
081acc1b +0x07b:  mov    %ebx,(%esp)
081acc1e +0x07e:  call   087255a0 <__cxa_free_exception>
081acc23 +0x083:  mov    %edi,%ecx
081acc25 +0x085:  mov    %esi,%eax
081acc27 +0x087:  mov    %eax,%ebx
081acc29 +0x089:  mov    %ecx,%esi
081acc2b +0x08b:  lea    -0x24(%ebp),%eax
081acc2e +0x08e:  mov    %eax,(%esp)
081acc31 +0x091:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081acc36 +0x096:  jmp    081acc46 <+0xa6>
081acc38 +0x098:  mov    %eax,%ecx
081acc3a +0x09a:  mov    %edx,%eax
081acc3c +0x09c:  cmp    $0xffffffff,%eax
081acc3f +0x09f:  jne    081acc6b <+0xcb>
081acc41 +0x0a1:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
081acc46 +0x0a6:  mov    %esi,%ecx
081acc48 +0x0a8:  mov    %ebx,%eax
081acc4a +0x0aa:  jmp    081acc6b <+0xcb>
081acc4c +0x0ac:  lea    -0x24(%ebp),%eax
081acc4f +0x0af:  mov    %eax,(%esp)
081acc52 +0x0b2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081acc57 +0x0b7:  jmp    081acc86 <+0xe6>
081acc59 +0x0b9:  mov    %eax,%ecx
081acc5b +0x0bb:  mov    %edx,%eax
081acc5d +0x0bd:  cmp    $0xffffffff,%eax
081acc60 +0x0c0:  jne    081acc6b <+0xcb>
081acc62 +0x0c2:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
081acc67 +0x0c7:  mov    %eax,%ecx
081acc69 +0x0c9:  mov    %edx,%eax
081acc6b +0x0cb:  mov    %eax,%ebx
081acc6d +0x0cd:  mov    %ecx,%esi
081acc6f +0x0cf:  lea    -0x1d(%ebp),%eax
081acc72 +0x0d2:  mov    %eax,(%esp)
081acc75 +0x0d5:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081acc7a +0x0da:  mov    %esi,%ecx
081acc7c +0x0dc:  mov    %ebx,%eax
081acc7e +0x0de:  mov    %ecx,(%esp)
081acc81 +0x0e1:  call   08ae3750 <_Unwind_Resume>
081acc86 +0x0e6:  lea    -0x1d(%ebp),%eax
081acc89 +0x0e9:  mov    %eax,(%esp)
081acc8c +0x0ec:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081acc91 +0x0f1:  movl   $&_ZNSt16invalid_argumentD1Ev,0x8(%esp)
081acc99 +0x0f9:  movl   $&_ZTISt16invalid_argument,0x4(%esp)
081acca1 +0x101:  mov    %ebx,(%esp)
081acca4 +0x104:  call   08724c50 <__cxa_throw>
081acca9 +0x109:  mov    0x8(%ebp),%eax
081accac +0x10c:  mov    %eax,(%esp)
081accaf +0x10f:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081accb4 +0x114:  mov    %eax,%edx
081accb6 +0x116:  add    -0x1c(%ebp),%edx
081accb9 +0x119:  mov    0x8(%ebp),%eax
081accbc +0x11c:  mov    0xc(%eax),%eax
081accbf +0x11f:  cmp    %eax,%edx
081accc1 +0x121:  setbe  %al
081accc4 +0x124:  test   %al,%al
081accc6 +0x126:  je     081acd13 <+0x173>
081accc8 +0x128:  mov    -0x1c(%ebp),%eax
081acccb +0x12b:  movzwl %ax,%eax
081accce +0x12e:  mov    %eax,0x4(%esp)
081accd2 +0x132:  mov    0x8(%ebp),%eax
081accd5 +0x135:  mov    %eax,(%esp)
081accd8 +0x138:  call   081acefa <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x1d>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x1d
081accdd +0x13d:  mov    0x8(%ebp),%eax
081acce0 +0x140:  mov    0x4(%eax),%eax
081acce3 +0x143:  mov    -0x1c(%ebp),%edx
081acce6 +0x146:  mov    %edx,0x8(%esp)
081accea +0x14a:  mov    0xc(%ebp),%edx
081acced +0x14d:  mov    %edx,0x4(%esp)
081accf1 +0x151:  mov    %eax,(%esp)
081accf4 +0x154:  call   0807d8d0 <_init+0x1c8>
081accf9 +0x159:  mov    0x8(%ebp),%eax
081accfc +0x15c:  mov    0x4(%eax),%ebx
081accff +0x15f:  mov    0xc(%ebp),%eax
081acd02 +0x162:  mov    %eax,(%esp)
081acd05 +0x165:  call   0807e3b0 <_init+0xca8>
081acd0a +0x16a:  lea    (%ebx,%eax,1),%edx
081acd0d +0x16d:  mov    0x8(%ebp),%eax
081acd10 +0x170:  mov    %edx,0x4(%eax)
081acd13 +0x173:  mov    0x8(%ebp),%eax
081acd16 +0x176:  add    $0x2c,%esp
081acd19 +0x179:  pop    %ebx
081acd1a +0x17a:  pop    %esi
081acd1b +0x17b:  pop    %edi
081acd1c +0x17c:  pop    %ebp
081acd1d +0x17d:  ret
```

## 反编译 C

```c
// nexon::cash::ByteBuffer::operator<< @ 0x81acba0

/* nexon::cash::ByteBuffer::TEMPNAMEPLACEHOLDERVALUE(char const*) */

ByteBuffer * __thiscall nexon::cash::ByteBuffer::operator<<(ByteBuffer *this,char *param_1)

{
  uint uVar1;
  invalid_argument *this_00;
  int iVar2;
  size_t sVar3;
  string local_28;
  allocator<char> local_21;
  uint local_20;
  
  local_20 = strlen(param_1);
  uVar1 = std::numeric_limits<unsigned_short>::max();
  if ((uVar1 & 0xffff) < local_20) {
    std::allocator<char>::allocator();
                    /* try { // try from 081acbed to 081acbf1 has its CatchHandler @ 081acc67 */
    std::string::string((string *)&local_28,
                        "string length too long: must shorter than max(unsigned short)",
                        (allocator *)&local_21);
    this_00 = (invalid_argument *)__cxa_allocate_exception(8);
                    /* try { // try from 081acc0c to 081acc10 has its CatchHandler @ 081acc13 */
    std::invalid_argument::invalid_argument(this_00,&local_28);
                    /* try { // try from 081acc52 to 081acc56 has its CatchHandler @ 081acc59 */
    std::string::~string((string *)&local_28);
    std::allocator<char>::~allocator(&local_21);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&std::invalid_argument::typeinfo,std::invalid_argument::~invalid_argument);
  }
  iVar2 = length(this);
  if (iVar2 + local_20 <= *(uint *)(this + 0xc)) {
    operator<<(this,(ushort)local_20);
    strncpy(*(char **)(this + 4),param_1,local_20);
    iVar2 = *(int *)(this + 4);
    sVar3 = strlen(param_1);
    *(size_t *)(this + 4) = iVar2 + sVar3;
  }
  return this;
}
```
