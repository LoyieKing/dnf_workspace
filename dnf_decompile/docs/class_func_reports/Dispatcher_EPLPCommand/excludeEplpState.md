# excludeEplpState

`_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser`

`Dispatcher_EPLPCommand::excludeEplpState(CUser*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EPLPCommand` | `0x0825f760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f760  _ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser
#           Dispatcher_EPLPCommand::excludeEplpState(CUser*)
# range [0x0825f760, 0x0825f7f3]
0825f760 +0x00:  push   %ebp
0825f761 +0x01:  mov    %esp,%ebp
0825f763 +0x03:  sub    $0x28,%esp
0825f766 +0x06:  mov    0xc(%ebp),%eax
0825f769 +0x09:  mov    %eax,(%esp)
0825f76c +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0825f771 +0x11:  mov    %eax,-0xc(%ebp)
0825f774 +0x14:  cmpl   $0x0,-0xc(%ebp)
0825f778 +0x18:  jne    0825f781 <+0x21>
0825f77a +0x1a:  mov    $0x0,%eax
0825f77f +0x1f:  jmp    0825f7f2 <+0x92>
0825f781 +0x21:  mov    -0xc(%ebp),%eax
0825f784 +0x24:  add    $0xb24,%eax
0825f789 +0x29:  mov    %eax,(%esp)
0825f78c +0x2c:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
0825f791 +0x31:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%edx
0825f797 +0x37:  mov    %eax,0x4(%esp)
0825f79b +0x3b:  mov    %edx,(%esp)
0825f79e +0x3e:  call   08644272 <_ZNK17TowerOfDespairMgr31IsTowerOfDespairDungeon_ByIndexEi>  ; TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(int) const
0825f7a3 +0x43:  test   %al,%al
0825f7a5 +0x45:  je     0825f7ae <+0x4e>
0825f7a7 +0x47:  mov    $0x0,%eax
0825f7ac +0x4c:  jmp    0825f7f2 <+0x92>
0825f7ae +0x4e:  mov    0xc(%ebp),%eax
0825f7b1 +0x51:  mov    %eax,(%esp)
0825f7b4 +0x54:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
0825f7b9 +0x59:  cmp    $0x1,%eax
0825f7bc +0x5c:  sete   %al
0825f7bf +0x5f:  test   %al,%al
0825f7c1 +0x61:  je     0825f7ca <+0x6a>
0825f7c3 +0x63:  mov    $0x0,%eax
0825f7c8 +0x68:  jmp    0825f7f2 <+0x92>
0825f7ca +0x6a:  mov    -0xc(%ebp),%eax
0825f7cd +0x6d:  add    $0xb24,%eax
0825f7d2 +0x72:  mov    %eax,(%esp)
0825f7d5 +0x75:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
0825f7da +0x7a:  mov    %eax,(%esp)
0825f7dd +0x7d:  call   08ab976a <_ZN20GlobalScriptTutorial23IsGlobalTutorialDungeonEj>  ; GlobalScriptTutorial::IsGlobalTutorialDungeon(unsigned int)
0825f7e2 +0x82:  test   %al,%al
0825f7e4 +0x84:  je     0825f7ed <+0x8d>
0825f7e6 +0x86:  mov    $0x0,%eax
0825f7eb +0x8b:  jmp    0825f7f2 <+0x92>
0825f7ed +0x8d:  mov    $0x1,%eax
0825f7f2 +0x92:  leave
0825f7f3 +0x93:  ret
```

## 反编译 C

```c
// Dispatcher_EPLPCommand::excludeEplpState @ 0x825f760

/* Dispatcher_EPLPCommand::excludeEplpState(CUser*) */

undefined4 __thiscall
Dispatcher_EPLPCommand::excludeEplpState(Dispatcher_EPLPCommand *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = CUser::GetParty(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    CBattle_Field::get_dungeon_index((CBattle_Field *)(iVar2 + 0xb24));
    cVar1 = TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(GlobalData::s_pTowerOfDespairMgr);
    if (cVar1 == '\0') {
      iVar4 = CUser::getMoveSpace(param_1);
      if (iVar4 == 1) {
        uVar3 = 0;
      }
      else {
        uVar5 = CBattle_Field::get_dungeon_index((CBattle_Field *)(iVar2 + 0xb24));
        cVar1 = GlobalScriptTutorial::IsGlobalTutorialDungeon(uVar5);
        if (cVar1 == '\0') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
