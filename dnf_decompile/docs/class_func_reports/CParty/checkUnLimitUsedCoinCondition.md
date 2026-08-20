# checkUnLimitUsedCoinCondition

`_ZN6CParty29checkUnLimitUsedCoinConditionEPK8CDungeon`

`CParty::checkUnLimitUsedCoinCondition(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be4ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be4ae  _ZN6CParty29checkUnLimitUsedCoinConditionEPK8CDungeon
#           CParty::checkUnLimitUsedCoinCondition(CDungeon const*)
# range [0x085be4ae, 0x085be54b]
085be4ae +0x00:  push   %ebp
085be4af +0x01:  mov    %esp,%ebp
085be4b1 +0x03:  sub    $0x28,%esp
085be4b4 +0x06:  cmpl   $0x0,0xc(%ebp)
085be4b8 +0x0a:  jne    085be4f1 <+0x43>
085be4ba +0x0c:  mov    0x8(%ebp),%eax
085be4bd +0x0f:  add    $0xb24,%eax
085be4c2 +0x14:  mov    %eax,(%esp)
085be4c5 +0x17:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085be4ca +0x1c:  mov    %eax,-0xc(%ebp)
085be4cd +0x1f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085be4d2 +0x24:  mov    -0xc(%ebp),%edx
085be4d5 +0x27:  mov    %edx,0x4(%esp)
085be4d9 +0x2b:  mov    %eax,(%esp)
085be4dc +0x2e:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085be4e1 +0x33:  mov    %eax,0xc(%ebp)
085be4e4 +0x36:  cmpl   $0x0,0xc(%ebp)
085be4e8 +0x3a:  jne    085be4f1 <+0x43>
085be4ea +0x3c:  mov    $0x0,%eax
085be4ef +0x41:  jmp    085be549 <+0x9b>
085be4f1 +0x43:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085be4f6 +0x48:  movl   $0x5e,0x4(%esp)
085be4fe +0x50:  mov    %eax,(%esp)
085be501 +0x53:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085be506 +0x58:  mov    (%eax),%edx
085be508 +0x5a:  add    $0x34,%edx
085be50b +0x5d:  mov    (%edx),%edx
085be50d +0x5f:  movl   $0x0,0x4(%esp)
085be515 +0x67:  mov    %eax,(%esp)
085be518 +0x6a:  call   *%edx
085be51a +0x6c:  test   %al,%al
085be51c +0x6e:  je     085be534 <+0x86>
085be51e +0x70:  mov    0xc(%ebp),%eax
085be521 +0x73:  mov    %eax,(%esp)
085be524 +0x76:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085be529 +0x7b:  test   %al,%al
085be52b +0x7d:  jle    085be534 <+0x86>
085be52d +0x7f:  mov    $0x1,%eax
085be532 +0x84:  jmp    085be539 <+0x8b>
085be534 +0x86:  mov    $0x0,%eax
085be539 +0x8b:  test   %al,%al
085be53b +0x8d:  je     085be544 <+0x96>
085be53d +0x8f:  mov    $0x1,%eax
085be542 +0x94:  jmp    085be549 <+0x9b>
085be544 +0x96:  mov    $0x0,%eax
085be549 +0x9b:  leave
085be54a +0x9c:  ret
085be54b +0x9d:  nop
```

## 反编译 C

```c
// CParty::checkUnLimitUsedCoinCondition @ 0x85be4ae

/* CParty::checkUnLimitUsedCoinCondition(CDungeon const*) */

undefined1 __thiscall CParty::checkUnLimitUsedCoinCondition(CParty *this,CDungeon *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (CDungeon *)0x0) {
    CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
    iVar3 = G_CDataManager();
    param_1 = (CDungeon *)CDataManager::find_dungeon(iVar3);
    if (param_1 == (CDungeon *)0x0) {
      return 0;
    }
  }
  piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5e);
  cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
  if ((cVar2 == '\0') || (cVar2 = CDungeon::get_dimension_possible(param_1), cVar2 < '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
