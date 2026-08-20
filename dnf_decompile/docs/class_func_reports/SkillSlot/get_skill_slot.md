# get_skill_slot

`_ZNK9SkillSlot14get_skill_slotEPcS0_i`

`SkillSlot::get_skill_slot(char*, char*, int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086033cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086033cc  _ZNK9SkillSlot14get_skill_slotEPcS0_i
#           SkillSlot::get_skill_slot(char*, char*, int) const
# range [0x086033cc, 0x0860341f]
086033cc +0x00:  push   %ebp
086033cd +0x01:  mov    %esp,%ebp
086033cf +0x03:  sub    $0x18,%esp
086033d2 +0x06:  mov    0x14(%ebp),%eax
086033d5 +0x09:  cmp    $0x198,%eax
086033da +0x0e:  jbe    086033e3 <+0x17>
086033dc +0x10:  movl   $0x198,0x14(%ebp)
086033e3 +0x17:  mov    0x14(%ebp),%eax
086033e6 +0x1a:  mov    0x8(%ebp),%edx
086033e9 +0x1d:  add    $0x46,%edx
086033ec +0x20:  mov    %eax,0x8(%esp)
086033f0 +0x24:  mov    %edx,0x4(%esp)
086033f4 +0x28:  mov    0xc(%ebp),%eax
086033f7 +0x2b:  mov    %eax,(%esp)
086033fa +0x2e:  call   0807d8a0 <_init+0x198>
086033ff +0x33:  mov    0x14(%ebp),%eax
08603402 +0x36:  mov    0x8(%ebp),%edx
08603405 +0x39:  add    $0x1de,%edx
0860340b +0x3f:  mov    %eax,0x8(%esp)
0860340f +0x43:  mov    %edx,0x4(%esp)
08603413 +0x47:  mov    0x10(%ebp),%eax
08603416 +0x4a:  mov    %eax,(%esp)
08603419 +0x4d:  call   0807d8a0 <_init+0x198>
0860341e +0x52:  leave
0860341f +0x53:  ret
```

## 反编译 C

```c
// SkillSlot::get_skill_slot @ 0x86033cc

/* SkillSlot::get_skill_slot(char*, char*, int) const */

void __thiscall SkillSlot::get_skill_slot(SkillSlot *this,char *param_1,char *param_2,int param_3)

{
  if (0x198 < (uint)param_3) {
    param_3 = 0x198;
  }
  memcpy(param_1,this + 0x46,param_3);
  memcpy(param_2,this + 0x1de,param_3);
  return;
}
```
