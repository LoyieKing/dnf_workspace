# isReTurnToVillage

`_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser`

`Dispatcher_EPLPCommand::isReTurnToVillage(CUser*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EPLPCommand` | `0x0825f7f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f7f4  _ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser
#           Dispatcher_EPLPCommand::isReTurnToVillage(CUser*)
# range [0x0825f7f4, 0x0825f867]
0825f7f4 +0x00:  push   %ebp
0825f7f5 +0x01:  mov    %esp,%ebp
0825f7f7 +0x03:  sub    $0x28,%esp
0825f7fa +0x06:  cmpl   $0x0,0xc(%ebp)
0825f7fe +0x0a:  jne    0825f807 <+0x13>
0825f800 +0x0c:  mov    $0x0,%eax
0825f805 +0x11:  jmp    0825f866 <+0x72>
0825f807 +0x13:  mov    0xc(%ebp),%eax
0825f80a +0x16:  mov    %eax,(%esp)
0825f80d +0x19:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0825f812 +0x1e:  mov    %eax,-0xc(%ebp)
0825f815 +0x21:  cmpl   $0x0,-0xc(%ebp)
0825f819 +0x25:  jne    0825f822 <+0x2e>
0825f81b +0x27:  mov    $0x0,%eax
0825f820 +0x2c:  jmp    0825f866 <+0x72>
0825f822 +0x2e:  mov    0xc(%ebp),%eax
0825f825 +0x31:  mov    %eax,(%esp)
0825f828 +0x34:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
0825f82d +0x39:  cmp    $0x1,%eax
0825f830 +0x3c:  sete   %al
0825f833 +0x3f:  test   %al,%al
0825f835 +0x41:  je     0825f83e <+0x4a>
0825f837 +0x43:  mov    $0x1,%eax
0825f83c +0x48:  jmp    0825f866 <+0x72>
0825f83e +0x4a:  mov    -0xc(%ebp),%eax
0825f841 +0x4d:  add    $0xb24,%eax
0825f846 +0x52:  mov    %eax,(%esp)
0825f849 +0x55:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
0825f84e +0x5a:  mov    %eax,(%esp)
0825f851 +0x5d:  call   08ab976a <_ZN20GlobalScriptTutorial23IsGlobalTutorialDungeonEj>  ; GlobalScriptTutorial::IsGlobalTutorialDungeon(unsigned int)
0825f856 +0x62:  test   %al,%al
0825f858 +0x64:  je     0825f861 <+0x6d>
0825f85a +0x66:  mov    $0x1,%eax
0825f85f +0x6b:  jmp    0825f866 <+0x72>
0825f861 +0x6d:  mov    $0x0,%eax
0825f866 +0x72:  leave
0825f867 +0x73:  ret
```

## 反编译 C

```c
// Dispatcher_EPLPCommand::isReTurnToVillage @ 0x825f7f4

/* Dispatcher_EPLPCommand::isReTurnToVillage(CUser*) */

undefined4 __thiscall
Dispatcher_EPLPCommand::isReTurnToVillage(Dispatcher_EPLPCommand *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CUser::GetParty(param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar4 = CUser::getMoveSpace(param_1);
      if (iVar4 == 1) {
        uVar2 = 1;
      }
      else {
        uVar5 = CBattle_Field::get_dungeon_index((CBattle_Field *)(iVar3 + 0xb24));
        cVar1 = GlobalScriptTutorial::IsGlobalTutorialDungeon(uVar5);
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}
```
