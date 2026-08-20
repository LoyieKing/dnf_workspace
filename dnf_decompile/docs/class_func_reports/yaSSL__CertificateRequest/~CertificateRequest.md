# ~CertificateRequest

`_ZN5yaSSL18CertificateRequestD1Ev`

`yaSSL::CertificateRequest::~CertificateRequest()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateRequest` | `0x0874b800` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b800  _ZN5yaSSL18CertificateRequestD1Ev
#           yaSSL::CertificateRequest::~CertificateRequest()
# range [0x0874b800, 0x0874b889]
0874b800 +0x00:  push   %ebp
0874b801 +0x01:  mov    %esp,%ebp
0874b803 +0x03:  push   %edi
0874b804 +0x04:  push   %esi
0874b805 +0x05:  push   %ebx
0874b806 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b80b +0x0b:  add    $0xc2138d,%ebx
0874b811 +0x11:  sub    $0x1c,%esp
0874b814 +0x14:  mov    0x8(%ebp),%edi
0874b817 +0x17:  mov    0x28(%edi),%esi
0874b81a +0x1a:  mov    -0x59c(%ebx),%eax
0874b820 +0x20:  add    $0x8,%eax
0874b823 +0x23:  test   %esi,%esi
0874b825 +0x25:  mov    %eax,(%edi)
0874b827 +0x27:  je     0874b86e <+0x6e>
0874b829 +0x29:  lea    0x0(%esi,%eiz,1),%esi
0874b830 +0x30:  mov    0x8(%esi),%eax
0874b833 +0x33:  movl   $0x0,0x8(%esi)
0874b83a +0x3a:  movb   $0x0,0x4(%esp)
0874b83f +0x3f:  mov    %eax,(%esp)
0874b842 +0x42:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0874b847 +0x47:  mov    0x4(%esi),%esi
0874b84a +0x4a:  test   %esi,%esi
0874b84c +0x4c:  jne    0874b830 <+0x30>
0874b84e +0x4e:  mov    0x28(%edi),%eax
0874b851 +0x51:  test   %eax,%eax
0874b853 +0x53:  jne    0874b85a <+0x5a>
0874b855 +0x55:  jmp    0874b86e <+0x6e>
0874b857 +0x57:  nop
0874b858 +0x58:  mov    %esi,%eax
0874b85a +0x5a:  mov    0x4(%eax),%esi
0874b85d +0x5d:  movb   $0x0,0x4(%esp)
0874b862 +0x62:  mov    %eax,(%esp)
0874b865 +0x65:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874b86a +0x6a:  test   %esi,%esi
0874b86c +0x6c:  jne    0874b858 <+0x58>
0874b86e +0x6e:  mov    -0x5b4(%ebx),%eax
0874b874 +0x74:  add    $0x8,%eax
0874b877 +0x77:  mov    %eax,(%edi)
0874b879 +0x79:  add    $0x1c,%esp
0874b87c +0x7c:  pop    %ebx
0874b87d +0x7d:  pop    %esi
0874b87e +0x7e:  pop    %edi
0874b87f +0x7f:  pop    %ebp
0874b880 +0x80:  ret
0874b881 +0x81:  nop
0874b882 +0x82:  lea    0x0(%esi,%eiz,1),%esi
0874b889 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertificateRequest::~CertificateRequest @ 0x874b800

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::~CertificateRequest() */

void __thiscall yaSSL::CertificateRequest::~CertificateRequest(CertificateRequest *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x28);
  *(undefined **)this = PTR_vtable_0936c5fc + 8;
  if (iVar3 != 0) {
    do {
      uVar1 = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = 0;
      operator_delete(uVar1,0);
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
    iVar3 = *(int *)(this + 0x28);
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
      operator_delete__(iVar3,0);
      iVar3 = iVar2;
    }
  }
  *(undefined **)this = PTR_vtable_0936c5e4 + 8;
  return;
}
```
