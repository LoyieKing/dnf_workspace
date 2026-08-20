# __do_find_public_src

`_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_`

`__cxxabiv1::__vmi_class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__vmi_class_type_info` | `0x08722e70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722e70  _ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_
#           __cxxabiv1::__vmi_class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const
# range [0x08722e70, 0x08722f5f]
08722e70 +0x00:  push   %ebp
08722e71 +0x01:  mov    %esp,%ebp
08722e73 +0x03:  push   %edi
08722e74 +0x04:  push   %esi
08722e75 +0x05:  push   %ebx
08722e76 +0x06:  sub    $0x4c,%esp
08722e79 +0x09:  mov    0x18(%ebp),%eax
08722e7c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08722e81 +0x11:  add    $0xc49d17,%ebx
08722e87 +0x17:  mov    0x8(%ebp),%esi
08722e8a +0x1a:  cmp    %eax,0x10(%ebp)
08722e8d +0x1d:  je     08722f21 <+0xb1>
08722e93 +0x23:  mov    0xc(%esi),%edi
08722e96 +0x26:  lea    0xc(%esi,%edi,8),%esi
08722e9a +0x2a:  jmp    08722efb <+0x8b>
08722e9c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
08722ea0 +0x30:  mov    (%esi),%edx
08722ea2 +0x32:  sub    $0x1,%edi
08722ea5 +0x35:  test   $0x2,%dl
08722ea8 +0x38:  je     08722ef8 <+0x88>
08722eaa +0x3a:  mov    %edx,%eax
08722eac +0x3c:  mov    %edx,%ecx
08722eae +0x3e:  sar    $0x8,%eax
08722eb1 +0x41:  and    $0x1,%ecx
08722eb4 +0x44:  mov    %cl,-0x19(%ebp)
08722eb7 +0x47:  je     08722ec6 <+0x56>
08722eb9 +0x49:  cmpl   $0xfffffffd,0xc(%ebp)
08722ebd +0x4d:  je     08722ef8 <+0x88>
08722ebf +0x4f:  mov    0x10(%ebp),%edx
08722ec2 +0x52:  add    (%edx),%eax
08722ec4 +0x54:  mov    (%eax),%eax
08722ec6 +0x56:  mov    -0x4(%esi),%edx
08722ec9 +0x59:  add    0x10(%ebp),%eax
08722ecc +0x5c:  mov    (%edx),%ecx
08722ece +0x5e:  mov    %eax,0x8(%esp)
08722ed2 +0x62:  mov    0xc(%ebp),%eax
08722ed5 +0x65:  mov    %edx,(%esp)
08722ed8 +0x68:  mov    %ecx,-0x2c(%ebp)
08722edb +0x6b:  mov    0x18(%ebp),%ecx
08722ede +0x6e:  mov    -0x2c(%ebp),%edx
08722ee1 +0x71:  mov    %eax,0x4(%esp)
08722ee5 +0x75:  mov    %ecx,0x10(%esp)
08722ee9 +0x79:  mov    0x14(%ebp),%ecx
08722eec +0x7c:  mov    %ecx,0xc(%esp)
08722ef0 +0x80:  call   *0x20(%edx)
08722ef3 +0x83:  cmp    $0x3,%eax
08722ef6 +0x86:  jg     08722f10 <+0xa0>
08722ef8 +0x88:  sub    $0x8,%esi
08722efb +0x8b:  test   %edi,%edi
08722efd +0x8d:  jne    08722ea0 <+0x30>
08722eff +0x8f:  mov    $0x1,%eax
08722f04 +0x94:  add    $0x4c,%esp
08722f07 +0x97:  pop    %ebx
08722f08 +0x98:  pop    %esi
08722f09 +0x99:  pop    %edi
08722f0a +0x9a:  pop    %ebp
08722f0b +0x9b:  ret
08722f0c +0x9c:  lea    0x0(%esi,%eiz,1),%esi
08722f10 +0xa0:  cmpb   $0x0,-0x19(%ebp)
08722f14 +0xa4:  je     08722f04 <+0x94>
08722f16 +0xa6:  add    $0x4c,%esp
08722f19 +0xa9:  or     $0x1,%eax
08722f1c +0xac:  pop    %ebx
08722f1d +0xad:  pop    %esi
08722f1e +0xae:  pop    %edi
08722f1f +0xaf:  pop    %ebp
08722f20 +0xb0:  ret
08722f21 +0xb1:  mov    0x14(%ebp),%ecx
08722f24 +0xb4:  mov    0x4(%esi),%eax
08722f27 +0xb7:  mov    0x4(%ecx),%edx
08722f2a +0xba:  cmp    %edx,%eax
08722f2c +0xbc:  je     08722f4b <+0xdb>
08722f2e +0xbe:  cmpb   $0x2a,(%eax)
08722f31 +0xc1:  je     08722e93 <+0x23>
08722f37 +0xc7:  mov    %edx,0x4(%esp)
08722f3b +0xcb:  mov    %eax,(%esp)
08722f3e +0xce:  call   0807e4e0 <_init+0xdd8>
08722f43 +0xd3:  test   %eax,%eax
08722f45 +0xd5:  jne    08722e93 <+0x23>
08722f4b +0xdb:  add    $0x4c,%esp
08722f4e +0xde:  mov    $0x6,%eax
08722f53 +0xe3:  pop    %ebx
08722f54 +0xe4:  pop    %esi
08722f55 +0xe5:  pop    %edi
08722f56 +0xe6:  pop    %ebp
08722f57 +0xe7:  ret
08722f58 +0xe8:  nop
08722f59 +0xe9:  nop
08722f5a +0xea:  nop
08722f5b +0xeb:  nop
08722f5c +0xec:  nop
08722f5d +0xed:  nop
08722f5e +0xee:  nop
08722f5f +0xef:  nop
```

## 反编译 C

```c
// __cxxabiv1::__vmi_class_type_info::__do_find_public_src @ 0x8722e70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::__do_find_public_src(int, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

uint __thiscall
__cxxabiv1::__vmi_class_type_info::__do_find_public_src
          (__vmi_class_type_info *this,int param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  uint uVar3;
  __vmi_class_type_info *p_Var4;
  int iVar5;
  
  if (param_2 == param_4) {
    __s1 = *(char **)(this + 4);
    if (__s1 == *(char **)(param_3 + 4)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar5 = strcmp(__s1,*(char **)(param_3 + 4)), iVar5 == 0)) {
      return 6;
    }
  }
  iVar5 = *(int *)(this + 0xc);
  p_Var4 = this + iVar5 * 8 + 0xc;
  do {
    if (iVar5 == 0) {
      return 1;
    }
    uVar1 = *(uint *)p_Var4;
    iVar5 = iVar5 + -1;
    if ((uVar1 & 2) != 0) {
      iVar2 = (int)uVar1 >> 8;
      if ((uVar1 & 1) != 0) {
        if (param_1 == -3) goto LAB_08722ef8;
        iVar2 = *(int *)(iVar2 + *(int *)param_2);
      }
      uVar3 = (**(code **)(**(int **)(p_Var4 + -4) + 0x20))
                        (*(int **)(p_Var4 + -4),param_1,iVar2 + (int)param_2,param_3,param_4);
      if (3 < (int)uVar3) {
        if ((char)(uVar1 & 1) == '\0') {
          return uVar3;
        }
        return uVar3 | 1;
      }
    }
LAB_08722ef8:
    p_Var4 = p_Var4 + -8;
  } while( true );
}
```
