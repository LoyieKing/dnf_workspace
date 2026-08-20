# getIssue_mode

`_ZNK19CMissionList_Charac13getIssue_modeEb`

`CMissionList_Charac::getIssue_mode(bool) const`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e5194` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e5194  _ZNK19CMissionList_Charac13getIssue_modeEb
#           CMissionList_Charac::getIssue_mode(bool) const
# range [0x085e5194, 0x085e51bd]
085e5194 +0x00:  push   %ebp
085e5195 +0x01:  mov    %esp,%ebp
085e5197 +0x03:  sub    $0x4,%esp
085e519a +0x06:  mov    0xc(%ebp),%eax
085e519d +0x09:  mov    %al,-0x4(%ebp)
085e51a0 +0x0c:  cmpb   $0x0,-0x4(%ebp)
085e51a4 +0x10:  je     085e51b2 <+0x1e>
085e51a6 +0x12:  mov    0x8(%ebp),%eax
085e51a9 +0x15:  movzwl 0x148(%eax),%eax
085e51b0 +0x1c:  jmp    085e51bc <+0x28>
085e51b2 +0x1e:  mov    0x8(%ebp),%eax
085e51b5 +0x21:  movzwl 0x14a(%eax),%eax
085e51bc +0x28:  leave
085e51bd +0x29:  ret
```

## 反编译 C

```c
// CMissionList_Charac::getIssue_mode @ 0x85e5194

/* CMissionList_Charac::getIssue_mode(bool) const */

undefined2 __thiscall CMissionList_Charac::getIssue_mode(CMissionList_Charac *this,bool param_1)

{
  undefined2 uVar1;
  
  if (param_1) {
    uVar1 = *(undefined2 *)(this + 0x148);
  }
  else {
    uVar1 = *(undefined2 *)(this + 0x14a);
  }
  return uVar1;
}
```
