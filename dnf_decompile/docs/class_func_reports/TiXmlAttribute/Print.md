# Print

`_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs`

`TiXmlAttribute::Print(_IO_FILE*, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e4f70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e4f70  _ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs
#           TiXmlAttribute::Print(_IO_FILE*, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const
# range [0x087e4f70, 0x087e518f]
087e4f70 +0x000:  push   %ebp
087e4f71 +0x001:  mov    %esp,%ebp
087e4f73 +0x003:  push   %edi
087e4f74 +0x004:  push   %esi
087e4f75 +0x005:  push   %ebx
087e4f76 +0x006:  sub    $0x2c,%esp
087e4f79 +0x009:  mov    0x8(%ebp),%edi
087e4f7c +0x00c:  lea    -0x20(%ebp),%eax
087e4f7f +0x00f:  mov    0x14(%ebp),%ebx
087e4f82 +0x012:  mov    %eax,0x4(%esp)
087e4f86 +0x016:  lea    -0x24(%ebp),%esi
087e4f89 +0x019:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x24(%ebp)
087e4f90 +0x020:  lea    0x14(%edi),%eax
087e4f93 +0x023:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x20(%ebp)
087e4f9a +0x02a:  mov    %eax,(%esp)
087e4f9d +0x02d:  call   087e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>  ; TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e4fa2 +0x032:  add    $0x18,%edi
087e4fa5 +0x035:  mov    %esi,0x4(%esp)
087e4fa9 +0x039:  mov    %edi,(%esp)
087e4fac +0x03c:  call   087e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>  ; TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e4fb1 +0x041:  movl   $0x0,0x8(%esp)
087e4fb9 +0x049:  movl   $0x22,0x4(%esp)
087e4fc1 +0x051:  mov    %edi,(%esp)
087e4fc4 +0x054:  call   08707000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xc10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xc10
087e4fc9 +0x059:  cmp    $0xffffffff,%eax
087e4fcc +0x05c:  je     087e5078 <+0x108>
087e4fd2 +0x062:  mov    0xc(%ebp),%edx
087e4fd5 +0x065:  test   %edx,%edx
087e4fd7 +0x067:  je     087e4ffa <+0x8a>
087e4fd9 +0x069:  mov    -0x24(%ebp),%eax
087e4fdc +0x06c:  movl   $"%s='%s'",0x4(%esp)
087e4fe4 +0x074:  mov    %eax,0xc(%esp)
087e4fe8 +0x078:  mov    -0x20(%ebp),%eax
087e4feb +0x07b:  mov    %eax,0x8(%esp)
087e4fef +0x07f:  mov    0xc(%ebp),%eax
087e4ff2 +0x082:  mov    %eax,(%esp)
087e4ff5 +0x085:  call   0807da90 <_init+0x388>
087e4ffa +0x08a:  test   %ebx,%ebx
087e4ffc +0x08c:  je     087e5049 <+0xd9>
087e4ffe +0x08e:  lea    -0x20(%ebp),%eax
087e5001 +0x091:  mov    %eax,0x4(%esp)
087e5005 +0x095:  mov    %ebx,(%esp)
087e5008 +0x098:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e500d +0x09d:  movl   $0x2,0x8(%esp)
087e5015 +0x0a5:  movl   $"='",0x4(%esp)
087e501d +0x0ad:  mov    %ebx,(%esp)
087e5020 +0x0b0:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e5025 +0x0b5:  mov    %esi,0x4(%esp)
087e5029 +0x0b9:  mov    %ebx,(%esp)
087e502c +0x0bc:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e5031 +0x0c1:  movl   $0x1,0x8(%esp)
087e5039 +0x0c9:  movl   $"'",0x4(%esp)
087e5041 +0x0d1:  mov    %ebx,(%esp)
087e5044 +0x0d4:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e5049 +0x0d9:  mov    -0x24(%ebp),%eax
087e504c +0x0dc:  sub    $0xc,%eax
087e504f +0x0df:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e5054 +0x0e4:  jne    087e50f4 <+0x184>
087e505a +0x0ea:  mov    -0x20(%ebp),%eax
087e505d +0x0ed:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087e5062 +0x0f2:  sub    $0xc,%eax
087e5065 +0x0f5:  cmp    %eax,%edx
087e5067 +0x0f7:  jne    087e5121 <+0x1b1>
087e506d +0x0fd:  add    $0x2c,%esp
087e5070 +0x100:  pop    %ebx
087e5071 +0x101:  pop    %esi
087e5072 +0x102:  pop    %edi
087e5073 +0x103:  pop    %ebp
087e5074 +0x104:  ret
087e5075 +0x105:  lea    0x0(%esi),%esi
087e5078 +0x108:  mov    0xc(%ebp),%ecx
087e507b +0x10b:  test   %ecx,%ecx
087e507d +0x10d:  je     087e50a0 <+0x130>
087e507f +0x10f:  mov    -0x24(%ebp),%eax
087e5082 +0x112:  movl   $"%s=\"%s\"",0x4(%esp)
087e508a +0x11a:  mov    %eax,0xc(%esp)
087e508e +0x11e:  mov    -0x20(%ebp),%eax
087e5091 +0x121:  mov    %eax,0x8(%esp)
087e5095 +0x125:  mov    0xc(%ebp),%eax
087e5098 +0x128:  mov    %eax,(%esp)
087e509b +0x12b:  call   0807da90 <_init+0x388>
087e50a0 +0x130:  test   %ebx,%ebx
087e50a2 +0x132:  je     087e5049 <+0xd9>
087e50a4 +0x134:  lea    -0x20(%ebp),%eax
087e50a7 +0x137:  mov    %eax,0x4(%esp)
087e50ab +0x13b:  mov    %ebx,(%esp)
087e50ae +0x13e:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e50b3 +0x143:  movl   $0x2,0x8(%esp)
087e50bb +0x14b:  movl   $"=\"",0x4(%esp)
087e50c3 +0x153:  mov    %ebx,(%esp)
087e50c6 +0x156:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e50cb +0x15b:  mov    %esi,0x4(%esp)
087e50cf +0x15f:  mov    %ebx,(%esp)
087e50d2 +0x162:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e50d7 +0x167:  movl   $0x1,0x8(%esp)
087e50df +0x16f:  movl   $"\"",0x4(%esp)
087e50e7 +0x177:  mov    %ebx,(%esp)
087e50ea +0x17a:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e50ef +0x17f:  jmp    087e5049 <+0xd9>
087e50f4 +0x184:  mov    $&data#bb92cc41(.plt),%edx
087e50f9 +0x189:  test   %edx,%edx
087e50fb +0x18b:  je     087e516b <+0x1fb>
087e50fd +0x18d:  or     $0xffffffff,%edx
087e5100 +0x190:  lock xadd %edx,0x8(%eax)
087e5105 +0x195:  test   %edx,%edx
087e5107 +0x197:  jg     087e505a <+0xea>
087e510d +0x19d:  lea    -0x19(%ebp),%edx
087e5110 +0x1a0:  mov    %edx,0x4(%esp)
087e5114 +0x1a4:  mov    %eax,(%esp)
087e5117 +0x1a7:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e511c +0x1ac:  jmp    087e505a <+0xea>
087e5121 +0x1b1:  mov    $&data#bb92cc41(.plt),%edx
087e5126 +0x1b6:  test   %edx,%edx
087e5128 +0x1b8:  je     087e5176 <+0x206>
087e512a +0x1ba:  or     $0xffffffff,%edx
087e512d +0x1bd:  lock xadd %edx,0x8(%eax)
087e5132 +0x1c2:  test   %edx,%edx
087e5134 +0x1c4:  jg     087e506d <+0xfd>
087e513a +0x1ca:  lea    -0x1a(%ebp),%edx
087e513d +0x1cd:  mov    %edx,0x4(%esp)
087e5141 +0x1d1:  mov    %eax,(%esp)
087e5144 +0x1d4:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5149 +0x1d9:  jmp    087e506d <+0xfd>
087e514e +0x1de:  mov    %eax,%ebx
087e5150 +0x1e0:  mov    %esi,(%esp)
087e5153 +0x1e3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e5158 +0x1e8:  lea    -0x20(%ebp),%eax
087e515b +0x1eb:  mov    %eax,(%esp)
087e515e +0x1ee:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e5163 +0x1f3:  mov    %ebx,(%esp)
087e5166 +0x1f6:  call   08ae3750 <_Unwind_Resume>
087e516b +0x1fb:  mov    0x8(%eax),%edx
087e516e +0x1fe:  lea    -0x1(%edx),%ecx
087e5171 +0x201:  mov    %ecx,0x8(%eax)
087e5174 +0x204:  jmp    087e5105 <+0x195>
087e5176 +0x206:  mov    0x8(%eax),%edx
087e5179 +0x209:  lea    -0x1(%edx),%ecx
087e517c +0x20c:  mov    %ecx,0x8(%eax)
087e517f +0x20f:  jmp    087e5132 <+0x1c2>
087e5181 +0x211:  jmp    087e5190 <_ZlsRSsRK9TiXmlNode>  ; operator<<(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, TiXmlNode const&)
087e5183 +0x213:  nop
087e5184 +0x214:  nop
087e5185 +0x215:  nop
087e5186 +0x216:  nop
087e5187 +0x217:  nop
087e5188 +0x218:  nop
087e5189 +0x219:  nop
087e518a +0x21a:  nop
087e518b +0x21b:  nop
087e518c +0x21c:  nop
087e518d +0x21d:  nop
087e518e +0x21e:  nop
087e518f +0x21f:  nop
```

## 反编译 C

```c
// TiXmlAttribute::Print @ 0x87e4f70

/* WARNING: Removing unreachable block (ram,0x087e516b) */
/* WARNING: Removing unreachable block (ram,0x087e5176) */
/* TiXmlAttribute::Print(_IO_FILE*, int, std::string*) const */

void __thiscall
TiXmlAttribute::Print(TiXmlAttribute *this,_IO_FILE *param_1,int param_2,string *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *local_28;
  undefined1 *local_24 [5];
  
  local_28 = &DAT_0948ccfc;
  local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4f9d to 087e50ee has its CatchHandler @ 087e514e */
  TiXmlBase::EncodeString((string *)(this + 0x14),(string *)local_24);
  TiXmlBase::EncodeString((string *)(this + 0x18),(string *)&local_28);
  iVar2 = std::string::find((string *)(this + 0x18),'\"',0);
  if (iVar2 == -1) {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"%s=\"%s\"",local_24[0],local_28);
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,(string *)local_24);
      std::string::append(param_3,"=\"",2);
      std::string::append(param_3,(string *)&local_28);
      std::string::append(param_3,"\"",1);
    }
  }
  else {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"%s=\'%s\'",local_24[0],local_28);
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,(string *)local_24);
      std::string::append(param_3,"=\'",2);
      std::string::append(param_3,(string *)&local_28);
      std::string::append(param_3,"\'",1);
    }
  }
  if ((allocator *)(local_28 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_28 + -0xc));
    }
  }
  if ((allocator *)(local_24[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24[0] + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
    }
  }
  return;
}
```
