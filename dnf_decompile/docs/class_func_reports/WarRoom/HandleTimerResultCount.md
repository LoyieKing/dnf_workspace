# HandleTimerResultCount

`_ZN7WarRoom22HandleTimerResultCountEv`

`WarRoom::HandleTimerResultCount()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086c0404` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c0404  _ZN7WarRoom22HandleTimerResultCountEv
#           WarRoom::HandleTimerResultCount()
# range [0x086c0404, 0x086c0511]
086c0404 +0x000:  push   %ebp
086c0405 +0x001:  mov    %esp,%ebp
086c0407 +0x003:  sub    $0x28,%esp
086c040a +0x006:  mov    0x8(%ebp),%eax
086c040d +0x009:  mov    %eax,(%esp)
086c0410 +0x00c:  call   086bc460 <_ZN7WarRoom9ReviveAllEv>  ; WarRoom::ReviveAll()
086c0415 +0x011:  movl   $0x0,-0x10(%ebp)
086c041c +0x018:  jmp    086c04ae <+0xaa>
086c0421 +0x01d:  mov    -0x10(%ebp),%edx
086c0424 +0x020:  mov    0x8(%ebp),%eax
086c0427 +0x023:  add    $0x48,%edx
086c042a +0x026:  mov    0xc(%eax,%edx,4),%eax
086c042e +0x02a:  test   %eax,%eax
086c0430 +0x02c:  je     086c04a6 <+0xa2>
086c0432 +0x02e:  mov    -0x10(%ebp),%edx
086c0435 +0x031:  mov    0x8(%ebp),%eax
086c0438 +0x034:  add    $0x60,%edx
086c043b +0x037:  mov    0xc(%eax,%edx,4),%eax
086c043f +0x03b:  test   %eax,%eax
086c0441 +0x03d:  je     086c04a9 <+0xa5>
086c0443 +0x03f:  mov    -0x10(%ebp),%edx
086c0446 +0x042:  mov    0x8(%ebp),%eax
086c0449 +0x045:  add    $0x48,%edx
086c044c +0x048:  mov    0xc(%eax,%edx,4),%eax
086c0450 +0x04c:  mov    %eax,0x4(%esp)
086c0454 +0x050:  mov    0x8(%ebp),%eax
086c0457 +0x053:  mov    %eax,(%esp)
086c045a +0x056:  call   086ba948 <_ZN7WarRoom10AddBanListEP5CUser>  ; WarRoom::AddBanList(CUser*)
086c045f +0x05b:  mov    -0x10(%ebp),%edx
086c0462 +0x05e:  mov    0x8(%ebp),%eax
086c0465 +0x061:  add    $0x48,%edx
086c0468 +0x064:  mov    0xc(%eax,%edx,4),%eax
086c046c +0x068:  mov    %eax,-0xc(%ebp)
086c046f +0x06b:  mov    -0x10(%ebp),%eax
086c0472 +0x06e:  mov    %eax,0x4(%esp)
086c0476 +0x072:  mov    0x8(%ebp),%eax
086c0479 +0x075:  mov    %eax,(%esp)
086c047c +0x078:  call   086bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>  ; WarRoom::WalkOutUserBySlot(int)
086c0481 +0x07d:  mov    -0x10(%ebp),%edx
086c0484 +0x080:  mov    0x8(%ebp),%eax
086c0487 +0x083:  add    $0x60,%edx
086c048a +0x086:  mov    0xc(%eax,%edx,4),%eax
086c048e +0x08a:  mov    %eax,0x8(%esp)
086c0492 +0x08e:  mov    -0xc(%ebp),%eax
086c0495 +0x091:  mov    %eax,0x4(%esp)
086c0499 +0x095:  mov    0x8(%ebp),%eax
086c049c +0x098:  mov    %eax,(%esp)
086c049f +0x09b:  call   086be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>  ; WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE)
086c04a4 +0x0a0:  jmp    086c04aa <+0xa6>
086c04a6 +0x0a2:  nop
086c04a7 +0x0a3:  jmp    086c04aa <+0xa6>
086c04a9 +0x0a5:  nop
086c04aa +0x0a6:  addl   $0x1,-0x10(%ebp)
086c04ae +0x0aa:  cmpl   $0x5,-0x10(%ebp)
086c04b2 +0x0ae:  setle  %al
086c04b5 +0x0b1:  test   %al,%al
086c04b7 +0x0b3:  jne    086c0421 <+0x1d>
086c04bd +0x0b9:  mov    0x8(%ebp),%eax
086c04c0 +0x0bc:  mov    %eax,(%esp)
086c04c3 +0x0bf:  call   086baa8e <_ZN7WarRoom11BattleResetEv>  ; WarRoom::BattleReset()
086c04c8 +0x0c4:  mov    0x8(%ebp),%eax
086c04cb +0x0c7:  mov    %eax,(%esp)
086c04ce +0x0ca:  call   086bc4ec <_ZN7WarRoom13CheckFatuigueEv>  ; WarRoom::CheckFatuigue()
086c04d3 +0x0cf:  mov    0x8(%ebp),%eax
086c04d6 +0x0d2:  mov    %eax,(%esp)
086c04d9 +0x0d5:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086c04de +0x0da:  cmp    $0x2,%eax
086c04e1 +0x0dd:  setle  %al
086c04e4 +0x0e0:  test   %al,%al
086c04e6 +0x0e2:  je     086c04fd <+0xf9>
086c04e8 +0x0e4:  movl   $0x0,0x4(%esp)
086c04f0 +0x0ec:  mov    0x8(%ebp),%eax
086c04f3 +0x0ef:  mov    %eax,(%esp)
086c04f6 +0x0f2:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086c04fb +0x0f7:  jmp    086c0510 <+0x10c>
086c04fd +0x0f9:  movl   $0x1,0x4(%esp)
086c0505 +0x101:  mov    0x8(%ebp),%eax
086c0508 +0x104:  mov    %eax,(%esp)
086c050b +0x107:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086c0510 +0x10c:  leave
086c0511 +0x10d:  ret
```

## 反编译 C

```c
// WarRoom::HandleTimerResultCount @ 0x86c0404

/* WarRoom::HandleTimerResultCount() */

void __thiscall WarRoom::HandleTimerResultCount(WarRoom *this)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  
  ReviveAll(this);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if ((*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) &&
       (*(int *)(this + (local_14 + 0x60) * 4 + 0xc) != 0)) {
      AddBanList(this,*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc));
      uVar1 = *(undefined4 *)(this + (local_14 + 0x48) * 4 + 0xc);
      WalkOutUserBySlot(this,local_14);
      SendWalkOut(this,uVar1,*(undefined4 *)(this + (local_14 + 0x60) * 4 + 0xc));
    }
  }
  BattleReset(this);
  CheckFatuigue(this);
  iVar2 = GetWaiterCount(this);
  if (iVar2 < 3) {
    ChangeState(this,0);
  }
  else {
    ChangeState(this,1);
  }
  return;
}
```
