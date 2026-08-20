# EntranceQuery

`_ZN6Taiwan13EntranceQueryC1Ev`

`Taiwan::EntranceQuery::EntranceQuery()`

| 类 | 地址 |
|---|---|
| `Taiwan::EntranceQuery` | `0x08173ffa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173ffa  _ZN6Taiwan13EntranceQueryC1Ev
#           Taiwan::EntranceQuery::EntranceQuery()
# range [0x08173ffa, 0x08174011]
08173ffa +0x00:  push   %ebp
08173ffb +0x01:  mov    %esp,%ebp
08173ffd +0x03:  mov    0x8(%ebp),%eax
08174000 +0x06:  movl   $0x0,(%eax)
08174006 +0x0c:  mov    0x8(%ebp),%eax
08174009 +0x0f:  movl   $0x0,0x4(%eax)
08174010 +0x16:  pop    %ebp
08174011 +0x17:  ret
```

## 反编译 C

```c
// Taiwan::EntranceQuery::EntranceQuery @ 0x8173ffa

/* Taiwan::EntranceQuery::EntranceQuery() */

void __thiscall Taiwan::EntranceQuery::EntranceQuery(EntranceQuery *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
