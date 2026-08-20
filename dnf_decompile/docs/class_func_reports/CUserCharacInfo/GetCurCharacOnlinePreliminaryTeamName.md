# GetCurCharacOnlinePreliminaryTeamName

`_ZNK15CUserCharacInfo37GetCurCharacOnlinePreliminaryTeamNameEv`

`CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName() const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645e20  _ZNK15CUserCharacInfo37GetCurCharacOnlinePreliminaryTeamNameEv
#           CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName() const
# range [0x08645e20, 0x08645e5d]
08645e20 +0x00:  push   %ebp
08645e21 +0x01:  mov    %esp,%ebp
08645e23 +0x03:  sub    $0x18,%esp
08645e26 +0x06:  mov    0x8(%ebp),%eax
08645e29 +0x09:  mov    0x10(%eax),%eax
08645e2c +0x0c:  test   %eax,%eax
08645e2e +0x0e:  je     08645e56 <+0x36>
08645e30 +0x10:  mov    0x8(%ebp),%eax
08645e33 +0x13:  mov    0x10(%eax),%eax
08645e36 +0x16:  mov    0xe89(%eax),%eax
08645e3c +0x1c:  test   %eax,%eax
08645e3e +0x1e:  je     08645e56 <+0x36>
08645e40 +0x20:  mov    0x8(%ebp),%eax
08645e43 +0x23:  mov    0x10(%eax),%eax
08645e46 +0x26:  mov    0xe89(%eax),%eax
08645e4c +0x2c:  mov    %eax,(%esp)
08645e4f +0x2f:  call   0869789e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x40f3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x40f3
08645e54 +0x34:  jmp    08645e5b <+0x3b>
08645e56 +0x36:  mov    $"",%eax
08645e5b +0x3b:  leave
08645e5c +0x3c:  ret
08645e5d +0x3d:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName @ 0x8645e20

/* CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName() const */

undefined * __thiscall CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName(CUserCharacInfo *this)

{
  undefined *puVar1;
  
  if ((*(int *)(this + 0x10) == 0) || (*(int *)(*(int *)(this + 0x10) + 0xe89) == 0)) {
    puVar1 = &DAT_08cedf41;
  }
  else {
    puVar1 = (undefined *)
             online_preliminary::COnlinePreliminaryTeam::GetTeamName
                       (*(COnlinePreliminaryTeam **)(*(int *)(this + 0x10) + 0xe89));
  }
  return puVar1;
}
```
