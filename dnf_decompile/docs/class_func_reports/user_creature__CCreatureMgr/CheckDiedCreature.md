# CheckDiedCreature

`_ZN13user_creature12CCreatureMgr17CheckDiedCreatureEv`

`user_creature::CCreatureMgr::CheckDiedCreature()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339acc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339acc  _ZN13user_creature12CCreatureMgr17CheckDiedCreatureEv
#           user_creature::CCreatureMgr::CheckDiedCreature()
# range [0x08339acc, 0x08339b05]
08339acc +0x00:  push   %ebp
08339acd +0x01:  mov    %esp,%ebp
08339acf +0x03:  sub    $0x18,%esp
08339ad2 +0x06:  mov    0x8(%ebp),%eax
08339ad5 +0x09:  mov    0x18(%eax),%eax
08339ad8 +0x0c:  test   %eax,%eax
08339ada +0x0e:  je     08339aff <+0x33>
08339adc +0x10:  mov    0x8(%ebp),%eax
08339adf +0x13:  mov    0x1c(%eax),%edx
08339ae2 +0x16:  mov    0x8(%ebp),%eax
08339ae5 +0x19:  mov    0x18(%eax),%eax
08339ae8 +0x1c:  mov    %edx,0x4(%esp)
08339aec +0x20:  mov    %eax,(%esp)
08339aef +0x23:  call   083384b8 <_ZN13user_creature9CCreature17CheckDiedCreatureEP5CUser>  ; user_creature::CCreature::CheckDiedCreature(CUser*)
08339af4 +0x28:  test   %al,%al
08339af6 +0x2a:  je     08339aff <+0x33>
08339af8 +0x2c:  mov    $0x1,%eax
08339afd +0x31:  jmp    08339b04 <+0x38>
08339aff +0x33:  mov    $0x0,%eax
08339b04 +0x38:  leave
08339b05 +0x39:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::CheckDiedCreature @ 0x8339acc

/* user_creature::CCreatureMgr::CheckDiedCreature() */

undefined4 __thiscall user_creature::CCreatureMgr::CheckDiedCreature(CCreatureMgr *this)

{
  char cVar1;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (cVar1 = CCreature::CheckDiedCreature(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}
```
