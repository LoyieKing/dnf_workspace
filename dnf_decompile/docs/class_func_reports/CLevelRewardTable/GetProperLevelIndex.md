# GetProperLevelIndex

`_ZN17CLevelRewardTable19GetProperLevelIndexEj`

`CLevelRewardTable::GetProperLevelIndex(unsigned int)`

| 类 | 地址 |
|---|---|
| `CLevelRewardTable` | `0x086876c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086876c8  _ZN17CLevelRewardTable19GetProperLevelIndexEj
#           CLevelRewardTable::GetProperLevelIndex(unsigned int)
# range [0x086876c8, 0x0868770f]
086876c8 +0x00:  push   %ebp
086876c9 +0x01:  mov    %esp,%ebp
086876cb +0x03:  sub    $0x10,%esp
086876ce +0x06:  movl   $0x0,-0x4(%ebp)
086876d5 +0x0d:  jmp    086876fb <+0x33>
086876d7 +0x0f:  mov    -0x4(%ebp),%edx
086876da +0x12:  mov    0x8(%ebp),%eax
086876dd +0x15:  mov    (%eax,%edx,4),%eax
086876e0 +0x18:  test   %eax,%eax
086876e2 +0x1a:  je     08687708 <+0x40>
086876e4 +0x1c:  mov    -0x4(%ebp),%edx
086876e7 +0x1f:  mov    0x8(%ebp),%eax
086876ea +0x22:  mov    (%eax,%edx,4),%eax
086876ed +0x25:  cmp    0xc(%ebp),%eax
086876f0 +0x28:  jne    086876f7 <+0x2f>
086876f2 +0x2a:  mov    -0x4(%ebp),%eax
086876f5 +0x2d:  jmp    0868770e <+0x46>
086876f7 +0x2f:  addl   $0x1,-0x4(%ebp)
086876fb +0x33:  cmpl   $0x45,-0x4(%ebp)
086876ff +0x37:  setle  %al
08687702 +0x3a:  test   %al,%al
08687704 +0x3c:  jne    086876d7 <+0xf>
08687706 +0x3e:  jmp    08687709 <+0x41>
08687708 +0x40:  nop
08687709 +0x41:  mov    $0xffffffff,%eax
0868770e +0x46:  leave
0868770f +0x47:  ret
```

## 反编译 C

```c
// CLevelRewardTable::GetProperLevelIndex @ 0x86876c8

/* CLevelRewardTable::GetProperLevelIndex(unsigned int) */

int __thiscall CLevelRewardTable::GetProperLevelIndex(CLevelRewardTable *this,uint param_1)

{
  int local_8;
  
  for (local_8 = 0; (local_8 < 0x46 && (*(int *)(this + local_8 * 4) != 0)); local_8 = local_8 + 1)
  {
    if (*(uint *)(this + local_8 * 4) == param_1) {
      return local_8;
    }
  }
  return -1;
}
```
