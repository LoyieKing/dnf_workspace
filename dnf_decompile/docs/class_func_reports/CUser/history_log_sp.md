# history_log_sp

`_ZN5CUser14history_log_spEii12eSPAddReason`

`CUser::history_log_sp(int, int, eSPAddReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866ac0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866ac0e  _ZN5CUser14history_log_spEii12eSPAddReason
#           CUser::history_log_sp(int, int, eSPAddReason)
# range [0x0866ac0e, 0x0866accf]
0866ac0e +0x00:  push   %ebp
0866ac0f +0x01:  mov    %esp,%ebp
0866ac11 +0x03:  sub    $0x28,%esp
0866ac14 +0x06:  cmpl   $0xffffffff,0xc(%ebp)
0866ac18 +0x0a:  jne    0866ac62 <+0x54>
0866ac1a +0x0c:  mov    0x8(%ebp),%eax
0866ac1d +0x0f:  mov    %eax,(%esp)
0866ac20 +0x12:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ac25 +0x17:  movl   $0x0,0x4(%esp)
0866ac2d +0x1f:  mov    %eax,(%esp)
0866ac30 +0x22:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866ac35 +0x27:  mov    0x8(%ebp),%edx
0866ac38 +0x2a:  lea    0x79700(%edx),%ecx
0866ac3e +0x30:  mov    0x14(%ebp),%edx
0866ac41 +0x33:  mov    %edx,0x10(%esp)
0866ac45 +0x37:  mov    0x10(%ebp),%edx
0866ac48 +0x3a:  mov    %edx,0xc(%esp)
0866ac4c +0x3e:  mov    %eax,0x8(%esp)
0866ac50 +0x42:  movl   $0x0,0x4(%esp)
0866ac58 +0x4a:  mov    %ecx,(%esp)
0866ac5b +0x4d:  call   08682bae <_ZN15cUserHistoryLog5SPAddEiii12eSPAddReason>  ; cUserHistoryLog::SPAdd(int, int, int, eSPAddReason)
0866ac60 +0x52:  jmp    0866accd <+0xbf>
0866ac62 +0x54:  mov    0x8(%ebp),%eax
0866ac65 +0x57:  mov    %eax,(%esp)
0866ac68 +0x5a:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ac6d +0x5f:  movl   $0x0,0x4(%esp)
0866ac75 +0x67:  mov    %eax,(%esp)
0866ac78 +0x6a:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866ac7d +0x6f:  cmp    0xc(%ebp),%eax
0866ac80 +0x72:  setne  %al
0866ac83 +0x75:  test   %al,%al
0866ac85 +0x77:  je     0866accd <+0xbf>
0866ac87 +0x79:  mov    0x8(%ebp),%eax
0866ac8a +0x7c:  mov    %eax,(%esp)
0866ac8d +0x7f:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ac92 +0x84:  movl   $0x0,0x4(%esp)
0866ac9a +0x8c:  mov    %eax,(%esp)
0866ac9d +0x8f:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866aca2 +0x94:  mov    0x8(%ebp),%edx
0866aca5 +0x97:  lea    0x79700(%edx),%ecx
0866acab +0x9d:  mov    0x14(%ebp),%edx
0866acae +0xa0:  mov    %edx,0x10(%esp)
0866acb2 +0xa4:  mov    0x10(%ebp),%edx
0866acb5 +0xa7:  mov    %edx,0xc(%esp)
0866acb9 +0xab:  mov    %eax,0x8(%esp)
0866acbd +0xaf:  movl   $0x0,0x4(%esp)
0866acc5 +0xb7:  mov    %ecx,(%esp)
0866acc8 +0xba:  call   08682bae <_ZN15cUserHistoryLog5SPAddEiii12eSPAddReason>  ; cUserHistoryLog::SPAdd(int, int, int, eSPAddReason)
0866accd +0xbf:  leave
0866acce +0xc0:  ret
0866accf +0xc1:  nop
```

## 反编译 C

```c
// CUser::history_log_sp @ 0x866ac0e

/* CUser::history_log_sp(int, int, eSPAddReason) */

void __thiscall CUser::history_log_sp(CUser *this,int param_1,undefined4 param_2,undefined4 param_4)

{
  SkillSlot *pSVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == -1) {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    uVar2 = SkillSlot::get_remain_sp_at_index(pSVar1,0);
    cUserHistoryLog::SPAdd((cUserHistoryLog *)(this + 0x79700),0,uVar2,param_2,param_4);
  }
  else {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar3 = SkillSlot::get_remain_sp_at_index(pSVar1,0);
    if (iVar3 != param_1) {
      pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      uVar2 = SkillSlot::get_remain_sp_at_index(pSVar1,0);
      cUserHistoryLog::SPAdd((cUserHistoryLog *)(this + 0x79700),0,uVar2,param_2,param_4);
    }
  }
  return;
}
```
