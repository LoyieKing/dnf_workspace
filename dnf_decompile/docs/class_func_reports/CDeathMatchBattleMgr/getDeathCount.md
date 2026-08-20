# getDeathCount

`_ZN20CDeathMatchBattleMgr13getDeathCountEi`

`CDeathMatchBattleMgr::getDeathCount(int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085df540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085df540  _ZN20CDeathMatchBattleMgr13getDeathCountEi
#           CDeathMatchBattleMgr::getDeathCount(int)
# range [0x085df540, 0x085df55e]
085df540 +0x00:  push   %ebp
085df541 +0x01:  mov    %esp,%ebp
085df543 +0x03:  cmpl   $0x7,0xc(%ebp)
085df547 +0x07:  jg     085df558 <+0x18>
085df549 +0x09:  mov    0xc(%ebp),%edx
085df54c +0x0c:  mov    0x8(%ebp),%eax
085df54f +0x0f:  add    $0x8,%edx
085df552 +0x12:  mov    0x4(%eax,%edx,4),%eax
085df556 +0x16:  jmp    085df55d <+0x1d>
085df558 +0x18:  mov    $0x0,%eax
085df55d +0x1d:  pop    %ebp
085df55e +0x1e:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::getDeathCount @ 0x85df540

/* CDeathMatchBattleMgr::getDeathCount(int) */

undefined4 __thiscall CDeathMatchBattleMgr::getDeathCount(CDeathMatchBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(this + (param_1 + 8) * 4 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
