# insertItemIntoEquipment

`_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb`

`CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08502344` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08502344  _ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb
#           CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool)
# range [0x08502344, 0x0850246f]
08502344 +0x000:  push   %ebp
08502345 +0x001:  mov    %esp,%ebp
08502347 +0x003:  push   %ebx
08502348 +0x004:  sub    $0x44,%esp
0850234b +0x007:  mov    0x50(%ebp),%edx
0850234e +0x00a:  mov    0x54(%ebp),%eax
08502351 +0x00d:  mov    %dl,-0x1c(%ebp)
08502354 +0x010:  mov    %al,-0x20(%ebp)
08502357 +0x013:  mov    0xe(%ebp),%eax
0850235a +0x016:  mov    %eax,%ebx
0850235c +0x018:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08502361 +0x01d:  mov    %ebx,0x4(%esp)
08502365 +0x021:  mov    %eax,(%esp)
08502368 +0x024:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850236d +0x029:  mov    %eax,-0xc(%ebp)
08502370 +0x02c:  cmpl   $0x0,-0xc(%ebp)
08502374 +0x030:  jne    08502380 <+0x3c>
08502376 +0x032:  mov    $0xffffffff,%eax
0850237b +0x037:  jmp    08502469 <+0x125>
08502380 +0x03c:  mov    -0xc(%ebp),%eax
08502383 +0x03f:  mov    (%eax),%eax
08502385 +0x041:  add    $0xc,%eax
08502388 +0x044:  mov    (%eax),%edx
0850238a +0x046:  mov    -0xc(%ebp),%eax
0850238d +0x049:  mov    %eax,(%esp)
08502390 +0x04c:  call   *%edx
08502392 +0x04e:  mov    0x8(%ebp),%edx
08502395 +0x051:  imul   $0x3d,%eax,%eax
08502398 +0x054:  lea    (%edx,%eax,1),%eax
0850239b +0x057:  add    $0x10,%eax
0850239e +0x05a:  mov    0xe(%eax),%eax
085023a1 +0x05d:  test   %eax,%eax
085023a3 +0x05f:  setne  %al
085023a6 +0x062:  test   %al,%al
085023a8 +0x064:  je     085023b4 <+0x70>
085023aa +0x066:  mov    $0xfffffffe,%eax
085023af +0x06b:  jmp    08502469 <+0x125>
085023b4 +0x070:  mov    -0xc(%ebp),%eax
085023b7 +0x073:  mov    (%eax),%eax
085023b9 +0x075:  add    $0xc,%eax
085023bc +0x078:  mov    (%eax),%edx
085023be +0x07a:  mov    -0xc(%ebp),%eax
085023c1 +0x07d:  mov    %eax,(%esp)
085023c4 +0x080:  call   *%edx
085023c6 +0x082:  imul   $0x3d,%eax,%eax
085023c9 +0x085:  add    $0x10,%eax
085023cc +0x088:  add    0x8(%ebp),%eax
085023cf +0x08b:  lea    0xc(%eax),%edx
085023d2 +0x08e:  lea    0xc(%ebp),%eax
085023d5 +0x091:  mov    %eax,0x4(%esp)
085023d9 +0x095:  mov    %edx,(%esp)
085023dc +0x098:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085023e1 +0x09d:  cmpb   $0x0,-0x1c(%ebp)
085023e5 +0x0a1:  je     08502457 <+0x113>
085023e7 +0x0a3:  mov    0x8(%ebp),%eax
085023ea +0x0a6:  mov    (%eax),%eax
085023ec +0x0a8:  test   %eax,%eax
085023ee +0x0aa:  je     0850242b <+0xe7>
085023f0 +0x0ac:  mov    0x8(%ebp),%eax
085023f3 +0x0af:  mov    (%eax),%eax
085023f5 +0x0b1:  lea    0x79700(%eax),%edx
085023fb +0x0b7:  mov    0x4c(%ebp),%eax
085023fe +0x0ba:  mov    %eax,0x14(%esp)
08502402 +0x0be:  lea    0xc(%ebp),%eax
08502405 +0x0c1:  mov    %eax,0x10(%esp)
08502409 +0x0c5:  movl   $0x1,0xc(%esp)
08502411 +0x0cd:  movl   $0x1,0x8(%esp)
08502419 +0x0d5:  movl   $0x1,0x4(%esp)
08502421 +0x0dd:  mov    %edx,(%esp)
08502424 +0x0e0:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08502429 +0x0e5:  jmp    08502457 <+0x113>
0850242b +0x0e7:  movl   $"History ERROR, m_pParent NULL, ItemAdd ",0x10(%esp)
08502433 +0x0ef:  movl   $0x14f9,0xc(%esp)
0850243b +0x0f7:  movl   $&_ZZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbbE19__PRETTY_FUNCTION__,0x8(%esp)
08502443 +0x0ff:  movl   $"inventory.cpp",0x4(%esp)
0850244b +0x107:  movl   $0x1,(%esp)
08502452 +0x10e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08502457 +0x113:  mov    -0xc(%ebp),%eax
0850245a +0x116:  mov    (%eax),%eax
0850245c +0x118:  add    $0xc,%eax
0850245f +0x11b:  mov    (%eax),%edx
08502461 +0x11d:  mov    -0xc(%ebp),%eax
08502464 +0x120:  mov    %eax,(%esp)
08502467 +0x123:  call   *%edx
08502469 +0x125:  add    $0x44,%esp
0850246c +0x128:  pop    %ebx
0850246d +0x129:  pop    %ebp
0850246e +0x12a:  ret
0850246f +0x12b:  nop
```

## 反编译 C

```c
// CInventory::insertItemIntoEquipment @ 0x8502344

/* CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool) */

undefined4 CInventory::insertItemIntoEquipment(int *param_1,undefined8 param_2)

{
  CDataManager *this;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  
  cVar4 = (char)in_stack_0000004c;
  this = (CDataManager *)G_CDataManager();
  piVar1 = (int *)CDataManager::find_item(this,param_2._2_4_);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1);
    if (*(int *)((int)param_1 + iVar3 * 0x3d + 0x1e) == 0) {
      iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1);
      Inven_Item::setCopy((Inven_Item *)((int)param_1 + iVar3 * 0x3d + 0x1c),(Inven_Item *)&param_2)
      ;
      if (cVar4 != '\0') {
        if (*param_1 == 0) {
          LogManager::logFormat
                    (1,"inventory.cpp",
                     "int CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool)"
                     ,0x14f9,"History ERROR, m_pParent NULL, ItemAdd ");
        }
        else {
          cUserHistoryLog::ItemAdd
                    ((cUserHistoryLog *)(*param_1 + 0x79700),1,1,1,&param_2,in_stack_00000048);
        }
      }
      uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}
```
