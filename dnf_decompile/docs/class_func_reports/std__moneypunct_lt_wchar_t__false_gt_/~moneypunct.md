# ~moneypunct

`_ZNSt10moneypunctIwLb0EED1Ev`

`std::moneypunct<wchar_t, false>::~moneypunct()`

| 类 | 地址 |
|---|---|
| `std::moneypunct<wchar_t, false>` | `0x0871fc10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fc10  _ZNSt10moneypunctIwLb0EED1Ev
#           std::moneypunct<wchar_t, false>::~moneypunct()
# range [0x0871fc10, 0x0871fccf]
0871fc10 +0x00:  push   %ebp
0871fc11 +0x01:  mov    %esp,%ebp
0871fc13 +0x03:  sub    $0x28,%esp
0871fc16 +0x06:  mov    %ebx,-0xc(%ebp)
0871fc19 +0x09:  mov    0x8(%ebp),%ebx
0871fc1c +0x0c:  mov    %esi,-0x8(%ebp)
0871fc1f +0x0f:  mov    %edi,-0x4(%ebp)
0871fc22 +0x12:  mov    0x8(%ebx),%esi
0871fc25 +0x15:  movl   $&_ZTVSt10moneypunctIwLb0EE+0x8,(%ebx)
0871fc2b +0x1b:  mov    0x28(%esi),%ecx
0871fc2e +0x1e:  test   %ecx,%ecx
0871fc30 +0x20:  je     0871fc44 <+0x34>
0871fc32 +0x22:  mov    0x24(%esi),%eax
0871fc35 +0x25:  test   %eax,%eax
0871fc37 +0x27:  je     0871fc44 <+0x34>
0871fc39 +0x29:  mov    %eax,(%esp)
0871fc3c +0x2c:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0871fc41 +0x31:  mov    0x8(%ebx),%esi
0871fc44 +0x34:  mov    0x30(%esi),%edx
0871fc47 +0x37:  test   %edx,%edx
0871fc49 +0x39:  je     0871fc62 <+0x52>
0871fc4b +0x3b:  mov    0x2c(%esi),%edi
0871fc4e +0x3e:  movl   $"(",0x4(%esp)
0871fc56 +0x46:  mov    %edi,(%esp)
0871fc59 +0x49:  call   0807e6b0 <_init+0xfa8>
0871fc5e +0x4e:  test   %eax,%eax
0871fc60 +0x50:  jne    0871fca0 <+0x90>
0871fc62 +0x52:  mov    0x20(%esi),%eax
0871fc65 +0x55:  test   %eax,%eax
0871fc67 +0x57:  je     0871fc7b <+0x6b>
0871fc69 +0x59:  mov    0x1c(%esi),%eax
0871fc6c +0x5c:  test   %eax,%eax
0871fc6e +0x5e:  je     0871fc7b <+0x6b>
0871fc70 +0x60:  mov    %eax,(%esp)
0871fc73 +0x63:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0871fc78 +0x68:  mov    0x8(%ebx),%esi
0871fc7b +0x6b:  test   %esi,%esi
0871fc7d +0x6d:  je     0871fc87 <+0x77>
0871fc7f +0x6f:  mov    (%esi),%eax
0871fc81 +0x71:  mov    %esi,(%esp)
0871fc84 +0x74:  call   *0x4(%eax)
0871fc87 +0x77:  mov    %ebx,0x8(%ebp)
0871fc8a +0x7a:  mov    -0x8(%ebp),%esi
0871fc8d +0x7d:  mov    -0xc(%ebp),%ebx
0871fc90 +0x80:  mov    -0x4(%ebp),%edi
0871fc93 +0x83:  mov    %ebp,%esp
0871fc95 +0x85:  pop    %ebp
0871fc96 +0x86:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0871fc9b +0x8b:  nop
0871fc9c +0x8c:  lea    0x0(%esi,%eiz,1),%esi
0871fca0 +0x90:  test   %edi,%edi
0871fca2 +0x92:  je     0871fc62 <+0x52>
0871fca4 +0x94:  mov    %edi,(%esp)
0871fca7 +0x97:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0871fcac +0x9c:  mov    0x8(%ebx),%esi
0871fcaf +0x9f:  jmp    0871fc62 <+0x52>
0871fcb1 +0xa1:  mov    %eax,%esi
0871fcb3 +0xa3:  mov    %ebx,(%esp)
0871fcb6 +0xa6:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0871fcbb +0xab:  mov    %esi,(%esp)
0871fcbe +0xae:  call   08ae3750 <_Unwind_Resume>
0871fcc3 +0xb3:  nop
0871fcc4 +0xb4:  nop
0871fcc5 +0xb5:  nop
0871fcc6 +0xb6:  nop
0871fcc7 +0xb7:  nop
0871fcc8 +0xb8:  nop
0871fcc9 +0xb9:  nop
0871fcca +0xba:  nop
0871fccb +0xbb:  nop
0871fccc +0xbc:  nop
0871fccd +0xbd:  nop
0871fcce +0xbe:  nop
0871fccf +0xbf:  nop
```

## 反编译 C

```c
// std::moneypunct<wchar_t, @ 0x871fc10

/* std::moneypunct<wchar_t, false>::~moneypunct() */

void __thiscall std::moneypunct<wchar_t,false>::~moneypunct(moneypunct<wchar_t,false> *this)

{
  wchar_t *__s1;
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__moneypunct_08d008e8;
  if ((piVar2[10] != 0) && ((void *)piVar2[9] != (void *)0x0)) {
    operator_delete__((void *)piVar2[9]);
    piVar2 = *(int **)(this + 8);
  }
  if (piVar2[0xc] != 0) {
    __s1 = (wchar_t *)piVar2[0xb];
    iVar1 = wcscmp(__s1,L"()");
    if ((iVar1 != 0) && (__s1 != (wchar_t *)0x0)) {
      operator_delete__(__s1);
      piVar2 = *(int **)(this + 8);
    }
  }
  if ((piVar2[8] != 0) && ((void *)piVar2[7] != (void *)0x0)) {
    operator_delete__((void *)piVar2[7]);
    piVar2 = *(int **)(this + 8);
  }
  if (piVar2 != (int *)0x0) {
                    /* try { // try from 0871fc84 to 0871fc86 has its CatchHandler @ 0871fcb1 */
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  locale::facet::~facet((facet *)this);
  return;
}
```
