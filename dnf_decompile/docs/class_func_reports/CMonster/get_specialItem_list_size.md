# get_specialItem_list_size

`_ZNK8CMonster25get_specialItem_list_sizeEj`

`CMonster::get_specialItem_list_size(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CMonster` | `0x0834f746` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f746  _ZNK8CMonster25get_specialItem_list_sizeEj
#           CMonster::get_specialItem_list_size(unsigned int) const
# range [0x0834f746, 0x0834f775]
0834f746 +0x00:  push   %ebp
0834f747 +0x01:  mov    %esp,%ebp
0834f749 +0x03:  sub    $0x18,%esp
0834f74c +0x06:  cmpl   $0x3,0xc(%ebp)
0834f750 +0x0a:  ja     0834f76e <+0x28>
0834f752 +0x0c:  mov    0xc(%ebp),%edx
0834f755 +0x0f:  mov    %edx,%eax
0834f757 +0x11:  add    %eax,%eax
0834f759 +0x13:  add    %edx,%eax
0834f75b +0x15:  shl    $0x2,%eax
0834f75e +0x18:  add    0x8(%ebp),%eax
0834f761 +0x1b:  add    $0x8,%eax
0834f764 +0x1e:  mov    %eax,(%esp)
0834f767 +0x21:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0834f76c +0x26:  jmp    0834f773 <+0x2d>
0834f76e +0x28:  mov    $0x0,%eax
0834f773 +0x2d:  leave
0834f774 +0x2e:  ret
0834f775 +0x2f:  nop
```

## 反编译 C

```c
// CMonster::get_specialItem_list_size @ 0x834f746

/* CMonster::get_specialItem_list_size(unsigned int) const */

undefined4 __thiscall CMonster::get_specialItem_list_size(CMonster *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (this + param_1 * 0xc + 8));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
