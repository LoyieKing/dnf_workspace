# set_skill_slot

`_ZN9SkillSlot14set_skill_slotEPcS0_i`

`SkillSlot::set_skill_slot(char*, char*, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08603378` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08603378  _ZN9SkillSlot14set_skill_slotEPcS0_i
#           SkillSlot::set_skill_slot(char*, char*, int)
# range [0x08603378, 0x086033cb]
08603378 +0x00:  push   %ebp
08603379 +0x01:  mov    %esp,%ebp
0860337b +0x03:  sub    $0x18,%esp
0860337e +0x06:  mov    0x14(%ebp),%eax
08603381 +0x09:  cmp    $0x198,%eax
08603386 +0x0e:  jbe    0860338f <+0x17>
08603388 +0x10:  movl   $0x198,0x14(%ebp)
0860338f +0x17:  mov    0x14(%ebp),%eax
08603392 +0x1a:  mov    0x8(%ebp),%edx
08603395 +0x1d:  add    $0x46,%edx
08603398 +0x20:  mov    %eax,0x8(%esp)
0860339c +0x24:  mov    0xc(%ebp),%eax
0860339f +0x27:  mov    %eax,0x4(%esp)
086033a3 +0x2b:  mov    %edx,(%esp)
086033a6 +0x2e:  call   0807d8a0 <_init+0x198>
086033ab +0x33:  mov    0x14(%ebp),%eax
086033ae +0x36:  mov    0x8(%ebp),%edx
086033b1 +0x39:  add    $0x1de,%edx
086033b7 +0x3f:  mov    %eax,0x8(%esp)
086033bb +0x43:  mov    0x10(%ebp),%eax
086033be +0x46:  mov    %eax,0x4(%esp)
086033c2 +0x4a:  mov    %edx,(%esp)
086033c5 +0x4d:  call   0807d8a0 <_init+0x198>
086033ca +0x52:  leave
086033cb +0x53:  ret
```

## 反编译 C

```c
// SkillSlot::set_skill_slot @ 0x8603378

/* SkillSlot::set_skill_slot(char*, char*, int) */

void __thiscall SkillSlot::set_skill_slot(SkillSlot *this,char *param_1,char *param_2,int param_3)

{
  if (0x198 < (uint)param_3) {
    param_3 = 0x198;
  }
  memcpy(this + 0x46,param_1,param_3);
  memcpy(this + 0x1de,param_2,param_3);
  return;
}
```
