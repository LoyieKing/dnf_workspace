# _CheckPlayable

`_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv`

`pvp_assault::CAssaultPlace::_CheckPlayable()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e9142` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e9142  _ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv
#           pvp_assault::CAssaultPlace::_CheckPlayable()
# range [0x082e9142, 0x082e9199]
082e9142 +0x00:  push   %ebp
082e9143 +0x01:  mov    %esp,%ebp
082e9145 +0x03:  sub    $0x28,%esp
082e9148 +0x06:  movl   $0x0,-0x14(%ebp)
082e914f +0x0d:  movl   $0x0,-0x10(%ebp)
082e9156 +0x14:  lea    -0x14(%ebp),%eax
082e9159 +0x17:  mov    %eax,0x4(%esp)
082e915d +0x1b:  mov    0x8(%ebp),%eax
082e9160 +0x1e:  mov    %eax,(%esp)
082e9163 +0x21:  call   082e7232 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi>  ; pvp_assault::CAssaultPlace::_GetTeamCount(int*)
082e9168 +0x26:  movl   $0x0,-0xc(%ebp)
082e916f +0x2d:  jmp    082e9187 <+0x45>
082e9171 +0x2f:  mov    -0xc(%ebp),%eax
082e9174 +0x32:  mov    -0x14(%ebp,%eax,4),%eax
082e9178 +0x36:  test   %eax,%eax
082e917a +0x38:  jne    082e9183 <+0x41>
082e917c +0x3a:  mov    $0x0,%eax
082e9181 +0x3f:  jmp    082e9197 <+0x55>
082e9183 +0x41:  addl   $0x1,-0xc(%ebp)
082e9187 +0x45:  cmpl   $0x1,-0xc(%ebp)
082e918b +0x49:  setle  %al
082e918e +0x4c:  test   %al,%al
082e9190 +0x4e:  jne    082e9171 <+0x2f>
082e9192 +0x50:  mov    $0x1,%eax
082e9197 +0x55:  leave
082e9198 +0x56:  ret
082e9199 +0x57:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_CheckPlayable @ 0x82e9142

/* pvp_assault::CAssaultPlace::_CheckPlayable() */

undefined4 __thiscall pvp_assault::CAssaultPlace::_CheckPlayable(CAssaultPlace *this)

{
  int local_18 [5];
  
  local_18[0] = 0;
  local_18[1] = 0;
  _GetTeamCount(this,local_18);
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
