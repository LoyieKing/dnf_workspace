# checkBlueMarble

`_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty`

`DisPatcher_SelectDungeon::checkBlueMarble(CParty*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectDungeon` | `0x081c9172` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9172  _ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty
#           DisPatcher_SelectDungeon::checkBlueMarble(CParty*)
# range [0x081c9172, 0x081c91e5]
081c9172 +0x00:  push   %ebp
081c9173 +0x01:  mov    %esp,%ebp
081c9175 +0x03:  sub    $0x18,%esp
081c9178 +0x06:  cmpl   $0x0,0xc(%ebp)
081c917c +0x0a:  jne    081c9185 <+0x13>
081c917e +0x0c:  mov    $0x0,%eax
081c9183 +0x11:  jmp    081c91e3 <+0x71>
081c9185 +0x13:  mov    0xc(%ebp),%eax
081c9188 +0x16:  mov    %eax,(%esp)
081c918b +0x19:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081c9190 +0x1e:  test   %eax,%eax
081c9192 +0x20:  sete   %al
081c9195 +0x23:  test   %al,%al
081c9197 +0x25:  je     081c91a0 <+0x2e>
081c9199 +0x27:  mov    $0x0,%eax
081c919e +0x2c:  jmp    081c91e3 <+0x71>
081c91a0 +0x2e:  mov    0xc(%ebp),%eax
081c91a3 +0x31:  mov    %eax,(%esp)
081c91a6 +0x34:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
081c91ab +0x39:  test   %al,%al
081c91ad +0x3b:  je     081c91ce <+0x5c>
081c91af +0x3d:  mov    0xc(%ebp),%eax
081c91b2 +0x40:  mov    %eax,(%esp)
081c91b5 +0x43:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081c91ba +0x48:  mov    %eax,(%esp)
081c91bd +0x4b:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081c91c2 +0x50:  cmp    $0x1,%eax
081c91c5 +0x53:  jne    081c91ce <+0x5c>
081c91c7 +0x55:  mov    $0x1,%eax
081c91cc +0x5a:  jmp    081c91d3 <+0x61>
081c91ce +0x5c:  mov    $0x0,%eax
081c91d3 +0x61:  test   %al,%al
081c91d5 +0x63:  je     081c91de <+0x6c>
081c91d7 +0x65:  mov    $0x1,%eax
081c91dc +0x6a:  jmp    081c91e3 <+0x71>
081c91de +0x6c:  mov    $0x0,%eax
081c91e3 +0x71:  leave
081c91e4 +0x72:  ret
081c91e5 +0x73:  nop
```

## 反编译 C

```c
// DisPatcher_SelectDungeon::checkBlueMarble @ 0x81c9172

/* DisPatcher_SelectDungeon::checkBlueMarble(CParty*) */

undefined1 __thiscall
DisPatcher_SelectDungeon::checkBlueMarble(DisPatcher_SelectDungeon *this,CParty *param_1)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  
  if (param_1 == (CParty *)0x0) {
    return 0;
  }
  iVar2 = CParty::getManager(param_1);
  if (iVar2 != 0) {
    cVar1 = CParty::IsSinglePlay(param_1);
    if (cVar1 != '\0') {
      this_00 = (CUser *)CParty::getManager(param_1);
      iVar2 = CUser::getMoveSpace(this_00);
      if (iVar2 == 1) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}
```
