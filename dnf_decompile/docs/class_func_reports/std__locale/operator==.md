# operator==

`_ZNKSt6localeeqERKS_`

`std::locale::operator==(std::locale const&) const`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086db460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086db460  _ZNKSt6localeeqERKS_
#           std::locale::operator==(std::locale const&) const
# range [0x086db460, 0x086db5ff]
086db460 +0x000:  push   %ebp
086db461 +0x001:  mov    %esp,%ebp
086db463 +0x003:  sub    $0x48,%esp
086db466 +0x006:  mov    %ebx,-0xc(%ebp)
086db469 +0x009:  mov    0xc(%ebp),%ebx
086db46c +0x00c:  mov    %esi,-0x8(%ebp)
086db46f +0x00f:  mov    0x8(%ebp),%esi
086db472 +0x012:  mov    %edi,-0x4(%ebp)
086db475 +0x015:  mov    (%ebx),%edx
086db477 +0x017:  mov    (%esi),%eax
086db479 +0x019:  cmp    %edx,%eax
086db47b +0x01b:  je     086db528 <+0xc8>
086db481 +0x021:  mov    0x10(%eax),%edi
086db484 +0x024:  mov    (%edi),%eax
086db486 +0x026:  test   %eax,%eax
086db488 +0x028:  je     086db510 <+0xb0>
086db48e +0x02e:  mov    0x10(%edx),%edx
086db491 +0x031:  mov    (%edx),%ecx
086db493 +0x033:  test   %ecx,%ecx
086db495 +0x035:  je     086db510 <+0xb0>
086db497 +0x037:  mov    %ecx,0x4(%esp)
086db49b +0x03b:  mov    %eax,(%esp)
086db49e +0x03e:  mov    %edx,-0x2c(%ebp)
086db4a1 +0x041:  call   0807e4e0 <_init+0xdd8>
086db4a6 +0x046:  mov    -0x2c(%ebp),%edx
086db4a9 +0x049:  test   %eax,%eax
086db4ab +0x04b:  jne    086db510 <+0xb0>
086db4ad +0x04d:  mov    0x4(%edi),%edi
086db4b0 +0x050:  test   %edi,%edi
086db4b2 +0x052:  je     086db520 <+0xc0>
086db4b4 +0x054:  lea    -0x24(%ebp),%edi
086db4b7 +0x057:  mov    %ebx,0x4(%esp)
086db4bb +0x05b:  mov    %edi,(%esp)
086db4be +0x05e:  call   086dafd0 <_ZNKSt6locale4nameEv>  ; std::locale::name() const
086db4c3 +0x063:  sub    $0x4,%esp
086db4c6 +0x066:  lea    -0x20(%ebp),%eax
086db4c9 +0x069:  mov    %esi,0x4(%esp)
086db4cd +0x06d:  mov    %eax,(%esp)
086db4d0 +0x070:  call   086dafd0 <_ZNKSt6locale4nameEv>  ; std::locale::name() const
086db4d5 +0x075:  mov    -0x20(%ebp),%esi
086db4d8 +0x078:  sub    $0x4,%esp
086db4db +0x07b:  xor    %eax,%eax
086db4dd +0x07d:  mov    -0x24(%ebp),%edi
086db4e0 +0x080:  mov    -0xc(%esi),%ecx
086db4e3 +0x083:  lea    -0xc(%esi),%ebx
086db4e6 +0x086:  cmp    -0xc(%edi),%ecx
086db4e9 +0x089:  lea    -0xc(%edi),%edx
086db4ec +0x08c:  je     086db540 <+0xe0>
086db4ee +0x08e:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ebx
086db4f4 +0x094:  jne    086db57a <+0x11a>
086db4fa +0x09a:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
086db500 +0x0a0:  jne    086db549 <+0xe9>
086db502 +0x0a2:  mov    -0xc(%ebp),%ebx
086db505 +0x0a5:  mov    -0x8(%ebp),%esi
086db508 +0x0a8:  mov    -0x4(%ebp),%edi
086db50b +0x0ab:  mov    %ebp,%esp
086db50d +0x0ad:  pop    %ebp
086db50e +0x0ae:  ret
086db50f +0x0af:  nop
086db510 +0x0b0:  mov    -0xc(%ebp),%ebx
086db513 +0x0b3:  xor    %eax,%eax
086db515 +0x0b5:  mov    -0x8(%ebp),%esi
086db518 +0x0b8:  mov    -0x4(%ebp),%edi
086db51b +0x0bb:  mov    %ebp,%esp
086db51d +0x0bd:  pop    %ebp
086db51e +0x0be:  ret
086db51f +0x0bf:  nop
086db520 +0x0c0:  mov    0x4(%edx),%ecx
086db523 +0x0c3:  test   %ecx,%ecx
086db525 +0x0c5:  jne    086db4b4 <+0x54>
086db527 +0x0c7:  nop
086db528 +0x0c8:  mov    -0xc(%ebp),%ebx
086db52b +0x0cb:  mov    $0x1,%eax
086db530 +0x0d0:  mov    -0x8(%ebp),%esi
086db533 +0x0d3:  mov    -0x4(%ebp),%edi
086db536 +0x0d6:  mov    %ebp,%esp
086db538 +0x0d8:  pop    %ebp
086db539 +0x0d9:  ret
086db53a +0x0da:  lea    0x0(%esi),%esi
086db540 +0x0e0:  cmp    %ecx,%ecx
086db542 +0x0e2:  repz cmpsb %es:(%edi),%ds:(%esi)
086db544 +0x0e4:  sete   %al
086db547 +0x0e7:  jmp    086db4ee <+0x8e>
086db549 +0x0e9:  mov    $&data#bb92cc41(.plt),%ecx
086db54e +0x0ee:  test   %ecx,%ecx
086db550 +0x0f0:  je     086db5da <+0x17a>
086db556 +0x0f6:  or     $0xffffffff,%ecx
086db559 +0x0f9:  lock xadd %ecx,0x8(%edx)
086db55e +0x0fe:  test   %ecx,%ecx
086db560 +0x100:  jg     086db502 <+0xa2>
086db562 +0x102:  lea    -0x1a(%ebp),%ecx
086db565 +0x105:  mov    %al,-0x2c(%ebp)
086db568 +0x108:  mov    %ecx,0x4(%esp)
086db56c +0x10c:  mov    %edx,(%esp)
086db56f +0x10f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086db574 +0x114:  movzbl -0x2c(%ebp),%eax
086db578 +0x118:  jmp    086db502 <+0xa2>
086db57a +0x11a:  mov    $&data#bb92cc41(.plt),%edx
086db57f +0x11f:  test   %edx,%edx
086db581 +0x121:  je     086db5e8 <+0x188>
086db583 +0x123:  or     $0xffffffff,%edx
086db586 +0x126:  lock xadd %edx,0x8(%ebx)
086db58b +0x12b:  test   %edx,%edx
086db58d +0x12d:  jle    086db5ab <+0x14b>
086db58f +0x12f:  mov    -0x24(%ebp),%edx
086db592 +0x132:  sub    $0xc,%edx
086db595 +0x135:  jmp    086db4fa <+0x9a>
086db59a +0x13a:  mov    %eax,%ebx
086db59c +0x13c:  mov    %edx,%esi
086db59e +0x13e:  cmp    $0xffffffff,%esi
086db5a1 +0x141:  je     086db5f3 <+0x193>
086db5a3 +0x143:  mov    %ebx,(%esp)
086db5a6 +0x146:  call   08ae3750 <_Unwind_Resume>
086db5ab +0x14b:  lea    -0x19(%ebp),%edx
086db5ae +0x14e:  mov    %edx,0x4(%esp)
086db5b2 +0x152:  mov    %al,-0x2c(%ebp)
086db5b5 +0x155:  mov    %ebx,(%esp)
086db5b8 +0x158:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086db5bd +0x15d:  mov    -0x24(%ebp),%edx
086db5c0 +0x160:  movzbl -0x2c(%ebp),%eax
086db5c4 +0x164:  sub    $0xc,%edx
086db5c7 +0x167:  jmp    086db4fa <+0x9a>
086db5cc +0x16c:  mov    %eax,%ebx
086db5ce +0x16e:  mov    %edx,%esi
086db5d0 +0x170:  mov    %edi,(%esp)
086db5d3 +0x173:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086db5d8 +0x178:  jmp    086db59e <+0x13e>
086db5da +0x17a:  mov    0x8(%edx),%ecx
086db5dd +0x17d:  lea    -0x1(%ecx),%ebx
086db5e0 +0x180:  mov    %ebx,0x8(%edx)
086db5e3 +0x183:  jmp    086db55e <+0xfe>
086db5e8 +0x188:  mov    0x8(%ebx),%edx
086db5eb +0x18b:  lea    -0x1(%edx),%ecx
086db5ee +0x18e:  mov    %ecx,0x8(%ebx)
086db5f1 +0x191:  jmp    086db58b <+0x12b>
086db5f3 +0x193:  mov    %ebx,(%esp)
086db5f6 +0x196:  call   08723df0 <__cxa_call_unexpected>
086db5fb +0x19b:  nop
086db5fc +0x19c:  nop
086db5fd +0x19d:  nop
086db5fe +0x19e:  nop
086db5ff +0x19f:  nop
```

## 反编译 C

```c
// std::locale::operator== @ 0x86db460

/* WARNING: Removing unreachable block (ram,0x086db5e8) */
/* WARNING: Removing unreachable block (ram,0x086db5da) */
/* std::locale::TEMPNAMEPLACEHOLDERVALUE(std::locale const&) const */

bool __thiscall std::locale::operator==(locale *this,locale *param_1)

{
  int *piVar1;
  char **ppcVar2;
  char **ppcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  byte bVar8;
  char *local_28;
  char *local_24;
  
  bVar8 = 0;
  if (this->_M_impl == param_1->_M_impl) {
    return true;
  }
  ppcVar2 = this->_M_impl->_M_names;
  pcVar5 = *ppcVar2;
  if (pcVar5 != (char *)0x0) {
    ppcVar3 = param_1->_M_impl->_M_names;
    pcVar6 = *ppcVar3;
    if ((pcVar6 != (char *)0x0) && (iVar4 = strcmp(pcVar5,pcVar6), iVar4 == 0)) {
      if ((ppcVar2[1] == (char *)0x0) && (ppcVar3[1] == (char *)0x0)) {
        return true;
      }
                    /* try { // try from 086db4be to 086db4c2 has its CatchHandler @ 086db59a */
      name();
                    /* try { // try from 086db4d0 to 086db4d4 has its CatchHandler @ 086db5cc */
      name();
      bVar7 = false;
      iVar4 = *(int *)(local_24 + -0xc);
      if (iVar4 == *(int *)(local_28 + -0xc)) {
        bVar7 = true;
        pcVar5 = local_24;
        pcVar6 = local_28;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
        } while (bVar7);
      }
      if ((allocator *)(local_24 + -0xc) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_24 + -4);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
        }
      }
      if ((allocator *)(local_28 + -0xc) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_28 + -4);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          string::_Rep::_M_destroy((allocator *)(local_28 + -0xc));
        }
      }
      return bVar7;
    }
  }
  return false;
}
```
