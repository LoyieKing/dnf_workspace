# SaveBackupSkillInfo

`_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND`

`CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868148c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868148c  _ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND
#           CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
# range [0x0868148c, 0x0868152b]
0868148c +0x00:  push   %ebp
0868148d +0x01:  mov    %esp,%ebp
0868148f +0x03:  sub    $0x18,%esp
08681492 +0x06:  mov    0x8(%ebp),%eax
08681495 +0x09:  mov    %eax,(%esp)
08681498 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868149d +0x11:  test   %eax,%eax
0868149f +0x13:  sete   %al
086814a2 +0x16:  test   %al,%al
086814a4 +0x18:  jne    08681525 <+0x99>
086814a6 +0x1a:  mov    0x10(%ebp),%eax
086814a9 +0x1d:  cmp    $0xffffffff,%eax
086814ac +0x20:  je     086814b5 <+0x29>
086814ae +0x22:  mov    0x10(%ebp),%eax
086814b1 +0x25:  test   %eax,%eax
086814b3 +0x27:  jne    086814ed <+0x61>
086814b5 +0x29:  mov    0x8(%ebp),%eax
086814b8 +0x2c:  mov    %eax,(%esp)
086814bb +0x2f:  call   08696a72 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x32c7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x32c7
086814c0 +0x34:  test   %eax,%eax
086814c2 +0x36:  setne  %al
086814c5 +0x39:  test   %al,%al
086814c7 +0x3b:  je     08681528 <+0x9c>
086814c9 +0x3d:  mov    0x8(%ebp),%eax
086814cc +0x40:  mov    %eax,(%esp)
086814cf +0x43:  call   08696a72 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x32c7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x32c7
086814d4 +0x48:  movl   $0x199,0x8(%esp)
086814dc +0x50:  mov    0xc(%ebp),%edx
086814df +0x53:  mov    %edx,0x4(%esp)
086814e3 +0x57:  mov    %eax,(%esp)
086814e6 +0x5a:  call   0807d8a0 <_init+0x198>
086814eb +0x5f:  jmp    08681529 <+0x9d>
086814ed +0x61:  mov    0x8(%ebp),%eax
086814f0 +0x64:  mov    %eax,(%esp)
086814f3 +0x67:  call   08696a94 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x32e9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x32e9
086814f8 +0x6c:  test   %eax,%eax
086814fa +0x6e:  setne  %al
086814fd +0x71:  test   %al,%al
086814ff +0x73:  je     08681529 <+0x9d>
08681501 +0x75:  mov    0x8(%ebp),%eax
08681504 +0x78:  mov    %eax,(%esp)
08681507 +0x7b:  call   08696a94 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x32e9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x32e9
0868150c +0x80:  movl   $0x199,0x8(%esp)
08681514 +0x88:  mov    0xc(%ebp),%edx
08681517 +0x8b:  mov    %edx,0x4(%esp)
0868151b +0x8f:  mov    %eax,(%esp)
0868151e +0x92:  call   0807d8a0 <_init+0x198>
08681523 +0x97:  jmp    08681529 <+0x9d>
08681525 +0x99:  nop
08681526 +0x9a:  jmp    08681529 <+0x9d>
08681528 +0x9c:  nop
08681529 +0x9d:  leave
0868152a +0x9e:  ret
0868152b +0x9f:  nop
```

## 反编译 C

```c
// CUser::SaveBackupSkillInfo @ 0x868148c

/* CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND) */

void __thiscall CUser::SaveBackupSkillInfo(CUser *this,void *param_1,int param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    if ((param_3 == -1) || (param_3 == 0)) {
      iVar1 = CUserCharacInfo::GetCurCharacBackupSkill((CUserCharacInfo *)this);
      if (iVar1 != 0) {
        pvVar2 = (void *)CUserCharacInfo::GetCurCharacBackupSkill((CUserCharacInfo *)this);
        memcpy(pvVar2,param_1,0x199);
      }
    }
    else {
      iVar1 = CUserCharacInfo::GetCurCharacBackupSkill2ND((CUserCharacInfo *)this);
      if (iVar1 != 0) {
        pvVar2 = (void *)CUserCharacInfo::GetCurCharacBackupSkill2ND((CUserCharacInfo *)this);
        memcpy(pvVar2,param_1,0x199);
      }
    }
  }
  return;
}
```
