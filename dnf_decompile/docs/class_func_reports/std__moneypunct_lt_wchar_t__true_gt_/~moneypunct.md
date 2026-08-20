# ~moneypunct

`_ZNSt10moneypunctIwLb1EED1Ev`

`std::moneypunct<wchar_t, true>::~moneypunct()`

| 类 | 地址 |
|---|---|
| `std::moneypunct<wchar_t, true>` | `0x0871fcf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fcf0  _ZNSt10moneypunctIwLb1EED1Ev
#           std::moneypunct<wchar_t, true>::~moneypunct()
# range [0x0871fcf0, 0x0871fdaf]
0871fcf0 +0x00:  push   %ebp
0871fcf1 +0x01:  mov    %esp,%ebp
0871fcf3 +0x03:  sub    $0x28,%esp
0871fcf6 +0x06:  mov    %ebx,-0xc(%ebp)
0871fcf9 +0x09:  mov    0x8(%ebp),%ebx
0871fcfc +0x0c:  mov    %esi,-0x8(%ebp)
0871fcff +0x0f:  mov    %edi,-0x4(%ebp)
0871fd02 +0x12:  mov    0x8(%ebx),%esi
0871fd05 +0x15:  movl   $&_ZTVSt10moneypunctIwLb1EE+0x8,(%ebx)
0871fd0b +0x1b:  mov    0x28(%esi),%edx
0871fd0e +0x1e:  test   %edx,%edx
0871fd10 +0x20:  je     0871fd24 <+0x34>
0871fd12 +0x22:  mov    0x24(%esi),%eax
0871fd15 +0x25:  test   %eax,%eax
0871fd17 +0x27:  je     0871fd24 <+0x34>
0871fd19 +0x29:  mov    %eax,(%esp)
0871fd1c +0x2c:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0871fd21 +0x31:  mov    0x8(%ebx),%esi
0871fd24 +0x34:  mov    0x30(%esi),%eax
0871fd27 +0x37:  test   %eax,%eax
0871fd29 +0x39:  je     0871fd42 <+0x52>
0871fd2b +0x3b:  mov    0x2c(%esi),%edi
0871fd2e +0x3e:  movl   $"(",0x4(%esp)
0871fd36 +0x46:  mov    %edi,(%esp)
0871fd39 +0x49:  call   0807e6b0 <_init+0xfa8>
0871fd3e +0x4e:  test   %eax,%eax
0871fd40 +0x50:  jne    0871fd80 <+0x90>
0871fd42 +0x52:  mov    0x20(%esi),%edi
0871fd45 +0x55:  test   %edi,%edi
0871fd47 +0x57:  je     0871fd5b <+0x6b>
0871fd49 +0x59:  mov    0x1c(%esi),%eax
0871fd4c +0x5c:  test   %eax,%eax
0871fd4e +0x5e:  je     0871fd5b <+0x6b>
0871fd50 +0x60:  mov    %eax,(%esp)
0871fd53 +0x63:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0871fd58 +0x68:  mov    0x8(%ebx),%esi
0871fd5b +0x6b:  test   %esi,%esi
0871fd5d +0x6d:  je     0871fd67 <+0x77>
0871fd5f +0x6f:  mov    (%esi),%eax
0871fd61 +0x71:  mov    %esi,(%esp)
0871fd64 +0x74:  call   *0x4(%eax)
0871fd67 +0x77:  mov    %ebx,0x8(%ebp)
0871fd6a +0x7a:  mov    -0x8(%ebp),%esi
0871fd6d +0x7d:  mov    -0xc(%ebp),%ebx
0871fd70 +0x80:  mov    -0x4(%ebp),%edi
0871fd73 +0x83:  mov    %ebp,%esp
0871fd75 +0x85:  pop    %ebp
0871fd76 +0x86:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0871fd7b +0x8b:  nop
0871fd7c +0x8c:  lea    0x0(%esi,%eiz,1),%esi
0871fd80 +0x90:  test   %edi,%edi
0871fd82 +0x92:  je     0871fd42 <+0x52>
0871fd84 +0x94:  mov    %edi,(%esp)
0871fd87 +0x97:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0871fd8c +0x9c:  mov    0x8(%ebx),%esi
0871fd8f +0x9f:  jmp    0871fd42 <+0x52>
0871fd91 +0xa1:  mov    %eax,%esi
0871fd93 +0xa3:  mov    %ebx,(%esp)
0871fd96 +0xa6:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0871fd9b +0xab:  mov    %esi,(%esp)
0871fd9e +0xae:  call   08ae3750 <_Unwind_Resume>
0871fda3 +0xb3:  nop
0871fda4 +0xb4:  nop
0871fda5 +0xb5:  nop
0871fda6 +0xb6:  nop
0871fda7 +0xb7:  nop
0871fda8 +0xb8:  nop
0871fda9 +0xb9:  nop
0871fdaa +0xba:  nop
0871fdab +0xbb:  nop
0871fdac +0xbc:  nop
0871fdad +0xbd:  nop
0871fdae +0xbe:  nop
0871fdaf +0xbf:  nop
```

## 反编译 C

```c
// std::moneypunct<wchar_t, @ 0x871fcf0

/* std::moneypunct<wchar_t, true>::~moneypunct() */

void __thiscall std::moneypunct<wchar_t,true>::~moneypunct(moneypunct<wchar_t,true> *this)

{
  wchar_t *__s1;
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__moneypunct_08d00928;
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
                    /* try { // try from 0871fd64 to 0871fd66 has its CatchHandler @ 0871fd91 */
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  locale::facet::~facet((facet *)this);
  return;
}
```
