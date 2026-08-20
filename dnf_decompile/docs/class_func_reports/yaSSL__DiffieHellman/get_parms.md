# get_parms

`_ZNK5yaSSL13DiffieHellman9get_parmsEPhS1_S1_`

`yaSSL::DiffieHellman::get_parms(unsigned char*, unsigned char*, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x0879ac80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879ac80  _ZNK5yaSSL13DiffieHellman9get_parmsEPhS1_S1_
#           yaSSL::DiffieHellman::get_parms(unsigned char*, unsigned char*, unsigned char*) const
# range [0x0879ac80, 0x0879ad8a]
0879ac80 +0x000:  push   %ebp
0879ac81 +0x001:  mov    %esp,%ebp
0879ac83 +0x003:  push   %edi
0879ac84 +0x004:  push   %esi
0879ac85 +0x005:  push   %ebx
0879ac86 +0x006:  sub    $0x4c,%esp
0879ac89 +0x009:  mov    0x8(%ebp),%esi
0879ac8c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879ac91 +0x011:  add    $0xbd1f07,%ebx
0879ac97 +0x017:  lea    -0x28(%ebp),%edx
0879ac9a +0x01a:  mov    %edx,-0x3c(%ebp)
0879ac9d +0x01d:  lea    -0x38(%ebp),%edi
0879aca0 +0x020:  mov    (%esi),%eax
0879aca2 +0x022:  mov    %edx,(%esp)
0879aca5 +0x025:  mov    %eax,0x4(%esp)
0879aca9 +0x029:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879acae +0x02e:  mov    (%esi),%eax
0879acb0 +0x030:  mov    %edi,(%esp)
0879acb3 +0x033:  add    $0x10,%eax
0879acb6 +0x036:  mov    %eax,0x4(%esp)
0879acba +0x03a:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879acbf +0x03f:  mov    -0x3c(%ebp),%edx
0879acc2 +0x042:  mov    %edx,(%esp)
0879acc5 +0x045:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879acca +0x04a:  mov    -0x3c(%ebp),%edx
0879accd +0x04d:  movl   $0x0,0xc(%esp)
0879acd5 +0x055:  mov    %edx,(%esp)
0879acd8 +0x058:  mov    %eax,0x8(%esp)
0879acdc +0x05c:  mov    0xc(%ebp),%eax
0879acdf +0x05f:  mov    %eax,0x4(%esp)
0879ace3 +0x063:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
0879ace8 +0x068:  mov    %edi,(%esp)
0879aceb +0x06b:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879acf0 +0x070:  mov    %edi,(%esp)
0879acf3 +0x073:  movl   $0x0,0xc(%esp)
0879acfb +0x07b:  mov    %eax,0x8(%esp)
0879acff +0x07f:  mov    0x10(%ebp),%eax
0879ad02 +0x082:  mov    %eax,0x4(%esp)
0879ad06 +0x086:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
0879ad0b +0x08b:  mov    (%esi),%eax
0879ad0d +0x08d:  mov    %eax,(%esp)
0879ad10 +0x090:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879ad15 +0x095:  mov    (%esi),%edx
0879ad17 +0x097:  mov    0x24(%edx),%edx
0879ad1a +0x09a:  mov    %eax,0x8(%esp)
0879ad1e +0x09e:  mov    0x14(%ebp),%eax
0879ad21 +0x0a1:  mov    %edx,0x4(%esp)
0879ad25 +0x0a5:  mov    %eax,(%esp)
0879ad28 +0x0a8:  call   0807d8a0 <_init+0x198>
0879ad2d +0x0ad:  mov    -0x38(%ebp),%eax
0879ad30 +0x0b0:  mov    -0x34(%ebp),%esi
0879ad33 +0x0b3:  movl   $0x0,0x4(%esp)
0879ad3b +0x0bb:  shl    $0x2,%eax
0879ad3e +0x0be:  mov    %esi,(%esp)
0879ad41 +0x0c1:  mov    %eax,0x8(%esp)
0879ad45 +0x0c5:  call   0807dcc0 <_init+0x5b8>
0879ad4a +0x0ca:  mov    %esi,(%esp)
0879ad4d +0x0cd:  movb   $0x0,0x4(%esp)
0879ad52 +0x0d2:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ad57 +0x0d7:  mov    -0x28(%ebp),%eax
0879ad5a +0x0da:  mov    -0x24(%ebp),%esi
0879ad5d +0x0dd:  movl   $0x0,0x4(%esp)
0879ad65 +0x0e5:  shl    $0x2,%eax
0879ad68 +0x0e8:  mov    %esi,(%esp)
0879ad6b +0x0eb:  mov    %eax,0x8(%esp)
0879ad6f +0x0ef:  call   0807dcc0 <_init+0x5b8>
0879ad74 +0x0f4:  mov    %esi,(%esp)
0879ad77 +0x0f7:  movb   $0x0,0x4(%esp)
0879ad7c +0x0fc:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ad81 +0x101:  add    $0x4c,%esp
0879ad84 +0x104:  pop    %ebx
0879ad85 +0x105:  pop    %esi
0879ad86 +0x106:  pop    %edi
0879ad87 +0x107:  pop    %ebp
0879ad88 +0x108:  ret
0879ad89 +0x109:  nop
0879ad8a +0x10a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DiffieHellman::get_parms @ 0x879ac80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::get_parms(unsigned char*, unsigned char*, unsigned char*) const */

void __thiscall
yaSSL::DiffieHellman::get_parms(DiffieHellman *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  undefined4 uVar1;
  size_t __n;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  TaoCrypt::Integer::Integer((Integer *)&local_2c,*(Integer **)this);
  TaoCrypt::Integer::Integer((Integer *)&local_3c,(Integer *)(*(int *)this + 0x10));
  uVar1 = TaoCrypt::Integer::ByteCount((Integer *)&local_2c);
  TaoCrypt::Integer::Encode((Integer *)&local_2c,param_1,uVar1,0);
  uVar1 = TaoCrypt::Integer::ByteCount((Integer *)&local_3c);
  TaoCrypt::Integer::Encode((Integer *)&local_3c,param_2,uVar1,0);
  __n = TaoCrypt::Integer::ByteCount(*(Integer **)this);
  memcpy(param_3,*(void **)(*(int *)this + 0x24),__n);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return;
}
```
