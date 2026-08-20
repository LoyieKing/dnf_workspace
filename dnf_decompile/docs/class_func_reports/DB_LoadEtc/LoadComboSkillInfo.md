# LoadComboSkillInfo

`_ZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x0844a3b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844a3b2  _ZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*)
# range [0x0844a3b2, 0x0844a479]
0844a3b2 +0x00:  push   %ebp
0844a3b3 +0x01:  mov    %esp,%ebp
0844a3b5 +0x03:  sub    $0x28,%esp
0844a3b8 +0x06:  mov    0xc(%ebp),%eax
0844a3bb +0x09:  mov    &_ZL14gUnicodeBuffer+0xa584(%eax),%eax
0844a3c1 +0x0f:  cmp    $0x9,%eax
0844a3c4 +0x12:  jne    0844a478 <+0xc6>
0844a3ca +0x18:  movl   $0x0,0x8(%esp)
0844a3d2 +0x20:  mov    0xc(%ebp),%eax
0844a3d5 +0x23:  mov    %eax,0x4(%esp)
0844a3d9 +0x27:  mov    0x8(%ebp),%eax
0844a3dc +0x2a:  mov    %eax,(%esp)
0844a3df +0x2d:  call   0844a47a <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND>  ; DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)
0844a3e4 +0x32:  xor    $0x1,%eax
0844a3e7 +0x35:  test   %al,%al
0844a3e9 +0x37:  je     0844a421 <+0x6f>
0844a3eb +0x39:  movl   $"DB_LoadETC ERROR : LoadComboSkill Fail",0x10(%esp)
0844a3f3 +0x41:  movl   $0xbab4,0xc(%esp)
0844a3fb +0x49:  movl   $&_ZZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x8(%esp)
0844a403 +0x51:  movl   $"DBThread.cpp",0x4(%esp)
0844a40b +0x59:  movl   $0x1,(%esp)
0844a412 +0x60:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0844a417 +0x65:  mov    0xc(%ebp),%eax
0844a41a +0x68:  movl   $0x1,0x8(%eax)
0844a421 +0x6f:  movl   $0x1,0x8(%esp)
0844a429 +0x77:  mov    0xc(%ebp),%eax
0844a42c +0x7a:  mov    %eax,0x4(%esp)
0844a430 +0x7e:  mov    0x8(%ebp),%eax
0844a433 +0x81:  mov    %eax,(%esp)
0844a436 +0x84:  call   0844a47a <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND>  ; DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)
0844a43b +0x89:  xor    $0x1,%eax
0844a43e +0x8c:  test   %al,%al
0844a440 +0x8e:  je     0844a478 <+0xc6>
0844a442 +0x90:  movl   $"DB_LoadETC ERROR : LoadComboSkill Second Fail",0x10(%esp)
0844a44a +0x98:  movl   $0xbaba,0xc(%esp)
0844a452 +0xa0:  movl   $&_ZZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x8(%esp)
0844a45a +0xa8:  movl   $"DBThread.cpp",0x4(%esp)
0844a462 +0xb0:  movl   $0x1,(%esp)
0844a469 +0xb7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0844a46e +0xbc:  mov    0xc(%ebp),%eax
0844a471 +0xbf:  movl   $0x1,0x8(%eax)
0844a478 +0xc6:  leave
0844a479 +0xc7:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadComboSkillInfo @ 0x844a3b2

/* DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*) */

void __thiscall DB_LoadEtc::LoadComboSkillInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x14ab0) == 9) {
    cVar1 = LoadComboSkill(this,param_1,0);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","void DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*)",0xbab4,
                 "DB_LoadETC ERROR : LoadComboSkill Fail");
      *(undefined4 *)(param_1 + 8) = 1;
    }
    cVar1 = LoadComboSkill(this,param_1,1);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","void DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*)",0xbaba,
                 "DB_LoadETC ERROR : LoadComboSkill Second Fail");
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return;
}
```
