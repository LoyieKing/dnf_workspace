# set_sizes

`_ZNK5yaSSL13DiffieHellman9set_sizesERiS1_S1_`

`yaSSL::DiffieHellman::set_sizes(int&, int&, int&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x0879abb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879abb0  _ZNK5yaSSL13DiffieHellman9set_sizesERiS1_S1_
#           yaSSL::DiffieHellman::set_sizes(int&, int&, int&) const
# range [0x0879abb0, 0x0879ac79]
0879abb0 +0x00:  push   %ebp
0879abb1 +0x01:  mov    %esp,%ebp
0879abb3 +0x03:  push   %edi
0879abb4 +0x04:  push   %esi
0879abb5 +0x05:  push   %ebx
0879abb6 +0x06:  sub    $0x4c,%esp
0879abb9 +0x09:  mov    0x8(%ebp),%esi
0879abbc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879abc1 +0x11:  add    $0xbd1fd7,%ebx
0879abc7 +0x17:  lea    -0x38(%ebp),%edi
0879abca +0x1a:  mov    (%esi),%eax
0879abcc +0x1c:  mov    %eax,0x4(%esp)
0879abd0 +0x20:  lea    -0x28(%ebp),%eax
0879abd3 +0x23:  mov    %eax,(%esp)
0879abd6 +0x26:  mov    %eax,-0x3c(%ebp)
0879abd9 +0x29:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879abde +0x2e:  mov    (%esi),%edx
0879abe0 +0x30:  mov    %edi,(%esp)
0879abe3 +0x33:  add    $0x10,%edx
0879abe6 +0x36:  mov    %edx,0x4(%esp)
0879abea +0x3a:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879abef +0x3f:  mov    -0x3c(%ebp),%eax
0879abf2 +0x42:  mov    %eax,(%esp)
0879abf5 +0x45:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879abfa +0x4a:  mov    0xc(%ebp),%edx
0879abfd +0x4d:  mov    %eax,(%edx)
0879abff +0x4f:  mov    %edi,(%esp)
0879ac02 +0x52:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879ac07 +0x57:  mov    0x10(%ebp),%edx
0879ac0a +0x5a:  mov    %eax,(%edx)
0879ac0c +0x5c:  mov    (%esi),%eax
0879ac0e +0x5e:  mov    %eax,(%esp)
0879ac11 +0x61:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879ac16 +0x66:  mov    0x14(%ebp),%edx
0879ac19 +0x69:  mov    -0x34(%ebp),%esi
0879ac1c +0x6c:  mov    %eax,(%edx)
0879ac1e +0x6e:  mov    -0x38(%ebp),%eax
0879ac21 +0x71:  mov    %esi,(%esp)
0879ac24 +0x74:  movl   $0x0,0x4(%esp)
0879ac2c +0x7c:  shl    $0x2,%eax
0879ac2f +0x7f:  mov    %eax,0x8(%esp)
0879ac33 +0x83:  call   0807dcc0 <_init+0x5b8>
0879ac38 +0x88:  mov    %esi,(%esp)
0879ac3b +0x8b:  movb   $0x0,0x4(%esp)
0879ac40 +0x90:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ac45 +0x95:  mov    -0x28(%ebp),%eax
0879ac48 +0x98:  mov    -0x24(%ebp),%esi
0879ac4b +0x9b:  movl   $0x0,0x4(%esp)
0879ac53 +0xa3:  shl    $0x2,%eax
0879ac56 +0xa6:  mov    %esi,(%esp)
0879ac59 +0xa9:  mov    %eax,0x8(%esp)
0879ac5d +0xad:  call   0807dcc0 <_init+0x5b8>
0879ac62 +0xb2:  mov    %esi,(%esp)
0879ac65 +0xb5:  movb   $0x0,0x4(%esp)
0879ac6a +0xba:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ac6f +0xbf:  add    $0x4c,%esp
0879ac72 +0xc2:  pop    %ebx
0879ac73 +0xc3:  pop    %esi
0879ac74 +0xc4:  pop    %edi
0879ac75 +0xc5:  pop    %ebp
0879ac76 +0xc6:  ret
0879ac77 +0xc7:  nop
0879ac78 +0xc8:  nop
0879ac79 +0xc9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::DiffieHellman::set_sizes @ 0x879abb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::set_sizes(int&, int&, int&) const */

void __thiscall
yaSSL::DiffieHellman::set_sizes(DiffieHellman *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  TaoCrypt::Integer::Integer((Integer *)&local_2c,*(Integer **)this);
  TaoCrypt::Integer::Integer((Integer *)&local_3c,(Integer *)(*(int *)this + 0x10));
  iVar1 = TaoCrypt::Integer::ByteCount((Integer *)&local_2c);
  *param_1 = iVar1;
  iVar1 = TaoCrypt::Integer::ByteCount((Integer *)&local_3c);
  *param_2 = iVar1;
  iVar1 = TaoCrypt::Integer::ByteCount(*(Integer **)this);
  *param_3 = iVar1;
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return;
}
```
