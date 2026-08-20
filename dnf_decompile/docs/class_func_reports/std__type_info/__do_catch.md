# __do_catch

`_ZNKSt9type_info10__do_catchEPKS_PPvj`

`std::type_info::__do_catch(std::type_info const*, void**, unsigned int) const`

| 类 | 地址 |
|---|---|
| `std::type_info` | `0x08724750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724750  _ZNKSt9type_info10__do_catchEPKS_PPvj
#           std::type_info::__do_catch(std::type_info const*, void**, unsigned int) const
# range [0x08724750, 0x0872479f]
08724750 +0x00:  push   %ebp
08724751 +0x01:  mov    %esp,%ebp
08724753 +0x03:  push   %ebx
08724754 +0x04:  sub    $0x14,%esp
08724757 +0x07:  mov    0x8(%ebp),%eax
0872475a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0872475f +0x0f:  add    $0xc48439,%ebx
08724765 +0x15:  mov    0x4(%eax),%edx
08724768 +0x18:  mov    0xc(%ebp),%eax
0872476b +0x1b:  mov    0x4(%eax),%ecx
0872476e +0x1e:  mov    $0x1,%eax
08724773 +0x23:  cmp    %ecx,%edx
08724775 +0x25:  je     0872478f <+0x3f>
08724777 +0x27:  xor    %eax,%eax
08724779 +0x29:  cmpb   $0x2a,(%edx)
0872477c +0x2c:  je     0872478f <+0x3f>
0872477e +0x2e:  mov    %ecx,0x4(%esp)
08724782 +0x32:  mov    %edx,(%esp)
08724785 +0x35:  call   0807e4e0 <_init+0xdd8>
0872478a +0x3a:  test   %eax,%eax
0872478c +0x3c:  sete   %al
0872478f +0x3f:  add    $0x14,%esp
08724792 +0x42:  pop    %ebx
08724793 +0x43:  pop    %ebp
08724794 +0x44:  ret
08724795 +0x45:  nop
08724796 +0x46:  nop
08724797 +0x47:  nop
08724798 +0x48:  nop
08724799 +0x49:  nop
0872479a +0x4a:  nop
0872479b +0x4b:  nop
0872479c +0x4c:  nop
0872479d +0x4d:  nop
0872479e +0x4e:  nop
0872479f +0x4f:  nop
```

## 反编译 C

```c
// std::type_info::__do_catch @ 0x8724750

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

bool std::type_info::__do_catch(type_info *param_1,void **param_2,uint param_3)

{
  char *__s1;
  int iVar1;
  bool bVar2;
  
  __s1 = *(char **)(param_1 + 4);
  bVar2 = true;
  if ((__s1 != param_2[1]) && (bVar2 = false, *__s1 != '*')) {
    iVar1 = strcmp(__s1,param_2[1]);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}
```
