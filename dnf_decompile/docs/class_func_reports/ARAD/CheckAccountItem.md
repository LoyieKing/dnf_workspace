# CheckAccountItem

`_ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE`

`ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x08196ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08196ac8  _ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE
#           ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)
# range [0x08196ac8, 0x08196b02]
08196ac8 +0x00:  push   %ebp
08196ac9 +0x01:  mov    %esp,%ebp
08196acb +0x03:  sub    $0x18,%esp
08196ace +0x06:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
08196ad3 +0x0b:  mov    %eax,(%esp)
08196ad6 +0x0e:  call   08197eb6 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0xc1>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0xc1
08196adb +0x13:  mov    0x10(%ebp),%edx
08196ade +0x16:  mov    %edx,0x8(%esp)
08196ae2 +0x1a:  mov    0xc(%ebp),%edx
08196ae5 +0x1d:  mov    %edx,0x4(%esp)
08196ae9 +0x21:  mov    %eax,(%esp)
08196aec +0x24:  call   081a2310 <_ZN17PurchaseLimitItem4findEjRNS_4InfoE>  ; PurchaseLimitItem::find(unsigned int, PurchaseLimitItem::Info&)
08196af1 +0x29:  test   %al,%al
08196af3 +0x2b:  je     08196afc <+0x34>
08196af5 +0x2d:  mov    $0x0,%eax
08196afa +0x32:  jmp    08196b01 <+0x39>
08196afc +0x34:  mov    $0x1,%eax
08196b01 +0x39:  leave
08196b02 +0x3a:  ret
```

## 反编译 C

```c
// ARAD::CheckAccountItem @ 0x8196ac8

/* ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&) */

bool ARAD::CheckAccountItem(CUser *param_1,uint param_2,Info *param_3)

{
  char cVar1;
  Arad_DataManager *this;
  PurchaseLimitItem *this_00;
  
  this = (Arad_DataManager *)Singleton<ARAD::Arad_DataManager>::Get();
  this_00 = (PurchaseLimitItem *)Arad_DataManager::getPurchaseLimitItem(this);
  cVar1 = PurchaseLimitItem::find(this_00,param_2,param_3);
  return cVar1 == '\0';
}
```
