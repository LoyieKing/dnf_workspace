# RecordShow

`_ZN10secretshop20CSecretShopStatistic10RecordShowEiii`

`secretshop::CSecretShopStatistic::RecordShow(int, int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShopStatistic` | `0x085fd090` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fd090  _ZN10secretshop20CSecretShopStatistic10RecordShowEiii
#           secretshop::CSecretShopStatistic::RecordShow(int, int, int)
# range [0x085fd090, 0x085fd0d3]
085fd090 +0x00:  push   %ebp
085fd091 +0x01:  mov    %esp,%ebp
085fd093 +0x03:  sub    $0x28,%esp
085fd096 +0x06:  mov    0x10(%ebp),%eax
085fd099 +0x09:  mov    %eax,0x8(%esp)
085fd09d +0x0d:  mov    0xc(%ebp),%eax
085fd0a0 +0x10:  mov    %eax,0x4(%esp)
085fd0a4 +0x14:  mov    0x8(%ebp),%eax
085fd0a7 +0x17:  mov    %eax,(%esp)
085fd0aa +0x1a:  call   085fd13e <_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii>  ; secretshop::CSecretShopStatistic::GetDungeonData(int, int)
085fd0af +0x1f:  mov    %eax,-0xc(%ebp)
085fd0b2 +0x22:  mov    -0xc(%ebp),%eax
085fd0b5 +0x25:  mov    0x4(%eax),%eax
085fd0b8 +0x28:  lea    0x1(%eax),%edx
085fd0bb +0x2b:  mov    -0xc(%ebp),%eax
085fd0be +0x2e:  mov    %edx,0x4(%eax)
085fd0c1 +0x31:  mov    -0xc(%ebp),%eax
085fd0c4 +0x34:  mov    0x8(%eax),%eax
085fd0c7 +0x37:  mov    %eax,%edx
085fd0c9 +0x39:  add    0x14(%ebp),%edx
085fd0cc +0x3c:  mov    -0xc(%ebp),%eax
085fd0cf +0x3f:  mov    %edx,0x8(%eax)
085fd0d2 +0x42:  leave
085fd0d3 +0x43:  ret
```

## 反编译 C

```c
// secretshop::CSecretShopStatistic::RecordShow @ 0x85fd090

/* secretshop::CSecretShopStatistic::RecordShow(int, int, int) */

void __thiscall
secretshop::CSecretShopStatistic::RecordShow
          (CSecretShopStatistic *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetDungeonData(this,param_1,param_2);
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + param_3;
  return;
}
```
