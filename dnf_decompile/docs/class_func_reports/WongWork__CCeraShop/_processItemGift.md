# _processItemGift

`_ZN8WongWork9CCeraShop16_processItemGiftEP5CUser10Inven_Itemji`

`WongWork::CCeraShop::_processItemGift(CUser*, Inven_Item, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x083264d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083264d6  _ZN8WongWork9CCeraShop16_processItemGiftEP5CUser10Inven_Itemji
#           WongWork::CCeraShop::_processItemGift(CUser*, Inven_Item, unsigned int, int)
# range [0x083264d6, 0x083265e7]
083264d6 +0x000:  push   %ebp
083264d7 +0x001:  mov    %esp,%ebp
083264d9 +0x003:  push   %edi
083264da +0x004:  push   %ebx
083264db +0x005:  sub    $0x120,%esp
083264e1 +0x00b:  lea    -0x108(%ebp),%ebx
083264e7 +0x011:  mov    $0x0,%eax
083264ec +0x016:  mov    $0x40,%edx
083264f1 +0x01b:  mov    %ebx,%edi
083264f3 +0x01d:  mov    %edx,%ecx
083264f5 +0x01f:  rep stos %eax,%es:(%edi)
083264f7 +0x021:  mov    0xc(%ebp),%eax
083264fa +0x024:  mov    %eax,(%esp)
083264fd +0x027:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08326502 +0x02c:  mov    %eax,%ebx
08326504 +0x02e:  movl   $0x0,0xc(%esp)
0832650c +0x036:  movl   $"game_server_msg_02",0x8(%esp)
08326514 +0x03e:  movl   $0x4,0x4(%esp)
0832651c +0x046:  movl   $&g_scriptStringManager_,(%esp)
08326523 +0x04d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08326528 +0x052:  mov    %ebx,0x8(%esp)
0832652c +0x056:  mov    %eax,0x4(%esp)
08326530 +0x05a:  lea    -0x108(%ebp),%eax
08326536 +0x060:  mov    %eax,(%esp)
08326539 +0x063:  call   0807e440 <_init+0xd38>
0832653e +0x068:  mov    0x17(%ebp),%eax
08326541 +0x06b:  mov    %eax,%ecx
08326543 +0x06d:  mov    0x12(%ebp),%edx
08326546 +0x070:  mov    0x54(%ebp),%eax
08326549 +0x073:  mov    0xc(%ebp),%ebx
0832654c +0x076:  add    $0x79700,%ebx
08326552 +0x07c:  mov    %ecx,0x10(%esp)
08326556 +0x080:  mov    %edx,0xc(%esp)
0832655a +0x084:  movl   $0x0,0x8(%esp)
08326562 +0x08c:  mov    %eax,0x4(%esp)
08326566 +0x090:  mov    %ebx,(%esp)
08326569 +0x093:  call   086848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>  ; cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int)
0832656e +0x098:  mov    0x17(%ebp),%eax
08326571 +0x09b:  mov    %eax,%ecx
08326573 +0x09d:  mov    0x12(%ebp),%edx
08326576 +0x0a0:  mov    0x54(%ebp),%eax
08326579 +0x0a3:  mov    %ecx,0x10(%esp)
0832657d +0x0a7:  mov    %edx,0xc(%esp)
08326581 +0x0ab:  mov    %eax,0x8(%esp)
08326585 +0x0af:  mov    0x50(%ebp),%eax
08326588 +0x0b2:  mov    %eax,0x4(%esp)
0832658c +0x0b6:  mov    0xc(%ebp),%eax
0832658f +0x0b9:  mov    %eax,(%esp)
08326592 +0x0bc:  call   0868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>  ; CUser::SendCeraShopGiftStatisticLog(unsigned int, unsigned int, unsigned long, unsigned int)
08326597 +0x0c1:  lea    -0x108(%ebp),%eax
0832659d +0x0c7:  mov    %eax,(%esp)
083265a0 +0x0ca:  call   0807e3b0 <_init+0xca8>
083265a5 +0x0cf:  mov    %eax,%edx
083265a7 +0x0d1:  mov    0x54(%ebp),%eax
083265aa +0x0d4:  mov    %edx,0x18(%esp)
083265ae +0x0d8:  lea    -0x108(%ebp),%edx
083265b4 +0x0de:  mov    %edx,0x14(%esp)
083265b8 +0x0e2:  movl   $0x1,0x10(%esp)
083265c0 +0x0ea:  mov    %eax,0xc(%esp)
083265c4 +0x0ee:  movl   $0x0,0x8(%esp)
083265cc +0x0f6:  lea    0x10(%ebp),%eax
083265cf +0x0f9:  mov    %eax,0x4(%esp)
083265d3 +0x0fd:  mov    0xc(%ebp),%eax
083265d6 +0x100:  mov    %eax,(%esp)
083265d9 +0x103:  call   08556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
083265de +0x108:  add    $0x120,%esp
083265e4 +0x10e:  pop    %ebx
083265e5 +0x10f:  pop    %edi
083265e6 +0x110:  pop    %ebp
083265e7 +0x111:  ret
```

## 反编译 C

> （该函数反编译 C 未生成）
