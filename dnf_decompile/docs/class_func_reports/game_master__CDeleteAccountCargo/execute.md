# execute

`_ZN11game_master19CDeleteAccountCargo7executeEv`

`game_master::CDeleteAccountCargo::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CDeleteAccountCargo` | `0x084abdb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084abdb4  _ZN11game_master19CDeleteAccountCargo7executeEv
#           game_master::CDeleteAccountCargo::execute()
# range [0x084abdb4, 0x084abdcf]
084abdb4 +0x00:  push   %ebp
084abdb5 +0x01:  mov    %esp,%ebp
084abdb7 +0x03:  sub    $0x18,%esp
084abdba +0x06:  mov    0x8(%ebp),%eax
084abdbd +0x09:  mov    %eax,(%esp)
084abdc0 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084abdc5 +0x11:  mov    %eax,(%esp)
084abdc8 +0x14:  call   0828b4ec <_ZN13CAccountCargo18DeleteAccountCargoEP5CUser>  ; CAccountCargo::DeleteAccountCargo(CUser*)
084abdcd +0x19:  leave
084abdce +0x1a:  ret
084abdcf +0x1b:  nop
```

## 反编译 C

```c
// game_master::CDeleteAccountCargo::execute @ 0x84abdb4

/* game_master::CDeleteAccountCargo::execute() */

void __thiscall game_master::CDeleteAccountCargo::execute(CDeleteAccountCargo *this)

{
  CUser *pCVar1;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  CAccountCargo::DeleteAccountCargo(pCVar1);
  return;
}
```
