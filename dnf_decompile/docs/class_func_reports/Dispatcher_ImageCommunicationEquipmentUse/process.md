# process

`_ZN41Dispatcher_ImageCommunicationEquipmentUse7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ImageCommunicationEquipmentUse::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ImageCommunicationEquipmentUse` | `0x081e21d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e21d6  _ZN41Dispatcher_ImageCommunicationEquipmentUse7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ImageCommunicationEquipmentUse::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e21d6, 0x081e227f]
081e21d6 +0x00:  push   %ebp
081e21d7 +0x01:  mov    %esp,%ebp
081e21d9 +0x03:  push   %ebx
081e21da +0x04:  sub    $0x24,%esp
081e21dd +0x07:  mov    0x10(%ebp),%eax
081e21e0 +0x0a:  mov    %eax,-0x10(%ebp)
081e21e3 +0x0d:  mov    0x14(%ebp),%eax
081e21e6 +0x10:  mov    %eax,-0xc(%ebp)
081e21e9 +0x13:  mov    0x10(%ebp),%eax
081e21ec +0x16:  mov    %eax,0x8(%esp)
081e21f0 +0x1a:  mov    0xc(%ebp),%eax
081e21f3 +0x1d:  mov    %eax,0x4(%esp)
081e21f7 +0x21:  mov    0x8(%ebp),%eax
081e21fa +0x24:  mov    %eax,(%esp)
081e21fd +0x27:  call   081e2280 <_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ImageCommunicationEquipmentUse::check_error(CUser*, MSG_BASE&)
081e2202 +0x2c:  mov    -0xc(%ebp),%edx
081e2205 +0x2f:  mov    %eax,0x4(%edx)
081e2208 +0x32:  mov    -0xc(%ebp),%eax
081e220b +0x35:  mov    0x4(%eax),%eax
081e220e +0x38:  test   %eax,%eax
081e2210 +0x3a:  je     081e2219 <+0x43>
081e2212 +0x3c:  mov    $0x0,%eax
081e2217 +0x41:  jmp    081e227a <+0xa4>
081e2219 +0x43:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e221e +0x48:  mov    %eax,(%esp)
081e2221 +0x4b:  call   0836541e <_ZN12CDataManager24GetImageCommnicationDataEv>  ; CDataManager::GetImageCommnicationData()
081e2226 +0x50:  mov    (%eax),%ebx
081e2228 +0x52:  mov    0xc(%ebp),%eax
081e222b +0x55:  mov    %eax,(%esp)
081e222e +0x58:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e2233 +0x5d:  movl   $0x1,0xc(%esp)
081e223b +0x65:  movl   $0x30,0x8(%esp)
081e2243 +0x6d:  mov    %ebx,0x4(%esp)
081e2247 +0x71:  mov    %eax,(%esp)
081e224a +0x74:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
081e224f +0x79:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e2254 +0x7e:  mov    %eax,(%esp)
081e2257 +0x81:  call   0836541e <_ZN12CDataManager24GetImageCommnicationDataEv>  ; CDataManager::GetImageCommnicationData()
081e225c +0x86:  mov    (%eax),%edx
081e225e +0x88:  mov    -0xc(%ebp),%eax
081e2261 +0x8b:  mov    %edx,0x8(%eax)
081e2264 +0x8e:  mov    0xc(%ebp),%eax
081e2267 +0x91:  mov    %eax,(%esp)
081e226a +0x94:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
081e226f +0x99:  mov    -0xc(%ebp),%edx
081e2272 +0x9c:  mov    %eax,0xc(%edx)
081e2275 +0x9f:  mov    $0x0,%eax
081e227a +0xa4:  add    $0x24,%esp
081e227d +0xa7:  pop    %ebx
081e227e +0xa8:  pop    %ebp
081e227f +0xa9:  ret
```

## 反编译 C

```c
// Dispatcher_ImageCommunicationEquipmentUse::process @ 0x81e21d6

/* Dispatcher_ImageCommunicationEquipmentUse::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ImageCommunicationEquipmentUse::process
          (Dispatcher_ImageCommunicationEquipmentUse *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  CDataManager *pCVar2;
  undefined4 *puVar3;
  CInventory *pCVar4;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    pCVar2 = (CDataManager *)G_CDataManager();
    puVar3 = (undefined4 *)CDataManager::GetImageCommnicationData(pCVar2);
    uVar1 = *puVar3;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::use_money(pCVar4,uVar1,0x30,1);
    pCVar2 = (CDataManager *)G_CDataManager();
    puVar3 = (undefined4 *)CDataManager::GetImageCommnicationData(pCVar2);
    *(undefined4 *)(param_3 + 8) = *puVar3;
    uVar1 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    *(undefined4 *)(param_3 + 0xc) = uVar1;
  }
  return 0;
}
```
