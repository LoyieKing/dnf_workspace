# insert_skill_with_slot_index

`_ZN9SkillSlot28insert_skill_with_slot_indexEiibi`

`SkillSlot::insert_skill_with_slot_index(int, int, bool, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086043b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086043b4  _ZN9SkillSlot28insert_skill_with_slot_indexEiibi
#           SkillSlot::insert_skill_with_slot_index(int, int, bool, int)
# range [0x086043b4, 0x08604427]
086043b4 +0x00:  push   %ebp
086043b5 +0x01:  mov    %esp,%ebp
086043b7 +0x03:  sub    $0x38,%esp
086043ba +0x06:  mov    0x14(%ebp),%eax
086043bd +0x09:  mov    %al,-0x1c(%ebp)
086043c0 +0x0c:  cmpl   $0x0,0xc(%ebp)
086043c4 +0x10:  jns    086043cd <+0x19>
086043c6 +0x12:  mov    $0xfffffffc,%eax
086043cb +0x17:  jmp    08604425 <+0x71>
086043cd +0x19:  mov    0x8(%ebp),%eax
086043d0 +0x1c:  mov    (%eax),%eax
086043d2 +0x1e:  test   %eax,%eax
086043d4 +0x20:  jne    086043dd <+0x29>
086043d6 +0x22:  mov    $0xffffffff,%eax
086043db +0x27:  jmp    08604425 <+0x71>
086043dd +0x29:  mov    0x8(%ebp),%eax
086043e0 +0x2c:  mov    (%eax),%eax
086043e2 +0x2e:  mov    %eax,(%esp)
086043e5 +0x31:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086043ea +0x36:  mov    %eax,0x4(%esp)
086043ee +0x3a:  mov    0x8(%ebp),%eax
086043f1 +0x3d:  mov    %eax,(%esp)
086043f4 +0x40:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
086043f9 +0x45:  mov    %eax,-0xc(%ebp)
086043fc +0x48:  cmpl   $0x0,-0xc(%ebp)
08604400 +0x4c:  jne    08604409 <+0x55>
08604402 +0x4e:  mov    $0xffffffff,%eax
08604407 +0x53:  jmp    08604425 <+0x71>
08604409 +0x55:  mov    0xc(%ebp),%eax
0860440c +0x58:  add    %eax,%eax
0860440e +0x5a:  add    -0xc(%ebp),%eax
08604411 +0x5d:  mov    0xc(%ebp),%edx
08604414 +0x60:  mov    %dl,(%eax)
08604416 +0x62:  mov    0xc(%ebp),%eax
08604419 +0x65:  add    %eax,%eax
0860441b +0x67:  add    -0xc(%ebp),%eax
0860441e +0x6a:  movb   $0x1,0x1(%eax)
08604422 +0x6e:  mov    0xc(%ebp),%eax
08604425 +0x71:  leave
08604426 +0x72:  ret
08604427 +0x73:  nop
```

## 反编译 C

```c
// SkillSlot::insert_skill_with_slot_index @ 0x86043b4

/* SkillSlot::insert_skill_with_slot_index(int, int, bool, int) */

int SkillSlot::insert_skill_with_slot_index(int param_1,int param_2,bool param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = -4;
  }
  else if (*(int *)param_1 == 0) {
    param_2 = -1;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)param_1);
    iVar2 = get_skillslot_buf((SkillSlot *)param_1,uVar1);
    if (iVar2 == 0) {
      param_2 = -1;
    }
    else {
      *(char *)(param_2 * 2 + iVar2) = (char)param_2;
      *(undefined1 *)(param_2 * 2 + iVar2 + 1) = 1;
    }
  }
  return param_2;
}
```
