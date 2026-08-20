# checkFreeRevivalCondition

`_ZN6CParty25checkFreeRevivalConditionEPK8CDungeon`

`CParty::checkFreeRevivalCondition(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be39a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be39a  _ZN6CParty25checkFreeRevivalConditionEPK8CDungeon
#           CParty::checkFreeRevivalCondition(CDungeon const*)
# range [0x085be39a, 0x085be4ad]
085be39a +0x000:  push   %ebp
085be39b +0x001:  mov    %esp,%ebp
085be39d +0x003:  sub    $0x28,%esp
085be3a0 +0x006:  mov    0x8(%ebp),%eax
085be3a3 +0x009:  mov    0xcd8(%eax),%eax
085be3a9 +0x00f:  cmp    $0x1,%eax
085be3ac +0x012:  jne    085be3b8 <+0x1e>
085be3ae +0x014:  mov    $0x1,%eax
085be3b3 +0x019:  jmp    085be4ac <+0x112>
085be3b8 +0x01e:  cmpl   $0x0,0xc(%ebp)
085be3bc +0x022:  jne    085be3f8 <+0x5e>
085be3be +0x024:  mov    0x8(%ebp),%eax
085be3c1 +0x027:  add    $0xb24,%eax
085be3c6 +0x02c:  mov    %eax,(%esp)
085be3c9 +0x02f:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085be3ce +0x034:  mov    %eax,-0xc(%ebp)
085be3d1 +0x037:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085be3d6 +0x03c:  mov    -0xc(%ebp),%edx
085be3d9 +0x03f:  mov    %edx,0x4(%esp)
085be3dd +0x043:  mov    %eax,(%esp)
085be3e0 +0x046:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085be3e5 +0x04b:  mov    %eax,0xc(%ebp)
085be3e8 +0x04e:  cmpl   $0x0,0xc(%ebp)
085be3ec +0x052:  jne    085be3f8 <+0x5e>
085be3ee +0x054:  mov    $0x0,%eax
085be3f3 +0x059:  jmp    085be4ac <+0x112>
085be3f8 +0x05e:  mov    0x8(%ebp),%eax
085be3fb +0x061:  add    $0xb24,%eax
085be400 +0x066:  mov    %eax,(%esp)
085be403 +0x069:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085be408 +0x06e:  mov    %eax,0x4(%esp)
085be40c +0x072:  mov    0xc(%ebp),%eax
085be40f +0x075:  mov    %eax,(%esp)
085be412 +0x078:  call   08365298 <_ZNK8CDungeon25checkFreeRevivalConditionEi>  ; CDungeon::checkFreeRevivalCondition(int) const
085be417 +0x07d:  test   %al,%al
085be419 +0x07f:  je     085be425 <+0x8b>
085be41b +0x081:  mov    $0x1,%eax
085be420 +0x086:  jmp    085be4ac <+0x112>
085be425 +0x08b:  mov    0xc(%ebp),%eax
085be428 +0x08e:  mov    %eax,(%esp)
085be42b +0x091:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085be430 +0x096:  test   %al,%al
085be432 +0x098:  setle  %al
085be435 +0x09b:  test   %al,%al
085be437 +0x09d:  je     085be440 <+0xa6>
085be439 +0x09f:  mov    $0x0,%eax
085be43e +0x0a4:  jmp    085be4ac <+0x112>
085be440 +0x0a6:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085be445 +0x0ab:  movl   $0x5e,0x4(%esp)
085be44d +0x0b3:  mov    %eax,(%esp)
085be450 +0x0b6:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085be455 +0x0bb:  mov    %eax,-0x10(%ebp)
085be458 +0x0be:  cmpl   $0x0,-0x10(%ebp)
085be45c +0x0c2:  je     085be4a7 <+0x10d>
085be45e +0x0c4:  mov    -0x10(%ebp),%eax
085be461 +0x0c7:  mov    (%eax),%eax
085be463 +0x0c9:  add    $0x34,%eax
085be466 +0x0cc:  mov    (%eax),%edx
085be468 +0x0ce:  mov    -0x10(%ebp),%eax
085be46b +0x0d1:  movl   $0x0,0x4(%esp)
085be473 +0x0d9:  mov    %eax,(%esp)
085be476 +0x0dc:  call   *%edx
085be478 +0x0de:  xor    $0x1,%eax
085be47b +0x0e1:  test   %al,%al
085be47d +0x0e3:  je     085be486 <+0xec>
085be47f +0x0e5:  mov    $0x0,%eax
085be484 +0x0ea:  jmp    085be4ac <+0x112>
085be486 +0x0ec:  mov    0x8(%ebp),%eax
085be489 +0x0ef:  add    $0xb24,%eax
085be48e +0x0f4:  mov    %eax,(%esp)
085be491 +0x0f7:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085be496 +0x0fc:  mov    %eax,0x4(%esp)
085be49a +0x100:  mov    -0x10(%ebp),%eax
085be49d +0x103:  mov    %eax,(%esp)
085be4a0 +0x106:  call   080eeca4 <_ZN25CDimensionActivationEvent25checkFreeRevivalConditionEi>  ; CDimensionActivationEvent::checkFreeRevivalCondition(int)
085be4a5 +0x10b:  jmp    085be4ac <+0x112>
085be4a7 +0x10d:  mov    $0x0,%eax
085be4ac +0x112:  leave
085be4ad +0x113:  ret
```

## 反编译 C

```c
// CParty::checkFreeRevivalCondition @ 0x85be39a

/* CParty::checkFreeRevivalCondition(CDungeon const*) */

undefined4 __thiscall CParty::checkFreeRevivalCondition(CParty *this,CDungeon *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(this + 0xcd8) == 1) {
    uVar2 = 1;
  }
  else {
    if (param_1 == (CDungeon *)0x0) {
      CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
      iVar3 = G_CDataManager();
      param_1 = (CDungeon *)CDataManager::find_dungeon(iVar3);
      if (param_1 == (CDungeon *)0x0) {
        return 0;
      }
    }
    CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
    cVar1 = CDungeon::checkFreeRevivalCondition((int)param_1);
    if (cVar1 == '\0') {
      cVar1 = CDungeon::get_dimension_possible(param_1);
      if (cVar1 < '\x01') {
        uVar2 = 0;
      }
      else {
        piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5e);
        if (piVar4 == (int *)0x0) {
          uVar2 = 0;
        }
        else {
          cVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
          if (cVar1 == '\x01') {
            CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
            uVar2 = CDimensionActivationEvent::checkFreeRevivalCondition((int)piVar4);
          }
          else {
            uVar2 = 0;
          }
        }
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
