# __do_catch

`_ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj`

`__cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__class_type_info` | `0x08724a00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724a00  _ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj
#           __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const
# range [0x08724a00, 0x08724a8f]
08724a00 +0x00:  push   %ebp
08724a01 +0x01:  mov    %esp,%ebp
08724a03 +0x03:  sub    $0x28,%esp
08724a06 +0x06:  mov    %esi,-0x8(%ebp)
08724a09 +0x09:  mov    0xc(%ebp),%esi
08724a0c +0x0c:  mov    %edi,-0x4(%ebp)
08724a0f +0x0f:  mov    0x8(%ebp),%edi
08724a12 +0x12:  mov    %ebx,-0xc(%ebp)
08724a15 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
08724a1a +0x1a:  add    $0xc4817e,%ebx
08724a20 +0x20:  mov    0x4(%esi),%edx
08724a23 +0x23:  mov    0x4(%edi),%eax
08724a26 +0x26:  cmp    %edx,%eax
08724a28 +0x28:  je     08724a58 <+0x58>
08724a2a +0x2a:  cmpb   $0x2a,(%eax)
08724a2d +0x2d:  je     08724a3f <+0x3f>
08724a2f +0x2f:  mov    %edx,0x4(%esp)
08724a33 +0x33:  mov    %eax,(%esp)
08724a36 +0x36:  call   0807e4e0 <_init+0xdd8>
08724a3b +0x3b:  test   %eax,%eax
08724a3d +0x3d:  je     08724a58 <+0x58>
08724a3f +0x3f:  xor    %eax,%eax
08724a41 +0x41:  cmpl   $0x3,0x14(%ebp)
08724a45 +0x45:  jbe    08724a70 <+0x70>
08724a47 +0x47:  mov    -0xc(%ebp),%ebx
08724a4a +0x4a:  mov    -0x8(%ebp),%esi
08724a4d +0x4d:  mov    -0x4(%ebp),%edi
08724a50 +0x50:  mov    %ebp,%esp
08724a52 +0x52:  pop    %ebp
08724a53 +0x53:  ret
08724a54 +0x54:  lea    0x0(%esi,%eiz,1),%esi
08724a58 +0x58:  mov    -0xc(%ebp),%ebx
08724a5b +0x5b:  mov    $0x1,%eax
08724a60 +0x60:  mov    -0x8(%ebp),%esi
08724a63 +0x63:  mov    -0x4(%ebp),%edi
08724a66 +0x66:  mov    %ebp,%esp
08724a68 +0x68:  pop    %ebp
08724a69 +0x69:  ret
08724a6a +0x6a:  lea    0x0(%esi),%esi
08724a70 +0x70:  mov    (%esi),%eax
08724a72 +0x72:  mov    0x10(%ebp),%edx
08724a75 +0x75:  mov    %edi,0x4(%esp)
08724a79 +0x79:  mov    %esi,(%esp)
08724a7c +0x7c:  mov    %edx,0x8(%esp)
08724a80 +0x80:  call   *0x14(%eax)
08724a83 +0x83:  mov    -0xc(%ebp),%ebx
08724a86 +0x86:  mov    -0x8(%ebp),%esi
08724a89 +0x89:  mov    -0x4(%ebp),%edi
08724a8c +0x8c:  mov    %ebp,%esp
08724a8e +0x8e:  pop    %ebp
08724a8f +0x8f:  ret
```

## 反编译 C

```c
// __cxxabiv1::__class_type_info::__do_catch @ 0x8724a00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_catch
          (__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = *(char **)(this + 4);
  if (__s1 == *(char **)(param_1 + 4)) {
    return 1;
  }
  if ((*__s1 != '*') && (iVar1 = strcmp(__s1,*(char **)(param_1 + 4)), iVar1 == 0)) {
    return 1;
  }
  if (param_3 < 4) {
    uVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_1,this,param_2);
    return uVar2;
  }
  return 0;
}
```
