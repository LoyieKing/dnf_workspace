# use_skill

`_ZN6CParty9use_skillEP5CUserii`

`CParty::use_skill(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a77d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a77d8  _ZN6CParty9use_skillEP5CUserii
#           CParty::use_skill(CUser*, int, int)
# range [0x085a77d8, 0x085a77ff]
085a77d8 +0x00:  push   %ebp
085a77d9 +0x01:  mov    %esp,%ebp
085a77db +0x03:  sub    $0x18,%esp
085a77de +0x06:  mov    0x14(%ebp),%eax
085a77e1 +0x09:  mov    %eax,0xc(%esp)
085a77e5 +0x0d:  mov    0x10(%ebp),%eax
085a77e8 +0x10:  mov    %eax,0x8(%esp)
085a77ec +0x14:  mov    0xc(%ebp),%eax
085a77ef +0x17:  mov    %eax,0x4(%esp)
085a77f3 +0x1b:  mov    0x8(%ebp),%eax
085a77f6 +0x1e:  mov    %eax,(%esp)
085a77f9 +0x21:  call   085b5f8e <_ZN6CParty11OnUsedSkillEP5CUserii>  ; CParty::OnUsedSkill(CUser*, int, int)
085a77fe +0x26:  leave
085a77ff +0x27:  ret
```

## 反编译 C

```c
// CParty::use_skill @ 0x85a77d8

/* CParty::use_skill(CUser*, int, int) */

void CParty::use_skill(CUser *param_1,int param_2,int param_3)

{
  OnUsedSkill(param_1,param_2,param_3);
  return;
}
```
