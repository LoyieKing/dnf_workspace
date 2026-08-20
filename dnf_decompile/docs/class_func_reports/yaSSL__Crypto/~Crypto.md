# ~Crypto

`_ZN5yaSSL6CryptoD1Ev`

`yaSSL::Crypto::~Crypto()`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x08750850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750850  _ZN5yaSSL6CryptoD1Ev
#           yaSSL::Crypto::~Crypto()
# range [0x08750850, 0x087508e9]
08750850 +0x00:  push   %ebp
08750851 +0x01:  mov    %esp,%ebp
08750853 +0x03:  sub    $0x28,%esp
08750856 +0x06:  mov    %esi,-0x8(%ebp)
08750859 +0x09:  mov    0x8(%ebp),%esi
0875085c +0x0c:  mov    %ebx,-0xc(%ebp)
0875085f +0x0f:  mov    %edi,-0x4(%ebp)
08750862 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08750867 +0x17:  add    $0xc1c331,%ebx
0875086d +0x1d:  mov    0x8(%esi),%edi
08750870 +0x20:  test   %edi,%edi
08750872 +0x22:  je     0875087c <+0x2c>
08750874 +0x24:  mov    %edi,(%esp)
08750877 +0x27:  call   0879aef0 <_ZN5yaSSL13DiffieHellmanD1Ev>  ; yaSSL::DiffieHellman::~DiffieHellman()
0875087c +0x2c:  mov    %edi,(%esp)
0875087f +0x2f:  movb   $0x0,0x4(%esp)
08750884 +0x34:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08750889 +0x39:  mov    0x4(%esi),%edi
0875088c +0x3c:  test   %edi,%edi
0875088e +0x3e:  je     08750898 <+0x48>
08750890 +0x40:  mov    (%edi),%eax
08750892 +0x42:  mov    %edi,(%esp)
08750895 +0x45:  call   *0x1c(%eax)
08750898 +0x48:  mov    %edi,(%esp)
0875089b +0x4b:  movb   $0x0,0x4(%esp)
087508a0 +0x50:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087508a5 +0x55:  mov    (%esi),%edi
087508a7 +0x57:  test   %edi,%edi
087508a9 +0x59:  je     087508b3 <+0x63>
087508ab +0x5b:  mov    (%edi),%eax
087508ad +0x5d:  mov    %edi,(%esp)
087508b0 +0x60:  call   *0x14(%eax)
087508b3 +0x63:  mov    %edi,(%esp)
087508b6 +0x66:  movb   $0x0,0x4(%esp)
087508bb +0x6b:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087508c0 +0x70:  lea    0x10(%esi),%eax
087508c3 +0x73:  add    $0xc,%esi
087508c6 +0x76:  mov    %eax,(%esp)
087508c9 +0x79:  call   08797970 <_ZN5yaSSL11CertManagerD1Ev>  ; yaSSL::CertManager::~CertManager()
087508ce +0x7e:  mov    %esi,(%esp)
087508d1 +0x81:  call   08799000 <_ZN5yaSSL10RandomPoolD1Ev>  ; yaSSL::RandomPool::~RandomPool()
087508d6 +0x86:  mov    -0xc(%ebp),%ebx
087508d9 +0x89:  mov    -0x8(%ebp),%esi
087508dc +0x8c:  mov    -0x4(%ebp),%edi
087508df +0x8f:  mov    %ebp,%esp
087508e1 +0x91:  pop    %ebp
087508e2 +0x92:  ret
087508e3 +0x93:  lea    0x0(%esi),%esi
087508e9 +0x99:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Crypto::~Crypto @ 0x8750850

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Crypto::~Crypto() */

void __thiscall yaSSL::Crypto::~Crypto(Crypto *this)

{
  DiffieHellman *this_00;
  int *piVar1;
  
  this_00 = *(DiffieHellman **)(this + 8);
  if (this_00 != (DiffieHellman *)0x0) {
    DiffieHellman::~DiffieHellman(this_00);
  }
  operator_delete(this_00,0);
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
  }
  operator_delete(piVar1,0);
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
  }
  operator_delete(piVar1,0);
  CertManager::~CertManager((CertManager *)(this + 0x10));
  RandomPool::~RandomPool((RandomPool *)(this + 0xc));
  return;
}
```
