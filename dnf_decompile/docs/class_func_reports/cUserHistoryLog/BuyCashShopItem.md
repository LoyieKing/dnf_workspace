# BuyCashShopItem

`_ZN15cUserHistoryLog15BuyCashShopItemEjmjPKccN19CeraShopPaymentType1TEy`

`cUserHistoryLog::BuyCashShopItem(unsigned int, unsigned long, unsigned int, char const*, char, CeraShopPaymentType::T, unsigned long long)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686ea0  _ZN15cUserHistoryLog15BuyCashShopItemEjmjPKccN19CeraShopPaymentType1TEy
#           cUserHistoryLog::BuyCashShopItem(unsigned int, unsigned long, unsigned int, char const*, char, CeraShopPaymentType::T, unsigned long long)
# range [0x08686ea0, 0x08686f1d]
08686ea0 +0x00:  push   %ebp
08686ea1 +0x01:  mov    %esp,%ebp
08686ea3 +0x03:  push   %ebx
08686ea4 +0x04:  sub    $0x44,%esp
08686ea7 +0x07:  mov    0x1c(%ebp),%eax
08686eaa +0x0a:  mov    %al,-0xc(%ebp)
08686ead +0x0d:  mov    0x24(%ebp),%eax
08686eb0 +0x10:  mov    %eax,-0x18(%ebp)
08686eb3 +0x13:  mov    0x28(%ebp),%eax
08686eb6 +0x16:  mov    %eax,-0x14(%ebp)
08686eb9 +0x19:  movl   $0x0,0x8(%esp)
08686ec1 +0x21:  mov    -0x18(%ebp),%eax
08686ec4 +0x24:  mov    -0x14(%ebp),%edx
08686ec7 +0x27:  mov    %eax,(%esp)
08686eca +0x2a:  mov    %edx,0x4(%esp)
08686ece +0x2e:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08686ed3 +0x33:  mov    0x20(%ebp),%ebx
08686ed6 +0x36:  movsbl -0xc(%ebp),%ecx
08686eda +0x3a:  mov    0x8(%ebp),%edx
08686edd +0x3d:  mov    (%edx),%edx
08686edf +0x3f:  mov    %eax,0x20(%esp)
08686ee3 +0x43:  mov    %ebx,0x1c(%esp)
08686ee7 +0x47:  mov    %ecx,0x18(%esp)
08686eeb +0x4b:  mov    0x18(%ebp),%eax
08686eee +0x4e:  mov    %eax,0x14(%esp)
08686ef2 +0x52:  mov    0x14(%ebp),%eax
08686ef5 +0x55:  mov    %eax,0x10(%esp)
08686ef9 +0x59:  mov    0x10(%ebp),%eax
08686efc +0x5c:  mov    %eax,0xc(%esp)
08686f00 +0x60:  mov    0xc(%ebp),%eax
08686f03 +0x63:  mov    %eax,0x8(%esp)
08686f07 +0x67:  movl   $"BuyCashItem, %u, %u, %u, %s, %d, %d, %s",0x4(%esp)
08686f0f +0x6f:  mov    %edx,(%esp)
08686f12 +0x72:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686f17 +0x77:  add    $0x44,%esp
08686f1a +0x7a:  pop    %ebx
08686f1b +0x7b:  pop    %ebp
08686f1c +0x7c:  ret
08686f1d +0x7d:  nop
```

## 反编译 C

```c
// cUserHistoryLog::BuyCashShopItem @ 0x8686ea0

/* cUserHistoryLog::BuyCashShopItem(unsigned int, unsigned long, unsigned int, char const*, char,
   CeraShopPaymentType::T, unsigned long long) */

void cUserHistoryLog::BuyCashShopItem
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,char param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9)

{
  undefined4 uVar1;
  
  uVar1 = NumberToString(CONCAT44(param_9,param_8),0);
  CUser::LogHistory((CUser *)*param_1,"BuyCashItem, %u, %u, %u, %s, %d, %d, %s",param_2,param_3,
                    param_4,param_5,(int)param_6,param_7,uVar1);
  return;
}
```
