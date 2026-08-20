# giveup_quest

`_ZN9UserQuest12giveup_questEi`

`UserQuest::giveup_quest(int)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ac532` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ac532  _ZN9UserQuest12giveup_questEi
#           UserQuest::giveup_quest(int)
# range [0x086ac532, 0x086ac6ab]
086ac532 +0x000:  push   %ebp
086ac533 +0x001:  mov    %esp,%ebp
086ac535 +0x003:  sub    $0x28,%esp
086ac538 +0x006:  movl   $0x0,-0x18(%ebp)
086ac53f +0x00d:  jmp    086ac696 <+0x164>
086ac544 +0x012:  mov    -0x18(%ebp),%edx
086ac547 +0x015:  mov    0x8(%ebp),%eax
086ac54a +0x018:  add    $0x1d4c,%edx
086ac550 +0x01e:  mov    0x8(%eax,%edx,4),%eax
086ac554 +0x022:  cmp    0xc(%ebp),%eax
086ac557 +0x025:  jne    086ac692 <+0x160>
086ac55d +0x02b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ac562 +0x030:  mov    0xc(%ebp),%edx
086ac565 +0x033:  mov    %edx,0x4(%esp)
086ac569 +0x037:  mov    %eax,(%esp)
086ac56c +0x03a:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ac571 +0x03f:  mov    %eax,-0x14(%ebp)
086ac574 +0x042:  cmpl   $0x0,-0x14(%ebp)
086ac578 +0x046:  je     086ac663 <+0x131>
086ac57e +0x04c:  mov    -0x14(%ebp),%eax
086ac581 +0x04f:  movzbl 0x120(%eax),%eax
086ac588 +0x056:  cmp    $0x1,%al
086ac58a +0x058:  je     086ac59a <+0x68>
086ac58c +0x05a:  mov    -0x14(%ebp),%eax
086ac58f +0x05d:  movzbl 0x120(%eax),%eax
086ac596 +0x064:  cmp    $0x2,%al
086ac598 +0x066:  jne    086ac613 <+0xe1>
086ac59a +0x068:  mov    -0x18(%ebp),%edx
086ac59d +0x06b:  mov    0x8(%ebp),%eax
086ac5a0 +0x06e:  add    $0x1d60,%edx
086ac5a6 +0x074:  mov    0x8(%eax,%edx,4),%eax
086ac5aa +0x078:  test   %eax,%eax
086ac5ac +0x07a:  jne    086ac5b8 <+0x86>
086ac5ae +0x07c:  mov    $0x12,%eax
086ac5b3 +0x081:  jmp    086ac6aa <+0x178>
086ac5b8 +0x086:  mov    0x8(%ebp),%eax
086ac5bb +0x089:  mov    (%eax),%eax
086ac5bd +0x08b:  mov    %eax,(%esp)
086ac5c0 +0x08e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086ac5c5 +0x093:  cmp    $0x5,%eax
086ac5c8 +0x096:  sete   %al
086ac5cb +0x099:  test   %al,%al
086ac5cd +0x09b:  je     086ac613 <+0xe1>
086ac5cf +0x09d:  mov    0x8(%ebp),%eax
086ac5d2 +0x0a0:  mov    (%eax),%eax
086ac5d4 +0x0a2:  mov    %eax,(%esp)
086ac5d7 +0x0a5:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086ac5dc +0x0aa:  mov    %eax,-0x10(%ebp)
086ac5df +0x0ad:  cmpl   $0x0,-0x10(%ebp)
086ac5e3 +0x0b1:  je     086ac613 <+0xe1>
086ac5e5 +0x0b3:  mov    -0x10(%ebp),%eax
086ac5e8 +0x0b6:  add    $0xb24,%eax
086ac5ed +0x0bb:  mov    %eax,(%esp)
086ac5f0 +0x0be:  call   0822d052 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26fc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26fc
086ac5f5 +0x0c3:  mov    %eax,-0xc(%ebp)
086ac5f8 +0x0c6:  cmpl   $0x0,-0xc(%ebp)
086ac5fc +0x0ca:  je     086ac613 <+0xe1>
086ac5fe +0x0cc:  mov    -0xc(%ebp),%eax
086ac601 +0x0cf:  mov    0x50(%eax),%eax
086ac604 +0x0d2:  cmp    0xc(%ebp),%eax
086ac607 +0x0d5:  jne    086ac613 <+0xe1>
086ac609 +0x0d7:  mov    $0x14,%eax
086ac60e +0x0dc:  jmp    086ac6aa <+0x178>
086ac613 +0x0e1:  mov    -0x14(%ebp),%eax
086ac616 +0x0e4:  mov    0x8(%eax),%eax
086ac619 +0x0e7:  cmp    $0x8,%eax
086ac61c +0x0ea:  jne    086ac663 <+0x131>
086ac61e +0x0ec:  mov    0x8(%ebp),%eax
086ac621 +0x0ef:  mov    (%eax),%eax
086ac623 +0x0f1:  mov    %eax,(%esp)
086ac626 +0x0f4:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086ac62b +0x0f9:  mov    -0x14(%ebp),%edx
086ac62e +0x0fc:  mov    0x24(%edx),%edx
086ac631 +0x0ff:  cmp    %edx,%eax
086ac633 +0x101:  setg   %al
086ac636 +0x104:  test   %al,%al
086ac638 +0x106:  je     086ac647 <+0x115>
086ac63a +0x108:  mov    0x8(%ebp),%eax
086ac63d +0x10b:  movl   $0xffffffff,0x75f0(%eax)
086ac647 +0x115:  mov    0x8(%ebp),%eax
086ac64a +0x118:  mov    %eax,(%esp)
086ac64d +0x11b:  call   086ad266 <_ZN9UserQuest12hasEpicQuestEv>  ; UserQuest::hasEpicQuest()
086ac652 +0x120:  test   %al,%al
086ac654 +0x122:  je     086ac663 <+0x131>
086ac656 +0x124:  mov    0x8(%ebp),%eax
086ac659 +0x127:  movl   $0xffffffff,0x75f0(%eax)
086ac663 +0x131:  mov    -0x18(%ebp),%edx
086ac666 +0x134:  mov    0x8(%ebp),%eax
086ac669 +0x137:  add    $0x1d4c,%edx
086ac66f +0x13d:  movl   $0x0,0x8(%eax,%edx,4)
086ac677 +0x145:  mov    -0x18(%ebp),%edx
086ac67a +0x148:  mov    0x8(%ebp),%eax
086ac67d +0x14b:  add    $0x1d60,%edx
086ac683 +0x151:  movl   $0x0,0x8(%eax,%edx,4)
086ac68b +0x159:  mov    $0x0,%eax
086ac690 +0x15e:  jmp    086ac6aa <+0x178>
086ac692 +0x160:  addl   $0x1,-0x18(%ebp)
086ac696 +0x164:  cmpl   $0x13,-0x18(%ebp)
086ac69a +0x168:  setle  %al
086ac69d +0x16b:  test   %al,%al
086ac69f +0x16d:  jne    086ac544 <+0x12>
086ac6a5 +0x173:  mov    $0x13,%eax
086ac6aa +0x178:  leave
086ac6ab +0x179:  ret
```

## 反编译 C

```c
// UserQuest::giveup_quest @ 0x86ac532

/* UserQuest::giveup_quest(int) */

undefined4 __thiscall UserQuest::giveup_quest(UserQuest *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    if (0x13 < local_1c) {
      return 0x13;
    }
    if (*(int *)(this + (local_1c + 0x1d4c) * 4 + 8) == param_1) break;
    local_1c = local_1c + 1;
  }
  iVar2 = G_CDataManager();
  iVar2 = CDataManager::find_quest(iVar2);
  if (iVar2 != 0) {
    if ((*(char *)(iVar2 + 0x120) == '\x01') || (*(char *)(iVar2 + 0x120) == '\x02')) {
      if (*(int *)(this + (local_1c + 0x1d60) * 4 + 8) == 0) {
        return 0x12;
      }
      iVar3 = CUser::get_state(*(CUser **)this);
      if ((((iVar3 == 5) && (iVar3 = CUser::GetParty(*(CUser **)this), iVar3 != 0)) &&
          (iVar3 = CBattle_Field::getMaze((CBattle_Field *)(iVar3 + 0xb24)), iVar3 != 0)) &&
         (*(int *)(iVar3 + 0x50) == param_1)) {
        return 0x14;
      }
    }
    if (*(int *)(iVar2 + 8) == 8) {
      iVar3 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
      if (*(int *)(iVar2 + 0x24) < iVar3) {
        *(undefined4 *)(this + 0x75f0) = 0xffffffff;
      }
      cVar1 = hasEpicQuest(this);
      if (cVar1 != '\0') {
        *(undefined4 *)(this + 0x75f0) = 0xffffffff;
      }
    }
  }
  *(undefined4 *)(this + (local_1c + 0x1d4c) * 4 + 8) = 0;
  *(undefined4 *)(this + (local_1c + 0x1d60) * 4 + 8) = 0;
  return 0;
}
```
