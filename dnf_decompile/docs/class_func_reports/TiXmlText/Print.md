# Print

`_ZNK9TiXmlText5PrintEP8_IO_FILEi`

`TiXmlText::Print(_IO_FILE*, int) const`

| 类 | 地址 |
|---|---|
| `TiXmlText` | `0x087e4460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e4460  _ZNK9TiXmlText5PrintEP8_IO_FILEi
#           TiXmlText::Print(_IO_FILE*, int) const
# range [0x087e4460, 0x087e4599]
087e4460 +0x000:  push   %ebp
087e4461 +0x001:  mov    %esp,%ebp
087e4463 +0x003:  push   %edi
087e4464 +0x004:  push   %esi
087e4465 +0x005:  push   %ebx
087e4466 +0x006:  sub    $0x2c,%esp
087e4469 +0x009:  mov    0xc(%ebp),%ebx
087e446c +0x00c:  mov    0x8(%ebp),%edi
087e446f +0x00f:  test   %ebx,%ebx
087e4471 +0x011:  je     087e4527 <+0xc7>
087e4477 +0x017:  cmpb   $0x0,0x2c(%edi)
087e447b +0x01b:  jne    087e44c0 <+0x60>
087e447d +0x01d:  lea    -0x20(%ebp),%esi
087e4480 +0x020:  add    $0x20,%edi
087e4483 +0x023:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x20(%ebp)
087e448a +0x02a:  mov    %esi,0x4(%esp)
087e448e +0x02e:  mov    %edi,(%esp)
087e4491 +0x031:  call   087e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>  ; TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e4496 +0x036:  mov    -0x20(%ebp),%eax
087e4499 +0x039:  mov    %ebx,0x4(%esp)
087e449d +0x03d:  mov    %eax,(%esp)
087e44a0 +0x040:  call   0807e720 <_init+0x1018>
087e44a5 +0x045:  mov    -0x20(%ebp),%eax
087e44a8 +0x048:  sub    $0xc,%eax
087e44ab +0x04b:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e44b0 +0x050:  jne    087e454b <+0xeb>
087e44b6 +0x056:  add    $0x2c,%esp
087e44b9 +0x059:  pop    %ebx
087e44ba +0x05a:  pop    %esi
087e44bb +0x05b:  pop    %edi
087e44bc +0x05c:  pop    %ebp
087e44bd +0x05d:  ret
087e44be +0x05e:  xchg   %ax,%ax
087e44c0 +0x060:  mov    %ebx,0x4(%esp)
087e44c4 +0x064:  movl   $0xa,(%esp)
087e44cb +0x06b:  call   0807e4c0 <_init+0xdb8>
087e44d0 +0x070:  mov    0x10(%ebp),%esi
087e44d3 +0x073:  test   %esi,%esi
087e44d5 +0x075:  jle    087e4508 <+0xa8>
087e44d7 +0x077:  xor    %esi,%esi
087e44d9 +0x079:  lea    0x0(%esi,%eiz,1),%esi
087e44e0 +0x080:  mov    %ebx,0xc(%esp)
087e44e4 +0x084:  add    $0x1,%esi
087e44e7 +0x087:  movl   $0x4,0x8(%esp)
087e44ef +0x08f:  movl   $0x1,0x4(%esp)
087e44f7 +0x097:  movl   $"    ",(%esp)
087e44fe +0x09e:  call   0807e320 <_init+0xc18>
087e4503 +0x0a3:  cmp    %esi,0x10(%ebp)
087e4506 +0x0a6:  jg     087e44e0 <+0x80>
087e4508 +0x0a8:  mov    0x20(%edi),%eax
087e450b +0x0ab:  mov    %ebx,(%esp)
087e450e +0x0ae:  movl   $"<![CDATA[%s]]>\n",0x4(%esp)
087e4516 +0x0b6:  mov    %eax,0x8(%esp)
087e451a +0x0ba:  call   0807da90 <_init+0x388>
087e451f +0x0bf:  add    $0x2c,%esp
087e4522 +0x0c2:  pop    %ebx
087e4523 +0x0c3:  pop    %esi
087e4524 +0x0c4:  pop    %edi
087e4525 +0x0c5:  pop    %ebp
087e4526 +0x0c6:  ret
087e4527 +0x0c7:  movl   $&_ZZNK9TiXmlText5PrintEP8_IO_FILEiE19__PRETTY_FUNCTION__,0xc(%esp)
087e452f +0x0cf:  movl   $0x536,0x8(%esp)
087e4537 +0x0d7:  movl   $"tinyxml.cpp",0x4(%esp)
087e453f +0x0df:  movl   $"cfile",(%esp)
087e4546 +0x0e6:  call   0807dc50 <_init+0x548>
087e454b +0x0eb:  mov    $&data#bb92cc41(.plt),%edx
087e4550 +0x0f0:  test   %edx,%edx
087e4552 +0x0f2:  je     087e458a <+0x12a>
087e4554 +0x0f4:  or     $0xffffffff,%edx
087e4557 +0x0f7:  lock xadd %edx,0x8(%eax)
087e455c +0x0fc:  test   %edx,%edx
087e455e +0x0fe:  jg     087e44b6 <+0x56>
087e4564 +0x104:  lea    -0x19(%ebp),%edx
087e4567 +0x107:  mov    %edx,0x4(%esp)
087e456b +0x10b:  mov    %eax,(%esp)
087e456e +0x10e:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e4573 +0x113:  jmp    087e44b6 <+0x56>
087e4578 +0x118:  mov    %eax,%ebx
087e457a +0x11a:  mov    %esi,(%esp)
087e457d +0x11d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e4582 +0x122:  mov    %ebx,(%esp)
087e4585 +0x125:  call   08ae3750 <_Unwind_Resume>
087e458a +0x12a:  mov    0x8(%eax),%edx
087e458d +0x12d:  lea    -0x1(%edx),%ecx
087e4590 +0x130:  mov    %ecx,0x8(%eax)
087e4593 +0x133:  jmp    087e455c <+0xfc>
087e4595 +0x135:  nop
087e4596 +0x136:  lea    0x0(%esi),%esi
087e4599 +0x139:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlText::Print @ 0x87e4460

/* WARNING: Removing unreachable block (ram,0x087e458a) */
/* TiXmlText::Print(_IO_FILE*, int) const */

void __thiscall TiXmlText::Print(TiXmlText *this,_IO_FILE *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *local_24 [5];
  
  if (param_1 == (_IO_FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cfile","tinyxml.cpp",0x536,"virtual void TiXmlText::Print(FILE*, int) const");
  }
  if (this[0x2c] != (TiXmlText)0x0) {
    fputc(10,param_1);
    if (0 < param_2) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        fwrite(&DAT_08de0e71,1,4,param_1);
      } while (iVar2 < param_2);
    }
    fprintf(param_1,"<![CDATA[%s]]>\n",*(undefined4 *)(this + 0x20));
    return;
  }
  local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4491 to 087e44a4 has its CatchHandler @ 087e4578 */
  TiXmlBase::EncodeString((string *)(this + 0x20),(string *)local_24);
  fputs(local_24[0],param_1);
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
