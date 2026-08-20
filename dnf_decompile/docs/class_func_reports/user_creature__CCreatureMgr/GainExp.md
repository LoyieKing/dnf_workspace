# GainExp

`_ZN13user_creature12CCreatureMgr7GainExpEi`

`user_creature::CCreatureMgr::GainExp(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339b06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339b06  _ZN13user_creature12CCreatureMgr7GainExpEi
#           user_creature::CCreatureMgr::GainExp(int)
# range [0x08339b06, 0x08339b6d]
08339b06 +0x00:  push   %ebp
08339b07 +0x01:  mov    %esp,%ebp
08339b09 +0x03:  sub    $0x18,%esp
08339b0c +0x06:  mov    0x8(%ebp),%eax
08339b0f +0x09:  mov    0x18(%eax),%eax
08339b12 +0x0c:  test   %eax,%eax
08339b14 +0x0e:  je     08339b66 <+0x60>
08339b16 +0x10:  mov    0x8(%ebp),%eax
08339b19 +0x13:  mov    0x1c(%eax),%edx
08339b1c +0x16:  mov    0x8(%ebp),%eax
08339b1f +0x19:  mov    0x18(%eax),%eax
08339b22 +0x1c:  mov    %edx,0x8(%esp)
08339b26 +0x20:  mov    0xc(%ebp),%edx
08339b29 +0x23:  mov    %edx,0x4(%esp)
08339b2d +0x27:  mov    %eax,(%esp)
08339b30 +0x2a:  call   083378fc <_ZN13user_creature9CCreature7GainExpEiP5CUser>  ; user_creature::CCreature::GainExp(int, CUser*)
08339b35 +0x2f:  test   %al,%al
08339b37 +0x31:  je     08339b66 <+0x60>
08339b39 +0x33:  mov    0x8(%ebp),%eax
08339b3c +0x36:  mov    0x18(%eax),%eax
08339b3f +0x39:  mov    %eax,(%esp)
08339b42 +0x3c:  call   0833f0ca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1197>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1197
08339b47 +0x41:  test   %al,%al
08339b49 +0x43:  je     08339b5f <+0x59>
08339b4b +0x45:  mov    0x8(%ebp),%eax
08339b4e +0x48:  mov    0x18(%eax),%eax
08339b51 +0x4b:  mov    %eax,(%esp)
08339b54 +0x4e:  call   0833756e <_ZN13user_creature9CCreature10isMaxLevelEv>  ; user_creature::CCreature::isMaxLevel()
08339b59 +0x53:  mov    0x8(%ebp),%edx
08339b5c +0x56:  mov    %al,0x48(%edx)
08339b5f +0x59:  mov    $0x1,%eax
08339b64 +0x5e:  jmp    08339b6b <+0x65>
08339b66 +0x60:  mov    $0x0,%eax
08339b6b +0x65:  leave
08339b6c +0x66:  ret
08339b6d +0x67:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GainExp @ 0x8339b06

/* user_creature::CCreatureMgr::GainExp(int) */

undefined4 __thiscall user_creature::CCreatureMgr::GainExp(CCreatureMgr *this,int param_1)

{
  char cVar1;
  CCreatureMgr CVar2;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (cVar1 = CCreature::GainExp(*(CCreature **)(this + 0x18),param_1,*(CUser **)(this + 0x1c)),
     cVar1 != '\0')) {
    cVar1 = CCreature::IsGrowCreature(*(CCreature **)(this + 0x18));
    if (cVar1 != '\0') {
      CVar2 = (CCreatureMgr)CCreature::isMaxLevel(*(CCreature **)(this + 0x18));
      this[0x48] = CVar2;
    }
    return 1;
  }
  return 0;
}
```
