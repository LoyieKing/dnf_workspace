# operator=

`_ZN16TiXmlDeclarationaSERKS_`

`TiXmlDeclaration::operator=(TiXmlDeclaration const&)`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e24f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e24f0  _ZN16TiXmlDeclarationaSERKS_
#           TiXmlDeclaration::operator=(TiXmlDeclaration const&)
# range [0x087e24f0, 0x087e2599]
087e24f0 +0x00:  push   %ebp
087e24f1 +0x01:  mov    %esp,%ebp
087e24f3 +0x03:  push   %edi
087e24f4 +0x04:  push   %esi
087e24f5 +0x05:  push   %ebx
087e24f6 +0x06:  sub    $0x1c,%esp
087e24f9 +0x09:  mov    0x8(%ebp),%ebx
087e24fc +0x0c:  mov    0xc(%ebp),%esi
087e24ff +0x0f:  mov    0x18(%ebx),%eax
087e2502 +0x12:  test   %eax,%eax
087e2504 +0x14:  jne    087e250a <+0x1a>
087e2506 +0x16:  jmp    087e2519 <+0x29>
087e2508 +0x18:  mov    %edi,%eax
087e250a +0x1a:  mov    0x28(%eax),%edi
087e250d +0x1d:  mov    (%eax),%edx
087e250f +0x1f:  mov    %eax,(%esp)
087e2512 +0x22:  call   *0x4(%edx)
087e2515 +0x25:  test   %edi,%edi
087e2517 +0x27:  jne    087e2508 <+0x18>
087e2519 +0x29:  mov    0x20(%esi),%edi
087e251c +0x2c:  movl   $0x0,0x18(%ebx)
087e2523 +0x33:  movl   $0x0,0x1c(%ebx)
087e252a +0x3a:  mov    %edi,(%esp)
087e252d +0x3d:  call   0807e3b0 <_init+0xca8>
087e2532 +0x42:  mov    %edi,0x4(%esp)
087e2536 +0x46:  mov    %eax,0x8(%esp)
087e253a +0x4a:  lea    0x20(%ebx),%eax
087e253d +0x4d:  mov    %eax,(%esp)
087e2540 +0x50:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2545 +0x55:  mov    0xc(%esi),%eax
087e2548 +0x58:  mov    0x8(%esi),%edx
087e254b +0x5b:  mov    %eax,0xc(%ebx)
087e254e +0x5e:  mov    0x4(%esi),%eax
087e2551 +0x61:  mov    %edx,0x8(%ebx)
087e2554 +0x64:  mov    %eax,0x4(%ebx)
087e2557 +0x67:  lea    0x2c(%esi),%eax
087e255a +0x6a:  mov    %eax,0x4(%esp)
087e255e +0x6e:  lea    0x2c(%ebx),%eax
087e2561 +0x71:  mov    %eax,(%esp)
087e2564 +0x74:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e2569 +0x79:  lea    0x30(%esi),%eax
087e256c +0x7c:  add    $0x34,%esi
087e256f +0x7f:  mov    %eax,0x4(%esp)
087e2573 +0x83:  lea    0x30(%ebx),%eax
087e2576 +0x86:  mov    %eax,(%esp)
087e2579 +0x89:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e257e +0x8e:  lea    0x34(%ebx),%eax
087e2581 +0x91:  mov    %esi,0x4(%esp)
087e2585 +0x95:  mov    %eax,(%esp)
087e2588 +0x98:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e258d +0x9d:  add    $0x1c,%esp
087e2590 +0xa0:  mov    %ebx,%eax
087e2592 +0xa2:  pop    %ebx
087e2593 +0xa3:  pop    %esi
087e2594 +0xa4:  pop    %edi
087e2595 +0xa5:  pop    %ebp
087e2596 +0xa6:  ret
087e2597 +0xa7:  nop
087e2598 +0xa8:  nop
087e2599 +0xa9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlDeclaration::operator= @ 0x87e24f0

/* TiXmlDeclaration::TEMPNAMEPLACEHOLDERVALUE(TiXmlDeclaration const&) */

TiXmlDeclaration * __thiscall
TiXmlDeclaration::operator=(TiXmlDeclaration *this,TiXmlDeclaration *param_1)

{
  int *piVar1;
  char *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  size_t sVar5;
  
  piVar4 = *(int **)(this + 0x18);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[10];
    (**(code **)(*piVar4 + 4))(piVar4);
    piVar4 = piVar1;
  }
  __s = *(char **)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  sVar5 = strlen(__s);
  std::string::assign((string *)(this + 0x20),__s,sVar5);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  std::string::assign((string *)(this + 0x2c),(string *)(param_1 + 0x2c));
  std::string::assign((string *)(this + 0x30),(string *)(param_1 + 0x30));
  std::string::assign((string *)(this + 0x34),(string *)(param_1 + 0x34));
  return this;
}
```
