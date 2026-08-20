# setType

`_ZN22StrikerSkillAddCommand7setTypeEi`

`StrikerSkillAddCommand::setType(int)`

| 类 | 地址 |
|---|---|
| `StrikerSkillAddCommand` | `0x08a9d7cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d7cc  _ZN22StrikerSkillAddCommand7setTypeEi
#           StrikerSkillAddCommand::setType(int)
# range [0x08a9d7cc, 0x08a9d7eb]
08a9d7cc +0x00:  push   %ebp
08a9d7cd +0x01:  mov    %esp,%ebp
08a9d7cf +0x03:  cmpl   $0x0,0xc(%ebp)
08a9d7d3 +0x07:  js     08a9d7e6 <+0x1a>
08a9d7d5 +0x09:  cmpl   $0x8,0xc(%ebp)
08a9d7d9 +0x0d:  jg     08a9d7e9 <+0x1d>
08a9d7db +0x0f:  mov    0xc(%ebp),%edx
08a9d7de +0x12:  mov    0x8(%ebp),%eax
08a9d7e1 +0x15:  mov    %edx,0x8(%eax)
08a9d7e4 +0x18:  jmp    08a9d7ea <+0x1e>
08a9d7e6 +0x1a:  nop
08a9d7e7 +0x1b:  jmp    08a9d7ea <+0x1e>
08a9d7e9 +0x1d:  nop
08a9d7ea +0x1e:  pop    %ebp
08a9d7eb +0x1f:  ret
```

## 反编译 C

```c
// StrikerSkillAddCommand::setType @ 0x8a9d7cc

/* StrikerSkillAddCommand::setType(int) */

void __thiscall StrikerSkillAddCommand::setType(StrikerSkillAddCommand *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 9)) {
    *(int *)(this + 8) = param_1;
  }
  return;
}
```
