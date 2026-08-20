# __do_dyncast

`_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE`

`__cxxabiv1::__si_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__si_class_type_info` | `0x08724da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724da0  _ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE
#           __cxxabiv1::__si_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__dyncast_result&) const
# range [0x08724da0, 0x08724ecf]
08724da0 +0x000:  push   %ebp
08724da1 +0x001:  mov    %esp,%ebp
08724da3 +0x003:  sub    $0x58,%esp
08724da6 +0x006:  mov    %edi,-0x4(%ebp)
08724da9 +0x009:  mov    0x8(%ebp),%edx
08724dac +0x00c:  mov    0x14(%ebp),%edi
08724daf +0x00f:  mov    %ebx,-0xc(%ebp)
08724db2 +0x012:  mov    %esi,-0x8(%ebp)
08724db5 +0x015:  mov    0x4(%edx),%esi
08724db8 +0x018:  mov    0x4(%edi),%eax
08724dbb +0x01b:  call   08722df8 <__i686.get_pc_thunk.bx>
08724dc0 +0x020:  add    $0xc47dd8,%ebx
08724dc6 +0x026:  cmp    %eax,%esi
08724dc8 +0x028:  je     08724def <+0x4f>
08724dca +0x02a:  movzbl (%esi),%ecx
08724dcd +0x02d:  cmp    $0x2a,%cl
08724dd0 +0x030:  je     08724e30 <+0x90>
08724dd2 +0x032:  mov    %eax,0x4(%esp)
08724dd6 +0x036:  mov    %esi,(%esp)
08724dd9 +0x039:  mov    %edx,-0x1c(%ebp)
08724ddc +0x03c:  mov    %cl,-0x20(%ebp)
08724ddf +0x03f:  call   0807e4e0 <_init+0xdd8>
08724de4 +0x044:  mov    -0x1c(%ebp),%edx
08724de7 +0x047:  movzbl -0x20(%ebp),%ecx
08724deb +0x04b:  test   %eax,%eax
08724ded +0x04d:  jne    08724e30 <+0x90>
08724def +0x04f:  mov    0x24(%ebp),%eax
08724df2 +0x052:  mov    0x18(%ebp),%edx
08724df5 +0x055:  mov    0x10(%ebp),%ecx
08724df8 +0x058:  mov    %edx,(%eax)
08724dfa +0x05a:  mov    %ecx,0x4(%eax)
08724dfd +0x05d:  mov    0xc(%ebp),%eax
08724e00 +0x060:  test   %eax,%eax
08724e02 +0x062:  js     08724eb8 <+0x118>
08724e08 +0x068:  mov    0xc(%ebp),%eax
08724e0b +0x06b:  add    %edx,%eax
08724e0d +0x06d:  mov    0x24(%ebp),%edx
08724e10 +0x070:  cmp    %eax,0x20(%ebp)
08724e13 +0x073:  sete   %al
08724e16 +0x076:  movzbl %al,%eax
08724e19 +0x079:  lea    0x1(%eax,%eax,4),%eax
08724e1d +0x07d:  mov    %eax,0xc(%edx)
08724e20 +0x080:  xor    %eax,%eax
08724e22 +0x082:  mov    -0xc(%ebp),%ebx
08724e25 +0x085:  mov    -0x8(%ebp),%esi
08724e28 +0x088:  mov    -0x4(%ebp),%edi
08724e2b +0x08b:  mov    %ebp,%esp
08724e2d +0x08d:  pop    %ebp
08724e2e +0x08e:  ret
08724e2f +0x08f:  nop
08724e30 +0x090:  mov    0x20(%ebp),%eax
08724e33 +0x093:  cmp    %eax,0x18(%ebp)
08724e36 +0x096:  je     08724e80 <+0xe0>
08724e38 +0x098:  mov    0x8(%edx),%eax
08724e3b +0x09b:  mov    0x24(%ebp),%ecx
08724e3e +0x09e:  mov    (%eax),%edx
08724e40 +0x0a0:  mov    %ecx,0x1c(%esp)
08724e44 +0x0a4:  mov    0x20(%ebp),%ecx
08724e47 +0x0a7:  mov    %edi,0xc(%esp)
08724e4b +0x0ab:  mov    %eax,(%esp)
08724e4e +0x0ae:  mov    %ecx,0x18(%esp)
08724e52 +0x0b2:  mov    0x1c(%ebp),%ecx
08724e55 +0x0b5:  mov    %ecx,0x14(%esp)
08724e59 +0x0b9:  mov    0x18(%ebp),%ecx
08724e5c +0x0bc:  mov    %ecx,0x10(%esp)
08724e60 +0x0c0:  mov    0x10(%ebp),%ecx
08724e63 +0x0c3:  mov    %ecx,0x8(%esp)
08724e67 +0x0c7:  mov    0xc(%ebp),%ecx
08724e6a +0x0ca:  mov    %ecx,0x4(%esp)
08724e6e +0x0ce:  call   *0x1c(%edx)
08724e71 +0x0d1:  mov    -0xc(%ebp),%ebx
08724e74 +0x0d4:  mov    -0x8(%ebp),%esi
08724e77 +0x0d7:  mov    -0x4(%ebp),%edi
08724e7a +0x0da:  mov    %ebp,%esp
08724e7c +0x0dc:  pop    %ebp
08724e7d +0x0dd:  ret
08724e7e +0x0de:  xchg   %ax,%ax
08724e80 +0x0e0:  mov    0x1c(%ebp),%eax
08724e83 +0x0e3:  mov    0x4(%eax),%eax
08724e86 +0x0e6:  cmp    %eax,%esi
08724e88 +0x0e8:  mov    %eax,-0x2c(%ebp)
08724e8b +0x0eb:  je     08724ea8 <+0x108>
08724e8d +0x0ed:  cmp    $0x2a,%cl
08724e90 +0x0f0:  je     08724e38 <+0x98>
08724e92 +0x0f2:  mov    %eax,0x4(%esp)
08724e96 +0x0f6:  mov    %esi,(%esp)
08724e99 +0x0f9:  mov    %edx,-0x1c(%ebp)
08724e9c +0x0fc:  call   0807e4e0 <_init+0xdd8>
08724ea1 +0x101:  mov    -0x1c(%ebp),%edx
08724ea4 +0x104:  test   %eax,%eax
08724ea6 +0x106:  jne    08724e38 <+0x98>
08724ea8 +0x108:  mov    0x10(%ebp),%ecx
08724eab +0x10b:  xor    %eax,%eax
08724ead +0x10d:  mov    0x24(%ebp),%edx
08724eb0 +0x110:  mov    %ecx,0x8(%edx)
08724eb3 +0x113:  jmp    08724e71 <+0xd1>
08724eb5 +0x115:  lea    0x0(%esi),%esi
08724eb8 +0x118:  xor    %eax,%eax
08724eba +0x11a:  cmpl   $0xfffffffe,0xc(%ebp)
08724ebe +0x11e:  jne    08724e71 <+0xd1>
08724ec0 +0x120:  mov    0x24(%ebp),%ecx
08724ec3 +0x123:  movl   $0x1,0xc(%ecx)
08724eca +0x12a:  jmp    08724e71 <+0xd1>
08724ecc +0x12c:  nop
08724ecd +0x12d:  nop
08724ece +0x12e:  nop
08724ecf +0x12f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__si_class_type_info::__do_dyncast @ 0x8724da0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_dyncast
          (__si_class_type_info *this,int param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int *param_8)

{
  char cVar1;
  char *__s1;
  int iVar2;
  undefined4 uVar3;
  
  __s1 = *(char **)(this + 4);
  if ((__s1 != *(char **)(param_4 + 4)) &&
     ((cVar1 = *__s1, cVar1 == '*' || (iVar2 = strcmp(__s1,*(char **)(param_4 + 4)), iVar2 != 0))))
  {
    if ((param_5 == param_7) &&
       ((__s1 == *(char **)(param_6 + 4) ||
        ((cVar1 != '*' && (iVar2 = strcmp(__s1,*(char **)(param_6 + 4)), iVar2 == 0)))))) {
      param_8[2] = param_3;
      return 0;
    }
    uVar3 = (**(code **)(**(int **)(this + 8) + 0x1c))
                      (*(int **)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  *param_8 = param_5;
  param_8[1] = param_3;
  if (-1 < param_1) {
    param_8[3] = (uint)(param_7 == param_1 + param_5) * 5 + 1;
    return 0;
  }
  if (param_1 != -2) {
    return 0;
  }
  param_8[3] = 1;
  return 0;
}
```
