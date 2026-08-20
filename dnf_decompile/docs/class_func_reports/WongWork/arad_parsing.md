# arad_parsing

`_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_`

`WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `WongWork` | `0x08483e98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483e98  _ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_
#           WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x08483e98, 0x08483fad]
08483e98 +0x000:  push   %ebp
08483e99 +0x001:  mov    %esp,%ebp
08483e9b +0x003:  push   %esi
08483e9c +0x004:  push   %ebx
08483e9d +0x005:  sub    $0x20,%esp
08483ea0 +0x008:  movl   $0x0,0x8(%esp)
08483ea8 +0x010:  mov    0x10(%ebp),%eax
08483eab +0x013:  mov    %eax,0x4(%esp)
08483eaf +0x017:  mov    0x8(%ebp),%eax
08483eb2 +0x01a:  mov    %eax,(%esp)
08483eb5 +0x01d:  call   08706e20 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xa30>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xa30
08483eba +0x022:  mov    %eax,-0x10(%ebp)
08483ebd +0x025:  mov    -0x10(%ebp),%eax
08483ec0 +0x028:  mov    %eax,0x8(%esp)
08483ec4 +0x02c:  mov    0x10(%ebp),%eax
08483ec7 +0x02f:  mov    %eax,0x4(%esp)
08483ecb +0x033:  mov    0x8(%ebp),%eax
08483ece +0x036:  mov    %eax,(%esp)
08483ed1 +0x039:  call   08706fd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xbe0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xbe0
08483ed6 +0x03e:  mov    %eax,-0xc(%ebp)
08483ed9 +0x041:  mov    0xc(%ebp),%eax
08483edc +0x044:  mov    %eax,(%esp)
08483edf +0x047:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08483ee4 +0x04c:  jmp    08483f83 <+0xeb>
08483ee9 +0x051:  mov    -0x10(%ebp),%eax
08483eec +0x054:  mov    -0xc(%ebp),%edx
08483eef +0x057:  sub    %eax,%edx
08483ef1 +0x059:  lea    -0x14(%ebp),%eax
08483ef4 +0x05c:  mov    %edx,0xc(%esp)
08483ef8 +0x060:  mov    -0x10(%ebp),%edx
08483efb +0x063:  mov    %edx,0x8(%esp)
08483eff +0x067:  mov    0x8(%ebp),%edx
08483f02 +0x06a:  mov    %edx,0x4(%esp)
08483f06 +0x06e:  mov    %eax,(%esp)
08483f09 +0x071:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
08483f0e +0x076:  sub    $0x4,%esp
08483f11 +0x079:  lea    -0x14(%ebp),%eax
08483f14 +0x07c:  mov    %eax,0x4(%esp)
08483f18 +0x080:  mov    0xc(%ebp),%eax
08483f1b +0x083:  mov    %eax,(%esp)
08483f1e +0x086:  call   08237aac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd156>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd156
08483f23 +0x08b:  jmp    08483f40 <+0xa8>
08483f25 +0x08d:  mov    %edx,%ebx
08483f27 +0x08f:  mov    %eax,%esi
08483f29 +0x091:  lea    -0x14(%ebp),%eax
08483f2c +0x094:  mov    %eax,(%esp)
08483f2f +0x097:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08483f34 +0x09c:  mov    %esi,%eax
08483f36 +0x09e:  mov    %ebx,%edx
08483f38 +0x0a0:  mov    %eax,(%esp)
08483f3b +0x0a3:  call   08ae3750 <_Unwind_Resume>
08483f40 +0x0a8:  lea    -0x14(%ebp),%eax
08483f43 +0x0ab:  mov    %eax,(%esp)
08483f46 +0x0ae:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08483f4b +0x0b3:  mov    -0xc(%ebp),%eax
08483f4e +0x0b6:  mov    %eax,0x8(%esp)
08483f52 +0x0ba:  mov    0x10(%ebp),%eax
08483f55 +0x0bd:  mov    %eax,0x4(%esp)
08483f59 +0x0c1:  mov    0x8(%ebp),%eax
08483f5c +0x0c4:  mov    %eax,(%esp)
08483f5f +0x0c7:  call   08706e20 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xa30>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xa30
08483f64 +0x0cc:  mov    %eax,-0x10(%ebp)
08483f67 +0x0cf:  mov    -0x10(%ebp),%eax
08483f6a +0x0d2:  mov    %eax,0x8(%esp)
08483f6e +0x0d6:  mov    0x10(%ebp),%eax
08483f71 +0x0d9:  mov    %eax,0x4(%esp)
08483f75 +0x0dd:  mov    0x8(%ebp),%eax
08483f78 +0x0e0:  mov    %eax,(%esp)
08483f7b +0x0e3:  call   08706fd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xbe0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xbe0
08483f80 +0x0e8:  mov    %eax,-0xc(%ebp)
08483f83 +0x0eb:  cmpl   $0xffffffff,-0xc(%ebp)
08483f87 +0x0ef:  jne    08483f8f <+0xf7>
08483f89 +0x0f1:  cmpl   $0xffffffff,-0x10(%ebp)
08483f8d +0x0f5:  je     08483f96 <+0xfe>
08483f8f +0x0f7:  mov    $0x1,%eax
08483f94 +0x0fc:  jmp    08483f9b <+0x103>
08483f96 +0x0fe:  mov    $0x0,%eax
08483f9b +0x103:  test   %al,%al
08483f9d +0x105:  jne    08483ee9 <+0x51>
08483fa3 +0x10b:  lea    -0x8(%ebp),%esp
08483fa6 +0x10e:  add    $0x0,%esp
08483fa9 +0x111:  pop    %ebx
08483faa +0x112:  pop    %esi
08483fab +0x113:  pop    %ebp
08483fac +0x114:  ret
08483fad +0x115:  nop
```

## 反编译 C

```c
// WongWork::arad_parsing @ 0x8483e98

/* WongWork::arad_parsing(std::string const&, std::vector<std::string, std::allocator<std::string >
   >&, std::string const&) */

void WongWork::arad_parsing(string *param_1,vector *param_2,string *param_3)

{
  bool bVar1;
  string local_18;
  uint local_14;
  uint local_10;
  
  local_14 = std::string::find_first_not_of((string *)param_1,param_3,0);
  local_10 = std::string::find_first_of((string *)param_1,param_3,local_14);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_2);
  while( true ) {
    if ((local_10 == 0xffffffff) && (local_14 == 0xffffffff)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    std::string::substr((uint)&local_18,(uint)param_1);
                    /* try { // try from 08483f1e to 08483f22 has its CatchHandler @ 08483f25 */
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)param_2,&local_18);
    std::string::~string((string *)&local_18);
    local_14 = std::string::find_first_not_of((string *)param_1,param_3,local_10);
    local_10 = std::string::find_first_of((string *)param_1,param_3,local_14);
  }
  return;
}
```
