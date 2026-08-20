# GetCurCharacOnlinePreliminaryTeamId

`_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv`

`CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645de2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645de2  _ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv
#           CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
# range [0x08645de2, 0x08645e1f]
08645de2 +0x00:  push   %ebp
08645de3 +0x01:  mov    %esp,%ebp
08645de5 +0x03:  sub    $0x18,%esp
08645de8 +0x06:  mov    0x8(%ebp),%eax
08645deb +0x09:  mov    0x10(%eax),%eax
08645dee +0x0c:  test   %eax,%eax
08645df0 +0x0e:  je     08645e18 <+0x36>
08645df2 +0x10:  mov    0x8(%ebp),%eax
08645df5 +0x13:  mov    0x10(%eax),%eax
08645df8 +0x16:  mov    0xe89(%eax),%eax
08645dfe +0x1c:  test   %eax,%eax
08645e00 +0x1e:  je     08645e18 <+0x36>
08645e02 +0x20:  mov    0x8(%ebp),%eax
08645e05 +0x23:  mov    0x10(%eax),%eax
08645e08 +0x26:  mov    0xe89(%eax),%eax
08645e0e +0x2c:  mov    %eax,(%esp)
08645e11 +0x2f:  call   08697892 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x40e7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x40e7
08645e16 +0x34:  jmp    08645e1d <+0x3b>
08645e18 +0x36:  mov    $0x0,%eax
08645e1d +0x3b:  leave
08645e1e +0x3c:  ret
08645e1f +0x3d:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId @ 0x8645de2

/* CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const */

undefined4 __thiscall CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x10) == 0) || (*(int *)(*(int *)(this + 0x10) + 0xe89) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = online_preliminary::COnlinePreliminaryTeam::GetTeamId
                      (*(COnlinePreliminaryTeam **)(*(int *)(this + 0x10) + 0xe89));
  }
  return uVar1;
}
```
