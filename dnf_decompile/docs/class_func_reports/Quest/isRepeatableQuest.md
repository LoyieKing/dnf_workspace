# isRepeatableQuest

`_ZNK5Quest17isRepeatableQuestEv`

`Quest::isRepeatableQuest() const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08352bee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08352bee  _ZNK5Quest17isRepeatableQuestEv
#           Quest::isRepeatableQuest() const
# range [0x08352bee, 0x08352c0f]
08352bee +0x00:  push   %ebp
08352bef +0x01:  mov    %esp,%ebp
08352bf1 +0x03:  mov    0x8(%ebp),%eax
08352bf4 +0x06:  mov    0x8(%eax),%eax
08352bf7 +0x09:  cmp    $0x4,%eax
08352bfa +0x0c:  je     08352c01 <+0x13>
08352bfc +0x0e:  cmp    $0x8,%eax
08352bff +0x11:  jne    08352c08 <+0x1a>
08352c01 +0x13:  mov    $0x1,%eax
08352c06 +0x18:  jmp    08352c0d <+0x1f>
08352c08 +0x1a:  mov    $0x0,%eax
08352c0d +0x1f:  pop    %ebp
08352c0e +0x20:  ret
08352c0f +0x21:  nop
```

## 反编译 C

```c
// Quest::isRepeatableQuest @ 0x8352bee

/* Quest::isRepeatableQuest() const */

undefined4 __thiscall Quest::isRepeatableQuest(Quest *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 8) == 4) || (*(int *)(this + 8) == 8)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
