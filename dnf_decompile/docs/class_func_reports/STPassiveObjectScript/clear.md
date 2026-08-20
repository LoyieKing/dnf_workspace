# clear

`_ZN21STPassiveObjectScript5clearEv`

`STPassiveObjectScript::clear()`

| 类 | 地址 |
|---|---|
| `STPassiveObjectScript` | `0x08a3a9e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3a9e6  _ZN21STPassiveObjectScript5clearEv
#           STPassiveObjectScript::clear()
# range [0x08a3a9e6, 0x08a3ad59]
08a3a9e6 +0x000:  push   %ebp
08a3a9e7 +0x001:  mov    %esp,%ebp
08a3a9e9 +0x003:  sub    $0x18,%esp
08a3a9ec +0x006:  mov    0x8(%ebp),%eax
08a3a9ef +0x009:  movl   $0x0,(%eax)
08a3a9f5 +0x00f:  mov    0x8(%ebp),%eax
08a3a9f8 +0x012:  add    $0x4,%eax
08a3a9fb +0x015:  movl   $"",0x4(%esp)
08a3aa03 +0x01d:  mov    %eax,(%esp)
08a3aa06 +0x020:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3aa0b +0x025:  mov    0x8(%ebp),%eax
08a3aa0e +0x028:  add    $0x8,%eax
08a3aa11 +0x02b:  movl   $"",0x4(%esp)
08a3aa19 +0x033:  mov    %eax,(%esp)
08a3aa1c +0x036:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3aa21 +0x03b:  mov    0x8(%ebp),%eax
08a3aa24 +0x03e:  movl   $0x0,0xc(%eax)
08a3aa2b +0x045:  mov    0x8(%ebp),%eax
08a3aa2e +0x048:  movl   $0x0,0x10(%eax)
08a3aa35 +0x04f:  mov    0x8(%ebp),%eax
08a3aa38 +0x052:  movl   $0x0,0x14(%eax)
08a3aa3f +0x059:  mov    0x8(%ebp),%eax
08a3aa42 +0x05c:  movl   $0x1,0x18(%eax)
08a3aa49 +0x063:  mov    0x8(%ebp),%eax
08a3aa4c +0x066:  movl   $0x0,0x1c(%eax)
08a3aa53 +0x06d:  mov    0x8(%ebp),%eax
08a3aa56 +0x070:  movl   $0x0,0x20(%eax)
08a3aa5d +0x077:  mov    0x8(%ebp),%eax
08a3aa60 +0x07a:  movl   $0x0,0x24(%eax)
08a3aa67 +0x081:  mov    0x8(%ebp),%eax
08a3aa6a +0x084:  add    $0x28,%eax
08a3aa6d +0x087:  mov    %eax,(%esp)
08a3aa70 +0x08a:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3aa75 +0x08f:  mov    0x8(%ebp),%eax
08a3aa78 +0x092:  add    $0x34,%eax
08a3aa7b +0x095:  movl   $"",0x4(%esp)
08a3aa83 +0x09d:  mov    %eax,(%esp)
08a3aa86 +0x0a0:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3aa8b +0x0a5:  mov    0x8(%ebp),%eax
08a3aa8e +0x0a8:  add    $0x38,%eax
08a3aa91 +0x0ab:  mov    %eax,(%esp)
08a3aa94 +0x0ae:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a3aa99 +0x0b3:  mov    0x8(%ebp),%eax
08a3aa9c +0x0b6:  add    $0x64,%eax
08a3aa9f +0x0b9:  movl   $"",0x4(%esp)
08a3aaa7 +0x0c1:  mov    %eax,(%esp)
08a3aaaa +0x0c4:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3aaaf +0x0c9:  mov    0x8(%ebp),%eax
08a3aab2 +0x0cc:  add    $0x68,%eax
08a3aab5 +0x0cf:  movl   $"",0x4(%esp)
08a3aabd +0x0d7:  mov    %eax,(%esp)
08a3aac0 +0x0da:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3aac5 +0x0df:  mov    0x8(%ebp),%eax
08a3aac8 +0x0e2:  add    $0x6c,%eax
08a3aacb +0x0e5:  mov    %eax,(%esp)
08a3aace +0x0e8:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a3aad3 +0x0ed:  mov    0x8(%ebp),%eax
08a3aad6 +0x0f0:  add    $0x44,%eax
08a3aad9 +0x0f3:  movl   $"",0x4(%esp)
08a3aae1 +0x0fb:  mov    %eax,(%esp)
08a3aae4 +0x0fe:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3aae9 +0x103:  mov    0x8(%ebp),%eax
08a3aaec +0x106:  add    $0x48,%eax
08a3aaef +0x109:  mov    %eax,(%esp)
08a3aaf2 +0x10c:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a3aaf7 +0x111:  mov    0x8(%ebp),%eax
08a3aafa +0x114:  add    $0x54,%eax
08a3aafd +0x117:  movl   $"",0x4(%esp)
08a3ab05 +0x11f:  mov    %eax,(%esp)
08a3ab08 +0x122:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3ab0d +0x127:  mov    0x8(%ebp),%eax
08a3ab10 +0x12a:  movb   $0x0,0x58(%eax)
08a3ab14 +0x12e:  mov    0x8(%ebp),%eax
08a3ab17 +0x131:  movb   $0x0,0x59(%eax)
08a3ab1b +0x135:  mov    0x8(%ebp),%eax
08a3ab1e +0x138:  movb   $0x0,0x5a(%eax)
08a3ab22 +0x13c:  mov    0x8(%ebp),%eax
08a3ab25 +0x13f:  movl   $0xffffffff,0x5c(%eax)
08a3ab2c +0x146:  mov    0x8(%ebp),%eax
08a3ab2f +0x149:  movb   $0x0,0x61(%eax)
08a3ab33 +0x14d:  mov    0x8(%ebp),%eax
08a3ab36 +0x150:  movb   $0x0,0x60(%eax)
08a3ab3a +0x154:  mov    0x8(%ebp),%eax
08a3ab3d +0x157:  movb   $0x0,0x62(%eax)
08a3ab41 +0x15b:  mov    0x8(%ebp),%eax
08a3ab44 +0x15e:  add    $0x78,%eax
08a3ab47 +0x161:  mov    %eax,(%esp)
08a3ab4a +0x164:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3ab4f +0x169:  mov    0x8(%ebp),%eax
08a3ab52 +0x16c:  add    $0x84,%eax
08a3ab57 +0x171:  mov    %eax,(%esp)
08a3ab5a +0x174:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08a3ab5f +0x179:  mov    0x8(%ebp),%eax
08a3ab62 +0x17c:  add    $0x90,%eax
08a3ab67 +0x181:  movl   $"",0x4(%esp)
08a3ab6f +0x189:  mov    %eax,(%esp)
08a3ab72 +0x18c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3ab77 +0x191:  mov    0x8(%ebp),%eax
08a3ab7a +0x194:  movl   $0xffffffff,0x94(%eax)
08a3ab84 +0x19e:  mov    0x8(%ebp),%eax
08a3ab87 +0x1a1:  movl   $0x0,0x98(%eax)
08a3ab91 +0x1ab:  mov    0x8(%ebp),%eax
08a3ab94 +0x1ae:  add    $0x140,%eax
08a3ab99 +0x1b3:  mov    %eax,(%esp)
08a3ab9c +0x1b6:  call   08a41124 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x43d5>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x43d5
08a3aba1 +0x1bb:  mov    0x8(%ebp),%eax
08a3aba4 +0x1be:  movb   $0x0,0x9c(%eax)
08a3abab +0x1c5:  mov    0x8(%ebp),%eax
08a3abae +0x1c8:  movl   $0x1,0xa0(%eax)
08a3abb8 +0x1d2:  mov    0x8(%ebp),%eax
08a3abbb +0x1d5:  movl   $0x0,0xa4(%eax)
08a3abc5 +0x1df:  mov    0x8(%ebp),%eax
08a3abc8 +0x1e2:  mov    $0x0,%edx
08a3abcd +0x1e7:  mov    %edx,0xa8(%eax)
08a3abd3 +0x1ed:  mov    0x8(%ebp),%eax
08a3abd6 +0x1f0:  mov    $0x0,%edx
08a3abdb +0x1f5:  mov    %edx,0xac(%eax)
08a3abe1 +0x1fb:  mov    0x8(%ebp),%eax
08a3abe4 +0x1fe:  movl   $0x1f4,0xb0(%eax)
08a3abee +0x208:  mov    0x8(%ebp),%eax
08a3abf1 +0x20b:  movb   $0x0,0xb4(%eax)
08a3abf8 +0x212:  mov    0x8(%ebp),%eax
08a3abfb +0x215:  mov    $0x0,%edx
08a3ac00 +0x21a:  mov    %edx,0xb8(%eax)
08a3ac06 +0x220:  mov    0x8(%ebp),%eax
08a3ac09 +0x223:  mov    $0x0,%edx
08a3ac0e +0x228:  mov    %edx,0xbc(%eax)
08a3ac14 +0x22e:  mov    0x8(%ebp),%eax
08a3ac17 +0x231:  mov    $0x43340000,%edx
08a3ac1c +0x236:  mov    %edx,0xc0(%eax)
08a3ac22 +0x23c:  mov    0x8(%ebp),%eax
08a3ac25 +0x23f:  movl   $0x0,0xc4(%eax)
08a3ac2f +0x249:  mov    0x8(%ebp),%eax
08a3ac32 +0x24c:  movl   $0x0,0xc8(%eax)
08a3ac3c +0x256:  mov    0x8(%ebp),%eax
08a3ac3f +0x259:  movl   $0xffffffff,0xcc(%eax)
08a3ac49 +0x263:  mov    0x8(%ebp),%eax
08a3ac4c +0x266:  movl   $0x0,0xd0(%eax)
08a3ac56 +0x270:  mov    0x8(%ebp),%eax
08a3ac59 +0x273:  movb   $0x0,0xd4(%eax)
08a3ac60 +0x27a:  mov    0x8(%ebp),%eax
08a3ac63 +0x27d:  movb   $0x0,0xd5(%eax)
08a3ac6a +0x284:  mov    0x8(%ebp),%eax
08a3ac6d +0x287:  movb   $0x0,0x14c(%eax)
08a3ac74 +0x28e:  mov    0x8(%ebp),%eax
08a3ac77 +0x291:  movb   $0x0,0x14d(%eax)
08a3ac7e +0x298:  mov    0x8(%ebp),%eax
08a3ac81 +0x29b:  movb   $0x0,0x14e(%eax)
08a3ac88 +0x2a2:  mov    0x8(%ebp),%eax
08a3ac8b +0x2a5:  movb   $0xff,0x14f(%eax)
08a3ac92 +0x2ac:  mov    0x8(%ebp),%eax
08a3ac95 +0x2af:  movw   $0xffff,0x150(%eax)
08a3ac9e +0x2b8:  mov    0x8(%ebp),%eax
08a3aca1 +0x2bb:  add    $0x154,%eax
08a3aca6 +0x2c0:  movl   $"",0x4(%esp)
08a3acae +0x2c8:  mov    %eax,(%esp)
08a3acb1 +0x2cb:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3acb6 +0x2d0:  mov    0x8(%ebp),%eax
08a3acb9 +0x2d3:  movl   $0x0,0x15c(%eax)
08a3acc3 +0x2dd:  mov    0x8(%ebp),%eax
08a3acc6 +0x2e0:  movb   $0x0,0x158(%eax)
08a3accd +0x2e7:  mov    0x8(%ebp),%eax
08a3acd0 +0x2ea:  movb   $0x0,0x159(%eax)
08a3acd7 +0x2f1:  mov    0x8(%ebp),%eax
08a3acda +0x2f4:  add    $0x160,%eax
08a3acdf +0x2f9:  mov    %eax,(%esp)
08a3ace2 +0x2fc:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a3ace7 +0x301:  mov    0x8(%ebp),%eax
08a3acea +0x304:  movb   $0x0,0x16c(%eax)
08a3acf1 +0x30b:  mov    0x8(%ebp),%eax
08a3acf4 +0x30e:  mov    $0xbf800000,%edx
08a3acf9 +0x313:  mov    %edx,0x170(%eax)
08a3acff +0x319:  mov    0x8(%ebp),%eax
08a3ad02 +0x31c:  movl   $0x0,0x174(%eax)
08a3ad0c +0x326:  mov    0x8(%ebp),%eax
08a3ad0f +0x329:  movl   $0x0,0x178(%eax)
08a3ad19 +0x333:  mov    0x8(%ebp),%eax
08a3ad1c +0x336:  add    $0x17c,%eax
08a3ad21 +0x33b:  movl   $"",0x4(%esp)
08a3ad29 +0x343:  mov    %eax,(%esp)
08a3ad2c +0x346:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08a3ad31 +0x34b:  mov    0x8(%ebp),%eax
08a3ad34 +0x34e:  add    $0x180,%eax
08a3ad39 +0x353:  mov    %eax,(%esp)
08a3ad3c +0x356:  call   08a407c2 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x3a73>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x3a73
08a3ad41 +0x35b:  mov    0x8(%ebp),%eax
08a3ad44 +0x35e:  movl   $0x2,0x270(%eax)
08a3ad4e +0x368:  mov    0x8(%ebp),%eax
08a3ad51 +0x36b:  movb   $0x0,0x280(%eax)
08a3ad58 +0x372:  leave
08a3ad59 +0x373:  ret
```

## 反编译 C

```c
// STPassiveObjectScript::clear @ 0x8a3a9e6

/* STPassiveObjectScript::clear() */

void __thiscall STPassiveObjectScript::clear(STPassiveObjectScript *this)

{
  *(undefined4 *)this = 0;
  std::string::operator=((string *)(this + 4),"");
  std::string::operator=((string *)(this + 8),"");
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x28));
  std::string::operator=((string *)(this + 0x34),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::string::operator=((string *)(this + 100),"");
  std::string::operator=((string *)(this + 0x68),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x6c));
  std::string::operator=((string *)(this + 0x44),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
  std::string::operator=((string *)(this + 0x54),"");
  this[0x58] = (STPassiveObjectScript)0x0;
  this[0x59] = (STPassiveObjectScript)0x0;
  this[0x5a] = (STPassiveObjectScript)0x0;
  *(undefined4 *)(this + 0x5c) = 0xffffffff;
  this[0x61] = (STPassiveObjectScript)0x0;
  this[0x60] = (STPassiveObjectScript)0x0;
  this[0x62] = (STPassiveObjectScript)0x0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x78));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x84));
  std::string::operator=((string *)(this + 0x90),"");
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0;
  std::
  vector<STPassiveObjectAdditionalParticleInfo*,std::allocator<STPassiveObjectAdditionalParticleInfo*>>
  ::clear((vector<STPassiveObjectAdditionalParticleInfo*,std::allocator<STPassiveObjectAdditionalParticleInfo*>>
           *)(this + 0x140));
  this[0x9c] = (STPassiveObjectScript)0x0;
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 500;
  this[0xb4] = (STPassiveObjectScript)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x43340000;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0xffffffff;
  *(undefined4 *)(this + 0xd0) = 0;
  this[0xd4] = (STPassiveObjectScript)0x0;
  this[0xd5] = (STPassiveObjectScript)0x0;
  this[0x14c] = (STPassiveObjectScript)0x0;
  this[0x14d] = (STPassiveObjectScript)0x0;
  this[0x14e] = (STPassiveObjectScript)0x0;
  this[0x14f] = (STPassiveObjectScript)0xff;
  *(undefined2 *)(this + 0x150) = 0xffff;
  std::string::operator=((string *)(this + 0x154),"");
  *(undefined4 *)(this + 0x15c) = 0;
  this[0x158] = (STPassiveObjectScript)0x0;
  this[0x159] = (STPassiveObjectScript)0x0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x160));
  this[0x16c] = (STPassiveObjectScript)0x0;
  *(undefined4 *)(this + 0x170) = 0xbf800000;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  std::string::operator=((string *)(this + 0x17c),"");
  std::vector<SpeedCtrlPassiveObjInfo,std::allocator<SpeedCtrlPassiveObjInfo>>::clear
            ((vector<SpeedCtrlPassiveObjInfo,std::allocator<SpeedCtrlPassiveObjInfo>> *)
             (this + 0x180));
  *(undefined4 *)(this + 0x270) = 2;
  this[0x280] = (STPassiveObjectScript)0x0;
  return;
}
```
