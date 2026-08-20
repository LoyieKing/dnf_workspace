# getDungeonIdxAfterClear

`_ZN5CUser23getDungeonIdxAfterClearEv`

`CUser::getDungeonIdxAfterClear()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867cb90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867cb90  _ZN5CUser23getDungeonIdxAfterClearEv
#           CUser::getDungeonIdxAfterClear()
# range [0x0867cb90, 0x0867cbc3]
0867cb90 +0x00:  push   %ebp
0867cb91 +0x01:  mov    %esp,%ebp
0867cb93 +0x03:  sub    $0x28,%esp
0867cb96 +0x06:  mov    0x8(%ebp),%eax
0867cb99 +0x09:  mov    %eax,(%esp)
0867cb9c +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0867cba1 +0x11:  mov    %eax,-0xc(%ebp)
0867cba4 +0x14:  cmpl   $0x0,-0xc(%ebp)
0867cba8 +0x18:  jne    0867cbb1 <+0x21>
0867cbaa +0x1a:  mov    $0xffffffff,%eax
0867cbaf +0x1f:  jmp    0867cbc1 <+0x31>
0867cbb1 +0x21:  mov    -0xc(%ebp),%eax
0867cbb4 +0x24:  add    $0xb24,%eax
0867cbb9 +0x29:  mov    %eax,(%esp)
0867cbbc +0x2c:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
0867cbc1 +0x31:  leave
0867cbc2 +0x32:  ret
0867cbc3 +0x33:  nop
```

## 反编译 C

```c
// CUser::getDungeonIdxAfterClear @ 0x867cb90

/* CUser::getDungeonIdxAfterClear() */

undefined4 __thiscall CUser::getDungeonIdxAfterClear(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetParty(this);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = CBattle_Field::get_dungeon_index((CBattle_Field *)(iVar1 + 0xb24));
  }
  return uVar2;
}
```
