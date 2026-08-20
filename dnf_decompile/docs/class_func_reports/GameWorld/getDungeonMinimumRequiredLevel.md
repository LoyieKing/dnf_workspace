# getDungeonMinimumRequiredLevel

`_ZN9GameWorld30getDungeonMinimumRequiredLevelEi`

`GameWorld::getDungeonMinimumRequiredLevel(int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c9076` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c9076  _ZN9GameWorld30getDungeonMinimumRequiredLevelEi
#           GameWorld::getDungeonMinimumRequiredLevel(int)
# range [0x086c9076, 0x086c90ad]
086c9076 +0x00:  push   %ebp
086c9077 +0x01:  mov    %esp,%ebp
086c9079 +0x03:  sub    $0x28,%esp
086c907c +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c9081 +0x0b:  mov    0xc(%ebp),%edx
086c9084 +0x0e:  mov    %edx,0x4(%esp)
086c9088 +0x12:  mov    %eax,(%esp)
086c908b +0x15:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
086c9090 +0x1a:  mov    %eax,-0xc(%ebp)
086c9093 +0x1d:  cmpl   $0x0,-0xc(%ebp)
086c9097 +0x21:  jne    086c90a0 <+0x2a>
086c9099 +0x23:  mov    $0xffffffff,%eax
086c909e +0x28:  jmp    086c90ab <+0x35>
086c90a0 +0x2a:  mov    -0xc(%ebp),%eax
086c90a3 +0x2d:  mov    %eax,(%esp)
086c90a6 +0x30:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
086c90ab +0x35:  leave
086c90ac +0x36:  ret
086c90ad +0x37:  nop
```

## 反编译 C

```c
// GameWorld::getDungeonMinimumRequiredLevel @ 0x86c9076

/* GameWorld::getDungeonMinimumRequiredLevel(int) */

undefined4 GameWorld::getDungeonMinimumRequiredLevel(int param_1)

{
  int iVar1;
  CDungeon *this;
  undefined4 uVar2;
  
  iVar1 = G_CDataManager();
  this = (CDungeon *)CDataManager::find_dungeon(iVar1);
  if (this == (CDungeon *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = CDungeon::get_min_level(this);
  }
  return uVar2;
}
```
