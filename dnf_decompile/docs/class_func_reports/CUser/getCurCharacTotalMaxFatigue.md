# getCurCharacTotalMaxFatigue

`_ZNK5CUser27getCurCharacTotalMaxFatigueEv`

`CUser::getCurCharacTotalMaxFatigue() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08657804` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08657804  _ZNK5CUser27getCurCharacTotalMaxFatigueEv
#           CUser::getCurCharacTotalMaxFatigue() const
# range [0x08657804, 0x0865784d]
08657804 +0x00:  push   %ebp
08657805 +0x01:  mov    %esp,%ebp
08657807 +0x03:  sub    $0x28,%esp
0865780a +0x06:  movw   $0x0,-0xa(%ebp)
08657810 +0x0c:  mov    0x8(%ebp),%eax
08657813 +0x0f:  mov    %eax,(%esp)
08657816 +0x12:  call   0812cdd6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x52>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x52
0865781b +0x17:  mov    %ax,-0xa(%ebp)
0865781f +0x1b:  mov    0x8(%ebp),%eax
08657822 +0x1e:  add    $0x7121c,%eax
08657827 +0x23:  mov    %eax,(%esp)
0865782a +0x26:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
0865782f +0x2b:  test   %ax,%ax
08657832 +0x2e:  setne  %al
08657835 +0x31:  test   %al,%al
08657837 +0x33:  je     08657848 <+0x44>
08657839 +0x35:  mov    0x8(%ebp),%eax
0865783c +0x38:  mov    %eax,(%esp)
0865783f +0x3b:  call   08696402 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c57
08657844 +0x40:  add    %ax,-0xa(%ebp)
08657848 +0x44:  movzwl -0xa(%ebp),%eax
0865784c +0x48:  leave
0865784d +0x49:  ret
```

## 反编译 C

```c
// CUser::getCurCharacTotalMaxFatigue @ 0x8657804

/* CUser::getCurCharacTotalMaxFatigue() const */

short __thiscall CUser::getCurCharacTotalMaxFatigue(CUser *this)

{
  short sVar1;
  short local_e;
  
  local_e = CUserCharacInfo::getCurCharacMaxFatigue((CUserCharacInfo *)this);
  sVar1 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
  if (sVar1 != 0) {
    sVar1 = CUserCharacInfo::getCurCharacMaxPremiumFatigue((CUserCharacInfo *)this);
    local_e = local_e + sVar1;
  }
  return local_e;
}
```
