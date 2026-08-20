# Add

`_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute`

`TiXmlAttributeSet::Add(TiXmlAttribute*)`

| 类 | 地址 |
|---|---|
| `TiXmlAttributeSet` | `0x087e3a40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3a40  _ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute
#           TiXmlAttributeSet::Add(TiXmlAttribute*)
# range [0x087e3a40, 0x087e3b49]
087e3a40 +0x000:  push   %ebp
087e3a41 +0x001:  mov    %esp,%ebp
087e3a43 +0x003:  push   %edi
087e3a44 +0x004:  push   %esi
087e3a45 +0x005:  push   %ebx
087e3a46 +0x006:  sub    $0x4c,%esp
087e3a49 +0x009:  mov    0xc(%ebp),%edx
087e3a4c +0x00c:  lea    -0x19(%ebp),%eax
087e3a4f +0x00f:  mov    0x8(%ebp),%ebx
087e3a52 +0x012:  mov    %eax,0x8(%esp)
087e3a56 +0x016:  mov    0x14(%edx),%eax
087e3a59 +0x019:  mov    %eax,0x4(%esp)
087e3a5d +0x01d:  lea    -0x20(%ebp),%eax
087e3a60 +0x020:  mov    %eax,(%esp)
087e3a63 +0x023:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087e3a68 +0x028:  mov    0x20(%ebx),%eax
087e3a6b +0x02b:  cmp    %ebx,%eax
087e3a6d +0x02d:  je     087e3af9 <+0xb9>
087e3a73 +0x033:  mov    -0x20(%ebp),%ecx
087e3a76 +0x036:  mov    %ebx,-0x3c(%ebp)
087e3a79 +0x039:  mov    %ecx,-0x2c(%ebp)
087e3a7c +0x03c:  sub    $0xc,%ecx
087e3a7f +0x03f:  mov    %ecx,-0x30(%ebp)
087e3a82 +0x042:  mov    -0x2c(%ebp),%ecx
087e3a85 +0x045:  mov    -0xc(%ecx),%edx
087e3a88 +0x048:  jmp    087e3a98 <+0x58>
087e3a8a +0x04a:  lea    0x0(%esi),%esi
087e3a90 +0x050:  mov    0x20(%eax),%eax
087e3a93 +0x053:  cmp    %eax,-0x3c(%ebp)
087e3a96 +0x056:  je     087e3ad0 <+0x90>
087e3a98 +0x058:  mov    0x14(%eax),%esi
087e3a9b +0x05b:  cmp    %edx,-0xc(%esi)
087e3a9e +0x05e:  jne    087e3a90 <+0x50>
087e3aa0 +0x060:  mov    -0x2c(%ebp),%edi
087e3aa3 +0x063:  cmp    %edx,%edx
087e3aa5 +0x065:  mov    %edx,%ecx
087e3aa7 +0x067:  repz cmpsb %es:(%edi),%ds:(%esi)
087e3aa9 +0x069:  jne    087e3a90 <+0x50>
087e3aab +0x06b:  movl   $&_ZZN17TiXmlAttributeSet3AddEP14TiXmlAttributeE19__PRETTY_FUNCTION__,0xc(%esp)
087e3ab3 +0x073:  movl   $0x5ed,0x8(%esp)
087e3abb +0x07b:  movl   $"tinyxml.cpp",0x4(%esp)
087e3ac3 +0x083:  movl   $"!Find( std::string( addMe->Name() ) )",(%esp)
087e3aca +0x08a:  call   0807dc50 <_init+0x548>
087e3acf +0x08f:  nop
087e3ad0 +0x090:  mov    -0x3c(%ebp),%ebx
087e3ad3 +0x093:  cmpl   $&_ZNSs4_Rep20_S_empty_rep_storageE,-0x30(%ebp)
087e3ada +0x09a:  jne    087e3b0c <+0xcc>
087e3adc +0x09c:  mov    0xc(%ebp),%edx
087e3adf +0x09f:  mov    0x1c(%ebx),%eax
087e3ae2 +0x0a2:  mov    %ebx,0x20(%edx)
087e3ae5 +0x0a5:  mov    %eax,0x1c(%edx)
087e3ae8 +0x0a8:  mov    0x1c(%ebx),%eax
087e3aeb +0x0ab:  mov    %edx,0x1c(%ebx)
087e3aee +0x0ae:  mov    %edx,0x20(%eax)
087e3af1 +0x0b1:  add    $0x4c,%esp
087e3af4 +0x0b4:  pop    %ebx
087e3af5 +0x0b5:  pop    %esi
087e3af6 +0x0b6:  pop    %edi
087e3af7 +0x0b7:  pop    %ebp
087e3af8 +0x0b8:  ret
087e3af9 +0x0b9:  mov    -0x20(%ebp),%eax
087e3afc +0x0bc:  sub    $0xc,%eax
087e3aff +0x0bf:  mov    %eax,-0x30(%ebp)
087e3b02 +0x0c2:  jmp    087e3ad3 <+0x93>
087e3b04 +0x0c4:  mov    %eax,(%esp)
087e3b07 +0x0c7:  call   08ae3750 <_Unwind_Resume>
087e3b0c +0x0cc:  mov    $&data#bb92cc41(.plt),%eax
087e3b11 +0x0d1:  test   %eax,%eax
087e3b13 +0x0d3:  je     087e3b38 <+0xf8>
087e3b15 +0x0d5:  mov    -0x30(%ebp),%edx
087e3b18 +0x0d8:  or     $0xffffffff,%eax
087e3b1b +0x0db:  lock xadd %eax,0x8(%edx)
087e3b20 +0x0e0:  test   %eax,%eax
087e3b22 +0x0e2:  jg     087e3adc <+0x9c>
087e3b24 +0x0e4:  lea    -0x1a(%ebp),%eax
087e3b27 +0x0e7:  mov    %eax,0x4(%esp)
087e3b2b +0x0eb:  mov    -0x30(%ebp),%eax
087e3b2e +0x0ee:  mov    %eax,(%esp)
087e3b31 +0x0f1:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e3b36 +0x0f6:  jmp    087e3adc <+0x9c>
087e3b38 +0x0f8:  mov    -0x30(%ebp),%ecx
087e3b3b +0x0fb:  mov    0x8(%ecx),%eax
087e3b3e +0x0fe:  lea    -0x1(%eax),%edx
087e3b41 +0x101:  mov    %edx,0x8(%ecx)
087e3b44 +0x104:  jmp    087e3b20 <+0xe0>
087e3b46 +0x106:  lea    0x0(%esi),%esi
087e3b49 +0x109:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlAttributeSet::Add @ 0x87e3a40

/* WARNING: Removing unreachable block (ram,0x087e3b38) */
/* TiXmlAttributeSet::Add(TiXmlAttribute*) */

void __thiscall TiXmlAttributeSet::Add(TiXmlAttributeSet *this,TiXmlAttribute *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  TiXmlAttributeSet *pTVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  byte bVar8;
  allocator *local_34;
  char *local_24;
  allocator local_1d [13];
  
  bVar8 = 0;
                    /* try { // try from 087e3a63 to 087e3a67 has its CatchHandler @ 087e3b04 */
  std::string::string((string *)&local_24,*(char **)(param_1 + 0x14),local_1d);
  pTVar3 = *(TiXmlAttributeSet **)(this + 0x20);
  if (pTVar3 != this) {
    do {
      if (*(int *)(*(char **)(pTVar3 + 0x14) + -0xc) == *(int *)(local_24 + -0xc)) {
        bVar7 = true;
        iVar4 = *(int *)(local_24 + -0xc);
        pcVar5 = *(char **)(pTVar3 + 0x14);
        pcVar6 = local_24;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
        } while (bVar7);
        if (bVar7) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("!Find( std::string( addMe->Name() ) )","tinyxml.cpp",0x5ed,
                        "void TiXmlAttributeSet::Add(TiXmlAttribute*)");
        }
      }
      pTVar3 = *(TiXmlAttributeSet **)(pTVar3 + 0x20);
    } while (this != pTVar3);
  }
  local_34 = (allocator *)(local_24 + -0xc);
  if (local_34 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy(local_34);
    }
  }
  uVar2 = *(undefined4 *)(this + 0x1c);
  *(TiXmlAttributeSet **)(param_1 + 0x20) = this;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  iVar4 = *(int *)(this + 0x1c);
  *(TiXmlAttribute **)(this + 0x1c) = param_1;
  *(TiXmlAttribute **)(iVar4 + 0x20) = param_1;
  return;
}
```
