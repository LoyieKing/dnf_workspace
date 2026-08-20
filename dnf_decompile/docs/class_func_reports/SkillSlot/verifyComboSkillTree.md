# verifyComboSkillTree

`_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND`

`SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x0860922c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860922c  _ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND
#           SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND)
# range [0x0860922c, 0x086092ec]
0860922c +0x00:  push   %ebp
0860922d +0x01:  mov    %esp,%ebp
0860922f +0x03:  sub    $0x38,%esp
08609232 +0x06:  mov    0xc(%ebp),%eax
08609235 +0x09:  test   %eax,%eax
08609237 +0x0b:  je     08609276 <+0x4a>
08609239 +0x0d:  mov    0xc(%ebp),%eax
0860923c +0x10:  cmp    $0x1,%eax
0860923f +0x13:  je     08609276 <+0x4a>
08609241 +0x15:  mov    0xc(%ebp),%eax
08609244 +0x18:  mov    %eax,0x14(%esp)
08609248 +0x1c:  movl   $"SkillSlot::verifyComboSkillTree kind(%d) error",0x10(%esp)
08609250 +0x24:  movl   $0xd33,0xc(%esp)
08609258 +0x2c:  movl   $&_ZZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08609260 +0x34:  movl   $"skill_slot.cpp",0x4(%esp)
08609268 +0x3c:  movl   $0x1,(%esp)
0860926f +0x43:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08609274 +0x48:  jmp    086092eb <+0xbf>
08609276 +0x4a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860927b +0x4f:  mov    0x14(%eax),%eax
0860927e +0x52:  add    $0x48fc,%eax
08609283 +0x57:  mov    %eax,-0x10(%ebp)
08609286 +0x5a:  movl   $0x0,-0xc(%ebp)
0860928d +0x61:  jmp    086092e0 <+0xb4>
0860928f +0x63:  mov    -0xc(%ebp),%eax
08609292 +0x66:  mov    %eax,0x4(%esp)
08609296 +0x6a:  mov    -0x10(%ebp),%eax
08609299 +0x6d:  mov    %eax,(%esp)
0860929c +0x70:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086092a1 +0x75:  mov    (%eax),%eax
086092a3 +0x77:  test   %eax,%eax
086092a5 +0x79:  sete   %al
086092a8 +0x7c:  test   %al,%al
086092aa +0x7e:  jne    086092db <+0xaf>
086092ac +0x80:  mov    -0xc(%ebp),%eax
086092af +0x83:  mov    %eax,0x4(%esp)
086092b3 +0x87:  mov    -0x10(%ebp),%eax
086092b6 +0x8a:  mov    %eax,(%esp)
086092b9 +0x8d:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086092be +0x92:  mov    (%eax),%eax
086092c0 +0x94:  mov    0x8(%ebp),%edx
086092c3 +0x97:  add    $0x1c,%edx
086092c6 +0x9a:  mov    %eax,0x8(%esp)
086092ca +0x9e:  mov    0xc(%ebp),%eax
086092cd +0xa1:  mov    %eax,0x4(%esp)
086092d1 +0xa5:  mov    %edx,(%esp)
086092d4 +0xa8:  call   080ea206 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi>  ; ComboSkill::eraseDuplicationComboSKill(ENUM_SKILL_TREE_KIND, int)
086092d9 +0xad:  jmp    086092dc <+0xb0>
086092db +0xaf:  nop
086092dc +0xb0:  addl   $0x1,-0xc(%ebp)
086092e0 +0xb4:  cmpl   $0x5,-0xc(%ebp)
086092e4 +0xb8:  setle  %al
086092e7 +0xbb:  test   %al,%al
086092e9 +0xbd:  jne    0860928f <+0x63>
086092eb +0xbf:  leave
086092ec +0xc0:  ret
```

## 反编译 C

```c
// SkillSlot::verifyComboSkillTree @ 0x860922c

/* SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::verifyComboSkillTree(SkillSlot *this,int param_2)

{
  int iVar1;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *this_00;
  int *piVar2;
  undefined4 *puVar3;
  uint local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    iVar1 = G_CDataManager();
    this_00 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
              (*(int *)(iVar1 + 0x14) + 0x48fc);
    for (local_10 = 0; (int)local_10 < 6; local_10 = local_10 + 1) {
      piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                (this_00,local_10);
      if (*piVar2 != 0) {
        puVar3 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           (this_00,local_10);
        ComboSkill::eraseDuplicationComboSKill((ComboSkill *)(this + 0x1c),param_2,*puVar3);
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp","void SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND)",0xd33
               ,"SkillSlot::verifyComboSkillTree kind(%d) error",param_2);
  }
  return;
}
```
