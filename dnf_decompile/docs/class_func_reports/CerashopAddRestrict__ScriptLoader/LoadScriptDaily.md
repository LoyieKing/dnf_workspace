# LoadScriptDaily

`_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE`

`CerashopAddRestrict::ScriptLoader::LoadScriptDaily(CerashopAddRestrict::RestrictType::T)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::ScriptLoader` | `0x08abf4de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08abf4de  _ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE
#           CerashopAddRestrict::ScriptLoader::LoadScriptDaily(CerashopAddRestrict::RestrictType::T)
# range [0x08abf4de, 0x08abf703]
08abf4de +0x000:  push   %ebp
08abf4df +0x001:  mov    %esp,%ebp
08abf4e1 +0x003:  push   %edi
08abf4e2 +0x004:  push   %esi
08abf4e3 +0x005:  push   %ebx
08abf4e4 +0x006:  sub    $0x8c,%esp
08abf4ea +0x00c:  lea    -0x44(%ebp),%eax
08abf4ed +0x00f:  mov    %eax,(%esp)
08abf4f0 +0x012:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08abf4f5 +0x017:  movb   $0x0,-0x45(%ebp)
08abf4f9 +0x01b:  movb   $0x0,-0x46(%ebp)
08abf4fd +0x01f:  movb   $0x0,-0x25(%ebp)
08abf501 +0x023:  movl   $0x0,-0x4e(%ebp)
08abf508 +0x02a:  movl   $0x0,-0x4a(%ebp)
08abf50f +0x031:  movl   $0x0,-0x56(%ebp)
08abf516 +0x038:  movl   $0x0,-0x52(%ebp)
08abf51d +0x03f:  movl   $0x1,0xc(%esp)
08abf525 +0x047:  lea    -0x46(%ebp),%eax
08abf528 +0x04a:  mov    %eax,0x8(%esp)
08abf52c +0x04e:  lea    -0x44(%ebp),%eax
08abf52f +0x051:  mov    %eax,0x4(%esp)
08abf533 +0x055:  lea    -0x45(%ebp),%eax
08abf536 +0x058:  mov    %eax,(%esp)
08abf539 +0x05b:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
08abf53e +0x060:  mov    %eax,-0x5c(%ebp)
08abf541 +0x063:  movzbl -0x45(%ebp),%eax
08abf545 +0x067:  test   %al,%al
08abf547 +0x069:  jne    08abf6c6 <+0x1e8>
08abf54d +0x06f:  movzbl -0x46(%ebp),%eax
08abf551 +0x073:  xor    $0x1,%eax
08abf554 +0x076:  test   %al,%al
08abf556 +0x078:  jne    08abf6c9 <+0x1eb>
08abf55c +0x07e:  movl   $0x0,(%esp)
08abf563 +0x085:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08abf568 +0x08a:  mov    %eax,-0x24(%ebp)
08abf56b +0x08d:  movl   $0x0,(%esp)
08abf572 +0x094:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08abf577 +0x099:  mov    %eax,-0x20(%ebp)
08abf57a +0x09c:  lea    -0x4e(%ebp),%eax
08abf57d +0x09f:  mov    %eax,(%esp)
08abf580 +0x0a2:  call   08abf164 <_ZN19CerashopAddRestrict8readTimeEPs>  ; CerashopAddRestrict::readTime(short*)
08abf585 +0x0a7:  xor    $0x1,%eax
08abf588 +0x0aa:  test   %al,%al
08abf58a +0x0ac:  je     08abf596 <+0xb8>
08abf58c +0x0ae:  mov    $0xffffffff,%ebx
08abf591 +0x0b3:  jmp    08abf6ec <+0x20e>
08abf596 +0x0b8:  lea    -0x56(%ebp),%eax
08abf599 +0x0bb:  mov    %eax,(%esp)
08abf59c +0x0be:  call   08abf164 <_ZN19CerashopAddRestrict8readTimeEPs>  ; CerashopAddRestrict::readTime(short*)
08abf5a1 +0x0c3:  xor    $0x1,%eax
08abf5a4 +0x0c6:  test   %al,%al
08abf5a6 +0x0c8:  je     08abf5b2 <+0xd4>
08abf5a8 +0x0ca:  mov    $0xffffffff,%ebx
08abf5ad +0x0cf:  jmp    08abf6ec <+0x20e>
08abf5b2 +0x0d4:  movl   $0x0,(%esp)
08abf5b9 +0x0db:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08abf5be +0x0e0:  mov    %eax,-0x1c(%ebp)
08abf5c1 +0x0e3:  mov    0x8(%ebp),%edx
08abf5c4 +0x0e6:  lea    -0x40(%ebp),%eax
08abf5c7 +0x0e9:  mov    %edx,0x4(%esp)
08abf5cb +0x0ed:  mov    %eax,(%esp)
08abf5ce +0x0f0:  call   08abf896 <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x8c>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x8c
08abf5d3 +0x0f5:  sub    $0x4,%esp
08abf5d6 +0x0f8:  mov    0x8(%ebp),%edx
08abf5d9 +0x0fb:  lea    -0x3c(%ebp),%eax
08abf5dc +0x0fe:  lea    -0x5c(%ebp),%ecx
08abf5df +0x101:  mov    %ecx,0x8(%esp)
08abf5e3 +0x105:  mov    %edx,0x4(%esp)
08abf5e7 +0x109:  mov    %eax,(%esp)
08abf5ea +0x10c:  call   08abf86a <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x60>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x60
08abf5ef +0x111:  sub    $0x4,%esp
08abf5f2 +0x114:  lea    -0x40(%ebp),%eax
08abf5f5 +0x117:  mov    %eax,0x4(%esp)
08abf5f9 +0x11b:  lea    -0x3c(%ebp),%eax
08abf5fc +0x11e:  mov    %eax,(%esp)
08abf5ff +0x121:  call   08abf8bc <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0xb2>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0xb2
08abf604 +0x126:  test   %al,%al
08abf606 +0x128:  je     08abf6ac <+0x1ce>
08abf60c +0x12e:  lea    -0x4e(%ebp),%eax
08abf60f +0x131:  mov    %eax,(%esp)
08abf612 +0x134:  call   08abf33f <_ZN19CerashopAddRestrict10uint32TimeEPs>  ; CerashopAddRestrict::uint32Time(short*)
08abf617 +0x139:  mov    %eax,%edi
08abf619 +0x13b:  lea    -0x56(%ebp),%eax
08abf61c +0x13e:  mov    %eax,(%esp)
08abf61f +0x141:  call   08abf33f <_ZN19CerashopAddRestrict10uint32TimeEPs>  ; CerashopAddRestrict::uint32Time(short*)
08abf624 +0x146:  mov    %eax,-0x6c(%ebp)
08abf627 +0x149:  movl   $0x1c,(%esp)
08abf62e +0x150:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08abf633 +0x155:  mov    %eax,%ebx
08abf635 +0x157:  mov    -0x24(%ebp),%esi
08abf638 +0x15a:  mov    -0x5c(%ebp),%ecx
08abf63b +0x15d:  mov    %ebx,%edx
08abf63d +0x15f:  mov    -0x1c(%ebp),%eax
08abf640 +0x162:  mov    %eax,0x1c(%esp)
08abf644 +0x166:  mov    -0x20(%ebp),%eax
08abf647 +0x169:  mov    %eax,0x18(%esp)
08abf64b +0x16d:  mov    -0x6c(%ebp),%eax
08abf64e +0x170:  mov    %eax,0x14(%esp)
08abf652 +0x174:  mov    %edi,0x10(%esp)
08abf656 +0x178:  mov    %esi,0xc(%esp)
08abf65a +0x17c:  mov    %ecx,0x8(%esp)
08abf65e +0x180:  mov    0xc(%ebp),%eax
08abf661 +0x183:  mov    %eax,0x4(%esp)
08abf665 +0x187:  mov    %edx,(%esp)
08abf668 +0x18a:  call   08abf826 <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x1c>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x1c
08abf66d +0x18f:  mov    %ebx,%eax
08abf66f +0x191:  mov    %eax,-0x60(%ebp)
08abf672 +0x194:  lea    -0x60(%ebp),%eax
08abf675 +0x197:  mov    %eax,0x8(%esp)
08abf679 +0x19b:  lea    -0x5c(%ebp),%eax
08abf67c +0x19e:  mov    %eax,0x4(%esp)
08abf680 +0x1a2:  lea    -0x30(%ebp),%eax
08abf683 +0x1a5:  mov    %eax,(%esp)
08abf686 +0x1a8:  call   08abf8d0 <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0xc6>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0xc6
08abf68b +0x1ad:  mov    0x8(%ebp),%edx
08abf68e +0x1b0:  lea    -0x38(%ebp),%eax
08abf691 +0x1b3:  lea    -0x30(%ebp),%ecx
08abf694 +0x1b6:  mov    %ecx,0x8(%esp)
08abf698 +0x1ba:  mov    %edx,0x4(%esp)
08abf69c +0x1be:  mov    %eax,(%esp)
08abf69f +0x1c1:  call   08abf8fe <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0xf4>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0xf4
08abf6a4 +0x1c6:  sub    $0x4,%esp
08abf6a7 +0x1c9:  jmp    08abf501 <+0x23>
08abf6ac +0x1ce:  mov    -0x5c(%ebp),%eax
08abf6af +0x1d1:  mov    %eax,0x4(%esp)
08abf6b3 +0x1d5:  movl   $"already registed ipg_no:%u",(%esp)
08abf6ba +0x1dc:  call   0807db60 <_init+0x458>
08abf6bf +0x1e1:  mov    $0xffffffff,%ebx
08abf6c4 +0x1e6:  jmp    08abf6ec <+0x20e>
08abf6c6 +0x1e8:  nop
08abf6c7 +0x1e9:  jmp    08abf6ca <+0x1ec>
08abf6c9 +0x1eb:  nop
08abf6ca +0x1ec:  mov    $0x0,%ebx
08abf6cf +0x1f1:  jmp    08abf6ec <+0x20e>
08abf6d1 +0x1f3:  mov    %edx,%ebx
08abf6d3 +0x1f5:  mov    %eax,%esi
08abf6d5 +0x1f7:  lea    -0x44(%ebp),%eax
08abf6d8 +0x1fa:  mov    %eax,(%esp)
08abf6db +0x1fd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08abf6e0 +0x202:  mov    %esi,%eax
08abf6e2 +0x204:  mov    %ebx,%edx
08abf6e4 +0x206:  mov    %eax,(%esp)
08abf6e7 +0x209:  call   08ae3750 <_Unwind_Resume>
08abf6ec +0x20e:  lea    -0x44(%ebp),%eax
08abf6ef +0x211:  mov    %eax,(%esp)
08abf6f2 +0x214:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08abf6f7 +0x219:  mov    %ebx,%eax
08abf6f9 +0x21b:  lea    -0xc(%ebp),%esp
08abf6fc +0x21e:  add    $0x0,%esp
08abf6ff +0x221:  pop    %ebx
08abf700 +0x222:  pop    %esi
08abf701 +0x223:  pop    %edi
08abf702 +0x224:  pop    %ebp
08abf703 +0x225:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::ScriptLoader::LoadScriptDaily @ 0x8abf4de

/* CerashopAddRestrict::ScriptLoader::LoadScriptDaily(CerashopAddRestrict::RestrictType::T) */

undefined4 __thiscall
CerashopAddRestrict::ScriptLoader::LoadScriptDaily(undefined4 this,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  InfoDaily *pIVar3;
  undefined4 uVar4;
  uint *puVar5;
  InfoDaily *local_64;
  uint local_60;
  short local_5a [8];
  bool local_4a;
  bool local_49;
  string local_48 [4];
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  local_44 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>> local_40 [4];
  pair local_3c [8];
  pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*> local_34 [11];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  std::string::string(local_48);
  local_49 = false;
  local_4a = false;
  local_29 = 0;
  while( true ) {
    local_5a[4] = 0;
    local_5a[5] = 0;
    local_5a[6] = 0;
    local_5a[7] = 0;
    local_5a[0] = 0;
    local_5a[1] = 0;
    local_5a[2] = 0;
    local_5a[3] = 0;
                    /* try { // try from 08abf539 to 08abf6be has its CatchHandler @ 08abf6d1 */
    local_60 = ScanTypeOrInt(&local_49,local_48,&local_4a,true);
    if ((local_49 != false) || (local_4a != true)) break;
    local_28 = ScanInt((bool *)0x0);
    local_24 = ScanInt((bool *)0x0);
    cVar1 = readTime(local_5a + 4);
    if (cVar1 != '\x01') {
      uVar4 = 0xffffffff;
      goto LAB_08abf6ec;
    }
    cVar1 = readTime(local_5a);
    if (cVar1 != '\x01') {
      uVar4 = 0xffffffff;
      goto LAB_08abf6ec;
    }
    local_20 = ScanInt((bool *)0x0);
    std::
    map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
    ::end(local_44);
    puVar5 = &local_60;
    std::
    map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
    ::find((uint *)local_40);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>::
            operator==(local_40,(_Rb_tree_iterator *)local_44);
    if (cVar1 == '\0') {
      printf("already registed ipg_no:%u",local_60,puVar5);
      uVar4 = 0xffffffff;
      goto LAB_08abf6ec;
    }
    uVar4 = uint32Time(local_5a + 4);
    uVar2 = uint32Time(local_5a);
    pIVar3 = operator_new(0x1c);
    InfoDaily::InfoDaily(pIVar3,param_2,local_60,local_28,uVar4,uVar2,local_24,local_20);
    local_64 = pIVar3;
    std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>::
    pair<unsigned_int&,CerashopAddRestrict::InfoDaily*&>(local_34,&local_60,&local_64);
    std::
    map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
    ::insert(local_3c);
  }
  uVar4 = 0;
LAB_08abf6ec:
  std::string::~string(local_48);
  return uVar4;
}
```
