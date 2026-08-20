# onStartMap

`_ZN13CBattle_Field10onStartMapEv`

`CBattle_Field::onStartMap()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830dc74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830dc74  _ZN13CBattle_Field10onStartMapEv
#           CBattle_Field::onStartMap()
# range [0x0830dc74, 0x0830dc9c]
0830dc74 +0x00:  push   %ebp
0830dc75 +0x01:  mov    %esp,%ebp
0830dc77 +0x03:  push   %ebx
0830dc78 +0x04:  sub    $0x14,%esp
0830dc7b +0x07:  mov    0x8(%ebp),%eax
0830dc7e +0x0a:  mov    %eax,(%esp)
0830dc81 +0x0d:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830dc86 +0x12:  mov    %eax,%ebx
0830dc88 +0x14:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0830dc8f +0x1b:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0830dc94 +0x20:  mov    %eax,0x7c(%ebx)
0830dc97 +0x23:  add    $0x14,%esp
0830dc9a +0x26:  pop    %ebx
0830dc9b +0x27:  pop    %ebp
0830dc9c +0x28:  ret
```

## 反编译 C

```c
// CBattle_Field::onStartMap @ 0x830dc74

/* CBattle_Field::onStartMap() */

void __thiscall CBattle_Field::onStartMap(CBattle_Field *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetCurrentMapInfo(this);
  uVar2 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  return;
}
```
