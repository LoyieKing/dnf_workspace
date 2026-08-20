# name

`_ZNKSt6locale4nameEv`

`std::locale::name() const`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dafd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dafd0  _ZNKSt6locale4nameEv
#           std::locale::name() const
# range [0x086dafd0, 0x086db25f]
086dafd0 +0x000:  push   %ebp
086dafd1 +0x001:  mov    %esp,%ebp
086dafd3 +0x003:  push   %edi
086dafd4 +0x004:  push   %esi
086dafd5 +0x005:  push   %ebx
086dafd6 +0x006:  sub    $0x3c,%esp
086dafd9 +0x009:  mov    0xc(%ebp),%edx
086dafdc +0x00c:  mov    0x8(%ebp),%ebx
086dafdf +0x00f:  mov    (%edx),%eax
086dafe1 +0x011:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,(%ebx)
086dafe7 +0x017:  mov    0x10(%eax),%edx
086dafea +0x01a:  mov    (%edx),%ecx
086dafec +0x01c:  test   %ecx,%ecx
086dafee +0x01e:  mov    %ecx,-0x1c(%ebp)
086daff1 +0x021:  je     086db1f0 <+0x220>
086daff7 +0x027:  mov    0x4(%edx),%edi
086daffa +0x02a:  xor    %esi,%esi
086daffc +0x02c:  mov    -0x1c(%ebp),%eax
086dafff +0x02f:  test   %edi,%edi
086db001 +0x031:  je     086db1b3 <+0x1e3>
086db007 +0x037:  mov    %ebx,-0x20(%ebp)
086db00a +0x03a:  mov    %edx,%ebx
086db00c +0x03c:  mov    %edi,0x4(%esp)
086db010 +0x040:  add    $0x1,%esi
086db013 +0x043:  mov    %eax,(%esp)
086db016 +0x046:  call   0807e4e0 <_init+0xdd8>
086db01b +0x04b:  test   %eax,%eax
086db01d +0x04d:  je     086db1a0 <+0x1d0>
086db023 +0x053:  mov    -0x20(%ebp),%ebx
086db026 +0x056:  movl   $0x80,0x4(%esp)
086db02e +0x05e:  mov    %ebx,(%esp)
086db031 +0x061:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
086db036 +0x066:  mov    &_ZNSt6locale13_S_categoriesE,%ecx
086db03c +0x06c:  mov    (%ecx),%esi
086db03e +0x06e:  mov    %esi,(%esp)
086db041 +0x071:  call   0807e3b0 <_init+0xca8>
086db046 +0x076:  mov    %esi,0x4(%esp)
086db04a +0x07a:  mov    %ebx,(%esp)
086db04d +0x07d:  mov    %eax,0x8(%esp)
086db051 +0x081:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
086db056 +0x086:  mov    (%ebx),%eax
086db058 +0x088:  mov    -0xc(%eax),%edx
086db05b +0x08b:  lea    -0xc(%eax),%ecx
086db05e +0x08e:  lea    0x1(%edx),%esi
086db061 +0x091:  cmp    0x4(%ecx),%esi
086db064 +0x094:  jbe    086db1e0 <+0x210>
086db06a +0x09a:  mov    %esi,0x4(%esp)
086db06e +0x09e:  mov    %ebx,(%esp)
086db071 +0x0a1:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
086db076 +0x0a6:  mov    (%ebx),%eax
086db078 +0x0a8:  mov    -0xc(%eax),%edx
086db07b +0x0ab:  movb   $0x3d,(%eax,%edx,1)
086db07f +0x0af:  mov    (%ebx),%edx
086db081 +0x0b1:  lea    -0xc(%edx),%eax
086db084 +0x0b4:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086db089 +0x0b9:  jne    086db241 <+0x271>
086db08f +0x0bf:  mov    0xc(%ebp),%edx
086db092 +0x0c2:  mov    (%edx),%eax
086db094 +0x0c4:  mov    0x10(%eax),%eax
086db097 +0x0c7:  mov    (%eax),%esi
086db099 +0x0c9:  mov    %esi,(%esp)
086db09c +0x0cc:  call   0807e3b0 <_init+0xca8>
086db0a1 +0x0d1:  mov    %esi,0x4(%esp)
086db0a5 +0x0d5:  mov    %ebx,(%esp)
086db0a8 +0x0d8:  mov    %eax,0x8(%esp)
086db0ac +0x0dc:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
086db0b1 +0x0e1:  mov    $0x4,%esi
086db0b6 +0x0e6:  jmp    086db14d <+0x17d>
086db0bb +0x0eb:  nop
086db0bc +0x0ec:  lea    0x0(%esi,%eiz,1),%esi
086db0c0 +0x0f0:  mov    &_ZNSt6locale13_S_categoriesE,%eax
086db0c5 +0x0f5:  mov    (%eax,%esi,1),%edi
086db0c8 +0x0f8:  mov    %edi,(%esp)
086db0cb +0x0fb:  call   0807e3b0 <_init+0xca8>
086db0d0 +0x100:  mov    %edi,0x4(%esp)
086db0d4 +0x104:  mov    %ebx,(%esp)
086db0d7 +0x107:  mov    %eax,0x8(%esp)
086db0db +0x10b:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
086db0e0 +0x110:  mov    (%ebx),%eax
086db0e2 +0x112:  mov    -0xc(%eax),%edx
086db0e5 +0x115:  lea    -0xc(%eax),%ecx
086db0e8 +0x118:  lea    0x1(%edx),%edi
086db0eb +0x11b:  cmp    0x4(%ecx),%edi
086db0ee +0x11e:  ja     086db0f7 <+0x127>
086db0f0 +0x120:  mov    0x8(%ecx),%ecx
086db0f3 +0x123:  test   %ecx,%ecx
086db0f5 +0x125:  jle    086db108 <+0x138>
086db0f7 +0x127:  mov    %edi,0x4(%esp)
086db0fb +0x12b:  mov    %ebx,(%esp)
086db0fe +0x12e:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
086db103 +0x133:  mov    (%ebx),%eax
086db105 +0x135:  mov    -0xc(%eax),%edx
086db108 +0x138:  movb   $0x3d,(%eax,%edx,1)
086db10c +0x13c:  mov    (%ebx),%edx
086db10e +0x13e:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
086db113 +0x143:  lea    -0xc(%edx),%eax
086db116 +0x146:  cmp    %eax,%ecx
086db118 +0x148:  jne    086db21b <+0x24b>
086db11e +0x14e:  mov    0xc(%ebp),%edx
086db121 +0x151:  mov    (%edx),%eax
086db123 +0x153:  mov    0x10(%eax),%eax
086db126 +0x156:  mov    (%eax,%esi,1),%edi
086db129 +0x159:  mov    %edi,(%esp)
086db12c +0x15c:  call   0807e3b0 <_init+0xca8>
086db131 +0x161:  mov    %edi,0x4(%esp)
086db135 +0x165:  mov    %ebx,(%esp)
086db138 +0x168:  mov    %eax,0x8(%esp)
086db13c +0x16c:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
086db141 +0x171:  add    $0x4,%esi
086db144 +0x174:  cmp    $0x30,%esi
086db147 +0x177:  je     086db1d1 <+0x201>
086db14d +0x17d:  mov    (%ebx),%eax
086db14f +0x17f:  mov    -0xc(%eax),%edx
086db152 +0x182:  lea    -0xc(%eax),%ecx
086db155 +0x185:  lea    0x1(%edx),%edi
086db158 +0x188:  cmp    0x4(%ecx),%edi
086db15b +0x18b:  ja     086db164 <+0x194>
086db15d +0x18d:  mov    0x8(%ecx),%ecx
086db160 +0x190:  test   %ecx,%ecx
086db162 +0x192:  jle    086db175 <+0x1a5>
086db164 +0x194:  mov    %edi,0x4(%esp)
086db168 +0x198:  mov    %ebx,(%esp)
086db16b +0x19b:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
086db170 +0x1a0:  mov    (%ebx),%eax
086db172 +0x1a2:  mov    -0xc(%eax),%edx
086db175 +0x1a5:  movb   $0x3b,(%eax,%edx,1)
086db179 +0x1a9:  mov    (%ebx),%edx
086db17b +0x1ab:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
086db180 +0x1b0:  lea    -0xc(%edx),%eax
086db183 +0x1b3:  cmp    %eax,%ecx
086db185 +0x1b5:  je     086db0c0 <+0xf0>
086db18b +0x1bb:  movl   $0x0,0x8(%eax)
086db192 +0x1c2:  mov    %edi,-0xc(%edx)
086db195 +0x1c5:  movb   $0x0,0xc(%eax,%edi,1)
086db19a +0x1ca:  jmp    086db0c0 <+0xf0>
086db19f +0x1cf:  nop
086db1a0 +0x1d0:  cmp    $0xb,%esi
086db1a3 +0x1d3:  je     086db1b0 <+0x1e0>
086db1a5 +0x1d5:  mov    %edi,%eax
086db1a7 +0x1d7:  mov    0x4(%ebx,%esi,4),%edi
086db1ab +0x1db:  jmp    086db00c <+0x3c>
086db1b0 +0x1e0:  mov    -0x20(%ebp),%ebx
086db1b3 +0x1e3:  mov    -0x1c(%ebp),%eax
086db1b6 +0x1e6:  mov    %eax,(%esp)
086db1b9 +0x1e9:  call   0807e3b0 <_init+0xca8>
086db1be +0x1ee:  mov    -0x1c(%ebp),%edx
086db1c1 +0x1f1:  mov    %ebx,(%esp)
086db1c4 +0x1f4:  mov    %edx,0x4(%esp)
086db1c8 +0x1f8:  mov    %eax,0x8(%esp)
086db1cc +0x1fc:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
086db1d1 +0x201:  add    $0x3c,%esp
086db1d4 +0x204:  mov    %ebx,%eax
086db1d6 +0x206:  pop    %ebx
086db1d7 +0x207:  pop    %esi
086db1d8 +0x208:  pop    %edi
086db1d9 +0x209:  pop    %ebp
086db1da +0x20a:  ret    $0x4
086db1dd +0x20d:  lea    0x0(%esi),%esi
086db1e0 +0x210:  mov    0x8(%ecx),%edi
086db1e3 +0x213:  test   %edi,%edi
086db1e5 +0x215:  jg     086db06a <+0x9a>
086db1eb +0x21b:  jmp    086db07b <+0xab>
086db1f0 +0x220:  mov    &_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086db1f5 +0x225:  movl   $0x2a,0x10(%esp)
086db1fd +0x22d:  movl   $0x1,0xc(%esp)
086db205 +0x235:  movl   $0x0,0x4(%esp)
086db20d +0x23d:  mov    %eax,0x8(%esp)
086db211 +0x241:  mov    %ebx,(%esp)
086db214 +0x244:  call   08708750 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2360>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2360
086db219 +0x249:  jmp    086db1d1 <+0x201>
086db21b +0x24b:  movl   $0x0,0x8(%eax)
086db222 +0x252:  mov    %edi,-0xc(%edx)
086db225 +0x255:  movb   $0x0,0xc(%eax,%edi,1)
086db22a +0x25a:  jmp    086db11e <+0x14e>
086db22f +0x25f:  mov    %eax,%esi
086db231 +0x261:  mov    %ebx,(%esp)
086db234 +0x264:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086db239 +0x269:  mov    %esi,(%esp)
086db23c +0x26c:  call   08ae3750 <_Unwind_Resume>
086db241 +0x271:  movl   $0x0,0x8(%eax)
086db248 +0x278:  mov    %esi,-0xc(%edx)
086db24b +0x27b:  movb   $0x0,0xc(%eax,%esi,1)
086db250 +0x280:  jmp    086db08f <+0xbf>
086db255 +0x285:  nop
086db256 +0x286:  nop
086db257 +0x287:  nop
086db258 +0x288:  nop
086db259 +0x289:  nop
086db25a +0x28a:  nop
086db25b +0x28b:  nop
086db25c +0x28c:  nop
086db25d +0x28d:  nop
086db25e +0x28e:  nop
086db25f +0x28f:  nop
```

## 反编译 C

```c
// std::locale::name @ 0x86dafd0

/* std::locale::name() const */

string * std::locale::name(void)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *__s1;
  int iVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  char *__s2;
  string *in_stack_00000004;
  int *in_stack_00000008;
  
  iVar8 = *in_stack_00000008;
  *(undefined1 **)in_stack_00000004 = &DAT_0948ccfc;
  puVar2 = *(undefined4 **)(iVar8 + 0x10);
  pcVar3 = (char *)*puVar2;
  if (pcVar3 == (char *)0x0) {
    string::_M_replace_aux(in_stack_00000004,0,string::_Rep::_S_empty_rep_storage,1,'*');
  }
  else {
    __s2 = (char *)puVar2[1];
    iVar8 = 0;
    __s1 = pcVar3;
    if (__s2 == (char *)0x0) {
LAB_086db1b3:
      sVar6 = strlen(pcVar3);
      string::assign(in_stack_00000004,pcVar3,sVar6);
    }
    else {
      while( true ) {
        iVar5 = strcmp(__s1,__s2);
        if (iVar5 != 0) break;
        if (iVar8 + 1 == 0xb) goto LAB_086db1b3;
        iVar5 = iVar8 + 2;
        __s1 = __s2;
        iVar8 = iVar8 + 1;
        __s2 = (char *)puVar2[iVar5];
      }
                    /* try { // try from 086db031 to 086db218 has its CatchHandler @ 086db22f */
      string::reserve(in_stack_00000004,0x80);
      pcVar3 = *(char **)_S_categories;
      sVar6 = strlen(pcVar3);
      string::append(in_stack_00000004,pcVar3,sVar6);
      iVar8 = *(int *)in_stack_00000004;
      iVar5 = *(int *)(iVar8 + -0xc);
      uVar1 = iVar5 + 1;
      if ((*(uint *)(iVar8 + -8) < uVar1) || (0 < *(int *)(iVar8 + -4))) {
        string::reserve(in_stack_00000004,uVar1);
        iVar8 = *(int *)in_stack_00000004;
        iVar5 = *(int *)(iVar8 + -0xc);
      }
      *(undefined1 *)(iVar8 + iVar5) = 0x3d;
      puVar4 = *(undefined1 **)in_stack_00000004;
      if (puVar4 != &DAT_0948ccfc) {
        *(undefined4 *)(puVar4 + -4) = 0;
        *(uint *)(puVar4 + -0xc) = uVar1;
        puVar4[uVar1] = 0;
      }
      pcVar3 = (char *)**(undefined4 **)(*in_stack_00000008 + 0x10);
      sVar6 = strlen(pcVar3);
      string::append(in_stack_00000004,pcVar3,sVar6);
      iVar8 = 4;
      do {
        iVar5 = *(int *)in_stack_00000004;
        iVar7 = *(int *)(iVar5 + -0xc);
        uVar1 = iVar7 + 1;
        if ((*(uint *)(iVar5 + -8) < uVar1) || (0 < *(int *)(iVar5 + -4))) {
          string::reserve(in_stack_00000004,uVar1);
          iVar5 = *(int *)in_stack_00000004;
          iVar7 = *(int *)(iVar5 + -0xc);
        }
        *(undefined1 *)(iVar5 + iVar7) = 0x3b;
        puVar4 = *(undefined1 **)in_stack_00000004;
        if (puVar4 != &DAT_0948ccfc) {
          *(undefined4 *)(puVar4 + -4) = 0;
          *(uint *)(puVar4 + -0xc) = uVar1;
          puVar4[uVar1] = 0;
        }
        pcVar3 = *(char **)(_S_categories + iVar8);
        sVar6 = strlen(pcVar3);
        string::append(in_stack_00000004,pcVar3,sVar6);
        iVar5 = *(int *)in_stack_00000004;
        iVar7 = *(int *)(iVar5 + -0xc);
        uVar1 = iVar7 + 1;
        if ((*(uint *)(iVar5 + -8) < uVar1) || (0 < *(int *)(iVar5 + -4))) {
          string::reserve(in_stack_00000004,uVar1);
          iVar5 = *(int *)in_stack_00000004;
          iVar7 = *(int *)(iVar5 + -0xc);
        }
        *(undefined1 *)(iVar5 + iVar7) = 0x3d;
        puVar4 = *(undefined1 **)in_stack_00000004;
        if (puVar4 != &DAT_0948ccfc) {
          *(undefined4 *)(puVar4 + -4) = 0;
          *(uint *)(puVar4 + -0xc) = uVar1;
          puVar4[uVar1] = 0;
        }
        pcVar3 = *(char **)(*(int *)(*in_stack_00000008 + 0x10) + iVar8);
        sVar6 = strlen(pcVar3);
        string::append(in_stack_00000004,pcVar3,sVar6);
        iVar8 = iVar8 + 4;
      } while (iVar8 != 0x30);
    }
  }
  return in_stack_00000004;
}
```
