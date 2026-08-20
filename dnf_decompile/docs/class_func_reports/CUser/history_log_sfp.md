# history_log_sfp

`_ZN5CUser15history_log_sfpEii12eSPAddReason`

`CUser::history_log_sfp(int, int, eSPAddReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866acd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866acd0  _ZN5CUser15history_log_sfpEii12eSPAddReason
#           CUser::history_log_sfp(int, int, eSPAddReason)
# range [0x0866acd0, 0x0866ad91]
0866acd0 +0x00:  push   %ebp
0866acd1 +0x01:  mov    %esp,%ebp
0866acd3 +0x03:  sub    $0x28,%esp
0866acd6 +0x06:  cmpl   $0xffffffff,0xc(%ebp)
0866acda +0x0a:  jne    0866ad24 <+0x54>
0866acdc +0x0c:  mov    0x8(%ebp),%eax
0866acdf +0x0f:  mov    %eax,(%esp)
0866ace2 +0x12:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ace7 +0x17:  movl   $0x2,0x4(%esp)
0866acef +0x1f:  mov    %eax,(%esp)
0866acf2 +0x22:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866acf7 +0x27:  mov    0x8(%ebp),%edx
0866acfa +0x2a:  lea    0x79700(%edx),%ecx
0866ad00 +0x30:  mov    0x14(%ebp),%edx
0866ad03 +0x33:  mov    %edx,0x10(%esp)
0866ad07 +0x37:  mov    0x10(%ebp),%edx
0866ad0a +0x3a:  mov    %edx,0xc(%esp)
0866ad0e +0x3e:  mov    %eax,0x8(%esp)
0866ad12 +0x42:  movl   $0x2,0x4(%esp)
0866ad1a +0x4a:  mov    %ecx,(%esp)
0866ad1d +0x4d:  call   08682c22 <_ZN15cUserHistoryLog6SFPAddEiii12eSPAddReason>  ; cUserHistoryLog::SFPAdd(int, int, int, eSPAddReason)
0866ad22 +0x52:  jmp    0866ad8f <+0xbf>
0866ad24 +0x54:  mov    0x8(%ebp),%eax
0866ad27 +0x57:  mov    %eax,(%esp)
0866ad2a +0x5a:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ad2f +0x5f:  movl   $0x2,0x4(%esp)
0866ad37 +0x67:  mov    %eax,(%esp)
0866ad3a +0x6a:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866ad3f +0x6f:  cmp    0xc(%ebp),%eax
0866ad42 +0x72:  setne  %al
0866ad45 +0x75:  test   %al,%al
0866ad47 +0x77:  je     0866ad8f <+0xbf>
0866ad49 +0x79:  mov    0x8(%ebp),%eax
0866ad4c +0x7c:  mov    %eax,(%esp)
0866ad4f +0x7f:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ad54 +0x84:  movl   $0x2,0x4(%esp)
0866ad5c +0x8c:  mov    %eax,(%esp)
0866ad5f +0x8f:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866ad64 +0x94:  mov    0x8(%ebp),%edx
0866ad67 +0x97:  lea    0x79700(%edx),%ecx
0866ad6d +0x9d:  mov    0x14(%ebp),%edx
0866ad70 +0xa0:  mov    %edx,0x10(%esp)
0866ad74 +0xa4:  mov    0x10(%ebp),%edx
0866ad77 +0xa7:  mov    %edx,0xc(%esp)
0866ad7b +0xab:  mov    %eax,0x8(%esp)
0866ad7f +0xaf:  movl   $0x2,0x4(%esp)
0866ad87 +0xb7:  mov    %ecx,(%esp)
0866ad8a +0xba:  call   08682c22 <_ZN15cUserHistoryLog6SFPAddEiii12eSPAddReason>  ; cUserHistoryLog::SFPAdd(int, int, int, eSPAddReason)
0866ad8f +0xbf:  leave
0866ad90 +0xc0:  ret
0866ad91 +0xc1:  nop
```

## 反编译 C

```c
// CUser::history_log_sfp @ 0x866acd0

/* CUser::history_log_sfp(int, int, eSPAddReason) */

void __thiscall
CUser::history_log_sfp(CUser *this,int param_1,undefined4 param_2,undefined4 param_4)

{
  SkillSlot *pSVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == -1) {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    uVar2 = SkillSlot::get_remain_sfp_at_index(pSVar1,2);
    cUserHistoryLog::SFPAdd((cUserHistoryLog *)(this + 0x79700),2,uVar2,param_2,param_4);
  }
  else {
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar3 = SkillSlot::get_remain_sfp_at_index(pSVar1,2);
    if (iVar3 != param_1) {
      pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      uVar2 = SkillSlot::get_remain_sfp_at_index(pSVar1,2);
      cUserHistoryLog::SFPAdd((cUserHistoryLog *)(this + 0x79700),2,uVar2,param_2,param_4);
    }
  }
  return;
}
```
