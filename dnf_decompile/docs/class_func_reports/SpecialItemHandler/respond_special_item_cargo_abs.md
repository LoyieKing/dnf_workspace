# respond_special_item_cargo_abs

`_ZN18SpecialItemHandler30respond_special_item_cargo_absEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_cargo_abs(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827bee6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827bee6  _ZN18SpecialItemHandler30respond_special_item_cargo_absEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_cargo_abs(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827bee6, 0x0827bf8f]
0827bee6 +0x00:  push   %ebp
0827bee7 +0x01:  mov    %esp,%ebp
0827bee9 +0x03:  push   %ebx
0827beea +0x04:  sub    $0x14,%esp
0827beed +0x07:  mov    0x10(%ebp),%eax
0827bef0 +0x0a:  mov    (%eax),%eax
0827bef2 +0x0c:  mov    %eax,(%esp)
0827bef5 +0x0f:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0827befa +0x14:  mov    %eax,(%esp)
0827befd +0x17:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
0827bf02 +0x1c:  mov    0x10(%ebp),%edx
0827bf05 +0x1f:  mov    0x8(%edx),%edx
0827bf08 +0x22:  lea    (%eax,%edx,1),%ebx
0827bf0b +0x25:  mov    0x10(%ebp),%eax
0827bf0e +0x28:  mov    (%eax),%eax
0827bf10 +0x2a:  mov    %eax,(%esp)
0827bf13 +0x2d:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0827bf18 +0x32:  mov    %ebx,0x4(%esp)
0827bf1c +0x36:  mov    %eax,(%esp)
0827bf1f +0x39:  call   0850c698 <_ZNK6CCargo12isUpgradableEi>  ; CCargo::isUpgradable(int) const
0827bf24 +0x3e:  xor    $0x1,%eax
0827bf27 +0x41:  test   %al,%al
0827bf29 +0x43:  je     0827bf36 <+0x50>
0827bf2b +0x45:  mov    0x14(%ebp),%eax
0827bf2e +0x48:  movl   $0x12,(%eax)
0827bf34 +0x4e:  jmp    0827bf8a <+0xa4>
0827bf36 +0x50:  mov    0x10(%ebp),%eax
0827bf39 +0x53:  mov    (%eax),%eax
0827bf3b +0x55:  mov    %eax,(%esp)
0827bf3e +0x58:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0827bf43 +0x5d:  mov    %eax,(%esp)
0827bf46 +0x60:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
0827bf4b +0x65:  mov    0x10(%ebp),%edx
0827bf4e +0x68:  mov    0x8(%edx),%edx
0827bf51 +0x6b:  lea    (%eax,%edx,1),%ebx
0827bf54 +0x6e:  mov    0x10(%ebp),%eax
0827bf57 +0x71:  mov    (%eax),%eax
0827bf59 +0x73:  mov    %eax,(%esp)
0827bf5c +0x76:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0827bf61 +0x7b:  mov    %ebx,0x4(%esp)
0827bf65 +0x7f:  mov    %eax,(%esp)
0827bf68 +0x82:  call   0850c656 <_ZN6CCargo12UpgradeCargoEi>  ; CCargo::UpgradeCargo(int)
0827bf6d +0x87:  mov    0x10(%ebp),%eax
0827bf70 +0x8a:  mov    (%eax),%edx
0827bf72 +0x8c:  mov    0x8(%ebp),%eax
0827bf75 +0x8f:  mov    (%eax),%eax
0827bf77 +0x91:  mov    0xc(%ebp),%ecx
0827bf7a +0x94:  mov    %ecx,0x8(%esp)
0827bf7e +0x98:  mov    %edx,0x4(%esp)
0827bf82 +0x9c:  mov    %eax,(%esp)
0827bf85 +0x9f:  call   08327726 <_ZN8WongWork9CCeraShop23_sendCargoUpgradePacketEP5CUseri>  ; WongWork::CCeraShop::_sendCargoUpgradePacket(CUser*, int)
0827bf8a +0xa4:  add    $0x14,%esp
0827bf8d +0xa7:  pop    %ebx
0827bf8e +0xa8:  pop    %ebp
0827bf8f +0xa9:  ret
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_cargo_abs @ 0x827bee6

/* SpecialItemHandler::respond_special_item_cargo_abs(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
SpecialItemHandler::respond_special_item_cargo_abs
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  int iVar1;
  char cVar2;
  CCargo *pCVar3;
  int iVar4;
  
  pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoR(*(CUserCharacInfo **)param_2);
  iVar4 = CCargo::GetCapacity(pCVar3);
  iVar1 = *(int *)(param_2 + 8);
  pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoR(*(CUserCharacInfo **)param_2);
  cVar2 = CCargo::isUpgradable(pCVar3,iVar4 + iVar1);
  if (cVar2 == '\x01') {
    pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoR(*(CUserCharacInfo **)param_2);
    iVar4 = CCargo::GetCapacity(pCVar3);
    iVar1 = *(int *)(param_2 + 8);
    pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoW(*(CUserCharacInfo **)param_2);
    CCargo::UpgradeCargo(pCVar3,iVar4 + iVar1);
    WongWork::CCeraShop::_sendCargoUpgradePacket(*(CCeraShop **)this,*(CUser **)param_2,param_1);
  }
  else {
    *(undefined4 *)param_3 = 0x12;
  }
  return;
}
```
