# __do_catch

`_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj`

`__cxxabiv1::__pbase_type_info::__do_catch(std::type_info const*, void**, unsigned int) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__pbase_type_info` | `0x0872f470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f470  _ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj
#           __cxxabiv1::__pbase_type_info::__do_catch(std::type_info const*, void**, unsigned int) const
# range [0x0872f470, 0x0872f54f]
0872f470 +0x00:  push   %ebp
0872f471 +0x01:  mov    %esp,%ebp
0872f473 +0x03:  sub    $0x38,%esp
0872f476 +0x06:  mov    %esi,-0x8(%ebp)
0872f479 +0x09:  mov    0x8(%ebp),%esi
0872f47c +0x0c:  mov    %edi,-0x4(%ebp)
0872f47f +0x0f:  mov    0xc(%ebp),%edi
0872f482 +0x12:  mov    %ebx,-0xc(%ebp)
0872f485 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0872f48a +0x1a:  add    $0xc3d70e,%ebx
0872f490 +0x20:  mov    0x4(%esi),%eax
0872f493 +0x23:  mov    0x4(%edi),%edx
0872f496 +0x26:  cmp    %edx,%eax
0872f498 +0x28:  je     0872f4af <+0x3f>
0872f49a +0x2a:  cmpb   $0x2a,(%eax)
0872f49d +0x2d:  je     0872f4c8 <+0x58>
0872f49f +0x2f:  mov    %edx,0x4(%esp)
0872f4a3 +0x33:  mov    %eax,(%esp)
0872f4a6 +0x36:  call   0807e4e0 <_init+0xdd8>
0872f4ab +0x3b:  test   %eax,%eax
0872f4ad +0x3d:  jne    0872f4c8 <+0x58>
0872f4af +0x3f:  mov    -0xc(%ebp),%ebx
0872f4b2 +0x42:  mov    $0x1,%eax
0872f4b7 +0x47:  mov    -0x8(%ebp),%esi
0872f4ba +0x4a:  mov    -0x4(%ebp),%edi
0872f4bd +0x4d:  mov    %ebp,%esp
0872f4bf +0x4f:  pop    %ebp
0872f4c0 +0x50:  ret
0872f4c1 +0x51:  lea    0x0(%esi,%eiz,1),%esi
0872f4c8 +0x58:  mov    (%esi),%edx
0872f4ca +0x5a:  mov    (%edi),%ecx
0872f4cc +0x5c:  mov    -0x4(%edx),%eax
0872f4cf +0x5f:  mov    -0x4(%ecx),%ecx
0872f4d2 +0x62:  mov    0x4(%eax),%eax
0872f4d5 +0x65:  mov    0x4(%ecx),%ecx
0872f4d8 +0x68:  cmp    %ecx,%eax
0872f4da +0x6a:  je     0872f4f7 <+0x87>
0872f4dc +0x6c:  cmpb   $0x2a,(%eax)
0872f4df +0x6f:  je     0872f538 <+0xc8>
0872f4e1 +0x71:  mov    %ecx,0x4(%esp)
0872f4e5 +0x75:  mov    %eax,(%esp)
0872f4e8 +0x78:  mov    %edx,-0x1c(%ebp)
0872f4eb +0x7b:  call   0807e4e0 <_init+0xdd8>
0872f4f0 +0x80:  mov    -0x1c(%ebp),%edx
0872f4f3 +0x83:  test   %eax,%eax
0872f4f5 +0x85:  jne    0872f538 <+0xc8>
0872f4f7 +0x87:  testb  $0x1,0x14(%ebp)
0872f4fb +0x8b:  je     0872f538 <+0xc8>
0872f4fd +0x8d:  mov    0x8(%esi),%eax
0872f500 +0x90:  mov    %eax,%ecx
0872f502 +0x92:  not    %ecx
0872f504 +0x94:  test   %ecx,0x8(%edi)
0872f507 +0x97:  jne    0872f538 <+0xc8>
0872f509 +0x99:  test   $0x1,%al
0872f50b +0x9b:  jne    0872f511 <+0xa1>
0872f50d +0x9d:  andl   $0xfffffffe,0x14(%ebp)
0872f511 +0xa1:  mov    0x14(%ebp),%eax
0872f514 +0xa4:  mov    %edi,0x4(%esp)
0872f518 +0xa8:  mov    %esi,(%esp)
0872f51b +0xab:  mov    %eax,0xc(%esp)
0872f51f +0xaf:  mov    0x10(%ebp),%eax
0872f522 +0xb2:  mov    %eax,0x8(%esp)
0872f526 +0xb6:  call   *0x18(%edx)
0872f529 +0xb9:  mov    -0xc(%ebp),%ebx
0872f52c +0xbc:  mov    -0x8(%ebp),%esi
0872f52f +0xbf:  mov    -0x4(%ebp),%edi
0872f532 +0xc2:  mov    %ebp,%esp
0872f534 +0xc4:  pop    %ebp
0872f535 +0xc5:  ret
0872f536 +0xc6:  xchg   %ax,%ax
0872f538 +0xc8:  mov    -0xc(%ebp),%ebx
0872f53b +0xcb:  xor    %eax,%eax
0872f53d +0xcd:  mov    -0x8(%ebp),%esi
0872f540 +0xd0:  mov    -0x4(%ebp),%edi
0872f543 +0xd3:  mov    %ebp,%esp
0872f545 +0xd5:  pop    %ebp
0872f546 +0xd6:  ret
0872f547 +0xd7:  nop
0872f548 +0xd8:  nop
0872f549 +0xd9:  nop
0872f54a +0xda:  nop
0872f54b +0xdb:  nop
0872f54c +0xdc:  nop
0872f54d +0xdd:  nop
0872f54e +0xde:  nop
0872f54f +0xdf:  nop
```

## 反编译 C

```c
// __cxxabiv1::__pbase_type_info::__do_catch @ 0x872f470

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pbase_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined4 __thiscall
__cxxabiv1::__pbase_type_info::__do_catch
          (__pbase_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  char *pcVar1;
  char *__s2;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = *(char **)(this + 4);
  if (pcVar1 == *(char **)(param_1 + 4)) {
    return 1;
  }
  if ((*pcVar1 != '*') && (iVar2 = strcmp(pcVar1,*(char **)(param_1 + 4)), iVar2 == 0)) {
    return 1;
  }
  iVar2 = *(int *)this;
  pcVar1 = *(char **)(*(int *)(iVar2 + -4) + 4);
  __s2 = *(char **)(*(int *)(*(int *)param_1 + -4) + 4);
  if (pcVar1 != __s2) {
    if (*pcVar1 == '*') {
      return 0;
    }
    iVar3 = strcmp(pcVar1,__s2);
    if (iVar3 != 0) {
      return 0;
    }
  }
  if (((param_3 & 1) != 0) && ((*(uint *)(param_1 + 8) & ~*(uint *)(this + 8)) == 0)) {
    if ((*(uint *)(this + 8) & 1) == 0) {
      param_3 = param_3 & 0xfffffffe;
    }
    uVar4 = (**(code **)(iVar2 + 0x18))(this,param_1,param_2,param_3);
    return uVar4;
  }
  return 0;
}
```
