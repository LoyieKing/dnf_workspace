# OnChangeTeam

`_ZN15CRelayBattleMgr12OnChangeTeamEii`

`CRelayBattleMgr::OnChangeTeam(int, int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de15a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de15a  _ZN15CRelayBattleMgr12OnChangeTeamEii
#           CRelayBattleMgr::OnChangeTeam(int, int)
# range [0x085de15a, 0x085de18b]
085de15a +0x00:  push   %ebp
085de15b +0x01:  mov    %esp,%ebp
085de15d +0x03:  push   %ebx
085de15e +0x04:  cmpl   $0x0,0xc(%ebp)
085de162 +0x08:  js     085de184 <+0x2a>
085de164 +0x0a:  cmpl   $0x7,0xc(%ebp)
085de168 +0x0e:  jg     085de187 <+0x2d>
085de16a +0x10:  mov    0xc(%ebp),%edx
085de16d +0x13:  mov    0x10(%ebp),%eax
085de170 +0x16:  mov    %eax,%ebx
085de172 +0x18:  mov    0x8(%ebp),%ecx
085de175 +0x1b:  mov    %edx,%eax
085de177 +0x1d:  add    %eax,%eax
085de179 +0x1f:  add    %edx,%eax
085de17b +0x21:  shl    $0x2,%eax
085de17e +0x24:  mov    %bl,0x6(%eax,%ecx,1)
085de182 +0x28:  jmp    085de188 <+0x2e>
085de184 +0x2a:  nop
085de185 +0x2b:  jmp    085de188 <+0x2e>
085de187 +0x2d:  nop
085de188 +0x2e:  pop    %ebx
085de189 +0x2f:  pop    %ebp
085de18a +0x30:  ret
085de18b +0x31:  nop
```

## 反编译 C

```c
// CRelayBattleMgr::OnChangeTeam @ 0x85de15a

/* CRelayBattleMgr::OnChangeTeam(int, int) */

void __thiscall CRelayBattleMgr::OnChangeTeam(CRelayBattleMgr *this,int param_1,int param_2)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    this[param_1 * 0xc + 6] = SUB41(param_2,0);
  }
  return;
}
```
