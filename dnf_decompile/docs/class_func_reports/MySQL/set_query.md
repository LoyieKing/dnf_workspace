# set_query

`_ZN5MySQL9set_queryEPKcz`

`MySQL::set_query(char const*, ...)`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f41c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f41c0  _ZN5MySQL9set_queryEPKcz
#           MySQL::set_query(char const*, ...)
# range [0x083f41c0, 0x083f430f]
083f41c0 +0x000:  push   %ebp
083f41c1 +0x001:  mov    %esp,%ebp
083f41c3 +0x003:  push   %esi
083f41c4 +0x004:  push   %ebx
083f41c5 +0x005:  sub    $0x30,%esp
083f41c8 +0x008:  mov    0x8(%ebp),%eax
083f41cb +0x00b:  movzbl 0x4208a(%eax),%eax
083f41d2 +0x012:  test   %al,%al
083f41d4 +0x014:  je     083f426f <+0xaf>
083f41da +0x01a:  mov    0x8(%ebp),%eax
083f41dd +0x01d:  mov    (%eax),%eax
083f41df +0x01f:  test   %eax,%eax
083f41e1 +0x021:  jne    083f41ed <+0x2d>
083f41e3 +0x023:  mov    $0x0,%eax
083f41e8 +0x028:  jmp    083f4309 <+0x149>
083f41ed +0x02d:  lea    -0x1d(%ebp),%eax
083f41f0 +0x030:  mov    %eax,(%esp)
083f41f3 +0x033:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
083f41f8 +0x038:  lea    -0x1d(%ebp),%eax
083f41fb +0x03b:  mov    %eax,0x8(%esp)
083f41ff +0x03f:  mov    0xc(%ebp),%eax
083f4202 +0x042:  mov    %eax,0x4(%esp)
083f4206 +0x046:  lea    -0x24(%ebp),%eax
083f4209 +0x049:  mov    %eax,(%esp)
083f420c +0x04c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
083f4211 +0x051:  mov    0x8(%ebp),%eax
083f4214 +0x054:  mov    (%eax),%eax
083f4216 +0x056:  lea    -0x24(%ebp),%edx
083f4219 +0x059:  mov    %edx,0x4(%esp)
083f421d +0x05d:  mov    %eax,(%esp)
083f4220 +0x060:  call   085ecc5e <_ZN13CQueryCounter18IncreaseQueryCountERKSs>  ; CQueryCounter::IncreaseQueryCount(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
083f4225 +0x065:  jmp    083f423c <+0x7c>
083f4227 +0x067:  mov    %edx,%ebx
083f4229 +0x069:  mov    %eax,%esi
083f422b +0x06b:  lea    -0x24(%ebp),%eax
083f422e +0x06e:  mov    %eax,(%esp)
083f4231 +0x071:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083f4236 +0x076:  mov    %esi,%eax
083f4238 +0x078:  mov    %ebx,%edx
083f423a +0x07a:  jmp    083f4249 <+0x89>
083f423c +0x07c:  lea    -0x24(%ebp),%eax
083f423f +0x07f:  mov    %eax,(%esp)
083f4242 +0x082:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083f4247 +0x087:  jmp    083f4264 <+0xa4>
083f4249 +0x089:  mov    %edx,%ebx
083f424b +0x08b:  mov    %eax,%esi
083f424d +0x08d:  lea    -0x1d(%ebp),%eax
083f4250 +0x090:  mov    %eax,(%esp)
083f4253 +0x093:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
083f4258 +0x098:  mov    %esi,%eax
083f425a +0x09a:  mov    %ebx,%edx
083f425c +0x09c:  mov    %eax,(%esp)
083f425f +0x09f:  call   08ae3750 <_Unwind_Resume>
083f4264 +0x0a4:  lea    -0x1d(%ebp),%eax
083f4267 +0x0a7:  mov    %eax,(%esp)
083f426a +0x0aa:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
083f426f +0x0af:  lea    0x10(%ebp),%eax
083f4272 +0x0b2:  mov    %eax,-0x28(%ebp)
083f4275 +0x0b5:  mov    -0x28(%ebp),%eax
083f4278 +0x0b8:  mov    0x8(%ebp),%edx
083f427b +0x0bb:  add    $0x1c,%edx
083f427e +0x0be:  mov    %eax,0x8(%esp)
083f4282 +0x0c2:  mov    0xc(%ebp),%eax
083f4285 +0x0c5:  mov    %eax,0x4(%esp)
083f4289 +0x0c9:  mov    %edx,(%esp)
083f428c +0x0cc:  call   0807d7d0 <_init+0xc8>
083f4291 +0x0d1:  mov    0x8(%ebp),%eax
083f4294 +0x0d4:  add    $0x1c,%eax
083f4297 +0x0d7:  mov    %eax,(%esp)
083f429a +0x0da:  call   0807e3b0 <_init+0xca8>
083f429f +0x0df:  mov    %eax,-0xc(%ebp)
083f42a2 +0x0e2:  cmpl   $0x5fff,-0xc(%ebp)
083f42a9 +0x0e9:  jle    083f42f8 <+0x138>
083f42ab +0x0eb:  movl   $0x5,0xc(%esp)
083f42b3 +0x0f3:  movl   $0x169,0x8(%esp)
083f42bb +0x0fb:  movl   $&_ZZN5MySQL9set_queryEPKczE19__PRETTY_FUNCTION__,0x4(%esp)
083f42c3 +0x103:  lea    -0x1c(%ebp),%eax
083f42c6 +0x106:  mov    %eax,(%esp)
083f42c9 +0x109:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f42ce +0x10e:  movl   $0x169,0xc(%esp)
083f42d6 +0x116:  movl   $&_ZZN5MySQL9set_queryEPKczE19__PRETTY_FUNCTION__,0x8(%esp)
083f42de +0x11e:  movl   $"[%s][%d]",0x4(%esp)
083f42e6 +0x126:  lea    -0x1c(%ebp),%eax
083f42e9 +0x129:  mov    %eax,(%esp)
083f42ec +0x12c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f42f1 +0x131:  mov    $0x0,%eax
083f42f6 +0x136:  jmp    083f4309 <+0x149>
083f42f8 +0x138:  mov    0x8(%ebp),%eax
083f42fb +0x13b:  mov    -0xc(%ebp),%edx
083f42fe +0x13e:  mov    %edx,0x42028(%eax)
083f4304 +0x144:  mov    $0x1,%eax
083f4309 +0x149:  add    $0x30,%esp
083f430c +0x14c:  pop    %ebx
083f430d +0x14d:  pop    %esi
083f430e +0x14e:  pop    %ebp
083f430f +0x14f:  ret
```

## 反编译 C

```c
// MySQL::set_query @ 0x83f41c0

/* MySQL::set_query(char const*, ...) */

bool __thiscall MySQL::set_query(MySQL *this,char *param_1,...)

{
  bool bVar1;
  string local_28;
  allocator<char> local_21;
  cMyTrace local_20 [16];
  size_t local_10;
  
  if (this[0x4208a] != (MySQL)0x0) {
    if (*(int *)this == 0) {
      return false;
    }
    std::allocator<char>::allocator();
                    /* try { // try from 083f420c to 083f4210 has its CatchHandler @ 083f4249 */
    std::string::string((string *)&local_28,param_1,(allocator *)&local_21);
                    /* try { // try from 083f4220 to 083f4224 has its CatchHandler @ 083f4227 */
    CQueryCounter::IncreaseQueryCount(*(CQueryCounter **)this,&local_28);
                    /* try { // try from 083f4242 to 083f4246 has its CatchHandler @ 083f4249 */
    std::string::~string((string *)&local_28);
    std::allocator<char>::~allocator(&local_21);
  }
  vsprintf((char *)(this + 0x1c),param_1,&stack0x0000000c);
  local_10 = strlen((char *)(this + 0x1c));
  bVar1 = (int)local_10 < 0x6000;
  if (bVar1) {
    *(size_t *)(this + 0x42028) = local_10;
  }
  else {
    cMyTrace::cMyTrace(local_20,"bool MySQL::set_query(const char*, ...)",0x169,5);
    cMyTrace::operator()(local_20,"[%s][%d]","bool MySQL::set_query(const char*, ...)",0x169);
  }
  return bVar1;
}
```
