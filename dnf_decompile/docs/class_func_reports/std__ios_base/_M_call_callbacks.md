# _M_call_callbacks

`_ZNSt8ios_base17_M_call_callbacksENS_5eventE`

`std::ios_base::_M_call_callbacks(std::ios_base::event)`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x08726e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726e50  _ZNSt8ios_base17_M_call_callbacksENS_5eventE
#           std::ios_base::_M_call_callbacks(std::ios_base::event)
# range [0x08726e50, 0x08726eaf]
08726e50 +0x00:  push   %ebp
08726e51 +0x01:  mov    %esp,%ebp
08726e53 +0x03:  push   %edi
08726e54 +0x04:  push   %esi
08726e55 +0x05:  push   %ebx
08726e56 +0x06:  sub    $0x1c,%esp
08726e59 +0x09:  mov    0x8(%ebp),%esi
08726e5c +0x0c:  mov    0xc(%ebp),%edi
08726e5f +0x0f:  mov    0x18(%esi),%ebx
08726e62 +0x12:  test   %ebx,%ebx
08726e64 +0x14:  je     08726e7f <+0x2f>
08726e66 +0x16:  xchg   %ax,%ax
08726e68 +0x18:  mov    0x8(%ebx),%eax
08726e6b +0x1b:  mov    %esi,0x4(%esp)
08726e6f +0x1f:  mov    %edi,(%esp)
08726e72 +0x22:  mov    %eax,0x8(%esp)
08726e76 +0x26:  call   *0x4(%ebx)
08726e79 +0x29:  mov    (%ebx),%ebx
08726e7b +0x2b:  test   %ebx,%ebx
08726e7d +0x2d:  jne    08726e68 <+0x18>
08726e7f +0x2f:  add    $0x1c,%esp
08726e82 +0x32:  pop    %ebx
08726e83 +0x33:  pop    %esi
08726e84 +0x34:  pop    %edi
08726e85 +0x35:  pop    %ebp
08726e86 +0x36:  ret
08726e87 +0x37:  mov    %eax,(%esp)
08726e8a +0x3a:  call   08725ce0 <__cxa_begin_catch>
08726e8f +0x3f:  call   08725c30 <__cxa_end_catch>
08726e94 +0x44:  jmp    08726e79 <+0x29>
08726e96 +0x46:  cmp    $0xffffffff,%edx
08726e99 +0x49:  je     08726ea5 <+0x55>
08726e9b +0x4b:  mov    %eax,(%esp)
08726e9e +0x4e:  xchg   %ax,%ax
08726ea0 +0x50:  call   08ae3750 <_Unwind_Resume>
08726ea5 +0x55:  mov    %eax,(%esp)
08726ea8 +0x58:  call   08723df0 <__cxa_call_unexpected>
08726ead +0x5d:  nop
08726eae +0x5e:  nop
08726eaf +0x5f:  nop
```

## 反编译 C

```c
// std::ios_base::_M_call_callbacks @ 0x8726e50

/* std::ios_base::_M_call_callbacks(std::ios_base::event) */

void __thiscall std::ios_base::_M_call_callbacks(ios_base *this,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(this + 0x18); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
                    /* try { // try from 08726e76 to 08726e78 has its CatchHandler @ 08726e87 */
    (*(code *)puVar1[1])(param_2,this,puVar1[2]);
  }
  return;
}
```
