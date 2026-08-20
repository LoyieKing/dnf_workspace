# finishBloodDungeon

`_ZN6CParty18finishBloodDungeonEv`

`CParty::finishBloodDungeon()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b8f92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b8f92  _ZN6CParty18finishBloodDungeonEv
#           CParty::finishBloodDungeon()
# range [0x085b8f92, 0x085b8fa5]
085b8f92 +0x00:  push   %ebp
085b8f93 +0x01:  mov    %esp,%ebp
085b8f95 +0x03:  sub    $0x18,%esp
085b8f98 +0x06:  mov    0x8(%ebp),%eax
085b8f9b +0x09:  mov    %eax,(%esp)
085b8f9e +0x0c:  call   085aca60 <_ZN6CParty15ReturnToVillageEv>  ; CParty::ReturnToVillage()
085b8fa3 +0x11:  leave
085b8fa4 +0x12:  ret
085b8fa5 +0x13:  nop
```

## 反编译 C

```c
// CParty::finishBloodDungeon @ 0x85b8f92

/* CParty::finishBloodDungeon() */

void __thiscall CParty::finishBloodDungeon(CParty *this)

{
  ReturnToVillage(this);
  return;
}
```
