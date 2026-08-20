# execute

`_ZN11game_master14CRecipeSuccess7executeEv`

`game_master::CRecipeSuccess::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CRecipeSuccess` | `0x084b3a34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3a34  _ZN11game_master14CRecipeSuccess7executeEv
#           game_master::CRecipeSuccess::execute()
# range [0x084b3a34, 0x084b3a5f]
084b3a34 +0x00:  push   %ebp
084b3a35 +0x01:  mov    %esp,%ebp
084b3a37 +0x03:  sub    $0x28,%esp
084b3a3a +0x06:  mov    0x8(%ebp),%eax
084b3a3d +0x09:  mov    %eax,(%esp)
084b3a40 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b3a45 +0x11:  mov    %eax,-0xc(%ebp)
084b3a48 +0x14:  mov    0x8(%ebp),%eax
084b3a4b +0x17:  mov    0x8(%eax),%eax
084b3a4e +0x1a:  mov    %eax,0x4(%esp)
084b3a52 +0x1e:  mov    -0xc(%ebp),%eax
084b3a55 +0x21:  mov    %eax,(%esp)
084b3a58 +0x24:  call   08693178 <_ZN5CUser22recipeForceProbabilityEi>  ; CUser::recipeForceProbability(int)
084b3a5d +0x29:  leave
084b3a5e +0x2a:  ret
084b3a5f +0x2b:  nop
```

## 反编译 C

```c
// game_master::CRecipeSuccess::execute @ 0x84b3a34

/* game_master::CRecipeSuccess::execute() */

void __thiscall game_master::CRecipeSuccess::execute(CRecipeSuccess *this)

{
  CUser *this_00;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::recipeForceProbability(this_00,*(int *)(this + 8));
  return;
}
```
