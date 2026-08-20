# init225

`_ZN17Secu_MonsterCheck7init225EPK15MSG_MONSTER_DIE`

`Secu_MonsterCheck::init225(MSG_MONSTER_DIE const*)`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827b334` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b334  _ZN17Secu_MonsterCheck7init225EPK15MSG_MONSTER_DIE
#           Secu_MonsterCheck::init225(MSG_MONSTER_DIE const*)
# range [0x0827b334, 0x0827b382]
0827b334 +0x00:  push   %ebp
0827b335 +0x01:  mov    %esp,%ebp
0827b337 +0x03:  sub    $0x18,%esp
0827b33a +0x06:  mov    0x8(%ebp),%eax
0827b33d +0x09:  movzbl 0x6(%eax),%eax
0827b341 +0x0d:  xor    $0x1,%eax
0827b344 +0x10:  test   %al,%al
0827b346 +0x12:  je     0827b381 <+0x4d>
0827b348 +0x14:  mov    0xc(%ebp),%eax
0827b34b +0x17:  movzwl 0xd(%eax),%edx
0827b34f +0x1b:  mov    0x8(%ebp),%eax
0827b352 +0x1e:  mov    %dx,0x1c(%eax)
0827b356 +0x22:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0827b35d +0x29:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0827b362 +0x2e:  mov    0x8(%ebp),%edx
0827b365 +0x31:  mov    %eax,0x20(%edx)
0827b368 +0x34:  mov    0x8(%ebp),%eax
0827b36b +0x37:  movw   $0x0,0x24(%eax)
0827b371 +0x3d:  mov    0x8(%ebp),%eax
0827b374 +0x40:  movw   $0x0,0x26(%eax)
0827b37a +0x46:  mov    0x8(%ebp),%eax
0827b37d +0x49:  movb   $0x1,0x6(%eax)
0827b381 +0x4d:  leave
0827b382 +0x4e:  ret
```

## 反编译 C

```c
// Secu_MonsterCheck::init225 @ 0x827b334

/* Secu_MonsterCheck::init225(MSG_MONSTER_DIE const*) */

void __thiscall Secu_MonsterCheck::init225(Secu_MonsterCheck *this,MSG_MONSTER_DIE *param_1)

{
  undefined4 uVar1;
  
  if (this[6] != (Secu_MonsterCheck)0x1) {
    *(undefined2 *)(this + 0x1c) = *(undefined2 *)(param_1 + 0xd);
    uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x20) = uVar1;
    *(undefined2 *)(this + 0x24) = 0;
    *(undefined2 *)(this + 0x26) = 0;
    this[6] = (Secu_MonsterCheck)0x1;
  }
  return;
}
```
