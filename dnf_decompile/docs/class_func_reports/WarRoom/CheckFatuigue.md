# CheckFatuigue

`_ZN7WarRoom13CheckFatuigueEv`

`WarRoom::CheckFatuigue()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bc4ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bc4ec  _ZN7WarRoom13CheckFatuigueEv
#           WarRoom::CheckFatuigue()
# range [0x086bc4ec, 0x086bc5fd]
086bc4ec +0x000:  push   %ebp
086bc4ed +0x001:  mov    %esp,%ebp
086bc4ef +0x003:  push   %ebx
086bc4f0 +0x004:  sub    $0x24,%esp
086bc4f3 +0x007:  movl   $0x0,-0x14(%ebp)
086bc4fa +0x00e:  jmp    086bc5e9 <+0xfd>
086bc4ff +0x013:  mov    -0x14(%ebp),%edx
086bc502 +0x016:  mov    0x8(%ebp),%eax
086bc505 +0x019:  add    $0x48,%edx
086bc508 +0x01c:  mov    0xc(%eax,%edx,4),%eax
086bc50c +0x020:  test   %eax,%eax
086bc50e +0x022:  je     086bc5e4 <+0xf8>
086bc514 +0x028:  mov    -0x14(%ebp),%edx
086bc517 +0x02b:  mov    0x8(%ebp),%eax
086bc51a +0x02e:  add    $0x48,%edx
086bc51d +0x031:  mov    0xc(%eax,%edx,4),%eax
086bc521 +0x035:  mov    %eax,(%esp)
086bc524 +0x038:  call   08656500 <_ZN5CUser12CheckFatigueEv>  ; CUser::CheckFatigue()
086bc529 +0x03d:  xor    $0x1,%eax
086bc52c +0x040:  test   %al,%al
086bc52e +0x042:  je     086bc56e <+0x82>
086bc530 +0x044:  mov    -0x14(%ebp),%edx
086bc533 +0x047:  mov    0x8(%ebp),%eax
086bc536 +0x04a:  add    $0x48,%edx
086bc539 +0x04d:  mov    0xc(%eax,%edx,4),%eax
086bc53d +0x051:  mov    %eax,-0x10(%ebp)
086bc540 +0x054:  mov    -0x14(%ebp),%eax
086bc543 +0x057:  mov    %eax,0x4(%esp)
086bc547 +0x05b:  mov    0x8(%ebp),%eax
086bc54a +0x05e:  mov    %eax,(%esp)
086bc54d +0x061:  call   086bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>  ; WarRoom::WalkOutUserBySlot(int)
086bc552 +0x066:  movl   $0x5,0x8(%esp)
086bc55a +0x06e:  mov    -0x10(%ebp),%eax
086bc55d +0x071:  mov    %eax,0x4(%esp)
086bc561 +0x075:  mov    0x8(%ebp),%eax
086bc564 +0x078:  mov    %eax,(%esp)
086bc567 +0x07b:  call   086be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>  ; WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE)
086bc56c +0x080:  jmp    086bc5e5 <+0xf9>
086bc56e +0x082:  mov    -0x14(%ebp),%edx
086bc571 +0x085:  mov    0x8(%ebp),%eax
086bc574 +0x088:  add    $0x48,%edx
086bc577 +0x08b:  mov    0xc(%eax,%edx,4),%eax
086bc57b +0x08f:  mov    %eax,(%esp)
086bc57e +0x092:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
086bc583 +0x097:  mov    %eax,%ebx
086bc585 +0x099:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bc58a +0x09e:  mov    0x8(%ebp),%edx
086bc58d +0x0a1:  movzbl (%edx),%edx
086bc590 +0x0a4:  movzbl %dl,%edx
086bc593 +0x0a7:  add    $0x221c,%edx
086bc599 +0x0ad:  mov    0x4(%eax,%edx,4),%eax
086bc59d +0x0b1:  cmp    %eax,%ebx
086bc59f +0x0b3:  setl   %al
086bc5a2 +0x0b6:  test   %al,%al
086bc5a4 +0x0b8:  je     086bc5e5 <+0xf9>
086bc5a6 +0x0ba:  mov    -0x14(%ebp),%edx
086bc5a9 +0x0bd:  mov    0x8(%ebp),%eax
086bc5ac +0x0c0:  add    $0x48,%edx
086bc5af +0x0c3:  mov    0xc(%eax,%edx,4),%eax
086bc5b3 +0x0c7:  mov    %eax,-0xc(%ebp)
086bc5b6 +0x0ca:  mov    -0x14(%ebp),%eax
086bc5b9 +0x0cd:  mov    %eax,0x4(%esp)
086bc5bd +0x0d1:  mov    0x8(%ebp),%eax
086bc5c0 +0x0d4:  mov    %eax,(%esp)
086bc5c3 +0x0d7:  call   086bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>  ; WarRoom::WalkOutUserBySlot(int)
086bc5c8 +0x0dc:  movl   $0x8,0x8(%esp)
086bc5d0 +0x0e4:  mov    -0xc(%ebp),%eax
086bc5d3 +0x0e7:  mov    %eax,0x4(%esp)
086bc5d7 +0x0eb:  mov    0x8(%ebp),%eax
086bc5da +0x0ee:  mov    %eax,(%esp)
086bc5dd +0x0f1:  call   086be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>  ; WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE)
086bc5e2 +0x0f6:  jmp    086bc5e5 <+0xf9>
086bc5e4 +0x0f8:  nop
086bc5e5 +0x0f9:  addl   $0x1,-0x14(%ebp)
086bc5e9 +0x0fd:  cmpl   $0x5,-0x14(%ebp)
086bc5ed +0x101:  setle  %al
086bc5f0 +0x104:  test   %al,%al
086bc5f2 +0x106:  jne    086bc4ff <+0x13>
086bc5f8 +0x10c:  add    $0x24,%esp
086bc5fb +0x10f:  pop    %ebx
086bc5fc +0x110:  pop    %ebp
086bc5fd +0x111:  ret
```

## 反编译 C

```c
// WarRoom::CheckFatuigue @ 0x86bc4ec

/* WarRoom::CheckFatuigue() */

void __thiscall WarRoom::CheckFatuigue(WarRoom *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    if (*(int *)(this + (local_18 + 0x48) * 4 + 0xc) != 0) {
      cVar2 = CUser::CheckFatigue(*(CUser **)(this + (local_18 + 0x48) * 4 + 0xc));
      if (cVar2 == '\x01') {
        iVar3 = CUserCharacInfo::getCurCharacMoney
                          (*(CUserCharacInfo **)(this + (local_18 + 0x48) * 4 + 0xc));
        iVar4 = G_CDataManager();
        if (iVar3 < *(int *)(iVar4 + 4 + ((byte)*this + 0x221c) * 4)) {
          uVar1 = *(undefined4 *)(this + (local_18 + 0x48) * 4 + 0xc);
          WalkOutUserBySlot(this,local_18);
          SendWalkOut(this,uVar1,8);
        }
      }
      else {
        uVar1 = *(undefined4 *)(this + (local_18 + 0x48) * 4 + 0xc);
        WalkOutUserBySlot(this,local_18);
        SendWalkOut(this,uVar1,5);
      }
    }
  }
  return;
}
```
