# IsAvailableArtifactSlot

`_ZN13user_creature15CCreatureScript23IsAvailableArtifactSlotEi`

`user_creature::CCreatureScript::IsAvailableArtifactSlot(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScript` | `0x0833cb38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833cb38  _ZN13user_creature15CCreatureScript23IsAvailableArtifactSlotEi
#           user_creature::CCreatureScript::IsAvailableArtifactSlot(int)
# range [0x0833cb38, 0x0833cb5f]
0833cb38 +0x00:  push   %ebp
0833cb39 +0x01:  mov    %esp,%ebp
0833cb3b +0x03:  mov    0xc(%ebp),%eax
0833cb3e +0x06:  sub    $0x17,%eax
0833cb41 +0x09:  cmp    $0x3,%eax
0833cb44 +0x0c:  jle    0833cb4d <+0x15>
0833cb46 +0x0e:  mov    $0x0,%eax
0833cb4b +0x13:  jmp    0833cb5e <+0x26>
0833cb4d +0x15:  mov    0x8(%ebp),%eax
0833cb50 +0x18:  mov    0x20(%eax),%eax
0833cb53 +0x1b:  mov    0xc(%ebp),%edx
0833cb56 +0x1e:  sub    $0x17,%edx
0833cb59 +0x21:  add    %edx,%eax
0833cb5b +0x23:  movzbl (%eax),%eax
0833cb5e +0x26:  pop    %ebp
0833cb5f +0x27:  ret
```

## 反编译 C

```c
// user_creature::CCreatureScript::IsAvailableArtifactSlot @ 0x833cb38

/* user_creature::CCreatureScript::IsAvailableArtifactSlot(int) */

undefined1 __thiscall
user_creature::CCreatureScript::IsAvailableArtifactSlot(CCreatureScript *this,int param_1)

{
  undefined1 uVar1;
  
  if (param_1 + -0x17 < 4) {
    uVar1 = *(undefined1 *)(*(int *)(this + 0x20) + param_1 + -0x17);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
