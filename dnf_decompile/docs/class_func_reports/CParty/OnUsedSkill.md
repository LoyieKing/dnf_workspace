# OnUsedSkill

`_ZN6CParty11OnUsedSkillEP5CUserii`

`CParty::OnUsedSkill(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b5f8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b5f8e  _ZN6CParty11OnUsedSkillEP5CUserii
#           CParty::OnUsedSkill(CUser*, int, int)
# range [0x085b5f8e, 0x085b603d]
085b5f8e +0x00:  push   %ebp
085b5f8f +0x01:  mov    %esp,%ebp
085b5f91 +0x03:  sub    $0x28,%esp
085b5f94 +0x06:  call   08484a51 <_Z25IsCollectDungeonStatisticv>  ; IsCollectDungeonStatistic()
085b5f99 +0x0b:  movl   $0x0,-0xc(%ebp)
085b5fa0 +0x12:  jmp    085b6028 <+0x9a>
085b5fa5 +0x17:  mov    -0xc(%ebp),%edx
085b5fa8 +0x1a:  mov    0x8(%ebp),%ecx
085b5fab +0x1d:  mov    %edx,%eax
085b5fad +0x1f:  add    %eax,%eax
085b5faf +0x21:  add    %edx,%eax
085b5fb1 +0x23:  shl    $0x3,%eax
085b5fb4 +0x26:  lea    (%ecx,%eax,1),%eax
085b5fb7 +0x29:  add    $0x78,%eax
085b5fba +0x2c:  mov    (%eax),%eax
085b5fbc +0x2e:  cmp    0xc(%ebp),%eax
085b5fbf +0x31:  jne    085b6024 <+0x96>
085b5fc1 +0x33:  mov    -0xc(%ebp),%eax
085b5fc4 +0x36:  mov    0x8(%ebp),%edx
085b5fc7 +0x39:  lea    0x2bc(%eax),%ecx
085b5fcd +0x3f:  mov    0xc(%edx,%ecx,4),%edx
085b5fd1 +0x43:  lea    0x1(%edx),%ecx
085b5fd4 +0x46:  mov    0x8(%ebp),%edx
085b5fd7 +0x49:  add    $0x2bc,%eax
085b5fdc +0x4e:  mov    %ecx,0xc(%edx,%eax,4)
085b5fe0 +0x52:  mov    0xc(%ebp),%eax
085b5fe3 +0x55:  mov    %eax,(%esp)
085b5fe6 +0x58:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085b5feb +0x5d:  mov    0x10(%ebp),%edx
085b5fee +0x60:  mov    %edx,0x8(%esp)
085b5ff2 +0x64:  mov    %eax,0x4(%esp)
085b5ff6 +0x68:  mov    0x8(%ebp),%eax
085b5ff9 +0x6b:  mov    %eax,(%esp)
085b5ffc +0x6e:  call   085bb5b0 <_ZN6CParty15isCheckUseSkillEii>  ; CParty::isCheckUseSkill(int, int)
085b6001 +0x73:  test   %al,%al
085b6003 +0x75:  je     085b6024 <+0x96>
085b6005 +0x77:  mov    -0xc(%ebp),%eax
085b6008 +0x7a:  mov    0x8(%ebp),%edx
085b600b +0x7d:  lea    0x6a8(%eax),%ecx
085b6011 +0x83:  mov    0x4(%edx,%ecx,4),%edx
085b6015 +0x87:  lea    0x1(%edx),%ecx
085b6018 +0x8a:  mov    0x8(%ebp),%edx
085b601b +0x8d:  add    $0x6a8,%eax
085b6020 +0x92:  mov    %ecx,0x4(%edx,%eax,4)
085b6024 +0x96:  addl   $0x1,-0xc(%ebp)
085b6028 +0x9a:  cmpl   $0x3,-0xc(%ebp)
085b602c +0x9e:  setle  %al
085b602f +0xa1:  test   %al,%al
085b6031 +0xa3:  jne    085b5fa5 <+0x17>
085b6037 +0xa9:  mov    $0x1,%eax
085b603c +0xae:  leave
085b603d +0xaf:  ret
```

## 反编译 C

```c
// CParty::OnUsedSkill @ 0x85b5f8e

/* CParty::OnUsedSkill(CUser*, int, int) */

undefined4 CParty::OnUsedSkill(CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  IsCollectDungeonStatistic();
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if (*(int *)(param_1 + local_10 * 0x18 + 0x78) == param_2) {
      *(int *)(param_1 + (local_10 + 700) * 4 + 0xc) =
           *(int *)(param_1 + (local_10 + 700) * 4 + 0xc) + 1;
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
      cVar1 = isCheckUseSkill((CParty *)param_1,iVar2,param_3);
      if (cVar1 != '\0') {
        *(int *)(param_1 + (local_10 + 0x6a8) * 4 + 4) =
             *(int *)(param_1 + (local_10 + 0x6a8) * 4 + 4) + 1;
      }
    }
  }
  return 1;
}
```
