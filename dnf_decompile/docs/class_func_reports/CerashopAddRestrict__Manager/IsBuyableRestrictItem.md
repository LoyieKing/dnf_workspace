# IsBuyableRestrictItem

`_ZN19CerashopAddRestrict7Manager21IsBuyableRestrictItemEP5CUserjji`

`CerashopAddRestrict::Manager::IsBuyableRestrictItem(CUser*, unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0ce2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0ce2  _ZN19CerashopAddRestrict7Manager21IsBuyableRestrictItemEP5CUserjji
#           CerashopAddRestrict::Manager::IsBuyableRestrictItem(CUser*, unsigned int, unsigned int, int)
# range [0x080e0ce2, 0x080e0d13]
080e0ce2 +0x00:  push   %ebp
080e0ce3 +0x01:  mov    %esp,%ebp
080e0ce5 +0x03:  sub    $0x28,%esp
080e0ce8 +0x06:  call   080e274d <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4f3>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4f3
080e0ced +0x0b:  mov    0x14(%ebp),%edx
080e0cf0 +0x0e:  mov    %edx,0x10(%esp)
080e0cf4 +0x12:  mov    0x10(%ebp),%edx
080e0cf7 +0x15:  mov    %edx,0xc(%esp)
080e0cfb +0x19:  mov    0xc(%ebp),%edx
080e0cfe +0x1c:  mov    %edx,0x8(%esp)
080e0d02 +0x20:  mov    0x8(%ebp),%edx
080e0d05 +0x23:  mov    %edx,0x4(%esp)
080e0d09 +0x27:  mov    %eax,(%esp)
080e0d0c +0x2a:  call   080e0bee <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji>  ; CerashopAddRestrict::Manager::CheckBuyableProduct(CUser*, unsigned int, unsigned int, int)
080e0d11 +0x2f:  leave
080e0d12 +0x30:  ret
080e0d13 +0x31:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::IsBuyableRestrictItem @ 0x80e0ce2

/* CerashopAddRestrict::Manager::IsBuyableRestrictItem(CUser*, unsigned int, unsigned int, int) */

void CerashopAddRestrict::Manager::IsBuyableRestrictItem
               (CUser *param_1,uint param_2,uint param_3,int param_4)

{
  Manager *this;
  
  this = (Manager *)ARAD::Singleton<CerashopAddRestrict::Manager>::Get();
  CheckBuyableProduct(this,param_1,param_2,param_3,param_4);
  return;
}
```
