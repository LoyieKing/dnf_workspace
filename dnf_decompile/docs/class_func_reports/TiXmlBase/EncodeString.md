# EncodeString

`_ZN9TiXmlBase12EncodeStringERKSsPSs`

`TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e0c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0c60  _ZN9TiXmlBase12EncodeStringERKSsPSs
#           TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e0c60, 0x087e0eb9]
087e0c60 +0x000:  push   %ebp
087e0c61 +0x001:  mov    %esp,%ebp
087e0c63 +0x003:  push   %edi
087e0c64 +0x004:  push   %esi
087e0c65 +0x005:  push   %ebx
087e0c66 +0x006:  xor    %ebx,%ebx
087e0c68 +0x008:  sub    $0x5c,%esp
087e0c6b +0x00b:  mov    0x8(%ebp),%edi
087e0c6e +0x00e:  mov    0xc(%ebp),%esi
087e0c71 +0x011:  lea    -0x38(%ebp),%eax
087e0c74 +0x014:  mov    %eax,-0x4c(%ebp)
087e0c77 +0x017:  mov    (%edi),%edx
087e0c79 +0x019:  mov    -0xc(%edx),%ecx
087e0c7c +0x01c:  lea    0x0(%esi,%eiz,1),%esi
087e0c80 +0x020:  cmp    %ecx,%ebx
087e0c82 +0x022:  jge    087e0d37 <+0xd7>
087e0c88 +0x028:  movzbl (%edx,%ebx,1),%eax
087e0c8c +0x02c:  cmp    $0x26,%al
087e0c8e +0x02e:  je     087e0d40 <+0xe0>
087e0c94 +0x034:  cmp    $0x3c,%al
087e0c96 +0x036:  je     087e0df8 <+0x198>
087e0c9c +0x03c:  cmp    $0x3e,%al
087e0c9e +0x03e:  je     087e0e10 <+0x1b0>
087e0ca4 +0x044:  cmp    $0x22,%al
087e0ca6 +0x046:  je     087e0e28 <+0x1c8>
087e0cac +0x04c:  cmp    $0x27,%al
087e0cae +0x04e:  xchg   %ax,%ax
087e0cb0 +0x050:  je     087e0e88 <+0x228>
087e0cb6 +0x056:  cmp    $0x1f,%al
087e0cb8 +0x058:  ja     087e0d88 <+0x128>
087e0cbe +0x05e:  lea    -0x38(%ebp),%edx
087e0cc1 +0x061:  movzbl %al,%eax
087e0cc4 +0x064:  mov    %edx,(%esp)
087e0cc7 +0x067:  mov    %eax,0xc(%esp)
087e0ccb +0x06b:  movl   $"&#x%02X;",0x8(%esp)
087e0cd3 +0x073:  movl   $0x20,0x4(%esp)
087e0cdb +0x07b:  call   0807dbe0 <_init+0x4d8>
087e0ce0 +0x080:  lea    -0x38(%ebp),%edx
087e0ce3 +0x083:  mov    (%edx),%ecx
087e0ce5 +0x085:  add    $0x4,%edx
087e0ce8 +0x088:  lea    -0x1010101(%ecx),%eax
087e0cee +0x08e:  not    %ecx
087e0cf0 +0x090:  and    %ecx,%eax
087e0cf2 +0x092:  and    $0x80808080,%eax
087e0cf7 +0x097:  je     087e0ce3 <+0x83>
087e0cf9 +0x099:  mov    %eax,%ecx
087e0cfb +0x09b:  shr    $0x10,%ecx
087e0cfe +0x09e:  test   $0x8080,%eax
087e0d03 +0x0a3:  cmove  %ecx,%eax
087e0d06 +0x0a6:  lea    0x2(%edx),%ecx
087e0d09 +0x0a9:  cmove  %ecx,%edx
087e0d0c +0x0ac:  add    %al,%al
087e0d0e +0x0ae:  sbb    $0x3,%edx
087e0d11 +0x0b1:  sub    -0x4c(%ebp),%edx
087e0d14 +0x0b4:  lea    -0x38(%ebp),%ecx
087e0d17 +0x0b7:  mov    %ecx,0x4(%esp)
087e0d1b +0x0bb:  mov    %edx,0x8(%esp)
087e0d1f +0x0bf:  mov    %esi,(%esp)
087e0d22 +0x0c2:  add    $0x1,%ebx
087e0d25 +0x0c5:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e0d2a +0x0ca:  mov    (%edi),%edx
087e0d2c +0x0cc:  mov    -0xc(%edx),%ecx
087e0d2f +0x0cf:  cmp    %ecx,%ebx
087e0d31 +0x0d1:  jl     087e0c88 <+0x28>
087e0d37 +0x0d7:  add    $0x5c,%esp
087e0d3a +0x0da:  pop    %ebx
087e0d3b +0x0db:  pop    %esi
087e0d3c +0x0dc:  pop    %edi
087e0d3d +0x0dd:  pop    %ebp
087e0d3e +0x0de:  ret
087e0d3f +0x0df:  nop
087e0d40 +0x0e0:  lea    -0x2(%ecx),%eax
087e0d43 +0x0e3:  cmp    %eax,%ebx
087e0d45 +0x0e5:  jge    087e0d60 <+0x100>
087e0d47 +0x0e7:  cmpb   $0x23,0x1(%edx,%ebx,1)
087e0d4c +0x0ec:  lea    0x1(%ebx),%eax
087e0d4f +0x0ef:  je     087e0e40 <+0x1e0>
087e0d55 +0x0f5:  mov    %eax,%ebx
087e0d57 +0x0f7:  jmp    087e0d63 <+0x103>
087e0d59 +0x0f9:  lea    0x0(%esi,%eiz,1),%esi
087e0d60 +0x100:  add    $0x1,%ebx
087e0d63 +0x103:  mov    &_ZN9TiXmlBase6entityE+0x4,%eax
087e0d68 +0x108:  mov    %esi,(%esp)
087e0d6b +0x10b:  mov    %eax,0x8(%esp)
087e0d6f +0x10f:  mov    &_ZN9TiXmlBase6entityE,%eax
087e0d74 +0x114:  mov    %eax,0x4(%esp)
087e0d78 +0x118:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e0d7d +0x11d:  mov    (%edi),%edx
087e0d7f +0x11f:  mov    -0xc(%edx),%ecx
087e0d82 +0x122:  jmp    087e0c80 <+0x20>
087e0d87 +0x127:  nop
087e0d88 +0x128:  mov    (%esi),%edx
087e0d8a +0x12a:  mov    %edx,-0x54(%ebp)
087e0d8d +0x12d:  mov    -0x54(%ebp),%ecx
087e0d90 +0x130:  sub    $0xc,%edx
087e0d93 +0x133:  mov    %edx,-0x40(%ebp)
087e0d96 +0x136:  mov    -0xc(%ecx),%ecx
087e0d99 +0x139:  mov    %ecx,-0x50(%ebp)
087e0d9c +0x13c:  add    $0x1,%ecx
087e0d9f +0x13f:  cmp    0x4(%edx),%ecx
087e0da2 +0x142:  mov    %ecx,-0x3c(%ebp)
087e0da5 +0x145:  ja     087e0dae <+0x14e>
087e0da7 +0x147:  mov    0x8(%edx),%ecx
087e0daa +0x14a:  test   %ecx,%ecx
087e0dac +0x14c:  jle    087e0dcf <+0x16f>
087e0dae +0x14e:  mov    -0x3c(%ebp),%edx
087e0db1 +0x151:  mov    %al,-0x44(%ebp)
087e0db4 +0x154:  mov    %esi,(%esp)
087e0db7 +0x157:  mov    %edx,0x4(%esp)
087e0dbb +0x15b:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e0dc0 +0x160:  mov    (%esi),%ecx
087e0dc2 +0x162:  movzbl -0x44(%ebp),%eax
087e0dc6 +0x166:  mov    -0xc(%ecx),%edx
087e0dc9 +0x169:  mov    %ecx,-0x54(%ebp)
087e0dcc +0x16c:  mov    %edx,-0x50(%ebp)
087e0dcf +0x16f:  mov    -0x54(%ebp),%edx
087e0dd2 +0x172:  mov    -0x50(%ebp),%ecx
087e0dd5 +0x175:  mov    %al,(%edx,%ecx,1)
087e0dd8 +0x178:  mov    (%esi),%edx
087e0dda +0x17a:  lea    -0xc(%edx),%eax
087e0ddd +0x17d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e0de2 +0x182:  jne    087e0e9f <+0x23f>
087e0de8 +0x188:  mov    (%edi),%edx
087e0dea +0x18a:  add    $0x1,%ebx
087e0ded +0x18d:  mov    -0xc(%edx),%ecx
087e0df0 +0x190:  jmp    087e0c80 <+0x20>
087e0df5 +0x195:  lea    0x0(%esi),%esi
087e0df8 +0x198:  mov    &_ZN9TiXmlBase6entityE+0x10,%eax
087e0dfd +0x19d:  mov    %eax,0x8(%esp)
087e0e01 +0x1a1:  mov    &_ZN9TiXmlBase6entityE+0xc,%eax
087e0e06 +0x1a6:  mov    %eax,0x4(%esp)
087e0e0a +0x1aa:  jmp    087e0d1f <+0xbf>
087e0e0f +0x1af:  nop
087e0e10 +0x1b0:  mov    &_ZN9TiXmlBase6entityE+0x1c,%eax
087e0e15 +0x1b5:  mov    %eax,0x8(%esp)
087e0e19 +0x1b9:  mov    &_ZN9TiXmlBase6entityE+0x18,%eax
087e0e1e +0x1be:  mov    %eax,0x4(%esp)
087e0e22 +0x1c2:  jmp    087e0d1f <+0xbf>
087e0e27 +0x1c7:  nop
087e0e28 +0x1c8:  mov    &_ZN9TiXmlBase6entityE+0x28,%eax
087e0e2d +0x1cd:  mov    %eax,0x8(%esp)
087e0e31 +0x1d1:  mov    &_ZN9TiXmlBase6entityE+0x24,%eax
087e0e36 +0x1d6:  mov    %eax,0x4(%esp)
087e0e3a +0x1da:  jmp    087e0d1f <+0xbf>
087e0e3f +0x1df:  nop
087e0e40 +0x1e0:  cmpb   $0x78,0x2(%edx,%ebx,1)
087e0e45 +0x1e5:  jne    087e0d55 <+0xf5>
087e0e4b +0x1eb:  jmp    087e0e53 <+0x1f3>
087e0e4d +0x1ed:  lea    0x0(%esi),%esi
087e0e50 +0x1f0:  mov    -0xc(%edx),%ecx
087e0e53 +0x1f3:  lea    -0x1(%ecx),%eax
087e0e56 +0x1f6:  cmp    %eax,%ebx
087e0e58 +0x1f8:  jge    087e0c80 <+0x20>
087e0e5e +0x1fe:  add    %ebx,%edx
087e0e60 +0x200:  add    $0x1,%ebx
087e0e63 +0x203:  mov    %edx,0x4(%esp)
087e0e67 +0x207:  movl   $0x1,0x8(%esp)
087e0e6f +0x20f:  mov    %esi,(%esp)
087e0e72 +0x212:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e0e77 +0x217:  mov    (%edi),%edx
087e0e79 +0x219:  cmpb   $0x3b,(%edx,%ebx,1)
087e0e7d +0x21d:  jne    087e0e50 <+0x1f0>
087e0e7f +0x21f:  jmp    087e0ded <+0x18d>
087e0e84 +0x224:  lea    0x0(%esi,%eiz,1),%esi
087e0e88 +0x228:  mov    &_ZN9TiXmlBase6entityE+0x34,%eax
087e0e8d +0x22d:  mov    %eax,0x8(%esp)
087e0e91 +0x231:  mov    &_ZN9TiXmlBase6entityE+0x30,%eax
087e0e96 +0x236:  mov    %eax,0x4(%esp)
087e0e9a +0x23a:  jmp    087e0d1f <+0xbf>
087e0e9f +0x23f:  mov    -0x3c(%ebp),%ecx
087e0ea2 +0x242:  movl   $0x0,0x8(%eax)
087e0ea9 +0x249:  mov    %ecx,-0xc(%edx)
087e0eac +0x24c:  movb   $0x0,0xc(%eax,%ecx,1)
087e0eb1 +0x251:  jmp    087e0de8 <+0x188>
087e0eb6 +0x256:  lea    0x0(%esi),%esi
087e0eb9 +0x259:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlBase::EncodeString @ 0x87e0c60

/* TiXmlBase::EncodeString(std::string const&, std::string*) */

void TiXmlBase::EncodeString(string *param_1,string *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  int local_58;
  int local_54;
  uint local_3c [11];
  
  iVar10 = 0;
  iVar8 = *(int *)param_1;
  iVar5 = *(int *)(iVar8 + -0xc);
LAB_087e0c80:
  do {
    while( true ) {
      if (iVar5 <= iVar10) {
        return;
      }
      while (bVar1 = *(byte *)(iVar8 + iVar10), bVar1 != 0x26) {
        puVar11 = (uint *)PTR_DAT_093f378c;
        uVar4 = DAT_093f3790;
        if ((((bVar1 != 0x3c) &&
             (puVar11 = (uint *)PTR_DAT_093f3798, uVar4 = DAT_093f379c, bVar1 != 0x3e)) &&
            (puVar11 = (uint *)PTR_s__quot__093f37a4, uVar4 = DAT_093f37a8, bVar1 != 0x22)) &&
           (puVar11 = (uint *)PTR_s__apos__093f37b0, uVar4 = DAT_093f37b4, bVar1 != 0x27)) {
          if (0x1f < bVar1) {
            local_58 = *(int *)param_2;
            local_54 = *(int *)(local_58 + -0xc);
            uVar4 = local_54 + 1;
            if ((*(uint *)(local_58 + -8) < uVar4) || (0 < *(int *)(local_58 + -4))) {
              std::string::reserve(param_2,uVar4);
              local_58 = *(int *)param_2;
              local_54 = *(int *)(local_58 + -0xc);
            }
            *(byte *)(local_58 + local_54) = bVar1;
            puVar2 = *(undefined1 **)param_2;
            if (puVar2 != &DAT_0948ccfc) {
              *(undefined4 *)(puVar2 + -4) = 0;
              *(uint *)(puVar2 + -0xc) = uVar4;
              puVar2[uVar4] = 0;
            }
            iVar8 = *(int *)param_1;
            iVar10 = iVar10 + 1;
            goto LAB_087e0ded;
          }
          snprintf((char *)local_3c,0x20,"&#x%02X;",(uint)bVar1);
          puVar11 = local_3c;
          do {
            puVar6 = puVar11;
            uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
            uVar4 = uVar3 & 0x80808080;
            puVar11 = puVar6 + 1;
          } while (uVar4 == 0);
          puVar7 = puVar6 + 1;
          if ((uVar3 & 0x8080) == 0) {
            puVar7 = (uint *)((int)puVar6 + 6);
            uVar4 = uVar4 >> 0x10;
          }
          puVar11 = local_3c;
          uVar4 = (int)puVar7 + ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)local_3c);
        }
        iVar10 = iVar10 + 1;
        std::string::append(param_2,(char *)puVar11,uVar4);
        iVar8 = *(int *)param_1;
        iVar5 = *(int *)(iVar8 + -0xc);
        if (iVar5 <= iVar10) {
          return;
        }
      }
      if (((iVar10 < iVar5 + -2) && (*(char *)(iVar8 + 1 + iVar10) == '#')) &&
         (*(char *)(iVar8 + 2 + iVar10) == 'x')) break;
      iVar10 = iVar10 + 1;
      std::string::append(param_2,entity,DAT_093f3784);
      iVar8 = *(int *)param_1;
      iVar5 = *(int *)(iVar8 + -0xc);
    }
    while (iVar10 < iVar5 + -1) {
      pcVar9 = (char *)(iVar8 + iVar10);
      iVar10 = iVar10 + 1;
      std::string::append(param_2,pcVar9,1);
      iVar8 = *(int *)param_1;
      if (*(char *)(iVar8 + iVar10) == ';') goto LAB_087e0ded;
      iVar5 = *(int *)(iVar8 + -0xc);
    }
  } while( true );
LAB_087e0ded:
  iVar5 = *(int *)(iVar8 + -0xc);
  goto LAB_087e0c80;
}
```
