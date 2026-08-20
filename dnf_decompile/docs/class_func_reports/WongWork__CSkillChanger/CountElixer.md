# CountElixer

`_ZN8WongWork13CSkillChanger11CountElixerEP5CUser`

`WongWork::CSkillChanger::CountElixer(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x08609d9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08609d9c  _ZN8WongWork13CSkillChanger11CountElixerEP5CUser
#           WongWork::CSkillChanger::CountElixer(CUser*)
# range [0x08609d9c, 0x08609e8f]
08609d9c +0x00:  push   %ebp
08609d9d +0x01:  mov    %esp,%ebp
08609d9f +0x03:  sub    $0x18,%esp
08609da2 +0x06:  mov    0x8(%ebp),%eax
08609da5 +0x09:  movl   $0x24,0x8(%esp)
08609dad +0x11:  movl   $0x0,0x4(%esp)
08609db5 +0x19:  mov    %eax,(%esp)
08609db8 +0x1c:  call   0807dcc0 <_init+0x5b8>
08609dbd +0x21:  mov    0x8(%ebp),%eax
08609dc0 +0x24:  add    $0x24,%eax
08609dc3 +0x27:  movl   $0x24,0x8(%esp)
08609dcb +0x2f:  movl   $0x0,0x4(%esp)
08609dd3 +0x37:  mov    %eax,(%esp)
08609dd6 +0x3a:  call   0807dcc0 <_init+0x5b8>
08609ddb +0x3f:  mov    0x8(%ebp),%eax
08609dde +0x42:  add    $0x48,%eax
08609de1 +0x45:  movl   $0x24,0x8(%esp)
08609de9 +0x4d:  movl   $0x0,0x4(%esp)
08609df1 +0x55:  mov    %eax,(%esp)
08609df4 +0x58:  call   0807dcc0 <_init+0x5b8>
08609df9 +0x5d:  mov    0x8(%ebp),%eax
08609dfc +0x60:  add    $0x6c,%eax
08609dff +0x63:  movl   $0x24,0x8(%esp)
08609e07 +0x6b:  movl   $0x0,0x4(%esp)
08609e0f +0x73:  mov    %eax,(%esp)
08609e12 +0x76:  call   0807dcc0 <_init+0x5b8>
08609e17 +0x7b:  mov    0x8(%ebp),%eax
08609e1a +0x7e:  movl   $0x8,(%eax)
08609e20 +0x84:  mov    0x8(%ebp),%eax
08609e23 +0x87:  movl   $0x8,0x24(%eax)
08609e2a +0x8e:  mov    0x8(%ebp),%eax
08609e2d +0x91:  movl   $0x8,0x48(%eax)
08609e34 +0x98:  mov    0x8(%ebp),%eax
08609e37 +0x9b:  movl   $0x8,0x6c(%eax)
08609e3e +0xa2:  mov    0x8(%ebp),%eax
08609e41 +0xa5:  movb   $0x1,0x91(%eax)
08609e48 +0xac:  mov    0xc(%ebp),%eax
08609e4b +0xaf:  mov    %eax,0x4(%esp)
08609e4f +0xb3:  mov    0x8(%ebp),%eax
08609e52 +0xb6:  mov    %eax,(%esp)
08609e55 +0xb9:  call   0860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>  ; WongWork::CSkillChanger::_GetUserItemCount(CUser const*)
08609e5a +0xbe:  movl   $0x0,0x8(%esp)
08609e62 +0xc6:  mov    0xc(%ebp),%eax
08609e65 +0xc9:  mov    %eax,0x4(%esp)
08609e69 +0xcd:  mov    0x8(%ebp),%eax
08609e6c +0xd0:  mov    %eax,(%esp)
08609e6f +0xd3:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
08609e74 +0xd8:  movl   $0x1,0x8(%esp)
08609e7c +0xe0:  mov    0xc(%ebp),%eax
08609e7f +0xe3:  mov    %eax,0x4(%esp)
08609e83 +0xe7:  mov    0x8(%ebp),%eax
08609e86 +0xea:  mov    %eax,(%esp)
08609e89 +0xed:  call   0860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>  ; WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND)
08609e8e +0xf2:  leave
08609e8f +0xf3:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::CountElixer @ 0x8609d9c

/* WongWork::CSkillChanger::CountElixer(CUser*) */

void __thiscall WongWork::CSkillChanger::CountElixer(CSkillChanger *this,CUser *param_1)

{
  memset(this,0,0x24);
  memset(this + 0x24,0,0x24);
  memset(this + 0x48,0,0x24);
  memset(this + 0x6c,0,0x24);
  *(undefined4 *)this = 8;
  *(undefined4 *)(this + 0x24) = 8;
  *(undefined4 *)(this + 0x48) = 8;
  *(undefined4 *)(this + 0x6c) = 8;
  this[0x91] = (CSkillChanger)0x1;
  _GetUserItemCount(this,param_1);
  _ApplyUserData(this,param_1,0);
  _ApplyUserData(this,param_1,1);
  return;
}
```
