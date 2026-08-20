# execute

`_ZN11game_master12CTeleportCmd7executeEv`

`game_master::CTeleportCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CTeleportCmd` | `0x084a986e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a986e  _ZN11game_master12CTeleportCmd7executeEv
#           game_master::CTeleportCmd::execute()
# range [0x084a986e, 0x084a98c7]
084a986e +0x00:  push   %ebp
084a986f +0x01:  mov    %esp,%ebp
084a9871 +0x03:  push   %ebx
084a9872 +0x04:  sub    $0x24,%esp
084a9875 +0x07:  mov    0x8(%ebp),%eax
084a9878 +0x0a:  mov    %eax,(%esp)
084a987b +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9880 +0x12:  mov    %eax,(%esp)
084a9883 +0x15:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
084a9888 +0x1a:  movsbl %al,%ebx
084a988b +0x1d:  mov    0x8(%ebp),%eax
084a988e +0x20:  mov    %eax,(%esp)
084a9891 +0x23:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9896 +0x28:  movl   $0x1,0x14(%esp)
084a989e +0x30:  movl   $0x0,0x10(%esp)
084a98a6 +0x38:  movl   $0x0,0xc(%esp)
084a98ae +0x40:  movl   $0x0,0x8(%esp)
084a98b6 +0x48:  mov    %ebx,0x4(%esp)
084a98ba +0x4c:  mov    %eax,(%esp)
084a98bd +0x4f:  call   085d1424 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib>  ; expert_job::CAlchemist::OnTeleportCharacter(CUser*, int, int, int, int, bool)
084a98c2 +0x54:  add    $0x24,%esp
084a98c5 +0x57:  pop    %ebx
084a98c6 +0x58:  pop    %ebp
084a98c7 +0x59:  ret
```

## 反编译 C

```c
// game_master::CTeleportCmd::execute @ 0x84a986e

/* game_master::CTeleportCmd::execute() */

void __thiscall game_master::CTeleportCmd::execute(CTeleportCmd *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  CUser *pCVar2;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  cVar1 = CUserCharacInfo::getCurCharacVill(this_00);
  pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
  expert_job::CAlchemist::OnTeleportCharacter(pCVar2,(int)cVar1,0,0,0,true);
  return;
}
```
