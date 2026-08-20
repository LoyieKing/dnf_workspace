# __do_upcast

`_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE`

`__cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__class_type_info` | `0x08724a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724a90  _ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE
#           __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const
# range [0x08724a90, 0x08724b0f]
08724a90 +0x00:  push   %ebp
08724a91 +0x01:  mov    %esp,%ebp
08724a93 +0x03:  sub    $0x18,%esp
08724a96 +0x06:  mov    0x8(%ebp),%eax
08724a99 +0x09:  mov    0xc(%ebp),%edx
08724a9c +0x0c:  mov    %ebx,-0x8(%ebp)
08724a9f +0x0f:  mov    %esi,-0x4(%ebp)
08724aa2 +0x12:  mov    0x14(%ebp),%esi
08724aa5 +0x15:  mov    0x4(%eax),%eax
08724aa8 +0x18:  mov    0x4(%edx),%edx
08724aab +0x1b:  call   08722df8 <__i686.get_pc_thunk.bx>
08724ab0 +0x20:  add    $0xc480e8,%ebx
08724ab6 +0x26:  cmp    %edx,%eax
08724ab8 +0x28:  je     08724ae0 <+0x50>
08724aba +0x2a:  cmpb   $0x2a,(%eax)
08724abd +0x2d:  je     08724acf <+0x3f>
08724abf +0x2f:  mov    %edx,0x4(%esp)
08724ac3 +0x33:  mov    %eax,(%esp)
08724ac6 +0x36:  call   0807e4e0 <_init+0xdd8>
08724acb +0x3b:  test   %eax,%eax
08724acd +0x3d:  je     08724ae0 <+0x50>
08724acf +0x3f:  mov    -0x8(%ebp),%ebx
08724ad2 +0x42:  xor    %eax,%eax
08724ad4 +0x44:  mov    -0x4(%ebp),%esi
08724ad7 +0x47:  mov    %ebp,%esp
08724ad9 +0x49:  pop    %ebp
08724ada +0x4a:  ret
08724adb +0x4b:  nop
08724adc +0x4c:  lea    0x0(%esi,%eiz,1),%esi
08724ae0 +0x50:  mov    0x10(%ebp),%eax
08724ae3 +0x53:  movl   $0x8,0xc(%esi)
08724aea +0x5a:  movl   $0x6,0x4(%esi)
08724af1 +0x61:  mov    %eax,(%esi)
08724af3 +0x63:  mov    $0x1,%eax
08724af8 +0x68:  mov    -0x8(%ebp),%ebx
08724afb +0x6b:  mov    -0x4(%ebp),%esi
08724afe +0x6e:  mov    %ebp,%esp
08724b00 +0x70:  pop    %ebp
08724b01 +0x71:  ret
08724b02 +0x72:  nop
08724b03 +0x73:  nop
08724b04 +0x74:  nop
08724b05 +0x75:  nop
08724b06 +0x76:  nop
08724b07 +0x77:  nop
08724b08 +0x78:  nop
08724b09 +0x79:  nop
08724b0a +0x7a:  nop
08724b0b +0x7b:  nop
08724b0c +0x7c:  nop
08724b0d +0x7d:  nop
08724b0e +0x7e:  nop
08724b0f +0x7f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__class_type_info::__do_upcast @ 0x8724a90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void *param_2,__upcast_result *param_3
          )

{
  char *__s1;
  int iVar1;
  
  __s1 = *(char **)(this + 4);
  if (__s1 != *(char **)(param_1 + 4)) {
    if (*__s1 != '*') {
      iVar1 = strcmp(__s1,*(char **)(param_1 + 4));
      if (iVar1 == 0) goto LAB_08724ae0;
    }
    return 0;
  }
LAB_08724ae0:
  *(undefined4 *)(param_3 + 0xc) = 8;
  *(undefined4 *)(param_3 + 4) = 6;
  *(void **)param_3 = param_2;
  return 1;
}
```
