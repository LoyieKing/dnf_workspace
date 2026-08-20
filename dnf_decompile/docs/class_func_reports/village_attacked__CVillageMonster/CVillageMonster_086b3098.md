# CVillageMonster

`_ZN16village_attacked15CVillageMonsterC1Ev`

`village_attacked::CVillageMonster::CVillageMonster()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b3098` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3098  _ZN16village_attacked15CVillageMonsterC1Ev
#           village_attacked::CVillageMonster::CVillageMonster()
# range [0x086b3098, 0x086b3105]
086b3098 +0x00:  push   %ebp
086b3099 +0x01:  mov    %esp,%ebp
086b309b +0x03:  mov    0x8(%ebp),%eax
086b309e +0x06:  movl   $0x0,0x1c(%eax)
086b30a5 +0x0d:  mov    0x8(%ebp),%eax
086b30a8 +0x10:  movw   $0x0,(%eax)
086b30ad +0x15:  mov    0x8(%ebp),%eax
086b30b0 +0x18:  movw   $0x0,0x2(%eax)
086b30b6 +0x1e:  mov    0x8(%ebp),%eax
086b30b9 +0x21:  movl   $0x0,0x4(%eax)
086b30c0 +0x28:  mov    0x8(%ebp),%eax
086b30c3 +0x2b:  movl   $0x0,0x8(%eax)
086b30ca +0x32:  mov    0x8(%ebp),%eax
086b30cd +0x35:  movb   $0x0,0x10(%eax)
086b30d1 +0x39:  mov    0x8(%ebp),%eax
086b30d4 +0x3c:  movl   $0x0,0xc(%eax)
086b30db +0x43:  mov    0x8(%ebp),%eax
086b30de +0x46:  movl   $0xffffffff,0x18(%eax)
086b30e5 +0x4d:  mov    0x8(%ebp),%eax
086b30e8 +0x50:  movl   $0x0,0x14(%eax)
086b30ef +0x57:  mov    0x8(%ebp),%eax
086b30f2 +0x5a:  movl   $0x0,0x20(%eax)
086b30f9 +0x61:  mov    0x8(%ebp),%eax
086b30fc +0x64:  movl   $0x0,0x24(%eax)
086b3103 +0x6b:  pop    %ebp
086b3104 +0x6c:  ret
086b3105 +0x6d:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonster::CVillageMonster @ 0x86b3098

/* village_attacked::CVillageMonster::CVillageMonster() */

void __thiscall village_attacked::CVillageMonster::CVillageMonster(CVillageMonster *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined2 *)this = 0;
  *(undefined2 *)(this + 2) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x10] = (CVillageMonster)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}
```
