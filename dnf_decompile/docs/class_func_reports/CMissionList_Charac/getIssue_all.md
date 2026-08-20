# getIssue_all

`_ZNK19CMissionList_Charac12getIssue_allEv`

`CMissionList_Charac::getIssue_all() const`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e51be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e51be  _ZNK19CMissionList_Charac12getIssue_allEv
#           CMissionList_Charac::getIssue_all() const
# range [0x085e51be, 0x085e51cd]
085e51be +0x00:  push   %ebp
085e51bf +0x01:  mov    %esp,%ebp
085e51c1 +0x03:  mov    0x8(%ebp),%eax
085e51c4 +0x06:  movzwl 0x14c(%eax),%eax
085e51cb +0x0d:  pop    %ebp
085e51cc +0x0e:  ret
085e51cd +0x0f:  nop
```

## 反编译 C

```c
// CMissionList_Charac::getIssue_all @ 0x85e51be

/* CMissionList_Charac::getIssue_all() const */

undefined2 __thiscall CMissionList_Charac::getIssue_all(CMissionList_Charac *this)

{
  return *(undefined2 *)(this + 0x14c);
}
```
