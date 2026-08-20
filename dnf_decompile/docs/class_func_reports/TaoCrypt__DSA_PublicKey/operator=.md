# operator=

`_ZN8TaoCrypt13DSA_PublicKeyaSERKS0_`

`TaoCrypt::DSA_PublicKey::operator=(TaoCrypt::DSA_PublicKey const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757900  _ZN8TaoCrypt13DSA_PublicKeyaSERKS0_
#           TaoCrypt::DSA_PublicKey::operator=(TaoCrypt::DSA_PublicKey const&)
# range [0x08757900, 0x087579e9]
08757900 +0x00:  push   %ebp
08757901 +0x01:  mov    %esp,%ebp
08757903 +0x03:  push   %edi
08757904 +0x04:  push   %esi
08757905 +0x05:  push   %ebx
08757906 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0875790b +0x0b:  add    $0xc1528d,%ebx
08757911 +0x11:  sub    $0x5c,%esp
08757914 +0x14:  mov    0x8(%ebp),%esi
08757917 +0x17:  mov    0xc(%ebp),%eax
0875791a +0x1a:  lea    -0x58(%ebp),%edi
0875791d +0x1d:  mov    %edi,(%esp)
08757920 +0x20:  mov    %eax,0x4(%esp)
08757924 +0x24:  call   08757490 <_ZN8TaoCrypt13DSA_PublicKeyC1ERKS0_>  ; TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::DSA_PublicKey const&)
08757929 +0x29:  mov    %edi,0x4(%esp)
0875792d +0x2d:  mov    %esi,(%esp)
08757930 +0x30:  call   08757890 <_ZN8TaoCrypt13DSA_PublicKey4SwapERS0_>  ; TaoCrypt::DSA_PublicKey::Swap(TaoCrypt::DSA_PublicKey&)
08757935 +0x35:  mov    -0x28(%ebp),%eax
08757938 +0x38:  mov    -0x24(%ebp),%edi
0875793b +0x3b:  movl   $0x0,0x4(%esp)
08757943 +0x43:  shl    $0x2,%eax
08757946 +0x46:  mov    %edi,(%esp)
08757949 +0x49:  mov    %eax,0x8(%esp)
0875794d +0x4d:  call   0807dcc0 <_init+0x5b8>
08757952 +0x52:  mov    %edi,(%esp)
08757955 +0x55:  movb   $0x0,0x4(%esp)
0875795a +0x5a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875795f +0x5f:  mov    -0x38(%ebp),%eax
08757962 +0x62:  mov    -0x34(%ebp),%edi
08757965 +0x65:  movl   $0x0,0x4(%esp)
0875796d +0x6d:  shl    $0x2,%eax
08757970 +0x70:  mov    %edi,(%esp)
08757973 +0x73:  mov    %eax,0x8(%esp)
08757977 +0x77:  call   0807dcc0 <_init+0x5b8>
0875797c +0x7c:  mov    %edi,(%esp)
0875797f +0x7f:  movb   $0x0,0x4(%esp)
08757984 +0x84:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757989 +0x89:  mov    -0x48(%ebp),%eax
0875798c +0x8c:  mov    -0x44(%ebp),%edi
0875798f +0x8f:  movl   $0x0,0x4(%esp)
08757997 +0x97:  shl    $0x2,%eax
0875799a +0x9a:  mov    %edi,(%esp)
0875799d +0x9d:  mov    %eax,0x8(%esp)
087579a1 +0xa1:  call   0807dcc0 <_init+0x5b8>
087579a6 +0xa6:  mov    %edi,(%esp)
087579a9 +0xa9:  movb   $0x0,0x4(%esp)
087579ae +0xae:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087579b3 +0xb3:  mov    -0x58(%ebp),%eax
087579b6 +0xb6:  mov    -0x54(%ebp),%edi
087579b9 +0xb9:  movl   $0x0,0x4(%esp)
087579c1 +0xc1:  shl    $0x2,%eax
087579c4 +0xc4:  mov    %edi,(%esp)
087579c7 +0xc7:  mov    %eax,0x8(%esp)
087579cb +0xcb:  call   0807dcc0 <_init+0x5b8>
087579d0 +0xd0:  mov    %edi,(%esp)
087579d3 +0xd3:  movb   $0x0,0x4(%esp)
087579d8 +0xd8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087579dd +0xdd:  add    $0x5c,%esp
087579e0 +0xe0:  mov    %esi,%eax
087579e2 +0xe2:  pop    %ebx
087579e3 +0xe3:  pop    %esi
087579e4 +0xe4:  pop    %edi
087579e5 +0xe5:  pop    %ebp
087579e6 +0xe6:  ret
087579e7 +0xe7:  nop
087579e8 +0xe8:  nop
087579e9 +0xe9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::operator= @ 0x8757900

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::DSA_PublicKey const&) */

DSA_PublicKey * __thiscall
TaoCrypt::DSA_PublicKey::operator=(DSA_PublicKey *this,DSA_PublicKey *param_1)

{
  uint uVar1;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x875790b;
  DSA_PublicKey((DSA_PublicKey *)&local_5c,param_1);
  Swap(this,(DSA_PublicKey *)&local_5c);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar1 & 0xffffff00);
  return this;
}
```
