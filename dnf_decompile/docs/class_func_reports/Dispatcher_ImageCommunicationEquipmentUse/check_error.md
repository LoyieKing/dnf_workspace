# check_error

`_ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ImageCommunicationEquipmentUse::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ImageCommunicationEquipmentUse` | `0x081e2280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e2280  _ZN41Dispatcher_ImageCommunicationEquipmentUse11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ImageCommunicationEquipmentUse::check_error(CUser*, MSG_BASE&)
# range [0x081e2280, 0x081e22e5]
081e2280 +0x00:  push   %ebp
081e2281 +0x01:  mov    %esp,%ebp
081e2283 +0x03:  push   %ebx
081e2284 +0x04:  sub    $0x14,%esp
081e2287 +0x07:  cmpl   $0x0,0xc(%ebp)
081e228b +0x0b:  jne    081e2294 <+0x14>
081e228d +0x0d:  mov    $0xffffffff,%eax
081e2292 +0x12:  jmp    081e22df <+0x5f>
081e2294 +0x14:  mov    0xc(%ebp),%eax
081e2297 +0x17:  mov    %eax,(%esp)
081e229a +0x1a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e229f +0x1f:  cmp    $0x2,%eax
081e22a2 +0x22:  setle  %al
081e22a5 +0x25:  test   %al,%al
081e22a7 +0x27:  je     081e22b0 <+0x30>
081e22a9 +0x29:  mov    $0xfffffffe,%eax
081e22ae +0x2e:  jmp    081e22df <+0x5f>
081e22b0 +0x30:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e22b5 +0x35:  mov    %eax,(%esp)
081e22b8 +0x38:  call   0836541e <_ZN12CDataManager24GetImageCommnicationDataEv>  ; CDataManager::GetImageCommnicationData()
081e22bd +0x3d:  mov    (%eax),%ebx
081e22bf +0x3f:  mov    0xc(%ebp),%eax
081e22c2 +0x42:  mov    %eax,(%esp)
081e22c5 +0x45:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
081e22ca +0x4a:  cmp    %eax,%ebx
081e22cc +0x4c:  setg   %al
081e22cf +0x4f:  test   %al,%al
081e22d1 +0x51:  je     081e22da <+0x5a>
081e22d3 +0x53:  mov    $0xa,%eax
081e22d8 +0x58:  jmp    081e22df <+0x5f>
081e22da +0x5a:  mov    $0x0,%eax
081e22df +0x5f:  add    $0x14,%esp
081e22e2 +0x62:  pop    %ebx
081e22e3 +0x63:  pop    %ebp
081e22e4 +0x64:  ret
081e22e5 +0x65:  nop
```

## 反编译 C

```c
// Dispatcher_ImageCommunicationEquipmentUse::check_error @ 0x81e2280

/* Dispatcher_ImageCommunicationEquipmentUse::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ImageCommunicationEquipmentUse::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  CDataManager *this;
  int *piVar3;
  int iVar4;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 0xfffffffe;
    }
    else {
      this = (CDataManager *)G_CDataManager();
      piVar3 = (int *)CDataManager::GetImageCommnicationData(this);
      iVar2 = *piVar3;
      iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_2);
      if (iVar4 < iVar2) {
        uVar1 = 10;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```
