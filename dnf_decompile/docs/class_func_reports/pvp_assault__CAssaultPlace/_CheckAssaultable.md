# _CheckAssaultable

`_ZN11pvp_assault13CAssaultPlace17_CheckAssaultableEv`

`pvp_assault::CAssaultPlace::_CheckAssaultable()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e919a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e919a  _ZN11pvp_assault13CAssaultPlace17_CheckAssaultableEv
#           pvp_assault::CAssaultPlace::_CheckAssaultable()
# range [0x082e919a, 0x082e91f9]
082e919a +0x00:  push   %ebp
082e919b +0x01:  mov    %esp,%ebp
082e919d +0x03:  sub    $0x28,%esp
082e91a0 +0x06:  movl   $0x0,-0x14(%ebp)
082e91a7 +0x0d:  movl   $0x0,-0x10(%ebp)
082e91ae +0x14:  movl   $0x5,0x8(%esp)
082e91b6 +0x1c:  lea    -0x14(%ebp),%eax
082e91b9 +0x1f:  mov    %eax,0x4(%esp)
082e91bd +0x23:  mov    0x8(%ebp),%eax
082e91c0 +0x26:  mov    %eax,(%esp)
082e91c3 +0x29:  call   082e7288 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE>  ; pvp_assault::CAssaultPlace::_GetTeamCount(int*, pvp_assault::ENUM_ASSAULT_STATE)
082e91c8 +0x2e:  movl   $0x0,-0xc(%ebp)
082e91cf +0x35:  jmp    082e91e7 <+0x4d>
082e91d1 +0x37:  mov    -0xc(%ebp),%eax
082e91d4 +0x3a:  mov    -0x14(%ebp,%eax,4),%eax
082e91d8 +0x3e:  test   %eax,%eax
082e91da +0x40:  jne    082e91e3 <+0x49>
082e91dc +0x42:  mov    $0x0,%eax
082e91e1 +0x47:  jmp    082e91f7 <+0x5d>
082e91e3 +0x49:  addl   $0x1,-0xc(%ebp)
082e91e7 +0x4d:  cmpl   $0x1,-0xc(%ebp)
082e91eb +0x51:  setle  %al
082e91ee +0x54:  test   %al,%al
082e91f0 +0x56:  jne    082e91d1 <+0x37>
082e91f2 +0x58:  mov    $0x1,%eax
082e91f7 +0x5d:  leave
082e91f8 +0x5e:  ret
082e91f9 +0x5f:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_CheckAssaultable @ 0x82e919a

/* pvp_assault::CAssaultPlace::_CheckAssaultable() */

undefined4 __thiscall pvp_assault::CAssaultPlace::_CheckAssaultable(CAssaultPlace *this)

{
  int local_18 [5];
  
  local_18[0] = 0;
  local_18[1] = 0;
  _GetTeamCount(this,local_18,5);
  local_18[2] = 0;
  while( true ) {
    if (1 < local_18[2]) {
      return 1;
    }
    if (local_18[local_18[2]] == 0) break;
    local_18[2] = local_18[2] + 1;
  }
  return 0;
}
```
