# _processCreatureGift

`_ZN8WongWork9CCeraShop20_processCreatureGiftEP5CUser10Inven_Itemjiii`

`WongWork::CCeraShop::_processCreatureGift(CUser*, Inven_Item, unsigned int, int, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x083265e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083265e8  _ZN8WongWork9CCeraShop20_processCreatureGiftEP5CUser10Inven_Itemjiii
#           WongWork::CCeraShop::_processCreatureGift(CUser*, Inven_Item, unsigned int, int, int, int)
# range [0x083265e8, 0x08326738]
083265e8 +0x000:  push   %ebp
083265e9 +0x001:  mov    %esp,%ebp
083265eb +0x003:  push   %edi
083265ec +0x004:  push   %ebx
083265ed +0x005:  sub    $0x120,%esp
083265f3 +0x00b:  lea    -0x108(%ebp),%ebx
083265f9 +0x011:  mov    $0x0,%eax
083265fe +0x016:  mov    $0x40,%edx
08326603 +0x01b:  mov    %ebx,%edi
08326605 +0x01d:  mov    %edx,%ecx
08326607 +0x01f:  rep stos %eax,%es:(%edi)
08326609 +0x021:  mov    0xc(%ebp),%eax
0832660c +0x024:  mov    %eax,(%esp)
0832660f +0x027:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08326614 +0x02c:  mov    %eax,%ebx
08326616 +0x02e:  movl   $0x0,0xc(%esp)
0832661e +0x036:  movl   $"game_server_msg_02",0x8(%esp)
08326626 +0x03e:  movl   $0x4,0x4(%esp)
0832662e +0x046:  movl   $&g_scriptStringManager_,(%esp)
08326635 +0x04d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0832663a +0x052:  mov    %ebx,0x8(%esp)
0832663e +0x056:  mov    %eax,0x4(%esp)
08326642 +0x05a:  lea    -0x108(%ebp),%eax
08326648 +0x060:  mov    %eax,(%esp)
0832664b +0x063:  call   0807e440 <_init+0xd38>
08326650 +0x068:  mov    0x17(%ebp),%eax
08326653 +0x06b:  mov    %eax,%ecx
08326655 +0x06d:  mov    0x12(%ebp),%edx
08326658 +0x070:  mov    0x54(%ebp),%eax
0832665b +0x073:  mov    0xc(%ebp),%ebx
0832665e +0x076:  add    $0x79700,%ebx
08326664 +0x07c:  mov    %ecx,0x10(%esp)
08326668 +0x080:  mov    %edx,0xc(%esp)
0832666c +0x084:  movl   $0x3,0x8(%esp)
08326674 +0x08c:  mov    %eax,0x4(%esp)
08326678 +0x090:  mov    %ebx,(%esp)
0832667b +0x093:  call   086848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>  ; cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int)
08326680 +0x098:  mov    0x17(%ebp),%eax
08326683 +0x09b:  mov    %eax,%ecx
08326685 +0x09d:  mov    0x12(%ebp),%edx
08326688 +0x0a0:  mov    0x54(%ebp),%eax
0832668b +0x0a3:  mov    %ecx,0x10(%esp)
0832668f +0x0a7:  mov    %edx,0xc(%esp)
08326693 +0x0ab:  mov    %eax,0x8(%esp)
08326697 +0x0af:  mov    0x50(%ebp),%eax
0832669a +0x0b2:  mov    %eax,0x4(%esp)
0832669e +0x0b6:  mov    0xc(%ebp),%eax
083266a1 +0x0b9:  mov    %eax,(%esp)
083266a4 +0x0bc:  call   0868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>  ; CUser::SendCeraShopGiftStatisticLog(unsigned int, unsigned int, unsigned long, unsigned int)
083266a9 +0x0c1:  movzbl 0x11(%ebp),%eax
083266ad +0x0c5:  cmp    $0x5,%al
083266af +0x0c7:  jne    083266e8 <+0x100>
083266b1 +0x0c9:  lea    -0x108(%ebp),%eax
083266b7 +0x0cf:  mov    %eax,(%esp)
083266ba +0x0d2:  call   0807e3b0 <_init+0xca8>
083266bf +0x0d7:  mov    %eax,0x10(%esp)
083266c3 +0x0db:  lea    -0x108(%ebp),%eax
083266c9 +0x0e1:  mov    %eax,0xc(%esp)
083266cd +0x0e5:  lea    0x10(%ebp),%eax
083266d0 +0x0e8:  mov    %eax,0x8(%esp)
083266d4 +0x0ec:  mov    0x54(%ebp),%eax
083266d7 +0x0ef:  mov    %eax,0x4(%esp)
083266db +0x0f3:  mov    0xc(%ebp),%eax
083266de +0x0f6:  mov    %eax,(%esp)
083266e1 +0x0f9:  call   08556422 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(CUser*, int, Inven_Item const&, char const*, int)
083266e6 +0x0fe:  jmp    0832672f <+0x147>
083266e8 +0x100:  lea    -0x108(%ebp),%eax
083266ee +0x106:  mov    %eax,(%esp)
083266f1 +0x109:  call   0807e3b0 <_init+0xca8>
083266f6 +0x10e:  mov    %eax,%edx
083266f8 +0x110:  mov    0x54(%ebp),%eax
083266fb +0x113:  mov    %edx,0x18(%esp)
083266ff +0x117:  lea    -0x108(%ebp),%edx
08326705 +0x11d:  mov    %edx,0x14(%esp)
08326709 +0x121:  movl   $0x1,0x10(%esp)
08326711 +0x129:  mov    %eax,0xc(%esp)
08326715 +0x12d:  movl   $0x0,0x8(%esp)
0832671d +0x135:  lea    0x10(%ebp),%eax
08326720 +0x138:  mov    %eax,0x4(%esp)
08326724 +0x13c:  mov    0xc(%ebp),%eax
08326727 +0x13f:  mov    %eax,(%esp)
0832672a +0x142:  call   08556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
0832672f +0x147:  add    $0x120,%esp
08326735 +0x14d:  pop    %ebx
08326736 +0x14e:  pop    %edi
08326737 +0x14f:  pop    %ebp
08326738 +0x150:  ret
```

## 反编译 C

> （该函数反编译 C 未生成）
