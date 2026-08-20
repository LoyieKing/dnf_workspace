# get_skill_count

`_ZN5CUser15get_skill_countEv`

`CUser::get_skill_count()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866af86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866af86  _ZN5CUser15get_skill_countEv
#           CUser::get_skill_count()
# range [0x0866af86, 0x0866afa1]
0866af86 +0x00:  push   %ebp
0866af87 +0x01:  mov    %esp,%ebp
0866af89 +0x03:  sub    $0x18,%esp
0866af8c +0x06:  mov    0x8(%ebp),%eax
0866af8f +0x09:  mov    %eax,(%esp)
0866af92 +0x0c:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866af97 +0x11:  mov    %eax,(%esp)
0866af9a +0x14:  call   08603652 <_ZNK9SkillSlot15get_skill_countEv>  ; SkillSlot::get_skill_count() const
0866af9f +0x19:  leave
0866afa0 +0x1a:  ret
0866afa1 +0x1b:  nop
```

## 反编译 C

```c
// CUser::get_skill_count @ 0x866af86

/* CUser::get_skill_count() */

void __thiscall CUser::get_skill_count(CUser *this)

{
  SkillSlot *this_00;
  
  this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  SkillSlot::get_skill_count(this_00);
  return;
}
```
