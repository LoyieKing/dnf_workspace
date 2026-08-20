# _SetReadyState

`_ZN11pvp_assault13CAssaultPlace14_SetReadyStateEv`

`pvp_assault::CAssaultPlace::_SetReadyState()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e82a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e82a2  _ZN11pvp_assault13CAssaultPlace14_SetReadyStateEv
#           pvp_assault::CAssaultPlace::_SetReadyState()
# range [0x082e82a2, 0x082e82ff]
082e82a2 +0x00:  push   %ebp
082e82a3 +0x01:  mov    %esp,%ebp
082e82a5 +0x03:  sub    $0x28,%esp
082e82a8 +0x06:  mov    0x8(%ebp),%eax
082e82ab +0x09:  movl   $0x2,0x10c(%eax)
082e82b5 +0x13:  movl   $0x0,-0xc(%ebp)
082e82bc +0x1a:  jmp    082e82f3 <+0x51>
082e82be +0x1c:  mov    -0xc(%ebp),%eax
082e82c1 +0x1f:  shl    $0x5,%eax
082e82c4 +0x22:  add    0x8(%ebp),%eax
082e82c7 +0x25:  mov    %eax,(%esp)
082e82ca +0x28:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e82cf +0x2d:  test   %al,%al
082e82d1 +0x2f:  jne    082e82ee <+0x4c>
082e82d3 +0x31:  mov    -0xc(%ebp),%eax
082e82d6 +0x34:  shl    $0x5,%eax
082e82d9 +0x37:  add    0x8(%ebp),%eax
082e82dc +0x3a:  movl   $0x1,0x4(%esp)
082e82e4 +0x42:  mov    %eax,(%esp)
082e82e7 +0x45:  call   082f057c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x300>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x300
082e82ec +0x4a:  jmp    082e82ef <+0x4d>
082e82ee +0x4c:  nop
082e82ef +0x4d:  addl   $0x1,-0xc(%ebp)
082e82f3 +0x51:  cmpl   $0x7,-0xc(%ebp)
082e82f7 +0x55:  setle  %al
082e82fa +0x58:  test   %al,%al
082e82fc +0x5a:  jne    082e82be <+0x1c>
082e82fe +0x5c:  leave
082e82ff +0x5d:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SetReadyState @ 0x82e82a2

/* pvp_assault::CAssaultPlace::_SetReadyState() */

void __thiscall pvp_assault::CAssaultPlace::_SetReadyState(CAssaultPlace *this)

{
  char cVar1;
  int local_10;
  
  *(undefined4 *)(this + 0x10c) = 2;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      CAssaulter::SetState((CAssaulter *)(this + local_10 * 0x20),1);
    }
  }
  return;
}
```
