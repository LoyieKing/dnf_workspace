# init223

`_ZN17Secu_MonsterCheck7init223EPK15MSG_MONSTER_DIE`

`Secu_MonsterCheck::init223(MSG_MONSTER_DIE const*)`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827b288` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b288  _ZN17Secu_MonsterCheck7init223EPK15MSG_MONSTER_DIE
#           Secu_MonsterCheck::init223(MSG_MONSTER_DIE const*)
# range [0x0827b288, 0x0827b2e3]
0827b288 +0x00:  push   %ebp
0827b289 +0x01:  mov    %esp,%ebp
0827b28b +0x03:  mov    0x8(%ebp),%eax
0827b28e +0x06:  movzbl 0x4(%eax),%eax
0827b292 +0x0a:  xor    $0x1,%eax
0827b295 +0x0d:  test   %al,%al
0827b297 +0x0f:  je     0827b2e2 <+0x5a>
0827b299 +0x11:  mov    0xc(%ebp),%eax
0827b29c +0x14:  movzwl 0xd(%eax),%edx
0827b2a0 +0x18:  mov    0x8(%ebp),%eax
0827b2a3 +0x1b:  mov    %dx,0x8(%eax)
0827b2a7 +0x1f:  mov    0xc(%ebp),%eax
0827b2aa +0x22:  movzwl 0xa24(%eax),%edx
0827b2b1 +0x29:  mov    0x8(%ebp),%eax
0827b2b4 +0x2c:  mov    %dx,0xa(%eax)
0827b2b8 +0x30:  mov    0xc(%ebp),%eax
0827b2bb +0x33:  movzwl 0xa26(%eax),%edx
0827b2c2 +0x3a:  mov    0x8(%ebp),%eax
0827b2c5 +0x3d:  mov    %dx,0xc(%eax)
0827b2c9 +0x41:  mov    0x8(%ebp),%eax
0827b2cc +0x44:  movw   $0x0,0xe(%eax)
0827b2d2 +0x4a:  mov    0x8(%ebp),%eax
0827b2d5 +0x4d:  movw   $0x0,0x10(%eax)
0827b2db +0x53:  mov    0x8(%ebp),%eax
0827b2de +0x56:  movb   $0x1,0x4(%eax)
0827b2e2 +0x5a:  pop    %ebp
0827b2e3 +0x5b:  ret
```

## 反编译 C

```c
// Secu_MonsterCheck::init223 @ 0x827b288

/* Secu_MonsterCheck::init223(MSG_MONSTER_DIE const*) */

void __thiscall Secu_MonsterCheck::init223(Secu_MonsterCheck *this,MSG_MONSTER_DIE *param_1)

{
  if (this[4] != (Secu_MonsterCheck)0x1) {
    *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 0xd);
    *(undefined2 *)(this + 10) = *(undefined2 *)(param_1 + 0xa24);
    *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 0xa26);
    *(undefined2 *)(this + 0xe) = 0;
    *(undefined2 *)(this + 0x10) = 0;
    this[4] = (Secu_MonsterCheck)0x1;
  }
  return;
}
```
