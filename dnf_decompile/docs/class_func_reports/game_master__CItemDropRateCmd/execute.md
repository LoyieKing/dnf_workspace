# execute

`_ZN11game_master16CItemDropRateCmd7executeEv`

`game_master::CItemDropRateCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CItemDropRateCmd` | `0x084a9002` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9002  _ZN11game_master16CItemDropRateCmd7executeEv
#           game_master::CItemDropRateCmd::execute()
# range [0x084a9002, 0x084a905d]
084a9002 +0x00:  push   %ebp
084a9003 +0x01:  mov    %esp,%ebp
084a9005 +0x03:  sub    $0x18,%esp
084a9008 +0x06:  mov    $&_ZGVZN11game_master16CItemDropRateCmd7executeEvE19gameMasterCharacter,%eax
084a900d +0x0b:  movzbl (%eax),%eax
084a9010 +0x0e:  test   %al,%al
084a9012 +0x10:  jne    084a9041 <+0x3f>
084a9014 +0x12:  movl   $&_ZGVZN11game_master16CItemDropRateCmd7executeEvE19gameMasterCharacter,(%esp)
084a901b +0x19:  call   08725330 <__cxa_guard_acquire>
084a9020 +0x1e:  test   %eax,%eax
084a9022 +0x20:  setne  %al
084a9025 +0x23:  test   %al,%al
084a9027 +0x25:  je     084a9041 <+0x3f>
084a9029 +0x27:  movl   $&_ZZN11game_master16CItemDropRateCmd7executeEvE19gameMasterCharacter,(%esp)
084a9030 +0x2e:  call   084b4434 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x4e7>  ; global constructors keyed to game_master::CMacro::Reset()+0x4e7
084a9035 +0x33:  movl   $&_ZGVZN11game_master16CItemDropRateCmd7executeEvE19gameMasterCharacter,(%esp)
084a903c +0x3a:  call   08725250 <__cxa_guard_release>
084a9041 +0x3f:  mov    0x8(%ebp),%eax
084a9044 +0x42:  mov    %eax,(%esp)
084a9047 +0x45:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a904c +0x4a:  movl   $&_ZZN11game_master16CItemDropRateCmd7executeEvE19gameMasterCharacter,0x4(%esp)
084a9054 +0x52:  mov    %eax,(%esp)
084a9057 +0x55:  call   084b431e <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x3d1>  ; global constructors keyed to game_master::CMacro::Reset()+0x3d1
084a905c +0x5a:  leave
084a905d +0x5b:  ret
```

## 反编译 C

```c
// game_master::CItemDropRateCmd::execute @ 0x84a9002

/* game_master::CItemDropRateCmd::execute() */

void __thiscall game_master::CItemDropRateCmd::execute(CItemDropRateCmd *this)

{
  int iVar1;
  CUser *this_00;
  
  if (execute()::gameMasterCharacter == '\0') {
    iVar1 = __cxa_guard_acquire(&execute()::gameMasterCharacter);
    if (iVar1 != 0) {
      CGameMasterCharacterItemDropRate::CGameMasterCharacterItemDropRate
                ((CGameMasterCharacterItemDropRate *)&execute()::gameMasterCharacter);
      __cxa_guard_release(&execute()::gameMasterCharacter);
    }
  }
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::SetGameMasterCharacter(this_00,(CGameMasterCharacter *)&execute()::gameMasterCharacter);
  return;
}
```
