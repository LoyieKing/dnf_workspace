# RemoveAttribute

`_ZN12TiXmlElement15RemoveAttributeEPKc`

`TiXmlElement::RemoveAttribute(char const*)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3900  _ZN12TiXmlElement15RemoveAttributeEPKc
#           TiXmlElement::RemoveAttribute(char const*)
# range [0x087e3900, 0x087e3a3f]
087e3900 +0x000:  push   %ebp
087e3901 +0x001:  mov    %esp,%ebp
087e3903 +0x003:  push   %edi
087e3904 +0x004:  push   %esi
087e3905 +0x005:  push   %ebx
087e3906 +0x006:  sub    $0x4c,%esp
087e3909 +0x009:  mov    0x8(%ebp),%ebx
087e390c +0x00c:  lea    -0x19(%ebp),%eax
087e390f +0x00f:  mov    %eax,0x8(%esp)
087e3913 +0x013:  mov    0xc(%ebp),%eax
087e3916 +0x016:  mov    %eax,0x4(%esp)
087e391a +0x01a:  lea    -0x20(%ebp),%eax
087e391d +0x01d:  mov    %eax,(%esp)
087e3920 +0x020:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087e3925 +0x025:  mov    0x4c(%ebx),%eax
087e3928 +0x028:  add    $0x2c,%ebx
087e392b +0x02b:  cmp    %ebx,%eax
087e392d +0x02d:  je     087e39aa <+0xaa>
087e392f +0x02f:  mov    -0x20(%ebp),%edx
087e3932 +0x032:  mov    %eax,-0x34(%ebp)
087e3935 +0x035:  mov    %ebx,-0x3c(%ebp)
087e3938 +0x038:  mov    %edx,-0x2c(%ebp)
087e393b +0x03b:  sub    $0xc,%edx
087e393e +0x03e:  mov    %edx,-0x30(%ebp)
087e3941 +0x041:  mov    -0x2c(%ebp),%edx
087e3944 +0x044:  mov    -0xc(%edx),%ecx
087e3947 +0x047:  mov    %eax,%edx
087e3949 +0x049:  mov    %ecx,%eax
087e394b +0x04b:  jmp    087e3958 <+0x58>
087e394d +0x04d:  lea    0x0(%esi),%esi
087e3950 +0x050:  mov    0x20(%edx),%edx
087e3953 +0x053:  cmp    -0x3c(%ebp),%edx
087e3956 +0x056:  je     087e39b3 <+0xb3>
087e3958 +0x058:  mov    0x14(%edx),%esi
087e395b +0x05b:  cmp    %eax,-0xc(%esi)
087e395e +0x05e:  jne    087e3950 <+0x50>
087e3960 +0x060:  mov    -0x2c(%ebp),%edi
087e3963 +0x063:  cmp    %eax,%eax
087e3965 +0x065:  mov    %eax,%ecx
087e3967 +0x067:  repz cmpsb %es:(%edi),%ds:(%esi)
087e3969 +0x069:  jne    087e3950 <+0x50>
087e396b +0x06b:  mov    -0x34(%ebp),%eax
087e396e +0x06e:  mov    -0x3c(%ebp),%ebx
087e3971 +0x071:  cmp    %edx,%eax
087e3973 +0x073:  je     087e3985 <+0x85>
087e3975 +0x075:  lea    0x0(%esi),%esi
087e3978 +0x078:  mov    0x20(%eax),%eax
087e397b +0x07b:  cmp    %ebx,%eax
087e397d +0x07d:  je     087e39c4 <+0xc4>
087e397f +0x07f:  cmp    %eax,%edx
087e3981 +0x081:  jne    087e3978 <+0x78>
087e3983 +0x083:  mov    %edx,%eax
087e3985 +0x085:  mov    0x1c(%edx),%ecx
087e3988 +0x088:  mov    0x20(%edx),%ebx
087e398b +0x08b:  mov    %ebx,0x20(%ecx)
087e398e +0x08e:  mov    0x20(%edx),%ebx
087e3991 +0x091:  movl   $0x0,0x20(%edx)
087e3998 +0x098:  mov    %ecx,0x1c(%ebx)
087e399b +0x09b:  movl   $0x0,0x1c(%edx)
087e39a2 +0x0a2:  mov    (%eax),%edx
087e39a4 +0x0a4:  mov    %eax,(%esp)
087e39a7 +0x0a7:  call   *0x4(%edx)
087e39aa +0x0aa:  mov    -0x20(%ebp),%eax
087e39ad +0x0ad:  sub    $0xc,%eax
087e39b0 +0x0b0:  mov    %eax,-0x30(%ebp)
087e39b3 +0x0b3:  cmpl   $&_ZNSs4_Rep20_S_empty_rep_storageE,-0x30(%ebp)
087e39ba +0x0ba:  jne    087e39f0 <+0xf0>
087e39bc +0x0bc:  add    $0x4c,%esp
087e39bf +0x0bf:  pop    %ebx
087e39c0 +0x0c0:  pop    %esi
087e39c1 +0x0c1:  pop    %edi
087e39c2 +0x0c2:  pop    %ebp
087e39c3 +0x0c3:  ret
087e39c4 +0x0c4:  movl   $&_ZZN17TiXmlAttributeSet6RemoveEP14TiXmlAttributeE19__PRETTY_FUNCTION__,0xc(%esp)
087e39cc +0x0cc:  movl   $0x608,0x8(%esp)
087e39d4 +0x0d4:  movl   $"tinyxml.cpp",0x4(%esp)
087e39dc +0x0dc:  movl   $"0",(%esp)
087e39e3 +0x0e3:  call   0807dc50 <_init+0x548>
087e39e8 +0x0e8:  mov    %eax,(%esp)
087e39eb +0x0eb:  call   08ae3750 <_Unwind_Resume>
087e39f0 +0x0f0:  mov    $&data#bb92cc41(.plt),%eax
087e39f5 +0x0f5:  test   %eax,%eax
087e39f7 +0x0f7:  je     087e3a31 <+0x131>
087e39f9 +0x0f9:  mov    -0x30(%ebp),%edx
087e39fc +0x0fc:  or     $0xffffffff,%eax
087e39ff +0x0ff:  lock xadd %eax,0x8(%edx)
087e3a04 +0x104:  test   %eax,%eax
087e3a06 +0x106:  jg     087e39bc <+0xbc>
087e3a08 +0x108:  mov    -0x30(%ebp),%ebx
087e3a0b +0x10b:  lea    -0x1a(%ebp),%eax
087e3a0e +0x10e:  mov    %eax,0x4(%esp)
087e3a12 +0x112:  mov    %ebx,(%esp)
087e3a15 +0x115:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e3a1a +0x11a:  jmp    087e39bc <+0xbc>
087e3a1c +0x11c:  mov    %eax,%ebx
087e3a1e +0x11e:  lea    -0x20(%ebp),%eax
087e3a21 +0x121:  mov    %eax,(%esp)
087e3a24 +0x124:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e3a29 +0x129:  mov    %ebx,(%esp)
087e3a2c +0x12c:  call   08ae3750 <_Unwind_Resume>
087e3a31 +0x131:  mov    -0x30(%ebp),%ecx
087e3a34 +0x134:  mov    0x8(%ecx),%eax
087e3a37 +0x137:  lea    -0x1(%eax),%edx
087e3a3a +0x13a:  mov    %edx,0x8(%ecx)
087e3a3d +0x13d:  jmp    087e3a04 <+0x104>
087e3a3f +0x13f:  nop
```

## 反编译 C

```c
// TiXmlElement::RemoveAttribute @ 0x87e3900

/* WARNING: Removing unreachable block (ram,0x087e3a31) */
/* TiXmlElement::RemoveAttribute(char const*) */

void __thiscall TiXmlElement::RemoveAttribute(TiXmlElement *this,char *param_1)

{
  int *piVar1;
  TiXmlElement *pTVar2;
  int iVar3;
  TiXmlElement *pTVar4;
  int iVar5;
  TiXmlElement *pTVar6;
  TiXmlElement *pTVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  allocator *local_34;
  char *local_24;
  allocator local_1d [13];
  
  bVar11 = 0;
                    /* try { // try from 087e3920 to 087e3924 has its CatchHandler @ 087e39e8 */
  std::string::string((string *)&local_24,param_1,local_1d);
  pTVar2 = *(TiXmlElement **)(this + 0x4c);
  pTVar7 = this + 0x2c;
  if (pTVar2 != pTVar7) {
    pTVar6 = pTVar2;
    do {
      if (*(int *)(*(char **)(pTVar6 + 0x14) + -0xc) == *(int *)(local_24 + -0xc)) {
        bVar10 = true;
        iVar5 = *(int *)(local_24 + -0xc);
        pcVar8 = *(char **)(pTVar6 + 0x14);
        pcVar9 = local_24;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = *pcVar8 == *pcVar9;
          pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
          pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
        } while (bVar10);
        pTVar4 = pTVar2;
        if (bVar10) goto joined_r0x087e3973;
      }
      pTVar6 = *(TiXmlElement **)(pTVar6 + 0x20);
    } while (pTVar6 != pTVar7);
  }
LAB_087e39b3:
  local_34 = (allocator *)(local_24 + -0xc);
  if (local_34 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std::string::_Rep::_M_destroy(local_34);
    }
  }
  return;
joined_r0x087e3973:
  while (pTVar2 != pTVar6) {
    pTVar2 = *(TiXmlElement **)(pTVar2 + 0x20);
    pTVar4 = pTVar6;
    if (pTVar2 == pTVar7) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","tinyxml.cpp",0x608,"void TiXmlAttributeSet::Remove(TiXmlAttribute*)");
    }
  }
  iVar5 = *(int *)(pTVar6 + 0x1c);
  *(int *)(iVar5 + 0x20) = *(int *)(pTVar6 + 0x20);
  iVar3 = *(int *)(pTVar6 + 0x20);
  *(int *)(pTVar6 + 0x20) = 0;
  *(int *)(iVar3 + 0x1c) = iVar5;
  *(int *)(pTVar6 + 0x1c) = 0;
                    /* try { // try from 087e39a7 to 087e39a9 has its CatchHandler @ 087e3a1c */
  (**(code **)(*(int *)pTVar4 + 4))(pTVar4);
  goto LAB_087e39b3;
}
```
