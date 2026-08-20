# GetOverSkillExtraGold

`_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi`

`user_creature::CCreatureMgr::GetOverSkillExtraGold(int) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833c6f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c6f6  _ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi
#           user_creature::CCreatureMgr::GetOverSkillExtraGold(int) const
# range [0x0833c6f6, 0x0833c77d]
0833c6f6 +0x00:  push   %ebp
0833c6f7 +0x01:  mov    %esp,%ebp
0833c6f9 +0x03:  sub    $0x18,%esp
0833c6fc +0x06:  mov    0x8(%ebp),%eax
0833c6ff +0x09:  mov    0x18(%eax),%eax
0833c702 +0x0c:  test   %eax,%eax
0833c704 +0x0e:  je     0833c777 <+0x81>
0833c706 +0x10:  mov    0x8(%ebp),%eax
0833c709 +0x13:  mov    0x18(%eax),%eax
0833c70c +0x16:  mov    %eax,(%esp)
0833c70f +0x19:  call   08338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>  ; user_creature::CCreature::IsDieCreature()
0833c714 +0x1e:  test   %al,%al
0833c716 +0x20:  je     0833c71f <+0x29>
0833c718 +0x22:  mov    $0x0,%eax
0833c71d +0x27:  jmp    0833c77c <+0x86>
0833c71f +0x29:  mov    0x8(%ebp),%eax
0833c722 +0x2c:  mov    0x18(%eax),%eax
0833c725 +0x2f:  mov    %eax,(%esp)
0833c728 +0x32:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833c72d +0x37:  cmp    $0xf68a,%eax
0833c732 +0x3c:  sete   %al
0833c735 +0x3f:  test   %al,%al
0833c737 +0x41:  je     0833c777 <+0x81>
0833c739 +0x43:  mov    0x8(%ebp),%eax
0833c73c +0x46:  mov    0x18(%eax),%eax
0833c73f +0x49:  mov    %eax,(%esp)
0833c742 +0x4c:  call   0833f0e6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11b3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11b3
0833c747 +0x51:  mov    %eax,(%esp)
0833c74a +0x54:  call   0833d65e <_ZN13user_creature14COverSkillTime9checkTimeEv>  ; user_creature::COverSkillTime::checkTime()
0833c74f +0x59:  test   %al,%al
0833c751 +0x5b:  je     0833c777 <+0x81>
0833c753 +0x5d:  mov    0xc(%ebp),%edx
0833c756 +0x60:  mov    %edx,%eax
0833c758 +0x62:  shl    $0x2,%eax
0833c75b +0x65:  lea    (%eax,%edx,1),%ecx
0833c75e +0x68:  mov    $0x51eb851f,%edx
0833c763 +0x6d:  mov    %ecx,%eax
0833c765 +0x6f:  imul   %edx
0833c767 +0x71:  sar    $0x5,%edx
0833c76a +0x74:  mov    %ecx,%eax
0833c76c +0x76:  sar    $0x1f,%eax
0833c76f +0x79:  mov    %edx,%ecx
0833c771 +0x7b:  sub    %eax,%ecx
0833c773 +0x7d:  mov    %ecx,%eax
0833c775 +0x7f:  jmp    0833c77c <+0x86>
0833c777 +0x81:  mov    $0x0,%eax
0833c77c +0x86:  leave
0833c77d +0x87:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetOverSkillExtraGold @ 0x833c6f6

/* user_creature::CCreatureMgr::GetOverSkillExtraGold(int) const */

int __thiscall user_creature::CCreatureMgr::GetOverSkillExtraGold(CCreatureMgr *this,int param_1)

{
  char cVar1;
  int iVar2;
  COverSkillTime *this_00;
  
  if (*(int *)(this + 0x18) != 0) {
    cVar1 = CCreature::IsDieCreature(*(CCreature **)(this + 0x18));
    if (cVar1 != '\0') {
      return 0;
    }
    iVar2 = CCreatureItem::GetItemId(*(CCreatureItem **)(this + 0x18));
    if (iVar2 == 0xf68a) {
      this_00 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
      cVar1 = COverSkillTime::checkTime(this_00);
      if (cVar1 != '\0') {
        return (param_1 * 5) / 100;
      }
    }
  }
  return 0;
}
```
