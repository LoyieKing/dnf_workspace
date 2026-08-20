# init

`_ZN11CCharacList4initEv`

`CCharacList::init()`

| 类 | 地址 |
|---|---|
| `CCharacList` | `0x08349514` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08349514  _ZN11CCharacList4initEv
#           CCharacList::init()
# range [0x08349514, 0x08349671]
08349514 +0x000:  push   %ebp
08349515 +0x001:  mov    %esp,%ebp
08349517 +0x003:  push   %esi
08349518 +0x004:  push   %ebx
08349519 +0x005:  sub    $0xc50,%esp
0834951f +0x00b:  movl   $0x0,-0xc(%ebp)
08349526 +0x012:  lea    -0x18(%ebp),%eax
08349529 +0x015:  mov    %eax,(%esp)
0834952c +0x018:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
08349531 +0x01d:  lea    -0xc34(%ebp),%eax
08349537 +0x023:  mov    %eax,(%esp)
0834953a +0x026:  call   08368348 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x2314>  ; global constructors keyed to CServerEvent::m_nExpRate+0x2314
0834953f +0x02b:  lea    -0xc3c(%ebp),%eax
08349545 +0x031:  movl   $&g_stCharacterScriptFileList,0x4(%esp)
0834954d +0x039:  mov    %eax,(%esp)
08349550 +0x03c:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08349555 +0x041:  sub    $0x4,%esp
08349558 +0x044:  mov    -0xc3c(%ebp),%eax
0834955e +0x04a:  mov    %eax,-0x18(%ebp)
08349561 +0x04d:  jmp    08349600 <+0xec>
08349566 +0x052:  lea    -0x18(%ebp),%eax
08349569 +0x055:  mov    %eax,(%esp)
0834956c +0x058:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08349571 +0x05d:  add    $0x4,%eax
08349574 +0x060:  mov    %eax,(%esp)
08349577 +0x063:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0834957c +0x068:  mov    %eax,-0xc(%ebp)
0834957f +0x06b:  cmpl   $0x0,-0xc(%ebp)
08349583 +0x06f:  je     08349632 <+0x11e>
08349589 +0x075:  mov    -0xc(%ebp),%eax
0834958c +0x078:  mov    %eax,0x4(%esp)
08349590 +0x07c:  lea    -0xc34(%ebp),%eax
08349596 +0x082:  mov    %eax,(%esp)
08349599 +0x085:  call   08a0ce06 <_Z21ImportCharacterScriptP17STCharacterScriptPKc>  ; ImportCharacterScript(STCharacterScript*, char const*)
0834959e +0x08a:  xor    $0x1,%eax
083495a1 +0x08d:  test   %al,%al
083495a3 +0x08f:  je     083495c2 <+0xae>
083495a5 +0x091:  mov    -0xc(%ebp),%eax
083495a8 +0x094:  mov    %eax,0x4(%esp)
083495ac +0x098:  movl   $"Charac Script Error: %s\n",(%esp)
083495b3 +0x09f:  call   0807db60 <_init+0x458>
083495b8 +0x0a4:  mov    $0x0,%ebx
083495bd +0x0a9:  jmp    08349658 <+0x144>
083495c2 +0x0ae:  mov    -0xc34(%ebp),%eax
083495c8 +0x0b4:  imul   $0x7dc,%eax,%eax
083495ce +0x0ba:  add    0x8(%ebp),%eax
083495d1 +0x0bd:  lea    -0xc34(%ebp),%edx
083495d7 +0x0c3:  mov    %edx,0x4(%esp)
083495db +0x0c7:  mov    %eax,(%esp)
083495de +0x0ca:  call   08348894 <_ZN10CCharacter8set_dataEP17STCharacterScript>  ; CCharacter::set_data(STCharacterScript*)
083495e3 +0x0cf:  lea    -0x10(%ebp),%eax
083495e6 +0x0d2:  movl   $0x0,0x8(%esp)
083495ee +0x0da:  lea    -0x18(%ebp),%edx
083495f1 +0x0dd:  mov    %edx,0x4(%esp)
083495f5 +0x0e1:  mov    %eax,(%esp)
083495f8 +0x0e4:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
083495fd +0x0e9:  sub    $0x4,%esp
08349600 +0x0ec:  lea    -0x14(%ebp),%eax
08349603 +0x0ef:  movl   $&g_stCharacterScriptFileList,0x4(%esp)
0834960b +0x0f7:  mov    %eax,(%esp)
0834960e +0x0fa:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08349613 +0x0ff:  sub    $0x4,%esp
08349616 +0x102:  lea    -0x14(%ebp),%eax
08349619 +0x105:  mov    %eax,0x4(%esp)
0834961d +0x109:  lea    -0x18(%ebp),%eax
08349620 +0x10c:  mov    %eax,(%esp)
08349623 +0x10f:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08349628 +0x114:  test   %al,%al
0834962a +0x116:  jne    08349566 <+0x52>
08349630 +0x11c:  jmp    08349633 <+0x11f>
08349632 +0x11e:  nop
08349633 +0x11f:  mov    $0x1,%ebx
08349638 +0x124:  jmp    08349658 <+0x144>
0834963a +0x126:  mov    %edx,%ebx
0834963c +0x128:  mov    %eax,%esi
0834963e +0x12a:  lea    -0xc34(%ebp),%eax
08349644 +0x130:  mov    %eax,(%esp)
08349647 +0x133:  call   08376362 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5e02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5e02
0834964c +0x138:  mov    %esi,%eax
0834964e +0x13a:  mov    %ebx,%edx
08349650 +0x13c:  mov    %eax,(%esp)
08349653 +0x13f:  call   08ae3750 <_Unwind_Resume>
08349658 +0x144:  lea    -0xc34(%ebp),%eax
0834965e +0x14a:  mov    %eax,(%esp)
08349661 +0x14d:  call   08376362 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5e02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5e02
08349666 +0x152:  mov    %ebx,%eax
08349668 +0x154:  lea    -0x8(%ebp),%esp
0834966b +0x157:  add    $0x0,%esp
0834966e +0x15a:  pop    %ebx
0834966f +0x15b:  pop    %esi
08349670 +0x15c:  pop    %ebp
08349671 +0x15d:  ret
```

## 反编译 C

```c
// CCharacList::init @ 0x8349514

/* CCharacList::init() */

undefined4 __thiscall CCharacList::init(CCharacList *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c40 [2];
  int local_c38 [775];
  undefined4 local_1c;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_14 [4];
  char *local_10;
  
  local_10 = (char *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_1c);
  STCharacterScript::STCharacterScript((STCharacterScript *)local_c38);
                    /* try { // try from 08349550 to 08349612 has its CatchHandler @ 0834963a */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_c40);
  local_1c = local_c40[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_1c);
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = ImportCharacterScript((STCharacterScript *)local_c38,local_10);
    if (cVar1 != '\x01') {
      printf("Charac Script Error: %s\n",local_10);
      uVar3 = 0;
      goto LAB_08349658;
    }
    CCharacter::set_data((CCharacter *)(this + local_c38[0] * 0x7dc),(STCharacterScript *)local_c38)
    ;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_14,(int)&local_1c);
  }
  uVar3 = 1;
LAB_08349658:
  STCharacterScript::~STCharacterScript((STCharacterScript *)local_c38);
  return uVar3;
}
```
