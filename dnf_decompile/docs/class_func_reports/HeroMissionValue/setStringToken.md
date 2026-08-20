# setStringToken

`_ZN16HeroMissionValue14setStringTokenESs`

`HeroMissionValue::setStringToken(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `HeroMissionValue` | `0x08164d68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164d68  _ZN16HeroMissionValue14setStringTokenESs
#           HeroMissionValue::setStringToken(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x08164d68, 0x08164f11]
08164d68 +0x000:  push   %ebp
08164d69 +0x001:  mov    %esp,%ebp
08164d6b +0x003:  push   %esi
08164d6c +0x004:  push   %ebx
08164d6d +0x005:  sub    $0x70,%esp
08164d70 +0x008:  mov    0x8(%ebp),%eax
08164d73 +0x00b:  mov    %eax,(%esp)
08164d76 +0x00e:  call   08164b80 <_ZN16HeroMissionValue5clearEv>  ; HeroMissionValue::clear()
08164d7b +0x013:  movl   $0x0,0xc(%esp)
08164d83 +0x01b:  movl   $0x0,0x8(%esp)
08164d8b +0x023:  movl   $" ",0x4(%esp)
08164d93 +0x02b:  lea    -0x1c(%ebp),%eax
08164d96 +0x02e:  mov    %eax,(%esp)
08164d99 +0x031:  call   080d02ae <_GLOBAL__I__ZN10BingoEventC2Ev+0x50fb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x50fb
08164d9e +0x036:  lea    -0x1c(%ebp),%eax
08164da1 +0x039:  mov    %eax,0x8(%esp)
08164da5 +0x03d:  mov    0xc(%ebp),%eax
08164da8 +0x040:  mov    %eax,0x4(%esp)
08164dac +0x044:  lea    -0x38(%ebp),%eax
08164daf +0x047:  mov    %eax,(%esp)
08164db2 +0x04a:  call   080d037a <_GLOBAL__I__ZN10BingoEventC2Ev+0x51c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x51c7
08164db7 +0x04f:  lea    -0x5c(%ebp),%eax
08164dba +0x052:  lea    -0x38(%ebp),%edx
08164dbd +0x055:  mov    %edx,0x4(%esp)
08164dc1 +0x059:  mov    %eax,(%esp)
08164dc4 +0x05c:  call   080d03c4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5211>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5211
08164dc9 +0x061:  sub    $0x4,%esp
08164dcc +0x064:  lea    -0x5c(%ebp),%eax
08164dcf +0x067:  mov    %eax,(%esp)
08164dd2 +0x06a:  call   080d2292 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70df
08164dd7 +0x06f:  mov    %eax,(%esp)
08164dda +0x072:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08164ddf +0x077:  mov    %eax,(%esp)
08164de2 +0x07a:  call   0807e6f0 <_init+0xfe8>
08164de7 +0x07f:  mov    %eax,%edx
08164de9 +0x081:  mov    0x8(%ebp),%eax
08164dec +0x084:  mov    %edx,(%eax)
08164dee +0x086:  lea    -0x5c(%ebp),%eax
08164df1 +0x089:  mov    %eax,(%esp)
08164df4 +0x08c:  call   080d04da <_GLOBAL__I__ZN10BingoEventC2Ev+0x5327>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5327
08164df9 +0x091:  mov    %eax,(%esp)
08164dfc +0x094:  call   080d2292 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70df
08164e01 +0x099:  mov    %eax,(%esp)
08164e04 +0x09c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08164e09 +0x0a1:  mov    %eax,(%esp)
08164e0c +0x0a4:  call   0807e6f0 <_init+0xfe8>
08164e11 +0x0a9:  mov    %eax,%edx
08164e13 +0x0ab:  mov    0x8(%ebp),%eax
08164e16 +0x0ae:  mov    %dx,0x4(%eax)
08164e1a +0x0b2:  lea    -0x5c(%ebp),%eax
08164e1d +0x0b5:  mov    %eax,(%esp)
08164e20 +0x0b8:  call   080d04da <_GLOBAL__I__ZN10BingoEventC2Ev+0x5327>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5327
08164e25 +0x0bd:  mov    %eax,(%esp)
08164e28 +0x0c0:  call   080d2292 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70df
08164e2d +0x0c5:  mov    %eax,(%esp)
08164e30 +0x0c8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08164e35 +0x0cd:  mov    %eax,(%esp)
08164e38 +0x0d0:  call   0807e6f0 <_init+0xfe8>
08164e3d +0x0d5:  mov    %eax,%edx
08164e3f +0x0d7:  mov    0x8(%ebp),%eax
08164e42 +0x0da:  mov    %dx,0x6(%eax)
08164e46 +0x0de:  lea    -0x5c(%ebp),%eax
08164e49 +0x0e1:  mov    %eax,(%esp)
08164e4c +0x0e4:  call   080d04da <_GLOBAL__I__ZN10BingoEventC2Ev+0x5327>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5327
08164e51 +0x0e9:  mov    %eax,(%esp)
08164e54 +0x0ec:  call   080d2292 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70df
08164e59 +0x0f1:  mov    %eax,(%esp)
08164e5c +0x0f4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08164e61 +0x0f9:  mov    %eax,(%esp)
08164e64 +0x0fc:  call   0807e6f0 <_init+0xfe8>
08164e69 +0x101:  mov    %eax,%edx
08164e6b +0x103:  mov    0x8(%ebp),%eax
08164e6e +0x106:  mov    %dx,0xa(%eax)
08164e72 +0x10a:  lea    -0x5c(%ebp),%eax
08164e75 +0x10d:  mov    %eax,(%esp)
08164e78 +0x110:  call   080d04da <_GLOBAL__I__ZN10BingoEventC2Ev+0x5327>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5327
08164e7d +0x115:  mov    %eax,(%esp)
08164e80 +0x118:  call   080d2292 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70df
08164e85 +0x11d:  mov    %eax,(%esp)
08164e88 +0x120:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08164e8d +0x125:  mov    %eax,(%esp)
08164e90 +0x128:  call   0807e6f0 <_init+0xfe8>
08164e95 +0x12d:  mov    %eax,%edx
08164e97 +0x12f:  mov    0x8(%ebp),%eax
08164e9a +0x132:  mov    %dx,0x8(%eax)
08164e9e +0x136:  lea    -0x5c(%ebp),%eax
08164ea1 +0x139:  mov    %eax,(%esp)
08164ea4 +0x13c:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
08164ea9 +0x141:  jmp    08164ed5 <+0x16d>
08164eab +0x143:  mov    %edx,%ebx
08164ead +0x145:  mov    %eax,%esi
08164eaf +0x147:  lea    -0x5c(%ebp),%eax
08164eb2 +0x14a:  mov    %eax,(%esp)
08164eb5 +0x14d:  call   080ce0ba <_GLOBAL__I__ZN10BingoEventC2Ev+0x2f07>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2f07
08164eba +0x152:  mov    %esi,%eax
08164ebc +0x154:  mov    %ebx,%edx
08164ebe +0x156:  jmp    08164ec0 <+0x158>
08164ec0 +0x158:  mov    %edx,%ebx
08164ec2 +0x15a:  mov    %eax,%esi
08164ec4 +0x15c:  lea    -0x38(%ebp),%eax
08164ec7 +0x15f:  mov    %eax,(%esp)
08164eca +0x162:  call   080ce0a4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2ef1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2ef1
08164ecf +0x167:  mov    %esi,%eax
08164ed1 +0x169:  mov    %ebx,%edx
08164ed3 +0x16b:  jmp    08164ee2 <+0x17a>
08164ed5 +0x16d:  lea    -0x38(%ebp),%eax
08164ed8 +0x170:  mov    %eax,(%esp)
08164edb +0x173:  call   080ce0a4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2ef1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2ef1
08164ee0 +0x178:  jmp    08164efd <+0x195>
08164ee2 +0x17a:  mov    %edx,%ebx
08164ee4 +0x17c:  mov    %eax,%esi
08164ee6 +0x17e:  lea    -0x1c(%ebp),%eax
08164ee9 +0x181:  mov    %eax,(%esp)
08164eec +0x184:  call   080ce05e <_GLOBAL__I__ZN10BingoEventC2Ev+0x2eab>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2eab
08164ef1 +0x189:  mov    %esi,%eax
08164ef3 +0x18b:  mov    %ebx,%edx
08164ef5 +0x18d:  mov    %eax,(%esp)
08164ef8 +0x190:  call   08ae3750 <_Unwind_Resume>
08164efd +0x195:  lea    -0x1c(%ebp),%eax
08164f00 +0x198:  mov    %eax,(%esp)
08164f03 +0x19b:  call   080ce05e <_GLOBAL__I__ZN10BingoEventC2Ev+0x2eab>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2eab
08164f08 +0x1a0:  lea    -0x8(%ebp),%esp
08164f0b +0x1a3:  add    $0x0,%esp
08164f0e +0x1a6:  pop    %ebx
08164f0f +0x1a7:  pop    %esi
08164f10 +0x1a8:  pop    %ebp
08164f11 +0x1a9:  ret
```

## 反编译 C

```c
// HeroMissionValue::setStringToken @ 0x8164d68

/* HeroMissionValue::setStringToken(std::string) */

void __thiscall HeroMissionValue::setStringToken(HeroMissionValue *this,string param_1)

{
  string *psVar1;
  char *pcVar2;
  int iVar3;
  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
  *piVar4;
  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
  local_60 [36];
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  local_3c [28];
  char_separator<char,std::char_traits<char>> local_20 [20];
  
  clear(this);
  boost::char_separator<char,std::char_traits<char>>::char_separator(local_20,&DAT_08b7dae3,0,0);
                    /* try { // try from 08164db2 to 08164db6 has its CatchHandler @ 08164ee2 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::tokenizer<std::string>(local_3c,(string *)param_1._M_dataplus._M_p,(char_separator *)local_20);
                    /* try { // try from 08164dc4 to 08164dc8 has its CatchHandler @ 08164ec0 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::begin();
                    /* try { // try from 08164dd2 to 08164e8c has its CatchHandler @ 08164eab */
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(local_60);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(int *)this = iVar3;
  piVar4 = (iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
            *)boost::
              iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
              ::operator++(local_60);
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(piVar4);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(short *)(this + 4) = (short)iVar3;
  piVar4 = (iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
            *)boost::
              iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
              ::operator++(local_60);
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(piVar4);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(short *)(this + 6) = (short)iVar3;
  piVar4 = (iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
            *)boost::
              iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
              ::operator++(local_60);
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(piVar4);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(short *)(this + 10) = (short)iVar3;
  piVar4 = (iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
            *)boost::
              iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
              ::operator++(local_60);
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(piVar4);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(short *)(this + 8) = (short)iVar3;
                    /* try { // try from 08164ea4 to 08164ea8 has its CatchHandler @ 08164ec0 */
  boost::
  token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                     *)local_60);
                    /* try { // try from 08164edb to 08164edf has its CatchHandler @ 08164ee2 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::~tokenizer(local_3c);
  boost::char_separator<char,std::char_traits<char>>::~char_separator(local_20);
  return;
}
```
