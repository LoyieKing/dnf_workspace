# _BackupPartyInfo

`_ZN11pvp_assault13CAssaultPlace16_BackupPartyInfoEP6CParty17ENUM_ASSAULT_TEAM`

`pvp_assault::CAssaultPlace::_BackupPartyInfo(CParty*, ENUM_ASSAULT_TEAM)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e804a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e804a  _ZN11pvp_assault13CAssaultPlace16_BackupPartyInfoEP6CParty17ENUM_ASSAULT_TEAM
#           pvp_assault::CAssaultPlace::_BackupPartyInfo(CParty*, ENUM_ASSAULT_TEAM)
# range [0x082e804a, 0x082e8097]
082e804a +0x00:  push   %ebp
082e804b +0x01:  mov    %esp,%ebp
082e804d +0x03:  sub    $0x18,%esp
082e8050 +0x06:  cmpl   $0x0,0xc(%ebp)
082e8054 +0x0a:  je     082e8076 <+0x2c>
082e8056 +0x0c:  mov    0x10(%ebp),%eax
082e8059 +0x0f:  add    $0x48,%eax
082e805c +0x12:  shl    $0x2,%eax
082e805f +0x15:  add    0x8(%ebp),%eax
082e8062 +0x18:  lea    0xc(%eax),%edx
082e8065 +0x1b:  mov    0xc(%ebp),%eax
082e8068 +0x1e:  mov    %eax,0x4(%esp)
082e806c +0x22:  mov    %edx,(%esp)
082e806f +0x25:  call   082f05fc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x380>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x380
082e8074 +0x2a:  jmp    082e8095 <+0x4b>
082e8076 +0x2c:  mov    0x10(%ebp),%eax
082e8079 +0x2f:  add    $0x48,%eax
082e807c +0x32:  shl    $0x2,%eax
082e807f +0x35:  add    0x8(%ebp),%eax
082e8082 +0x38:  add    $0xc,%eax
082e8085 +0x3b:  movl   $0x0,0x4(%esp)
082e808d +0x43:  mov    %eax,(%esp)
082e8090 +0x46:  call   082f05fc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x380>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x380
082e8095 +0x4b:  leave
082e8096 +0x4c:  ret
082e8097 +0x4d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_BackupPartyInfo @ 0x82e804a

/* pvp_assault::CAssaultPlace::_BackupPartyInfo(CParty*, ENUM_ASSAULT_TEAM) */

void __thiscall
pvp_assault::CAssaultPlace::_BackupPartyInfo(CAssaultPlace *this,CParty *param_1,int param_3)

{
  if (param_1 == (CParty *)0x0) {
    PartyInfo::Set((PartyInfo *)(this + (param_3 + 0x48) * 4 + 0xc),(CParty *)0x0);
  }
  else {
    PartyInfo::Set((PartyInfo *)(this + (param_3 + 0x48) * 4 + 0xc),param_1);
  }
  return;
}
```
