# assign

`_ZN5yaSSL7Integer6assignEPKhj`

`yaSSL::Integer::assign(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Integer` | `0x0879aae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879aae0  _ZN5yaSSL7Integer6assignEPKhj
#           yaSSL::Integer::assign(unsigned char const*, unsigned int)
# range [0x0879aae0, 0x0879ab59]
0879aae0 +0x00:  push   %ebp
0879aae1 +0x01:  mov    %esp,%ebp
0879aae3 +0x03:  push   %esi
0879aae4 +0x04:  push   %ebx
0879aae5 +0x05:  sub    $0x20,%esp
0879aae8 +0x08:  mov    0x10(%ebp),%eax
0879aaeb +0x0b:  call   08722df8 <__i686.get_pc_thunk.bx>
0879aaf0 +0x10:  add    $0xbd20a8,%ebx
0879aaf6 +0x16:  lea    -0x18(%ebp),%esi
0879aaf9 +0x19:  mov    %esi,(%esp)
0879aafc +0x1c:  movl   $0x0,0xc(%esp)
0879ab04 +0x24:  mov    %eax,0x8(%esp)
0879ab08 +0x28:  mov    0xc(%ebp),%eax
0879ab0b +0x2b:  mov    %eax,0x4(%esp)
0879ab0f +0x2f:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
0879ab14 +0x34:  mov    0x8(%ebp),%eax
0879ab17 +0x37:  mov    %esi,0x4(%esp)
0879ab1b +0x3b:  mov    (%eax),%eax
0879ab1d +0x3d:  mov    %eax,(%esp)
0879ab20 +0x40:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0879ab25 +0x45:  mov    -0x18(%ebp),%eax
0879ab28 +0x48:  mov    -0x14(%ebp),%esi
0879ab2b +0x4b:  movl   $0x0,0x4(%esp)
0879ab33 +0x53:  shl    $0x2,%eax
0879ab36 +0x56:  mov    %esi,(%esp)
0879ab39 +0x59:  mov    %eax,0x8(%esp)
0879ab3d +0x5d:  call   0807dcc0 <_init+0x5b8>
0879ab42 +0x62:  mov    %esi,(%esp)
0879ab45 +0x65:  movb   $0x0,0x4(%esp)
0879ab4a +0x6a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ab4f +0x6f:  add    $0x20,%esp
0879ab52 +0x72:  pop    %ebx
0879ab53 +0x73:  pop    %esi
0879ab54 +0x74:  pop    %ebp
0879ab55 +0x75:  ret
0879ab56 +0x76:  lea    0x0(%esi),%esi
0879ab59 +0x79:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Integer::assign @ 0x879aae0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::assign(unsigned char const*, unsigned int) */

void __thiscall yaSSL::Integer::assign(Integer *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  int local_1c;
  void *local_18;
  
  TaoCrypt::Integer::Integer((Integer *)&local_1c,param_1,param_2,0);
  TaoCrypt::Integer::operator=(*(Integer **)this,(Integer *)&local_1c);
  uVar1 = 0;
  memset(local_18,0,local_1c << 2);
  operator_delete__(local_18,uVar1 & 0xffffff00);
  return;
}
```
