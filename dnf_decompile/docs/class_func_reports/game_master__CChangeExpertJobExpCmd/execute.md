# execute

`_ZN11game_master22CChangeExpertJobExpCmd7executeEv`

`game_master::CChangeExpertJobExpCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeExpertJobExpCmd` | `0x084a9bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9bd0  _ZN11game_master22CChangeExpertJobExpCmd7executeEv
#           game_master::CChangeExpertJobExpCmd::execute()
# range [0x084a9bd0, 0x084a9bf9]
084a9bd0 +0x00:  push   %ebp
084a9bd1 +0x01:  mov    %esp,%ebp
084a9bd3 +0x03:  push   %ebx
084a9bd4 +0x04:  sub    $0x14,%esp
084a9bd7 +0x07:  mov    0x8(%ebp),%eax
084a9bda +0x0a:  mov    0x8(%eax),%ebx
084a9bdd +0x0d:  mov    0x8(%ebp),%eax
084a9be0 +0x10:  mov    %eax,(%esp)
084a9be3 +0x13:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9be8 +0x18:  mov    %ebx,0x4(%esp)
084a9bec +0x1c:  mov    %eax,(%esp)
084a9bef +0x1f:  call   0849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>  ; expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)
084a9bf4 +0x24:  add    $0x14,%esp
084a9bf7 +0x27:  pop    %ebx
084a9bf8 +0x28:  pop    %ebp
084a9bf9 +0x29:  ret
```

## 反编译 C

```c
// game_master::CChangeExpertJobExpCmd::execute @ 0x84a9bd0

/* game_master::CChangeExpertJobExpCmd::execute() */

void __thiscall game_master::CChangeExpertJobExpCmd::execute(CChangeExpertJobExpCmd *this)

{
  int iVar1;
  CUser *pCVar2;
  
  iVar1 = *(int *)(this + 8);
  pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
  expert_job::CExpertJob::IncreaseExpertJobExp(pCVar2,iVar1);
  return;
}
```
