# Clear

`_ZN20TournamentRewardType5ClearEv`

`TournamentRewardType::Clear()`

| 类 | 地址 |
|---|---|
| `TournamentRewardType` | `0x08284750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284750  _ZN20TournamentRewardType5ClearEv
#           TournamentRewardType::Clear()
# range [0x08284750, 0x0828476f]
08284750 +0x00:  push   %ebp
08284751 +0x01:  mov    %esp,%ebp
08284753 +0x03:  mov    0x8(%ebp),%eax
08284756 +0x06:  movl   $0xffffffff,(%eax)
0828475c +0x0c:  mov    0x8(%ebp),%eax
0828475f +0x0f:  movl   $0x0,0x4(%eax)
08284766 +0x16:  mov    0x8(%ebp),%eax
08284769 +0x19:  movb   $0xff,0x8(%eax)
0828476d +0x1d:  pop    %ebp
0828476e +0x1e:  ret
0828476f +0x1f:  nop
```

## 反编译 C

```c
// TournamentRewardType::Clear @ 0x8284750

/* TournamentRewardType::Clear() */

void __thiscall TournamentRewardType::Clear(TournamentRewardType *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (TournamentRewardType)0xff;
  return;
}
```
