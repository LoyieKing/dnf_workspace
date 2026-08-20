# eplp

`_ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE`

`advancealtar::Manager::eplp(CUser*, advancealtar::EplpType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x0813101e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813101e  _ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE
#           advancealtar::Manager::eplp(CUser*, advancealtar::EplpType::T)
# range [0x0813101e, 0x0813105b]
0813101e +0x00:  push   %ebp
0813101f +0x01:  mov    %esp,%ebp
08131021 +0x03:  sub    $0x28,%esp
08131024 +0x06:  cmpl   $0x0,0x8(%ebp)
08131028 +0x0a:  je     08131056 <+0x38>
0813102a +0x0c:  mov    0x8(%ebp),%eax
0813102d +0x0f:  mov    %eax,(%esp)
08131030 +0x12:  call   08655262 <_ZN5CUser15getAdvanceAltarEv>  ; CUser::getAdvanceAltar()
08131035 +0x17:  mov    %eax,-0xc(%ebp)
08131038 +0x1a:  cmpl   $0x0,-0xc(%ebp)
0813103c +0x1e:  je     08131059 <+0x3b>
0813103e +0x20:  mov    0xc(%ebp),%eax
08131041 +0x23:  add    $0x0,%eax
08131044 +0x26:  cmp    $0x2,%eax
08131047 +0x29:  ja     0813105a <+0x3c>
08131049 +0x2b:  mov    -0xc(%ebp),%eax
0813104c +0x2e:  mov    %eax,(%esp)
0813104f +0x31:  call   0812fc4e <_ZN12advancealtar12StageControl9leaveUserEv>  ; advancealtar::StageControl::leaveUser()
08131054 +0x36:  jmp    0813105a <+0x3c>
08131056 +0x38:  nop
08131057 +0x39:  jmp    0813105a <+0x3c>
08131059 +0x3b:  nop
0813105a +0x3c:  leave
0813105b +0x3d:  ret
```

## 反编译 C

```c
// advancealtar::Manager::eplp @ 0x813101e

/* advancealtar::Manager::eplp(CUser*, advancealtar::EplpType::T) */

void advancealtar::Manager::eplp(CUser *param_1,uint param_2)

{
  StageControl *this;
  
  if (((param_1 != (CUser *)0x0) &&
      (this = (StageControl *)CUser::getAdvanceAltar(param_1), this != (StageControl *)0x0)) &&
     (param_2 < 3)) {
    StageControl::leaveUser(this);
  }
  return;
}
```
