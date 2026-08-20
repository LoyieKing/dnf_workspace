# getKillCount

`_ZN20CDeathMatchBattleMgr12getKillCountEi`

`CDeathMatchBattleMgr::getKillCount(int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085df524` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085df524  _ZN20CDeathMatchBattleMgr12getKillCountEi
#           CDeathMatchBattleMgr::getKillCount(int)
# range [0x085df524, 0x085df53f]
085df524 +0x00:  push   %ebp
085df525 +0x01:  mov    %esp,%ebp
085df527 +0x03:  cmpl   $0x7,0xc(%ebp)
085df52b +0x07:  jg     085df539 <+0x15>
085df52d +0x09:  mov    0xc(%ebp),%edx
085df530 +0x0c:  mov    0x8(%ebp),%eax
085df533 +0x0f:  mov    0x4(%eax,%edx,4),%eax
085df537 +0x13:  jmp    085df53e <+0x1a>
085df539 +0x15:  mov    $0x0,%eax
085df53e +0x1a:  pop    %ebp
085df53f +0x1b:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::getKillCount @ 0x85df524

/* CDeathMatchBattleMgr::getKillCount(int) */

undefined4 __thiscall CDeathMatchBattleMgr::getKillCount(CDeathMatchBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(this + param_1 * 4 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
