# init224

`_ZN17Secu_MonsterCheck7init224EPK15MSG_MONSTER_DIE`

`Secu_MonsterCheck::init224(MSG_MONSTER_DIE const*)`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827b2e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b2e4  _ZN17Secu_MonsterCheck7init224EPK15MSG_MONSTER_DIE
#           Secu_MonsterCheck::init224(MSG_MONSTER_DIE const*)
# range [0x0827b2e4, 0x0827b333]
0827b2e4 +0x00:  push   %ebp
0827b2e5 +0x01:  mov    %esp,%ebp
0827b2e7 +0x03:  sub    $0x18,%esp
0827b2ea +0x06:  mov    0x8(%ebp),%eax
0827b2ed +0x09:  movzbl 0x5(%eax),%eax
0827b2f1 +0x0d:  xor    $0x1,%eax
0827b2f4 +0x10:  test   %al,%al
0827b2f6 +0x12:  je     0827b331 <+0x4d>
0827b2f8 +0x14:  mov    0xc(%ebp),%eax
0827b2fb +0x17:  movzwl 0xd(%eax),%edx
0827b2ff +0x1b:  mov    0x8(%ebp),%eax
0827b302 +0x1e:  mov    %dx,0x12(%eax)
0827b306 +0x22:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0827b30d +0x29:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0827b312 +0x2e:  mov    0x8(%ebp),%edx
0827b315 +0x31:  mov    %eax,0x14(%edx)
0827b318 +0x34:  mov    0x8(%ebp),%eax
0827b31b +0x37:  movw   $0x0,0x18(%eax)
0827b321 +0x3d:  mov    0x8(%ebp),%eax
0827b324 +0x40:  movw   $0x0,0x1a(%eax)
0827b32a +0x46:  mov    0x8(%ebp),%eax
0827b32d +0x49:  movb   $0x1,0x5(%eax)
0827b331 +0x4d:  leave
0827b332 +0x4e:  ret
0827b333 +0x4f:  nop
```

## 反编译 C

```c
// Secu_MonsterCheck::init224 @ 0x827b2e4

/* Secu_MonsterCheck::init224(MSG_MONSTER_DIE const*) */

void __thiscall Secu_MonsterCheck::init224(Secu_MonsterCheck *this,MSG_MONSTER_DIE *param_1)

{
  undefined4 uVar1;
  
  if (this[5] != (Secu_MonsterCheck)0x1) {
    *(undefined2 *)(this + 0x12) = *(undefined2 *)(param_1 + 0xd);
    uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x14) = uVar1;
    *(undefined2 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 0x1a) = 0;
    this[5] = (Secu_MonsterCheck)0x1;
  }
  return;
}
```
