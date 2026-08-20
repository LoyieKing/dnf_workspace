# MakeActionClearStateString

`_ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj`

`APSystem::DB_UpdateActionPoint::MakeActionClearStateString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, APSystem::_ActionPoint const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_UpdateActionPoint` | `0x081246d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081246d6  _ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj
#           APSystem::DB_UpdateActionPoint::MakeActionClearStateString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, APSystem::_ActionPoint const*, unsigned int)
# range [0x081246d6, 0x08124879]
081246d6 +0x000:  push   %ebp
081246d7 +0x001:  mov    %esp,%ebp
081246d9 +0x003:  push   %edi
081246da +0x004:  push   %esi
081246db +0x005:  push   %ebx
081246dc +0x006:  sub    $0xdc,%esp
081246e2 +0x00c:  mov    0xc(%ebp),%eax
081246e5 +0x00f:  mov    %eax,(%esp)
081246e8 +0x012:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
081246ed +0x017:  lea    -0x20(%ebp),%eax
081246f0 +0x01a:  mov    %eax,(%esp)
081246f3 +0x01d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081246f8 +0x022:  movl   $0x0,-0x1c(%ebp)
081246ff +0x029:  jmp    08124836 <+0x160>
08124704 +0x02e:  mov    -0x1c(%ebp),%edx
08124707 +0x031:  mov    %edx,%eax
08124709 +0x033:  shl    $0x2,%eax
0812470c +0x036:  add    %edx,%eax
0812470e +0x038:  add    %eax,%eax
08124710 +0x03a:  add    %edx,%eax
08124712 +0x03c:  add    0x10(%ebp),%eax
08124715 +0x03f:  mov    0x2(%eax),%eax
08124718 +0x042:  mov    %eax,(%esp)
0812471b +0x045:  call   08894956 <_ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE>  ; APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(APSystem::_ActionGroupIndex)
08124720 +0x04a:  xor    $0x1,%eax
08124723 +0x04d:  test   %al,%al
08124725 +0x04f:  jne    08124831 <+0x15b>
0812472b +0x055:  mov    -0x1c(%ebp),%edx
0812472e +0x058:  mov    %edx,%eax
08124730 +0x05a:  shl    $0x2,%eax
08124733 +0x05d:  add    %edx,%eax
08124735 +0x05f:  add    %eax,%eax
08124737 +0x061:  add    %edx,%eax
08124739 +0x063:  add    0x10(%ebp),%eax
0812473c +0x066:  movzbl 0xa(%eax),%eax
08124740 +0x06a:  movsbl %al,%eax
08124743 +0x06d:  mov    %eax,-0xb0(%ebp)
08124749 +0x073:  mov    -0x1c(%ebp),%edx
0812474c +0x076:  mov    %edx,%eax
0812474e +0x078:  shl    $0x2,%eax
08124751 +0x07b:  add    %edx,%eax
08124753 +0x07d:  add    %eax,%eax
08124755 +0x07f:  add    %edx,%eax
08124757 +0x081:  add    0x10(%ebp),%eax
0812475a +0x084:  movzbl 0x9(%eax),%eax
0812475e +0x088:  movsbl %al,%eax
08124761 +0x08b:  mov    %eax,-0xac(%ebp)
08124767 +0x091:  mov    -0x1c(%ebp),%edx
0812476a +0x094:  mov    %edx,%eax
0812476c +0x096:  shl    $0x2,%eax
0812476f +0x099:  add    %edx,%eax
08124771 +0x09b:  add    %eax,%eax
08124773 +0x09d:  add    %edx,%eax
08124775 +0x09f:  add    0x10(%ebp),%eax
08124778 +0x0a2:  movzbl 0x8(%eax),%eax
0812477c +0x0a6:  movsbl %al,%edi
0812477f +0x0a9:  mov    -0x1c(%ebp),%edx
08124782 +0x0ac:  mov    %edx,%eax
08124784 +0x0ae:  shl    $0x2,%eax
08124787 +0x0b1:  add    %edx,%eax
08124789 +0x0b3:  add    %eax,%eax
0812478b +0x0b5:  add    %edx,%eax
0812478d +0x0b7:  add    0x10(%ebp),%eax
08124790 +0x0ba:  movzbl 0x7(%eax),%eax
08124794 +0x0be:  movsbl %al,%esi
08124797 +0x0c1:  mov    -0x1c(%ebp),%edx
0812479a +0x0c4:  mov    %edx,%eax
0812479c +0x0c6:  shl    $0x2,%eax
0812479f +0x0c9:  add    %edx,%eax
081247a1 +0x0cb:  add    %eax,%eax
081247a3 +0x0cd:  add    %edx,%eax
081247a5 +0x0cf:  add    0x10(%ebp),%eax
081247a8 +0x0d2:  movzbl 0x6(%eax),%eax
081247ac +0x0d6:  movsbl %al,%ebx
081247af +0x0d9:  mov    -0x1c(%ebp),%edx
081247b2 +0x0dc:  mov    %edx,%eax
081247b4 +0x0de:  shl    $0x2,%eax
081247b7 +0x0e1:  add    %edx,%eax
081247b9 +0x0e3:  add    %eax,%eax
081247bb +0x0e5:  add    %edx,%eax
081247bd +0x0e7:  add    0x10(%ebp),%eax
081247c0 +0x0ea:  mov    0x2(%eax),%eax
081247c3 +0x0ed:  mov    %eax,%ecx
081247c5 +0x0ef:  mov    -0x1c(%ebp),%edx
081247c8 +0x0f2:  mov    %edx,%eax
081247ca +0x0f4:  shl    $0x2,%eax
081247cd +0x0f7:  add    %edx,%eax
081247cf +0x0f9:  add    %eax,%eax
081247d1 +0x0fb:  add    %edx,%eax
081247d3 +0x0fd:  add    0x10(%ebp),%eax
081247d6 +0x100:  movzwl (%eax),%eax
081247d9 +0x103:  movzwl %ax,%eax
081247dc +0x106:  mov    -0xb0(%ebp),%edx
081247e2 +0x10c:  mov    %edx,0x20(%esp)
081247e6 +0x110:  mov    -0xac(%ebp),%edx
081247ec +0x116:  mov    %edx,0x1c(%esp)
081247f0 +0x11a:  mov    %edi,0x18(%esp)
081247f4 +0x11e:  mov    %esi,0x14(%esp)
081247f8 +0x122:  mov    %ebx,0x10(%esp)
081247fc +0x126:  mov    %ecx,0xc(%esp)
08124800 +0x12a:  mov    %eax,0x8(%esp)
08124804 +0x12e:  movl   $"%d,%d,%d,%d,%d,%d,%d|",0x4(%esp)
0812480c +0x136:  lea    -0xa0(%ebp),%eax
08124812 +0x13c:  mov    %eax,(%esp)
08124815 +0x13f:  call   0807e440 <_init+0xd38>
0812481a +0x144:  lea    -0xa0(%ebp),%eax
08124820 +0x14a:  mov    %eax,0x4(%esp)
08124824 +0x14e:  mov    0xc(%ebp),%eax
08124827 +0x151:  mov    %eax,(%esp)
0812482a +0x154:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0812482f +0x159:  jmp    08124832 <+0x15c>
08124831 +0x15b:  nop
08124832 +0x15c:  addl   $0x1,-0x1c(%ebp)
08124836 +0x160:  mov    -0x1c(%ebp),%eax
08124839 +0x163:  cmp    0x14(%ebp),%eax
0812483c +0x166:  setb   %al
0812483f +0x169:  test   %al,%al
08124841 +0x16b:  jne    08124704 <+0x2e>
08124847 +0x171:  jmp    08124864 <+0x18e>
08124849 +0x173:  mov    %edx,%ebx
0812484b +0x175:  mov    %eax,%esi
0812484d +0x177:  lea    -0x20(%ebp),%eax
08124850 +0x17a:  mov    %eax,(%esp)
08124853 +0x17d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08124858 +0x182:  mov    %esi,%eax
0812485a +0x184:  mov    %ebx,%edx
0812485c +0x186:  mov    %eax,(%esp)
0812485f +0x189:  call   08ae3750 <_Unwind_Resume>
08124864 +0x18e:  lea    -0x20(%ebp),%eax
08124867 +0x191:  mov    %eax,(%esp)
0812486a +0x194:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0812486f +0x199:  add    $0xdc,%esp
08124875 +0x19f:  pop    %ebx
08124876 +0x1a0:  pop    %esi
08124877 +0x1a1:  pop    %edi
08124878 +0x1a2:  pop    %ebp
08124879 +0x1a3:  ret
```

## 反编译 C

```c
// APSystem::DB_UpdateActionPoint::MakeActionClearStateString @ 0x81246d6

/* APSystem::DB_UpdateActionPoint::MakeActionClearStateString(std::string&, APSystem::_ActionPoint
   const*, unsigned int) */

void __thiscall
APSystem::DB_UpdateActionPoint::MakeActionClearStateString
          (DB_UpdateActionPoint *this,string *param_1,_ActionPoint *param_2,uint param_3)

{
  char cVar1;
  char local_a4 [128];
  string local_24 [4];
  uint local_20;
  
  std::string::clear((string *)param_1);
  std::string::string(local_24);
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
                    /* try { // try from 0812471b to 0812482e has its CatchHandler @ 08124849 */
    cVar1 = CActionPointEtcParameter::IsValidActionGroupIndex
                      (*(undefined4 *)(param_2 + local_20 * 0xb + 2));
    if (cVar1 == '\x01') {
      sprintf(local_a4,"%d,%d,%d,%d,%d,%d,%d|",(uint)*(ushort *)(param_2 + local_20 * 0xb),
              *(undefined4 *)(param_2 + local_20 * 0xb + 2),(int)(char)param_2[local_20 * 0xb + 6],
              (int)(char)param_2[local_20 * 0xb + 7],(int)(char)param_2[local_20 * 0xb + 8],
              (int)(char)param_2[local_20 * 0xb + 9],(int)(char)param_2[local_20 * 0xb + 10]);
      std::string::operator+=((string *)param_1,local_a4);
    }
  }
  std::string::~string(local_24);
  return;
}
```
