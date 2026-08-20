# insertString

`_ZN19ScriptStringManager12insertStringEPKc`

`ScriptStringManager::insertString(char const*)`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf720  _ZN19ScriptStringManager12insertStringEPKc
#           ScriptStringManager::insertString(char const*)
# range [0x08acf720, 0x08acf96c]
08acf720 +0x000:  push   %ebp
08acf721 +0x001:  mov    %esp,%ebp
08acf723 +0x003:  push   %edi
08acf724 +0x004:  push   %esi
08acf725 +0x005:  push   %ebx
08acf726 +0x006:  sub    $0x6c,%esp
08acf729 +0x009:  lea    -0x19(%ebp),%eax
08acf72c +0x00c:  mov    %eax,0x8(%esp)
08acf730 +0x010:  mov    0xc(%ebp),%eax
08acf733 +0x013:  mov    %eax,0x4(%esp)
08acf737 +0x017:  lea    -0x20(%ebp),%eax
08acf73a +0x01a:  mov    %eax,(%esp)
08acf73d +0x01d:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08acf742 +0x022:  mov    0x8(%ebp),%ecx
08acf745 +0x025:  mov    0x8(%ebp),%edx
08acf748 +0x028:  mov    0x18(%ecx),%eax
08acf74b +0x02b:  add    $0x14,%edx
08acf74e +0x02e:  mov    %edx,-0x4c(%ebp)
08acf751 +0x031:  mov    %edx,-0x48(%ebp)
08acf754 +0x034:  test   %eax,%eax
08acf756 +0x036:  je     08acf8cc <+0x1ac>
08acf75c +0x03c:  mov    -0x20(%ebp),%edx
08acf75f +0x03f:  mov    %edx,-0x44(%ebp)
08acf762 +0x042:  mov    -0x44(%ebp),%ecx
08acf765 +0x045:  sub    $0xc,%edx
08acf768 +0x048:  mov    %edx,-0x50(%ebp)
08acf76b +0x04b:  mov    -0xc(%ecx),%ebx
08acf76e +0x04e:  mov    %ebx,-0x5c(%ebp)
08acf771 +0x051:  jmp    08acf784 <+0x64>
08acf773 +0x053:  nop
08acf774 +0x054:  lea    0x0(%esi,%eiz,1),%esi
08acf778 +0x058:  mov    0x8(%eax),%edx
08acf77b +0x05b:  mov    %eax,-0x48(%ebp)
08acf77e +0x05e:  test   %edx,%edx
08acf780 +0x060:  je     08acf7b9 <+0x99>
08acf782 +0x062:  mov    %edx,%eax
08acf784 +0x064:  mov    0x10(%eax),%esi
08acf787 +0x067:  mov    -0x5c(%ebp),%ecx
08acf78a +0x06a:  mov    -0xc(%esi),%edx
08acf78d +0x06d:  cmp    %edx,%ecx
08acf78f +0x06f:  jbe    08acf793 <+0x73>
08acf791 +0x071:  mov    %edx,%ecx
08acf793 +0x073:  mov    -0x44(%ebp),%edi
08acf796 +0x076:  cmp    %ecx,%ecx
08acf798 +0x078:  repz cmpsb %es:(%edi),%ds:(%esi)
08acf79a +0x07a:  seta   %bl
08acf79d +0x07d:  setb   %cl
08acf7a0 +0x080:  sub    %cl,%bl
08acf7a2 +0x082:  movsbl %bl,%esi
08acf7a5 +0x085:  test   %esi,%esi
08acf7a7 +0x087:  jne    08acf7ae <+0x8e>
08acf7a9 +0x089:  mov    %edx,%esi
08acf7ab +0x08b:  sub    -0x5c(%ebp),%esi
08acf7ae +0x08e:  test   %esi,%esi
08acf7b0 +0x090:  jns    08acf778 <+0x58>
08acf7b2 +0x092:  mov    0xc(%eax),%edx
08acf7b5 +0x095:  test   %edx,%edx
08acf7b7 +0x097:  jne    08acf782 <+0x62>
08acf7b9 +0x099:  mov    -0x48(%ebp),%ebx
08acf7bc +0x09c:  cmp    %ebx,-0x4c(%ebp)
08acf7bf +0x09f:  je     08acf820 <+0x100>
08acf7c1 +0x0a1:  mov    -0x50(%ebp),%eax
08acf7c4 +0x0a4:  mov    0x10(%ebx),%edi
08acf7c7 +0x0a7:  mov    (%eax),%eax
08acf7c9 +0x0a9:  mov    %eax,-0x48(%ebp)
08acf7cc +0x0ac:  mov    -0xc(%edi),%eax
08acf7cf +0x0af:  cmp    -0x48(%ebp),%eax
08acf7d2 +0x0b2:  mov    %eax,%ecx
08acf7d4 +0x0b4:  ja     08acf818 <+0xf8>
08acf7d6 +0x0b6:  mov    -0x44(%ebp),%esi
08acf7d9 +0x0b9:  cmp    %ecx,%ecx
08acf7db +0x0bb:  repz cmpsb %es:(%edi),%ds:(%esi)
08acf7dd +0x0bd:  seta   %dl
08acf7e0 +0x0c0:  setb   %cl
08acf7e3 +0x0c3:  sub    %cl,%dl
08acf7e5 +0x0c5:  movsbl %dl,%esi
08acf7e8 +0x0c8:  test   %esi,%esi
08acf7ea +0x0ca:  jne    08acf7f1 <+0xd1>
08acf7ec +0x0cc:  mov    -0x48(%ebp),%esi
08acf7ef +0x0cf:  sub    %eax,%esi
08acf7f1 +0x0d1:  test   %esi,%esi
08acf7f3 +0x0d3:  js     08acf820 <+0x100>
08acf7f5 +0x0d5:  cmpl   $&_ZNSs4_Rep20_S_empty_rep_storageE,-0x50(%ebp)
08acf7fc +0x0dc:  jne    08acf928 <+0x208>
08acf802 +0x0e2:  cmp    %ebx,-0x4c(%ebp)
08acf805 +0x0e5:  je     08acf825 <+0x105>
08acf807 +0x0e7:  mov    0x14(%ebx),%ebx
08acf80a +0x0ea:  lea    -0xc(%ebp),%esp
08acf80d +0x0ed:  mov    %ebx,%eax
08acf80f +0x0ef:  pop    %ebx
08acf810 +0x0f0:  pop    %esi
08acf811 +0x0f1:  pop    %edi
08acf812 +0x0f2:  pop    %ebp
08acf813 +0x0f3:  ret
08acf814 +0x0f4:  lea    0x0(%esi,%eiz,1),%esi
08acf818 +0x0f8:  mov    -0x48(%ebp),%ecx
08acf81b +0x0fb:  jmp    08acf7d6 <+0xb6>
08acf81d +0x0fd:  lea    0x0(%esi),%esi
08acf820 +0x100:  mov    -0x4c(%ebp),%ebx
08acf823 +0x103:  jmp    08acf7f5 <+0xd5>
08acf825 +0x105:  mov    0xc(%ebp),%edx
08acf828 +0x108:  lea    -0x1a(%ebp),%eax
08acf82b +0x10b:  lea    -0x24(%ebp),%ebx
08acf82e +0x10e:  mov    %eax,0x8(%esp)
08acf832 +0x112:  mov    %ebx,(%esp)
08acf835 +0x115:  mov    %edx,0x4(%esp)
08acf839 +0x119:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08acf83e +0x11e:  mov    0x8(%ebp),%ecx
08acf841 +0x121:  mov    0x8(%ecx),%eax
08acf844 +0x124:  cmp    0xc(%ecx),%eax
08acf847 +0x127:  je     08acf8e1 <+0x1c1>
08acf84d +0x12d:  test   %eax,%eax
08acf84f +0x12f:  je     08acf8dd <+0x1bd>
08acf855 +0x135:  mov    %ebx,0x4(%esp)
08acf859 +0x139:  mov    %eax,(%esp)
08acf85c +0x13c:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acf861 +0x141:  mov    0x8(%ebp),%edx
08acf864 +0x144:  mov    0x8(%edx),%eax
08acf867 +0x147:  mov    0x8(%ebp),%ecx
08acf86a +0x14a:  add    $0x4,%eax
08acf86d +0x14d:  mov    %eax,0x8(%ecx)
08acf870 +0x150:  mov    %ebx,(%esp)
08acf873 +0x153:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08acf878 +0x158:  mov    0x8(%ebp),%eax
08acf87b +0x15b:  lea    -0x2c(%ebp),%esi
08acf87e +0x15e:  mov    0xc(%ebp),%edx
08acf881 +0x161:  mov    0x8(%eax),%ebx
08acf884 +0x164:  sub    0x4(%eax),%ebx
08acf887 +0x167:  lea    -0x1b(%ebp),%eax
08acf88a +0x16a:  mov    %eax,0x8(%esp)
08acf88e +0x16e:  sar    $0x2,%ebx
08acf891 +0x171:  sub    $0x1,%ebx
08acf894 +0x174:  mov    %edx,0x4(%esp)
08acf898 +0x178:  mov    %esi,(%esp)
08acf89b +0x17b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08acf8a0 +0x180:  mov    0x8(%ebp),%edx
08acf8a3 +0x183:  lea    -0x40(%ebp),%eax
08acf8a6 +0x186:  mov    %ebx,-0x28(%ebp)
08acf8a9 +0x189:  mov    %esi,0x8(%esp)
08acf8ad +0x18d:  mov    %eax,(%esp)
08acf8b0 +0x190:  add    $0x10,%edx
08acf8b3 +0x193:  mov    %edx,0x4(%esp)
08acf8b7 +0x197:  call   0817d824 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xc6b>  ; global constructors keyed to Arad_Script::Arad_Script()+0xc6b
08acf8bc +0x19c:  sub    $0x4,%esp
08acf8bf +0x19f:  mov    %esi,(%esp)
08acf8c2 +0x1a2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08acf8c7 +0x1a7:  jmp    08acf80a <+0xea>
08acf8cc +0x1ac:  mov    -0x20(%ebp),%ebx
08acf8cf +0x1af:  mov    %ebx,-0x44(%ebp)
08acf8d2 +0x1b2:  sub    $0xc,%ebx
08acf8d5 +0x1b5:  mov    %ebx,-0x50(%ebp)
08acf8d8 +0x1b8:  jmp    08acf7b9 <+0x99>
08acf8dd +0x1bd:  xor    %eax,%eax
08acf8df +0x1bf:  jmp    08acf867 <+0x147>
08acf8e1 +0x1c1:  mov    %eax,0x4(%esp)
08acf8e5 +0x1c5:  mov    0x8(%ebp),%eax
08acf8e8 +0x1c8:  mov    %ebx,0x8(%esp)
08acf8ec +0x1cc:  add    $0x4,%eax
08acf8ef +0x1cf:  mov    %eax,(%esp)
08acf8f2 +0x1d2:  call   0823d878 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x89f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x89f6
08acf8f7 +0x1d7:  jmp    08acf870 <+0x150>
08acf8fc +0x1dc:  mov    %eax,-0x54(%ebp)
08acf8ff +0x1df:  mov    %esi,(%esp)
08acf902 +0x1e2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08acf907 +0x1e7:  mov    -0x54(%ebp),%eax
08acf90a +0x1ea:  mov    %eax,(%esp)
08acf90d +0x1ed:  call   08ae3750 <_Unwind_Resume>
08acf912 +0x1f2:  jmp    08acf90a <+0x1ea>
08acf914 +0x1f4:  mov    %eax,-0x54(%ebp)
08acf917 +0x1f7:  mov    %ebx,(%esp)
08acf91a +0x1fa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08acf91f +0x1ff:  mov    -0x54(%ebp),%eax
08acf922 +0x202:  jmp    08acf90a <+0x1ea>
08acf924 +0x204:  jmp    08acf914 <+0x1f4>
08acf926 +0x206:  jmp    08acf90a <+0x1ea>
08acf928 +0x208:  mov    $&data#bb92cc41(.plt),%eax
08acf92d +0x20d:  test   %eax,%eax
08acf92f +0x20f:  nop
08acf930 +0x210:  je     08acf95e <+0x23e>
08acf932 +0x212:  mov    -0x50(%ebp),%edx
08acf935 +0x215:  or     $0xffffffff,%eax
08acf938 +0x218:  lock xadd %eax,0x8(%edx)
08acf93d +0x21d:  test   %eax,%eax
08acf93f +0x21f:  jg     08acf802 <+0xe2>
08acf945 +0x225:  lea    -0x1c(%ebp),%eax
08acf948 +0x228:  mov    %eax,0x4(%esp)
08acf94c +0x22c:  mov    -0x50(%ebp),%eax
08acf94f +0x22f:  mov    %eax,(%esp)
08acf952 +0x232:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acf957 +0x237:  jmp    08acf802 <+0xe2>
08acf95c +0x23c:  jmp    08acf90a <+0x1ea>
08acf95e +0x23e:  mov    -0x50(%ebp),%ecx
08acf961 +0x241:  mov    0x8(%ecx),%eax
08acf964 +0x244:  lea    -0x1(%eax),%edx
08acf967 +0x247:  mov    %edx,0x8(%ecx)
08acf96a +0x24a:  jmp    08acf93d <+0x21d>
08acf96c +0x24c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// ScriptStringManager::insertString @ 0x8acf720

/* WARNING: Removing unreachable block (ram,0x08acf95e) */
/* DWARF original prototype: int insertString(ScriptStringManager * this, char * string) */

int __thiscall ScriptStringManager::insertString(ScriptStringManager *this,char *string)

{
  uint uVar1;
  uint uVar2;
  string *this_00;
  _Base_ptr p_Var3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  uint uVar5;
  _Rb_tree_node_base *p_Var6;
  _Base_ptr p_Var7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  allocator *local_54;
  _Base_ptr local_4c;
  pair local_44 [20];
  string local_30 [4];
  _Base_ptr local_2c;
  string local_28 [4];
  byte *local_24;
  allocator local_1f;
  allocator local_1e;
  allocator local_1d [13];
  
  bVar13 = 0;
                    /* Unresolved local var: int index@[???]
                       Unresolved local var:
                       _Rb_tree_const_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_int>_>
                       it@[???] */
                    /* try { // try from 08acf73d to 08acf741 has its CatchHandler @ 08acf95c */
  std::string::string((string *)&local_24,string,local_1d);
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_int>_>
                       __j@[???] */
  p_Var7 = (this->string_map_)._M_t._M_impl._M_header._M_parent;
  p_Var6 = &(this->string_map_)._M_t._M_impl._M_header;
  local_4c = p_Var6;
  if (p_Var7 != (_Base_ptr)0x0) {
    uVar1 = *(uint *)(local_24 + -0xc);
    do {
                    /* Unresolved local var: size_t __size@[???]
                       Unresolved local var: size_t __osize@[???]
                       Unresolved local var: size_t __len@[???]
                       Unresolved local var: int __r@[???] */
      uVar2 = *(uint *)((byte *)p_Var7[1]._M_color + -0xc);
      uVar5 = uVar1;
      if (uVar2 < uVar1) {
        uVar5 = uVar2;
      }
      bVar11 = false;
      bVar12 = true;
      pbVar9 = (byte *)p_Var7[1]._M_color;
      pbVar10 = local_24;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar11 = *pbVar9 < *pbVar10;
        bVar12 = *pbVar9 == *pbVar10;
        pbVar9 = pbVar9 + (uint)bVar13 * -2 + 1;
        pbVar10 = pbVar10 + (uint)bVar13 * -2 + 1;
      } while (bVar12);
      iVar8 = (int)(char)((!bVar11 && !bVar12) - bVar11);
      if (iVar8 == 0) {
                    /* Unresolved local var: ptrdiff_t __d@[???] */
        iVar8 = uVar2 - uVar1;
      }
      if (iVar8 < 0) {
        p_Var3 = p_Var7->_M_right;
      }
      else {
        p_Var3 = p_Var7->_M_left;
        local_4c = p_Var7;
      }
      p_Var7 = p_Var3;
    } while (p_Var7 != (_Base_ptr)0x0);
  }
  local_54 = (allocator *)(local_24 + -0xc);
  if (p_Var6 != local_4c) {
                    /* Unresolved local var: size_t __size@[???]
                       Unresolved local var: size_t __osize@[???]
                       Unresolved local var: size_t __len@[???]
                       Unresolved local var: int __r@[???] */
    uVar1 = *(uint *)local_54;
    uVar2 = *(uint *)((byte *)local_4c[1]._M_color + -0xc);
    uVar5 = uVar2;
    if (uVar1 < uVar2) {
      uVar5 = uVar1;
    }
    bVar11 = false;
    bVar12 = true;
    pbVar9 = local_24;
    pbVar10 = (byte *)local_4c[1]._M_color;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar11 = *pbVar9 < *pbVar10;
      bVar12 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + (uint)bVar13 * -2 + 1;
      pbVar10 = pbVar10 + (uint)bVar13 * -2 + 1;
    } while (bVar12);
    iVar8 = (int)(char)((!bVar11 && !bVar12) - bVar11);
    if (iVar8 == 0) {
                    /* Unresolved local var: ptrdiff_t __d@[???] */
      iVar8 = uVar1 - uVar2;
    }
    if (-1 < iVar8) goto LAB_08acf7f5;
  }
  local_4c = p_Var6;
LAB_08acf7f5:
  if (local_54 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    local_24 = local_24 + -4;
    iVar8 = *(int *)local_24;
    *(int *)local_24 = *(int *)local_24 + -1;
    UNLOCK();
    if (iVar8 < 1) {
      std::string::_Rep::_M_destroy(local_54);
    }
  }
  if (p_Var6 == local_4c) {
                    /* try { // try from 08acf839 to 08acf83d has its CatchHandler @ 08acf926 */
    std::string::string(local_28,string,&local_1e);
    this_00 = (string *)
              (this->strings_).
              super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
              ._M_impl._M_finish;
    if (this_00 ==
        (string *)
        (this->strings_).
        super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
        ._M_impl._M_end_of_storage) {
                    /* try { // try from 08acf8f2 to 08acf8f6 has its CatchHandler @ 08acf914 */
      std::vector<std::string,std::allocator<std::string>>::_M_insert_aux<std::string>
                ((vector<std::string,std::allocator<std::string>> *)&this->strings_,this_00,local_28
                );
    }
    else {
      if (this_00 == (string *)0x0) {
        pbVar4 = (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
      }
      else {
                    /* try { // try from 08acf85c to 08acf860 has its CatchHandler @ 08acf924 */
        std::string::string(this_00,local_28);
        pbVar4 = (this->strings_).
                 super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                 ._M_impl._M_finish;
      }
      (this->strings_).
      super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
      ._M_impl._M_finish = pbVar4 + 1;
    }
                    /* try { // try from 08acf873 to 08acf877 has its CatchHandler @ 08acf926 */
    std::string::~string(local_28);
    p_Var7 = (_Base_ptr)
             (((int)(this->strings_).
                    super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                    ._M_impl._M_finish -
               (int)(this->strings_).
                    super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                    ._M_impl._M_start >> 2) + -1);
                    /* try { // try from 08acf89b to 08acf89f has its CatchHandler @ 08acf912 */
    std::string::string(local_30,string,&local_1f);
    local_2c = p_Var7;
                    /* try { // try from 08acf8b7 to 08acf8bb has its CatchHandler @ 08acf8fc */
    std::
    _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
    ::_M_insert_unique(local_44);
    std::string::~string(local_30);
  }
  else {
    p_Var7 = local_4c[1]._M_parent;
  }
  return (int)p_Var7;
}
```
