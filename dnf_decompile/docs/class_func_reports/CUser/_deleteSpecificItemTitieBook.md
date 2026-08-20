# _deleteSpecificItemTitieBook

`_ZN5CUser28_deleteSpecificItemTitieBookERKSt6vectorISt4pairIiiESaIS2_EE`

`CUser::_deleteSpecificItemTitieBook(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867db66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867db66  _ZN5CUser28_deleteSpecificItemTitieBookERKSt6vectorISt4pairIiiESaIS2_EE
#           CUser::_deleteSpecificItemTitieBook(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0867db66, 0x0867db9f]
0867db66 +0x00:  push   %ebp
0867db67 +0x01:  mov    %esp,%ebp
0867db69 +0x03:  sub    $0x28,%esp
0867db6c +0x06:  movl   $0xe,0x4(%esp)
0867db74 +0x0e:  mov    0x8(%ebp),%eax
0867db77 +0x11:  mov    %eax,(%esp)
0867db7a +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0867db7f +0x19:  mov    %eax,-0xc(%ebp)
0867db82 +0x1c:  cmpl   $0x0,-0xc(%ebp)
0867db86 +0x20:  je     0867db9c <+0x36>
0867db88 +0x22:  mov    0xc(%ebp),%eax
0867db8b +0x25:  mov    %eax,0x4(%esp)
0867db8f +0x29:  mov    -0xc(%ebp),%eax
0867db92 +0x2c:  mov    %eax,(%esp)
0867db95 +0x2f:  call   0864125a <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE>  ; CTitleBook::deleteTimeoutItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867db9a +0x34:  jmp    0867db9d <+0x37>
0867db9c +0x36:  nop
0867db9d +0x37:  leave
0867db9e +0x38:  ret
0867db9f +0x39:  nop
```

## 反编译 C

```c
// CUser::_deleteSpecificItemTitieBook @ 0x867db66

/* CUser::_deleteSpecificItemTitieBook(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

void CUser::_deleteSpecificItemTitieBook(vector *param_1)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)GetCharacExpandData((CUser *)param_1,0xe);
  if (pvVar1 != (vector *)0x0) {
    CTitleBook::deleteTimeoutItem(pvVar1);
  }
  return;
}
```
