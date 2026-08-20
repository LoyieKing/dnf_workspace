# isDungeonDifficultyInfromNotice

`_ZN6CParty31isDungeonDifficultyInfromNoticeEb`

`CParty::isDungeonDifficultyInfromNotice(bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be8a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be8a0  _ZN6CParty31isDungeonDifficultyInfromNoticeEb
#           CParty::isDungeonDifficultyInfromNotice(bool)
# range [0x085be8a0, 0x085be931]
085be8a0 +0x00:  push   %ebp
085be8a1 +0x01:  mov    %esp,%ebp
085be8a3 +0x03:  sub    $0x28,%esp
085be8a6 +0x06:  mov    0xc(%ebp),%eax
085be8a9 +0x09:  mov    %al,-0xc(%ebp)
085be8ac +0x0c:  mov    0x8(%ebp),%eax
085be8af +0x0f:  mov    0x74(%eax),%eax
085be8b2 +0x12:  mov    %eax,(%esp)
085be8b5 +0x15:  call   085bfaec <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x104a>  ; global constructors keyed to CParty::cMember::cMember()+0x104a
085be8ba +0x1a:  test   %al,%al
085be8bc +0x1c:  je     085be8c5 <+0x25>
085be8be +0x1e:  mov    $0x0,%eax
085be8c3 +0x23:  jmp    085be92f <+0x8f>
085be8c5 +0x25:  mov    0x8(%ebp),%eax
085be8c8 +0x28:  mov    0x74(%eax),%eax
085be8cb +0x2b:  mov    %eax,(%esp)
085be8ce +0x2e:  call   085bfb44 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x10a2>  ; global constructors keyed to CParty::cMember::cMember()+0x10a2
085be8d3 +0x33:  test   %eax,%eax
085be8d5 +0x35:  sete   %al
085be8d8 +0x38:  test   %al,%al
085be8da +0x3a:  je     085be8e3 <+0x43>
085be8dc +0x3c:  mov    $0x0,%eax
085be8e1 +0x41:  jmp    085be92f <+0x8f>
085be8e3 +0x43:  cmpb   $0x0,-0xc(%ebp)
085be8e7 +0x47:  je     085be8f0 <+0x50>
085be8e9 +0x49:  mov    $0x0,%eax
085be8ee +0x4e:  jmp    085be92f <+0x8f>
085be8f0 +0x50:  mov    0x8(%ebp),%eax
085be8f3 +0x53:  movzwl 0xc4c(%eax),%eax
085be8fa +0x5a:  test   %ax,%ax
085be8fd +0x5d:  je     085be906 <+0x66>
085be8ff +0x5f:  mov    $0x0,%eax
085be904 +0x64:  jmp    085be92f <+0x8f>
085be906 +0x66:  mov    0x8(%ebp),%eax
085be909 +0x69:  mov    %eax,(%esp)
085be90c +0x6c:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085be911 +0x71:  mov    %eax,(%esp)
085be914 +0x74:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085be919 +0x79:  cmp    $0x1,%eax
085be91c +0x7c:  sete   %al
085be91f +0x7f:  test   %al,%al
085be921 +0x81:  je     085be92a <+0x8a>
085be923 +0x83:  mov    $0x0,%eax
085be928 +0x88:  jmp    085be92f <+0x8f>
085be92a +0x8a:  mov    $0x1,%eax
085be92f +0x8f:  leave
085be930 +0x90:  ret
085be931 +0x91:  nop
```

## 反编译 C

```c
// CParty::isDungeonDifficultyInfromNotice @ 0x85be8a0

/* CParty::isDungeonDifficultyInfromNotice(bool) */

undefined4 __thiscall CParty::isDungeonDifficultyInfromNotice(CParty *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CUser *this_00;
  
  cVar1 = CUserCharacInfo::getMemberDungeonFlag(*(CUserCharacInfo **)(this + 0x74));
  if (cVar1 == '\0') {
    iVar3 = CUserCharacInfo::getCurCharacTutorialFlag(*(CUserCharacInfo **)(this + 0x74));
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if (param_1) {
      uVar2 = 0;
    }
    else if (*(short *)(this + 0xc4c) == 0) {
      this_00 = (CUser *)getManager(this);
      iVar3 = CUser::getMoveSpace(this_00);
      if (iVar3 == 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
