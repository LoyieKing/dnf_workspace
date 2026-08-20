# respond_special_item_cargo

`_ZN18SpecialItemHandler26respond_special_item_cargoEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_cargo(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827be8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827be8a  _ZN18SpecialItemHandler26respond_special_item_cargoEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_cargo(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827be8a, 0x0827bee5]
0827be8a +0x00:  push   %ebp
0827be8b +0x01:  mov    %esp,%ebp
0827be8d +0x03:  push   %ebx
0827be8e +0x04:  sub    $0x14,%esp
0827be91 +0x07:  mov    0x10(%ebp),%eax
0827be94 +0x0a:  mov    0x8(%eax),%ebx
0827be97 +0x0d:  mov    0x10(%ebp),%eax
0827be9a +0x10:  mov    (%eax),%eax
0827be9c +0x12:  mov    %eax,(%esp)
0827be9f +0x15:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0827bea4 +0x1a:  mov    %ebx,0x4(%esp)
0827bea8 +0x1e:  mov    %eax,(%esp)
0827beab +0x21:  call   0850c656 <_ZN6CCargo12UpgradeCargoEi>  ; CCargo::UpgradeCargo(int)
0827beb0 +0x26:  xor    $0x1,%eax
0827beb3 +0x29:  test   %al,%al
0827beb5 +0x2b:  je     0827bec2 <+0x38>
0827beb7 +0x2d:  mov    0x14(%ebp),%eax
0827beba +0x30:  movl   $0x17,(%eax)
0827bec0 +0x36:  jmp    0827bedf <+0x55>
0827bec2 +0x38:  mov    0x10(%ebp),%eax
0827bec5 +0x3b:  mov    (%eax),%edx
0827bec7 +0x3d:  mov    0x8(%ebp),%eax
0827beca +0x40:  mov    (%eax),%eax
0827becc +0x42:  mov    0xc(%ebp),%ecx
0827becf +0x45:  mov    %ecx,0x8(%esp)
0827bed3 +0x49:  mov    %edx,0x4(%esp)
0827bed7 +0x4d:  mov    %eax,(%esp)
0827beda +0x50:  call   08327726 <_ZN8WongWork9CCeraShop23_sendCargoUpgradePacketEP5CUseri>  ; WongWork::CCeraShop::_sendCargoUpgradePacket(CUser*, int)
0827bedf +0x55:  add    $0x14,%esp
0827bee2 +0x58:  pop    %ebx
0827bee3 +0x59:  pop    %ebp
0827bee4 +0x5a:  ret
0827bee5 +0x5b:  nop
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_cargo @ 0x827be8a

/* SpecialItemHandler::respond_special_item_cargo(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
SpecialItemHandler::respond_special_item_cargo
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  int iVar1;
  char cVar2;
  CCargo *this_00;
  
  iVar1 = *(int *)(param_2 + 8);
  this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoW(*(CUserCharacInfo **)param_2);
  cVar2 = CCargo::UpgradeCargo(this_00,iVar1);
  if (cVar2 == '\x01') {
    WongWork::CCeraShop::_sendCargoUpgradePacket(*(CCeraShop **)this,*(CUser **)param_2,param_1);
  }
  else {
    *(undefined4 *)param_3 = 0x17;
  }
  return;
}
```
