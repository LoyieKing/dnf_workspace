# GetSkillTreeIndex

`_ZNK9SkillSlot17GetSkillTreeIndexEv`

`SkillSlot::GetSkillTreeIndex() const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086067b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086067b8  _ZNK9SkillSlot17GetSkillTreeIndexEv
#           SkillSlot::GetSkillTreeIndex() const
# range [0x086067b8, 0x086067dd]
086067b8 +0x00:  push   %ebp
086067b9 +0x01:  mov    %esp,%ebp
086067bb +0x03:  sub    $0x18,%esp
086067be +0x06:  mov    0x8(%ebp),%eax
086067c1 +0x09:  mov    (%eax),%eax
086067c3 +0x0b:  test   %eax,%eax
086067c5 +0x0d:  jne    086067ce <+0x16>
086067c7 +0x0f:  mov    $0xffffffff,%eax
086067cc +0x14:  jmp    086067db <+0x23>
086067ce +0x16:  mov    0x8(%ebp),%eax
086067d1 +0x19:  mov    (%eax),%eax
086067d3 +0x1b:  mov    %eax,(%esp)
086067d6 +0x1e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086067db +0x23:  leave
086067dc +0x24:  ret
086067dd +0x25:  nop
```

## 反编译 C

```c
// SkillSlot::GetSkillTreeIndex @ 0x86067b8

/* SkillSlot::GetSkillTreeIndex() const */

undefined4 __thiscall SkillSlot::GetSkillTreeIndex(SkillSlot *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
  }
  return uVar1;
}
```
