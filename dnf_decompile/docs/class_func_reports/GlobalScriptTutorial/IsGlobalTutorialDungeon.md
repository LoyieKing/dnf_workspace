# IsGlobalTutorialDungeon

`_ZN20GlobalScriptTutorial23IsGlobalTutorialDungeonEj`

`GlobalScriptTutorial::IsGlobalTutorialDungeon(unsigned int)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab976a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab976a  _ZN20GlobalScriptTutorial23IsGlobalTutorialDungeonEj
#           GlobalScriptTutorial::IsGlobalTutorialDungeon(unsigned int)
# range [0x08ab976a, 0x08ab9784]
08ab976a +0x00:  push   %ebp
08ab976b +0x01:  mov    %esp,%ebp
08ab976d +0x03:  mov    0x8(%ebp),%eax
08ab9770 +0x06:  cmp    $0xdb2,%eax
08ab9775 +0x0b:  jne    08ab977e <+0x14>
08ab9777 +0x0d:  mov    $0x1,%eax
08ab977c +0x12:  jmp    08ab9783 <+0x19>
08ab977e +0x14:  mov    $0x0,%eax
08ab9783 +0x19:  pop    %ebp
08ab9784 +0x1a:  ret
```

## 反编译 C

```c
// GlobalScriptTutorial::IsGlobalTutorialDungeon @ 0x8ab976a

/* GlobalScriptTutorial::IsGlobalTutorialDungeon(unsigned int) */

bool GlobalScriptTutorial::IsGlobalTutorialDungeon(uint param_1)

{
  return param_1 == 0xdb2;
}
```
