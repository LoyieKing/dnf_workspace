# RecordBuy

`_ZN10secretshop20CSecretShopStatistic9RecordBuyEii`

`secretshop::CSecretShopStatistic::RecordBuy(int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShopStatistic` | `0x085fd0d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fd0d4  _ZN10secretshop20CSecretShopStatistic9RecordBuyEii
#           secretshop::CSecretShopStatistic::RecordBuy(int, int)
# range [0x085fd0d4, 0x085fd107]
085fd0d4 +0x00:  push   %ebp
085fd0d5 +0x01:  mov    %esp,%ebp
085fd0d7 +0x03:  sub    $0x28,%esp
085fd0da +0x06:  mov    0x10(%ebp),%eax
085fd0dd +0x09:  mov    %eax,0x8(%esp)
085fd0e1 +0x0d:  mov    0xc(%ebp),%eax
085fd0e4 +0x10:  mov    %eax,0x4(%esp)
085fd0e8 +0x14:  mov    0x8(%ebp),%eax
085fd0eb +0x17:  mov    %eax,(%esp)
085fd0ee +0x1a:  call   085fd13e <_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii>  ; secretshop::CSecretShopStatistic::GetDungeonData(int, int)
085fd0f3 +0x1f:  mov    %eax,-0xc(%ebp)
085fd0f6 +0x22:  mov    -0xc(%ebp),%eax
085fd0f9 +0x25:  mov    0xc(%eax),%eax
085fd0fc +0x28:  lea    0x1(%eax),%edx
085fd0ff +0x2b:  mov    -0xc(%ebp),%eax
085fd102 +0x2e:  mov    %edx,0xc(%eax)
085fd105 +0x31:  leave
085fd106 +0x32:  ret
085fd107 +0x33:  nop
```

## 反编译 C

```c
// secretshop::CSecretShopStatistic::RecordBuy @ 0x85fd0d4

/* secretshop::CSecretShopStatistic::RecordBuy(int, int) */

void __thiscall
secretshop::CSecretShopStatistic::RecordBuy(CSecretShopStatistic *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetDungeonData(this,param_1,param_2);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}
```
