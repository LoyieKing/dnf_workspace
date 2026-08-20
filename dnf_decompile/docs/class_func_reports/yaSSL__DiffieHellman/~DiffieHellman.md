# ~DiffieHellman

`_ZN5yaSSL13DiffieHellmanD1Ev`

`yaSSL::DiffieHellman::~DiffieHellman()`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x0879aef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879aef0  _ZN5yaSSL13DiffieHellmanD1Ev
#           yaSSL::DiffieHellman::~DiffieHellman()
# range [0x0879aef0, 0x0879afba]
0879aef0 +0x00:  push   %ebp
0879aef1 +0x01:  mov    %esp,%ebp
0879aef3 +0x03:  sub    $0x28,%esp
0879aef6 +0x06:  mov    0x8(%ebp),%eax
0879aef9 +0x09:  mov    %ebx,-0xc(%ebp)
0879aefc +0x0c:  mov    %esi,-0x8(%ebp)
0879aeff +0x0f:  mov    %edi,-0x4(%ebp)
0879af02 +0x12:  mov    (%eax),%esi
0879af04 +0x14:  call   08722df8 <__i686.get_pc_thunk.bx>
0879af09 +0x19:  add    $0xbd1c8f,%ebx
0879af0f +0x1f:  test   %esi,%esi
0879af11 +0x21:  je     0879af9a <+0xaa>
0879af17 +0x27:  movb   $0x0,0x4(%esp)
0879af1c +0x2c:  mov    0x2c(%esi),%eax
0879af1f +0x2f:  mov    %eax,(%esp)
0879af22 +0x32:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0879af27 +0x37:  movb   $0x0,0x4(%esp)
0879af2c +0x3c:  mov    0x28(%esi),%eax
0879af2f +0x3f:  mov    %eax,(%esp)
0879af32 +0x42:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0879af37 +0x47:  movb   $0x0,0x4(%esp)
0879af3c +0x4c:  mov    0x24(%esi),%eax
0879af3f +0x4f:  mov    %eax,(%esp)
0879af42 +0x52:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0879af47 +0x57:  mov    0x10(%esi),%eax
0879af4a +0x5a:  mov    0x14(%esi),%edi
0879af4d +0x5d:  movl   $0x0,0x4(%esp)
0879af55 +0x65:  shl    $0x2,%eax
0879af58 +0x68:  mov    %edi,(%esp)
0879af5b +0x6b:  mov    %eax,0x8(%esp)
0879af5f +0x6f:  call   0807dcc0 <_init+0x5b8>
0879af64 +0x74:  mov    %edi,(%esp)
0879af67 +0x77:  movb   $0x0,0x4(%esp)
0879af6c +0x7c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879af71 +0x81:  mov    (%esi),%eax
0879af73 +0x83:  mov    0x4(%esi),%edi
0879af76 +0x86:  movl   $0x0,0x4(%esp)
0879af7e +0x8e:  shl    $0x2,%eax
0879af81 +0x91:  mov    %eax,0x8(%esp)
0879af85 +0x95:  mov    %edi,(%esp)
0879af88 +0x98:  call   0807dcc0 <_init+0x5b8>
0879af8d +0x9d:  movb   $0x0,0x4(%esp)
0879af92 +0xa2:  mov    %edi,(%esp)
0879af95 +0xa5:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879af9a +0xaa:  mov    %esi,(%esp)
0879af9d +0xad:  movb   $0x0,0x4(%esp)
0879afa2 +0xb2:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879afa7 +0xb7:  mov    -0xc(%ebp),%ebx
0879afaa +0xba:  mov    -0x8(%ebp),%esi
0879afad +0xbd:  mov    -0x4(%ebp),%edi
0879afb0 +0xc0:  mov    %ebp,%esp
0879afb2 +0xc2:  pop    %ebp
0879afb3 +0xc3:  ret
0879afb4 +0xc4:  lea    0x0(%esi),%esi
0879afba +0xca:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::DiffieHellman::~DiffieHellman @ 0x879aef0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::~DiffieHellman() */

void __thiscall yaSSL::DiffieHellman::~DiffieHellman(DiffieHellman *this)

{
  int *piVar1;
  void *pvVar2;
  uint in_stack_ffffffd8;
  uint uVar3;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    uVar3 = in_stack_ffffffd8 & 0xffffff00;
    operator_delete__(piVar1[0xb],uVar3);
    uVar3 = uVar3 & 0xffffff00;
    operator_delete__(piVar1[10],uVar3);
    operator_delete__(piVar1[9],uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[5];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[4] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[1];
    uVar3 = 0;
    memset(pvVar2,0,*piVar1 << 2);
    in_stack_ffffffd8 = uVar3 & 0xffffff00;
    operator_delete__(pvVar2,in_stack_ffffffd8);
  }
  operator_delete(piVar1,in_stack_ffffffd8 & 0xffffff00);
  return;
}
```
