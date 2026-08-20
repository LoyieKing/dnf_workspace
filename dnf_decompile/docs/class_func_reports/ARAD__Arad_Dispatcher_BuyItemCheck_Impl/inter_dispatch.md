# inter_dispatch

`_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl14inter_dispatchEP5CUserPci`

`ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_BuyItemCheck_Impl` | `0x0818ea3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ea3e  _ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl14inter_dispatchEP5CUserPci
#           ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch(CUser*, char*, int)
# range [0x0818ea3e, 0x0818eb0b]
0818ea3e +0x00:  push   %ebp
0818ea3f +0x01:  mov    %esp,%ebp
0818ea41 +0x03:  sub    $0x38,%esp
0818ea44 +0x06:  mov    0x10(%ebp),%eax
0818ea47 +0x09:  mov    %eax,-0xc(%ebp)
0818ea4a +0x0c:  mov    -0xc(%ebp),%eax
0818ea4d +0x0f:  movzbl (%eax),%eax
0818ea50 +0x12:  xor    $0x1,%eax
0818ea53 +0x15:  test   %al,%al
0818ea55 +0x17:  je     0818eaa2 <+0x64>
0818ea57 +0x19:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
0818ea5c +0x1e:  movl   $0x0,0x1c(%esp)
0818ea64 +0x26:  movl   $0x1,0x18(%esp)
0818ea6c +0x2e:  movl   $0x1,0x14(%esp)
0818ea74 +0x36:  movl   $0x0,0x10(%esp)
0818ea7c +0x3e:  movl   $0x0,0xc(%esp)
0818ea84 +0x46:  movl   $0x74,0x8(%esp)
0818ea8c +0x4e:  mov    0xc(%ebp),%edx
0818ea8f +0x51:  mov    %edx,0x4(%esp)
0818ea93 +0x55:  mov    %eax,(%esp)
0818ea96 +0x58:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
0818ea9b +0x5d:  mov    $0x0,%eax
0818eaa0 +0x62:  jmp    0818eb09 <+0xcb>
0818eaa2 +0x64:  mov    -0xc(%ebp),%eax
0818eaa5 +0x67:  lea    0x1(%eax),%edx
0818eaa8 +0x6a:  mov    &_ZN10GlobalData21s_pItemVendingMachineE,%eax
0818eaad +0x6f:  mov    %edx,0x8(%esp)
0818eab1 +0x73:  mov    0xc(%ebp),%edx
0818eab4 +0x76:  mov    %edx,0x4(%esp)
0818eab8 +0x7a:  mov    %eax,(%esp)
0818eabb +0x7d:  call   0854c4d0 <_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM>  ; ItemVendingMachine::BuyItem(CUser*, MSG_BUY_CERASHOP_ITEM const&)
0818eac0 +0x82:  xor    $0x1,%eax
0818eac3 +0x85:  test   %al,%al
0818eac5 +0x87:  je     0818eb04 <+0xc6>
0818eac7 +0x89:  mov    -0xc(%ebp),%eax
0818eaca +0x8c:  mov    0x3a(%eax),%eax
0818eacd +0x8f:  mov    %eax,0x14(%esp)
0818ead1 +0x93:  movl   $"[ERROR] BuyItem() Result Error ItemIdx(%d)",0x10(%esp)
0818ead9 +0x9b:  movl   $0x40,0xc(%esp)
0818eae1 +0xa3:  movl   $&_ZZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl14inter_dispatchEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
0818eae9 +0xab:  movl   $"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",0x4(%esp)
0818eaf1 +0xb3:  movl   $0x1,(%esp)
0818eaf8 +0xba:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818eafd +0xbf:  mov    $0xffffffff,%eax
0818eb02 +0xc4:  jmp    0818eb09 <+0xcb>
0818eb04 +0xc6:  mov    $0x0,%eax
0818eb09 +0xcb:  leave
0818eb0a +0xcc:  ret
0818eb0b +0xcd:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch @ 0x818ea3e

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch(CUser*, char*, int) */

undefined4
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)param_3 == '\x01') {
    cVar1 = ItemVendingMachine::BuyItem
                      (GlobalData::s_pItemVendingMachine,(CUser *)param_2,
                       (MSG_BUY_CERASHOP_ITEM *)(param_3 + 1));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",
                 "virtual int ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch(CUser*, char*, int)"
                 ,0x40,"[ERROR] BuyItem() Result Error ItemIdx(%d)",*(undefined4 *)(param_3 + 0x3a))
      ;
      uVar2 = 0xffffffff;
    }
  }
  else {
    WongWork::CCeraShop::ProcessError(GlobalData::s_pCeraShop,(CUser *)param_2,0x74,0,0,1,1,'\0');
    uVar2 = 0;
  }
  return uVar2;
}
```
