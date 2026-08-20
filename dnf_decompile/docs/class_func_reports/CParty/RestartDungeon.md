# RestartDungeon

`_ZN6CParty14RestartDungeonEv`

`CParty::RestartDungeon()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a2246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a2246  _ZN6CParty14RestartDungeonEv
#           CParty::RestartDungeon()
# range [0x085a2246, 0x085a22a7]
085a2246 +0x00:  push   %ebp
085a2247 +0x01:  mov    %esp,%ebp
085a2249 +0x03:  sub    $0x28,%esp
085a224c +0x06:  mov    0x8(%ebp),%eax
085a224f +0x09:  add    $0xb24,%eax
085a2254 +0x0e:  mov    %eax,(%esp)
085a2257 +0x11:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085a225c +0x16:  mov    %eax,-0x10(%ebp)
085a225f +0x19:  mov    0x8(%ebp),%eax
085a2262 +0x1c:  add    $0xb24,%eax
085a2267 +0x21:  mov    %eax,(%esp)
085a226a +0x24:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085a226f +0x29:  mov    %eax,-0xc(%ebp)
085a2272 +0x2c:  mov    0x8(%ebp),%eax
085a2275 +0x2f:  add    $0xb24,%eax
085a227a +0x34:  mov    %eax,(%esp)
085a227d +0x37:  call   0830a1f6 <_ZN13CBattle_Field11reset_fieldEv>  ; CBattle_Field::reset_field()
085a2282 +0x3c:  mov    -0xc(%ebp),%eax
085a2285 +0x3f:  movsbl %al,%eax
085a2288 +0x42:  movl   $0x0,0xc(%esp)
085a2290 +0x4a:  mov    %eax,0x8(%esp)
085a2294 +0x4e:  mov    -0x10(%ebp),%eax
085a2297 +0x51:  mov    %eax,0x4(%esp)
085a229b +0x55:  mov    0x8(%ebp),%eax
085a229e +0x58:  mov    %eax,(%esp)
085a22a1 +0x5b:  call   085a0954 <_ZN6CParty13dungeon_startEic17ENUM_DUNGEON_TYPE>  ; CParty::dungeon_start(int, char, ENUM_DUNGEON_TYPE)
085a22a6 +0x60:  leave
085a22a7 +0x61:  ret
```

## 反编译 C

```c
// CParty::RestartDungeon @ 0x85a2246

/* CParty::RestartDungeon() */

void __thiscall CParty::RestartDungeon(CParty *this)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
  cVar1 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
  CBattle_Field::reset_field((CBattle_Field *)(this + 0xb24));
  dungeon_start(this,uVar2,(int)cVar1,0);
  return;
}
```
