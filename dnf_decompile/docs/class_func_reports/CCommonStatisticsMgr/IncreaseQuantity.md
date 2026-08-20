# IncreaseQuantity

`_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi`

`CCommonStatisticsMgr::IncreaseQuantity(CCommonStatisticsMgr::ENUM_STATISTIC_CONTAINER, int)`

| 类 | 地址 |
|---|---|
| `CCommonStatisticsMgr` | `0x0860e838` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e838  _ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi
#           CCommonStatisticsMgr::IncreaseQuantity(CCommonStatisticsMgr::ENUM_STATISTIC_CONTAINER, int)
# range [0x0860e838, 0x0860e86d]
0860e838 +0x00:  push   %ebp
0860e839 +0x01:  mov    %esp,%ebp
0860e83b +0x03:  sub    $0x18,%esp
0860e83e +0x06:  mov    0xc(%ebp),%eax
0860e841 +0x09:  test   %eax,%eax
0860e843 +0x0b:  js     0860e867 <+0x2f>
0860e845 +0x0d:  mov    0xc(%ebp),%eax
0860e848 +0x10:  cmp    $0x2,%eax
0860e84b +0x13:  jg     0860e86a <+0x32>
0860e84d +0x15:  mov    0xc(%ebp),%edx
0860e850 +0x18:  mov    0x8(%ebp),%eax
0860e853 +0x1b:  mov    (%eax,%edx,4),%eax
0860e856 +0x1e:  mov    0x10(%ebp),%edx
0860e859 +0x21:  mov    %edx,0x4(%esp)
0860e85d +0x25:  mov    %eax,(%esp)
0860e860 +0x28:  call   0860e7f8 <_ZN19CStatisticContainer16IncreaseQuantityEi>  ; CStatisticContainer::IncreaseQuantity(int)
0860e865 +0x2d:  jmp    0860e86b <+0x33>
0860e867 +0x2f:  nop
0860e868 +0x30:  jmp    0860e86b <+0x33>
0860e86a +0x32:  nop
0860e86b +0x33:  leave
0860e86c +0x34:  ret
0860e86d +0x35:  nop
```

## 反编译 C

```c
// CCommonStatisticsMgr::IncreaseQuantity @ 0x860e838

/* CCommonStatisticsMgr::IncreaseQuantity(CCommonStatisticsMgr::ENUM_STATISTIC_CONTAINER, int) */

void CCommonStatisticsMgr::IncreaseQuantity(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 3)) {
    CStatisticContainer::IncreaseQuantity(*(int *)(param_1 + param_2 * 4));
  }
  return;
}
```
