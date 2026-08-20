# isEventCharacter

`_ZN23EventNewCharacterReward16isEventCharacterEi`

`EventNewCharacterReward::isEventCharacter(int)`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816bcea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bcea  _ZN23EventNewCharacterReward16isEventCharacterEi
#           EventNewCharacterReward::isEventCharacter(int)
# range [0x0816bcea, 0x0816bd05]
0816bcea +0x00:  push   %ebp
0816bceb +0x01:  mov    %esp,%ebp
0816bced +0x03:  mov    0x8(%ebp),%eax
0816bcf0 +0x06:  mov    0xc(%eax),%eax
0816bcf3 +0x09:  cmp    0xc(%ebp),%eax
0816bcf6 +0x0c:  jne    0816bcff <+0x15>
0816bcf8 +0x0e:  mov    $0x1,%eax
0816bcfd +0x13:  jmp    0816bd04 <+0x1a>
0816bcff +0x15:  mov    $0x0,%eax
0816bd04 +0x1a:  pop    %ebp
0816bd05 +0x1b:  ret
```

## 反编译 C

```c
// EventNewCharacterReward::isEventCharacter @ 0x816bcea

/* EventNewCharacterReward::isEventCharacter(int) */

bool __thiscall EventNewCharacterReward::isEventCharacter(EventNewCharacterReward *this,int param_1)

{
  return *(int *)(this + 0xc) == param_1;
}
```
