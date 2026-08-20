# RecordPrice

`_ZN10secretshop20CSecretShopStatistic11RecordPriceEiii`

`secretshop::CSecretShopStatistic::RecordPrice(int, int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShopStatistic` | `0x085fd108` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fd108  _ZN10secretshop20CSecretShopStatistic11RecordPriceEiii
#           secretshop::CSecretShopStatistic::RecordPrice(int, int, int)
# range [0x085fd108, 0x085fd13d]
085fd108 +0x00:  push   %ebp
085fd109 +0x01:  mov    %esp,%ebp
085fd10b +0x03:  sub    $0x28,%esp
085fd10e +0x06:  mov    0x10(%ebp),%eax
085fd111 +0x09:  mov    %eax,0x8(%esp)
085fd115 +0x0d:  mov    0xc(%ebp),%eax
085fd118 +0x10:  mov    %eax,0x4(%esp)
085fd11c +0x14:  mov    0x8(%ebp),%eax
085fd11f +0x17:  mov    %eax,(%esp)
085fd122 +0x1a:  call   085fd13e <_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii>  ; secretshop::CSecretShopStatistic::GetDungeonData(int, int)
085fd127 +0x1f:  mov    %eax,-0xc(%ebp)
085fd12a +0x22:  mov    -0xc(%ebp),%eax
085fd12d +0x25:  mov    0x10(%eax),%eax
085fd130 +0x28:  mov    %eax,%edx
085fd132 +0x2a:  add    0x14(%ebp),%edx
085fd135 +0x2d:  mov    -0xc(%ebp),%eax
085fd138 +0x30:  mov    %edx,0x10(%eax)
085fd13b +0x33:  leave
085fd13c +0x34:  ret
085fd13d +0x35:  nop
```

## 反编译 C

```c
// secretshop::CSecretShopStatistic::RecordPrice @ 0x85fd108

/* secretshop::CSecretShopStatistic::RecordPrice(int, int, int) */

void __thiscall
secretshop::CSecretShopStatistic::RecordPrice
          (CSecretShopStatistic *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetDungeonData(this,param_1,param_2);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + param_3;
  return;
}
```
