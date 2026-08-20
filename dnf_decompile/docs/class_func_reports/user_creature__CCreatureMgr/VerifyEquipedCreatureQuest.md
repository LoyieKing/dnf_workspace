# VerifyEquipedCreatureQuest

`_ZNK13user_creature12CCreatureMgr26VerifyEquipedCreatureQuestEv`

`user_creature::CCreatureMgr::VerifyEquipedCreatureQuest() const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833d6fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d6fa  _ZNK13user_creature12CCreatureMgr26VerifyEquipedCreatureQuestEv
#           user_creature::CCreatureMgr::VerifyEquipedCreatureQuest() const
# range [0x0833d6fa, 0x0833d757]
0833d6fa +0x00:  push   %ebp
0833d6fb +0x01:  mov    %esp,%ebp
0833d6fd +0x03:  sub    $0x18,%esp
0833d700 +0x06:  mov    0x8(%ebp),%eax
0833d703 +0x09:  mov    0x18(%eax),%eax
0833d706 +0x0c:  test   %eax,%eax
0833d708 +0x0e:  je     0833d750 <+0x56>
0833d70a +0x10:  mov    0x8(%ebp),%eax
0833d70d +0x13:  mov    0x18(%eax),%eax
0833d710 +0x16:  mov    %eax,(%esp)
0833d713 +0x19:  call   0833f0ca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1197>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1197
0833d718 +0x1e:  test   %al,%al
0833d71a +0x20:  je     0833d736 <+0x3c>
0833d71c +0x22:  mov    0x8(%ebp),%eax
0833d71f +0x25:  mov    0x1c(%eax),%edx
0833d722 +0x28:  mov    0x8(%ebp),%eax
0833d725 +0x2b:  mov    0x18(%eax),%eax
0833d728 +0x2e:  mov    %edx,0x4(%esp)
0833d72c +0x32:  mov    %eax,(%esp)
0833d72f +0x35:  call   08337d58 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser>  ; user_creature::CCreature::IsAbleSelectEvolute(CUser*)
0833d734 +0x3a:  jmp    0833d755 <+0x5b>
0833d736 +0x3c:  mov    0x8(%ebp),%eax
0833d739 +0x3f:  mov    0x1c(%eax),%edx
0833d73c +0x42:  mov    0x8(%ebp),%eax
0833d73f +0x45:  mov    0x18(%eax),%eax
0833d742 +0x48:  mov    %edx,0x4(%esp)
0833d746 +0x4c:  mov    %eax,(%esp)
0833d749 +0x4f:  call   083380fc <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser>  ; user_creature::CCreature::IsAbleEvolute(CUser*) const
0833d74e +0x54:  jmp    0833d755 <+0x5b>
0833d750 +0x56:  mov    $0x0,%eax
0833d755 +0x5b:  leave
0833d756 +0x5c:  ret
0833d757 +0x5d:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::VerifyEquipedCreatureQuest @ 0x833d6fa

/* user_creature::CCreatureMgr::VerifyEquipedCreatureQuest() const */

undefined4 __thiscall user_creature::CCreatureMgr::VerifyEquipedCreatureQuest(CCreatureMgr *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CCreature::IsGrowCreature(*(CCreature **)(this + 0x18));
    if (cVar1 == '\0') {
      uVar2 = CCreature::IsAbleEvolute(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c));
    }
    else {
      uVar2 = CCreature::IsAbleSelectEvolute(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c));
    }
  }
  return uVar2;
}
```
