# __do_find_public_src

`_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_`

`__cxxabiv1::__si_class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__si_class_type_info` | `0x08724ed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724ed0  _ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_
#           __cxxabiv1::__si_class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const
# range [0x08724ed0, 0x08724f6f]
08724ed0 +0x00:  push   %ebp
08724ed1 +0x01:  mov    %esp,%ebp
08724ed3 +0x03:  sub    $0x58,%esp
08724ed6 +0x06:  mov    %esi,-0x8(%ebp)
08724ed9 +0x09:  mov    0x10(%ebp),%esi
08724edc +0x0c:  mov    %edi,-0x4(%ebp)
08724edf +0x0f:  mov    0x18(%ebp),%edi
08724ee2 +0x12:  mov    %ebx,-0xc(%ebp)
08724ee5 +0x15:  mov    0x8(%ebp),%edx
08724ee8 +0x18:  call   08722df8 <__i686.get_pc_thunk.bx>
08724eed +0x1d:  add    $0xc47cab,%ebx
08724ef3 +0x23:  mov    0x14(%ebp),%ecx
08724ef6 +0x26:  cmp    %esi,%edi
08724ef8 +0x28:  je     08724f28 <+0x58>
08724efa +0x2a:  mov    0x8(%edx),%eax
08724efd +0x2d:  mov    (%eax),%edx
08724eff +0x2f:  mov    %ecx,0xc(%esp)
08724f03 +0x33:  mov    0xc(%ebp),%ecx
08724f06 +0x36:  mov    %edi,0x10(%esp)
08724f0a +0x3a:  mov    %esi,0x8(%esp)
08724f0e +0x3e:  mov    %eax,(%esp)
08724f11 +0x41:  mov    %ecx,0x4(%esp)
08724f15 +0x45:  call   *0x20(%edx)
08724f18 +0x48:  mov    -0xc(%ebp),%ebx
08724f1b +0x4b:  mov    -0x8(%ebp),%esi
08724f1e +0x4e:  mov    -0x4(%ebp),%edi
08724f21 +0x51:  mov    %ebp,%esp
08724f23 +0x53:  pop    %ebp
08724f24 +0x54:  ret
08724f25 +0x55:  lea    0x0(%esi),%esi
08724f28 +0x58:  mov    0x4(%edx),%eax
08724f2b +0x5b:  mov    %eax,-0x2c(%ebp)
08724f2e +0x5e:  mov    0x4(%ecx),%eax
08724f31 +0x61:  cmp    %eax,-0x2c(%ebp)
08724f34 +0x64:  mov    %eax,-0x1c(%ebp)
08724f37 +0x67:  je     08724f63 <+0x93>
08724f39 +0x69:  mov    -0x2c(%ebp),%eax
08724f3c +0x6c:  cmpb   $0x2a,(%eax)
08724f3f +0x6f:  je     08724efa <+0x2a>
08724f41 +0x71:  mov    -0x1c(%ebp),%eax
08724f44 +0x74:  mov    %edx,-0x20(%ebp)
08724f47 +0x77:  mov    %ecx,-0x24(%ebp)
08724f4a +0x7a:  mov    %eax,0x4(%esp)
08724f4e +0x7e:  mov    -0x2c(%ebp),%eax
08724f51 +0x81:  mov    %eax,(%esp)
08724f54 +0x84:  call   0807e4e0 <_init+0xdd8>
08724f59 +0x89:  mov    -0x20(%ebp),%edx
08724f5c +0x8c:  mov    -0x24(%ebp),%ecx
08724f5f +0x8f:  test   %eax,%eax
08724f61 +0x91:  jne    08724efa <+0x2a>
08724f63 +0x93:  mov    $0x6,%eax
08724f68 +0x98:  jmp    08724f18 <+0x48>
08724f6a +0x9a:  nop
08724f6b +0x9b:  nop
08724f6c +0x9c:  nop
08724f6d +0x9d:  nop
08724f6e +0x9e:  nop
08724f6f +0x9f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__si_class_type_info::__do_find_public_src @ 0x8724ed0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::__do_find_public_src(int, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_find_public_src
          (__si_class_type_info *this,int param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  char *__s1;
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == param_2) {
    __s1 = *(char **)(this + 4);
    if ((__s1 == *(char **)(param_3 + 4)) ||
       ((*__s1 != '*' && (iVar2 = strcmp(__s1,*(char **)(param_3 + 4)), iVar2 == 0)))) {
      return 6;
    }
  }
  uVar1 = (**(code **)(**(int **)(this + 8) + 0x20))
                    (*(int **)(this + 8),param_1,param_2,param_3,param_4);
  return uVar1;
}
```
