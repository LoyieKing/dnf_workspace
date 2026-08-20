# operator=

`_ZN12TiXmlCommentaSERKS_`

`TiXmlComment::operator=(TiXmlComment const&)`

| 类 | 地址 |
|---|---|
| `TiXmlComment` | `0x087e2600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2600  _ZN12TiXmlCommentaSERKS_
#           TiXmlComment::operator=(TiXmlComment const&)
# range [0x087e2600, 0x087e2679]
087e2600 +0x00:  push   %ebp
087e2601 +0x01:  mov    %esp,%ebp
087e2603 +0x03:  push   %edi
087e2604 +0x04:  push   %esi
087e2605 +0x05:  push   %ebx
087e2606 +0x06:  sub    $0x1c,%esp
087e2609 +0x09:  mov    0x8(%ebp),%ebx
087e260c +0x0c:  mov    0xc(%ebp),%esi
087e260f +0x0f:  mov    0x18(%ebx),%eax
087e2612 +0x12:  test   %eax,%eax
087e2614 +0x14:  jne    087e261a <+0x1a>
087e2616 +0x16:  jmp    087e2629 <+0x29>
087e2618 +0x18:  mov    %edi,%eax
087e261a +0x1a:  mov    0x28(%eax),%edi
087e261d +0x1d:  mov    (%eax),%edx
087e261f +0x1f:  mov    %eax,(%esp)
087e2622 +0x22:  call   *0x4(%edx)
087e2625 +0x25:  test   %edi,%edi
087e2627 +0x27:  jne    087e2618 <+0x18>
087e2629 +0x29:  mov    0x20(%esi),%edi
087e262c +0x2c:  movl   $0x0,0x18(%ebx)
087e2633 +0x33:  movl   $0x0,0x1c(%ebx)
087e263a +0x3a:  mov    %edi,(%esp)
087e263d +0x3d:  call   0807e3b0 <_init+0xca8>
087e2642 +0x42:  mov    %edi,0x4(%esp)
087e2646 +0x46:  mov    %eax,0x8(%esp)
087e264a +0x4a:  lea    0x20(%ebx),%eax
087e264d +0x4d:  mov    %eax,(%esp)
087e2650 +0x50:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2655 +0x55:  mov    0xc(%esi),%eax
087e2658 +0x58:  mov    0x8(%esi),%edx
087e265b +0x5b:  mov    %eax,0xc(%ebx)
087e265e +0x5e:  mov    0x4(%esi),%eax
087e2661 +0x61:  mov    %edx,0x8(%ebx)
087e2664 +0x64:  mov    %eax,0x4(%ebx)
087e2667 +0x67:  add    $0x1c,%esp
087e266a +0x6a:  mov    %ebx,%eax
087e266c +0x6c:  pop    %ebx
087e266d +0x6d:  pop    %esi
087e266e +0x6e:  pop    %edi
087e266f +0x6f:  pop    %ebp
087e2670 +0x70:  ret
087e2671 +0x71:  nop
087e2672 +0x72:  lea    0x0(%esi,%eiz,1),%esi
087e2679 +0x79:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlComment::operator= @ 0x87e2600

/* TiXmlComment::TEMPNAMEPLACEHOLDERVALUE(TiXmlComment const&) */

TiXmlComment * __thiscall TiXmlComment::operator=(TiXmlComment *this,TiXmlComment *param_1)

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
  return this;
}
```
