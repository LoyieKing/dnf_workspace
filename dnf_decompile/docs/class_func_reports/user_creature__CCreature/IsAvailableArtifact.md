# IsAvailableArtifact

`_ZN13user_creature9CCreature19IsAvailableArtifactEi`

`user_creature::CCreature::IsAvailableArtifact(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083376f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083376f6  _ZN13user_creature9CCreature19IsAvailableArtifactEi
#           user_creature::CCreature::IsAvailableArtifact(int)
# range [0x083376f6, 0x08337723]
083376f6 +0x00:  push   %ebp
083376f7 +0x01:  mov    %esp,%ebp
083376f9 +0x03:  sub    $0x18,%esp
083376fc +0x06:  mov    0x8(%ebp),%eax
083376ff +0x09:  mov    0x44(%eax),%eax
08337702 +0x0c:  test   %eax,%eax
08337704 +0x0e:  jne    0833770d <+0x17>
08337706 +0x10:  mov    $0x0,%eax
0833770b +0x15:  jmp    08337722 <+0x2c>
0833770d +0x17:  mov    0x8(%ebp),%eax
08337710 +0x1a:  mov    0x44(%eax),%eax
08337713 +0x1d:  mov    0xc(%ebp),%edx
08337716 +0x20:  mov    %edx,0x4(%esp)
0833771a +0x24:  mov    %eax,(%esp)
0833771d +0x27:  call   0833cb38 <_ZN13user_creature15CCreatureScript23IsAvailableArtifactSlotEi>  ; user_creature::CCreatureScript::IsAvailableArtifactSlot(int)
08337722 +0x2c:  leave
08337723 +0x2d:  ret
```

## 反编译 C

```c
// user_creature::CCreature::IsAvailableArtifact @ 0x83376f6

/* user_creature::CCreature::IsAvailableArtifact(int) */

undefined4 __thiscall user_creature::CCreature::IsAvailableArtifact(CCreature *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreatureScript::IsAvailableArtifactSlot(*(CCreatureScript **)(this + 0x44),param_1);
  }
  return uVar1;
}
```
