# GetUniqueKey

`_ZN14GameResultType12GetUniqueKeyEv`

`GameResultType::GetUniqueKey()`

| 类 | 地址 |
|---|---|
| `GameResultType` | `0x084b75ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b75ae  _ZN14GameResultType12GetUniqueKeyEv
#           GameResultType::GetUniqueKey()
# range [0x084b75ae, 0x084b75d1]
084b75ae +0x00:  push   %ebp
084b75af +0x01:  mov    %esp,%ebp
084b75b1 +0x03:  mov    0x8(%ebp),%eax
084b75b4 +0x06:  mov    0x4(%eax),%edx
084b75b7 +0x09:  mov    %edx,%eax
084b75b9 +0x0b:  shl    $0x2,%eax
084b75bc +0x0e:  add    %edx,%eax
084b75be +0x10:  add    %eax,%eax
084b75c0 +0x12:  mov    %eax,%edx
084b75c2 +0x14:  mov    0x8(%ebp),%eax
084b75c5 +0x17:  movzbl 0x8(%eax),%eax
084b75c9 +0x1b:  movzbl %al,%eax
084b75cc +0x1e:  lea    (%edx,%eax,1),%eax
084b75cf +0x21:  pop    %ebp
084b75d0 +0x22:  ret
084b75d1 +0x23:  nop
```

## 反编译 C

```c
// GameResultType::GetUniqueKey @ 0x84b75ae

/* GameResultType::GetUniqueKey() */

int __thiscall GameResultType::GetUniqueKey(GameResultType *this)

{
  return *(int *)(this + 4) * 10 + (uint)(byte)this[8];
}
```
