# __do_upcast

`_ZNK10__cxxabiv120__si_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE`

`__cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__si_class_type_info` | `0x08724d30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724d30  _ZNK10__cxxabiv120__si_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE
#           __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const
# range [0x08724d30, 0x08724d9f]
08724d30 +0x00:  push   %ebp
08724d31 +0x01:  mov    %esp,%ebp
08724d33 +0x03:  sub    $0x28,%esp
08724d36 +0x06:  mov    %ebx,-0xc(%ebp)
08724d39 +0x09:  mov    0x8(%ebp),%edx
08724d3c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08724d41 +0x11:  add    $0xc47e57,%ebx
08724d47 +0x17:  mov    0xc(%ebp),%eax
08724d4a +0x1a:  mov    %esi,-0x8(%ebp)
08724d4d +0x1d:  mov    0x10(%ebp),%esi
08724d50 +0x20:  mov    %edi,-0x4(%ebp)
08724d53 +0x23:  mov    0x14(%ebp),%edi
08724d56 +0x26:  mov    %edx,(%esp)
08724d59 +0x29:  mov    %eax,0x4(%esp)
08724d5d +0x2d:  mov    %esi,0x8(%esp)
08724d61 +0x31:  mov    %edi,0xc(%esp)
08724d65 +0x35:  call   08724a90 <_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE>  ; __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const
08724d6a +0x3a:  mov    %eax,%edx
08724d6c +0x3c:  mov    $0x1,%eax
08724d71 +0x41:  test   %dl,%dl
08724d73 +0x43:  jne    08724d92 <+0x62>
08724d75 +0x45:  mov    0x8(%ebp),%ecx
08724d78 +0x48:  mov    0x8(%ecx),%eax
08724d7b +0x4b:  mov    0xc(%ebp),%ecx
08724d7e +0x4e:  mov    (%eax),%edx
08724d80 +0x50:  mov    %edi,0xc(%esp)
08724d84 +0x54:  mov    %esi,0x8(%esp)
08724d88 +0x58:  mov    %ecx,0x4(%esp)
08724d8c +0x5c:  mov    %eax,(%esp)
08724d8f +0x5f:  call   *0x18(%edx)
08724d92 +0x62:  mov    -0xc(%ebp),%ebx
08724d95 +0x65:  mov    -0x8(%ebp),%esi
08724d98 +0x68:  mov    -0x4(%ebp),%edi
08724d9b +0x6b:  mov    %ebp,%esp
08724d9d +0x6d:  pop    %ebp
08724d9e +0x6e:  ret
08724d9f +0x6f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__si_class_type_info::__do_upcast @ 0x8724d30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_upcast
          (__si_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(**(int **)(this + 8) + 0x18))(*(int **)(this + 8),param_1,param_2,param_3);
  }
  return uVar2;
}
```
