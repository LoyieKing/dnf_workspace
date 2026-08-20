# __do_dyncast

`_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE`

`__cxxabiv1::__class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__class_type_info` | `0x08724b10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724b10  _ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE
#           __cxxabiv1::__class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const
# range [0x08724b10, 0x08724baf]
08724b10 +0x00:  push   %ebp
08724b11 +0x01:  mov    %esp,%ebp
08724b13 +0x03:  sub    $0x28,%esp
08724b16 +0x06:  mov    %edi,-0x4(%ebp)
08724b19 +0x09:  mov    0x18(%ebp),%edi
08724b1c +0x0c:  mov    %ebx,-0xc(%ebp)
08724b1f +0x0f:  mov    0x8(%ebp),%eax
08724b22 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08724b27 +0x17:  add    $0xc48071,%ebx
08724b2d +0x1d:  cmp    0x20(%ebp),%edi
08724b30 +0x20:  mov    %esi,-0x8(%ebp)
08724b33 +0x23:  je     08724b68 <+0x58>
08724b35 +0x25:  mov    0x4(%eax),%esi
08724b38 +0x28:  mov    0x14(%ebp),%eax
08724b3b +0x2b:  mov    0x4(%eax),%eax
08724b3e +0x2e:  cmp    %eax,%esi
08724b40 +0x30:  je     08724b98 <+0x88>
08724b42 +0x32:  cmpb   $0x2a,(%esi)
08724b45 +0x35:  je     08724b57 <+0x47>
08724b47 +0x37:  mov    %eax,0x4(%esp)
08724b4b +0x3b:  mov    %esi,(%esp)
08724b4e +0x3e:  call   0807e4e0 <_init+0xdd8>
08724b53 +0x43:  test   %eax,%eax
08724b55 +0x45:  je     08724b98 <+0x88>
08724b57 +0x47:  mov    -0xc(%ebp),%ebx
08724b5a +0x4a:  xor    %eax,%eax
08724b5c +0x4c:  mov    -0x8(%ebp),%esi
08724b5f +0x4f:  mov    -0x4(%ebp),%edi
08724b62 +0x52:  mov    %ebp,%esp
08724b64 +0x54:  pop    %ebp
08724b65 +0x55:  ret
08724b66 +0x56:  xchg   %ax,%ax
08724b68 +0x58:  mov    0x4(%eax),%esi
08724b6b +0x5b:  mov    0x1c(%ebp),%eax
08724b6e +0x5e:  mov    0x4(%eax),%eax
08724b71 +0x61:  cmp    %eax,%esi
08724b73 +0x63:  je     08724b8a <+0x7a>
08724b75 +0x65:  cmpb   $0x2a,(%esi)
08724b78 +0x68:  je     08724b38 <+0x28>
08724b7a +0x6a:  mov    %eax,0x4(%esp)
08724b7e +0x6e:  mov    %esi,(%esp)
08724b81 +0x71:  call   0807e4e0 <_init+0xdd8>
08724b86 +0x76:  test   %eax,%eax
08724b88 +0x78:  jne    08724b38 <+0x28>
08724b8a +0x7a:  mov    0x10(%ebp),%edx
08724b8d +0x7d:  mov    0x24(%ebp),%eax
08724b90 +0x80:  mov    %edx,0x8(%eax)
08724b93 +0x83:  jmp    08724b57 <+0x47>
08724b95 +0x85:  lea    0x0(%esi),%esi
08724b98 +0x88:  mov    0x24(%ebp),%eax
08724b9b +0x8b:  mov    0x10(%ebp),%edx
08724b9e +0x8e:  mov    %edi,(%eax)
08724ba0 +0x90:  mov    %edx,0x4(%eax)
08724ba3 +0x93:  movl   $0x1,0xc(%eax)
08724baa +0x9a:  jmp    08724b57 <+0x47>
08724bac +0x9c:  nop
08724bad +0x9d:  nop
08724bae +0x9e:  nop
08724baf +0x9f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__class_type_info::__do_dyncast @ 0x8724b10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_dyncast
          (__class_type_info *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,int *param_8)

{
  int iVar1;
  char *__s1;
  
  if (param_5 == param_7) {
    __s1 = *(char **)(this + 4);
    if ((__s1 == *(char **)(param_6 + 4)) ||
       ((*__s1 != '*' && (iVar1 = strcmp(__s1,*(char **)(param_6 + 4)), iVar1 == 0)))) {
      param_8[2] = param_3;
      return 0;
    }
  }
  else {
    __s1 = *(char **)(this + 4);
  }
  if (__s1 != *(char **)(param_4 + 4)) {
    if (*__s1 == '*') {
      return 0;
    }
    iVar1 = strcmp(__s1,*(char **)(param_4 + 4));
    if (iVar1 != 0) {
      return 0;
    }
  }
  *param_8 = param_5;
  param_8[1] = param_3;
  param_8[3] = 1;
  return 0;
}
```
