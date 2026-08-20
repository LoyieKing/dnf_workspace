# __pointer_catch

`_ZNK10__cxxabiv119__pointer_type_info15__pointer_catchEPKNS_17__pbase_type_infoEPPvj`

`__cxxabiv1::__pointer_type_info::__pointer_catch(__cxxabiv1::__pbase_type_info const*, void**, unsigned int) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__pointer_type_info` | `0x08723860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08723860  _ZNK10__cxxabiv119__pointer_type_info15__pointer_catchEPKNS_17__pbase_type_infoEPPvj
#           __cxxabiv1::__pointer_type_info::__pointer_catch(__cxxabiv1::__pbase_type_info const*, void**, unsigned int) const
# range [0x08723860, 0x087238ff]
08723860 +0x00:  push   %ebp
08723861 +0x01:  mov    %esp,%ebp
08723863 +0x03:  sub    $0x38,%esp
08723866 +0x06:  mov    %edi,-0x4(%ebp)
08723869 +0x09:  mov    0x14(%ebp),%edi
0872386c +0x0c:  mov    %ebx,-0xc(%ebp)
0872386f +0x0f:  mov    0x8(%ebp),%eax
08723872 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08723877 +0x17:  add    $0xc49321,%ebx
0872387d +0x1d:  mov    0xc(%ebp),%edx
08723880 +0x20:  mov    %esi,-0x8(%ebp)
08723883 +0x23:  cmp    $0x1,%edi
08723886 +0x26:  jbe    087238b8 <+0x58>
08723888 +0x28:  mov    0xc(%eax),%esi
0872388b +0x2b:  mov    0x10(%ebp),%ecx
0872388e +0x2e:  add    $0x2,%edi
08723891 +0x31:  mov    (%esi),%eax
08723893 +0x33:  mov    %edi,0xc(%esp)
08723897 +0x37:  mov    %ecx,0x8(%esp)
0872389b +0x3b:  mov    0xc(%edx),%edx
0872389e +0x3e:  mov    %esi,(%esp)
087238a1 +0x41:  mov    %edx,0x4(%esp)
087238a5 +0x45:  call   *0x10(%eax)
087238a8 +0x48:  mov    -0xc(%ebp),%ebx
087238ab +0x4b:  mov    -0x8(%ebp),%esi
087238ae +0x4e:  mov    -0x4(%ebp),%edi
087238b1 +0x51:  mov    %ebp,%esp
087238b3 +0x53:  pop    %ebp
087238b4 +0x54:  ret
087238b5 +0x55:  lea    0x0(%esi),%esi
087238b8 +0x58:  mov    0xc(%eax),%esi
087238bb +0x5b:  mov    -0x78(%ebx),%ecx
087238c1 +0x61:  mov    0x4(%esi),%eax
087238c4 +0x64:  mov    0x4(%ecx),%ecx
087238c7 +0x67:  cmp    %ecx,%eax
087238c9 +0x69:  je     087238e6 <+0x86>
087238cb +0x6b:  cmpb   $0x2a,(%eax)
087238ce +0x6e:  je     0872388b <+0x2b>
087238d0 +0x70:  mov    %ecx,0x4(%esp)
087238d4 +0x74:  mov    %eax,(%esp)
087238d7 +0x77:  mov    %edx,-0x1c(%ebp)
087238da +0x7a:  call   0807e4e0 <_init+0xdd8>
087238df +0x7f:  mov    -0x1c(%ebp),%edx
087238e2 +0x82:  test   %eax,%eax
087238e4 +0x84:  jne    0872388b <+0x2b>
087238e6 +0x86:  mov    0xc(%edx),%eax
087238e9 +0x89:  mov    (%eax),%edx
087238eb +0x8b:  mov    %eax,(%esp)
087238ee +0x8e:  call   *0xc(%edx)
087238f1 +0x91:  xor    $0x1,%eax
087238f4 +0x94:  jmp    087238a8 <+0x48>
087238f6 +0x96:  nop
087238f7 +0x97:  nop
087238f8 +0x98:  nop
087238f9 +0x99:  nop
087238fa +0x9a:  nop
087238fb +0x9b:  nop
087238fc +0x9c:  nop
087238fd +0x9d:  nop
087238fe +0x9e:  nop
087238ff +0x9f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__pointer_type_info::__pointer_catch @ 0x8723860

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pointer_type_info::__pointer_catch(__cxxabiv1::__pbase_type_info const*, void**,
   unsigned int) const */

uint __thiscall
__cxxabiv1::__pointer_type_info::__pointer_catch
          (__pointer_type_info *this,__pbase_type_info *param_1,void **param_2,uint param_3)

{
  char *__s1;
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 < 2) {
    piVar3 = *(int **)(this + 0xc);
    __s1 = (char *)piVar3[1];
    if ((__s1 == *(char **)(PTR_typeinfo_0936cb20 + 4)) ||
       ((*__s1 != '*' && (iVar2 = strcmp(__s1,*(char **)(PTR_typeinfo_0936cb20 + 4)), iVar2 == 0))))
    {
      uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc));
      return uVar1 ^ 1;
    }
  }
  else {
    piVar3 = *(int **)(this + 0xc);
  }
  uVar1 = (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(param_1 + 0xc),param_2,param_3 + 2);
  return uVar1;
}
```
