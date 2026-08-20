# get_level_exp_percent

`_ZNK12CDataManager21get_level_exp_percentEii`

`CDataManager::get_level_exp_percent(int, int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083604fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083604fe  _ZNK12CDataManager21get_level_exp_percentEii
#           CDataManager::get_level_exp_percent(int, int) const
# range [0x083604fe, 0x0836053b]
083604fe +0x00:  push   %ebp
083604ff +0x01:  mov    %esp,%ebp
08360501 +0x03:  sub    $0x18,%esp
08360504 +0x06:  mov    0xc(%ebp),%eax
08360507 +0x09:  mov    %eax,0x4(%esp)
0836050b +0x0d:  mov    0x8(%ebp),%eax
0836050e +0x10:  mov    %eax,(%esp)
08360511 +0x13:  call   083604b6 <_ZNK12CDataManager21get_level_section_expEi>  ; CDataManager::get_level_section_exp(int) const
08360516 +0x18:  mov    %eax,-0x4(%ebp)
08360519 +0x1b:  mov    -0x4(%ebp),%eax
0836051c +0x1e:  mov    %eax,%ecx
0836051e +0x20:  imul   0x10(%ebp),%ecx
08360522 +0x24:  mov    $0x51eb851f,%edx
08360527 +0x29:  mov    %ecx,%eax
08360529 +0x2b:  imul   %edx
0836052b +0x2d:  sar    $0x5,%edx
0836052e +0x30:  mov    %ecx,%eax
08360530 +0x32:  sar    $0x1f,%eax
08360533 +0x35:  mov    %edx,%ecx
08360535 +0x37:  sub    %eax,%ecx
08360537 +0x39:  mov    %ecx,%eax
08360539 +0x3b:  leave
0836053a +0x3c:  ret
0836053b +0x3d:  nop
```

## 反编译 C

```c
// CDataManager::get_level_exp_percent @ 0x83604fe

/* CDataManager::get_level_exp_percent(int, int) const */

int __thiscall CDataManager::get_level_exp_percent(CDataManager *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = get_level_section_exp(this,param_1);
  return (iVar1 * param_2) / 100;
}
```
