# execute

`_ZN11game_master19CAchievementNoClear7executeEv`

`game_master::CAchievementNoClear::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAchievementNoClear` | `0x084b09a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b09a8  _ZN11game_master19CAchievementNoClear7executeEv
#           game_master::CAchievementNoClear::execute()
# range [0x084b09a8, 0x084b09cf]
084b09a8 +0x00:  push   %ebp
084b09a9 +0x01:  mov    %esp,%ebp
084b09ab +0x03:  sub    $0x18,%esp
084b09ae +0x06:  mov    0x8(%ebp),%eax
084b09b1 +0x09:  mov    %eax,(%esp)
084b09b4 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b09b9 +0x11:  movl   $0xf,0x4(%esp)
084b09c1 +0x19:  mov    %eax,(%esp)
084b09c4 +0x1c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b09c9 +0x21:  movb   $0x1,0x24(%eax)
084b09cd +0x25:  leave
084b09ce +0x26:  ret
084b09cf +0x27:  nop
```

## 反编译 C

```c
// game_master::CAchievementNoClear::execute @ 0x84b09a8

/* game_master::CAchievementNoClear::execute() */

void __thiscall game_master::CAchievementNoClear::execute(CAchievementNoClear *this)

{
  CUser *pCVar1;
  int iVar2;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar2 = CUser::GetCharacExpandData(pCVar1,0xf);
  *(undefined1 *)(iVar2 + 0x24) = 1;
  return;
}
```
