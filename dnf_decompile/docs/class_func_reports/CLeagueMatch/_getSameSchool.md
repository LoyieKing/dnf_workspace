# _getSameSchool

`_ZN12CLeagueMatch14_getSameSchoolEPjiij`

`CLeagueMatch::_getSameSchool(unsigned int*, int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e7a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e7a8  _ZN12CLeagueMatch14_getSameSchoolEPjiij
#           CLeagueMatch::_getSameSchool(unsigned int*, int, int, unsigned int)
# range [0x0855e7a8, 0x0855e7ed]
0855e7a8 +0x00:  push   %ebp
0855e7a9 +0x01:  mov    %esp,%ebp
0855e7ab +0x03:  sub    $0x10,%esp
0855e7ae +0x06:  movl   $0x0,-0x4(%ebp)
0855e7b5 +0x0d:  jmp    0855e7da <+0x32>
0855e7b7 +0x0f:  mov    -0x4(%ebp),%eax
0855e7ba +0x12:  cmp    0x10(%ebp),%eax
0855e7bd +0x15:  je     0855e7d6 <+0x2e>
0855e7bf +0x17:  mov    -0x4(%ebp),%eax
0855e7c2 +0x1a:  shl    $0x2,%eax
0855e7c5 +0x1d:  add    0xc(%ebp),%eax
0855e7c8 +0x20:  mov    (%eax),%eax
0855e7ca +0x22:  cmp    0x18(%ebp),%eax
0855e7cd +0x25:  jne    0855e7d6 <+0x2e>
0855e7cf +0x27:  mov    $0x1,%eax
0855e7d4 +0x2c:  jmp    0855e7ec <+0x44>
0855e7d6 +0x2e:  addl   $0x1,-0x4(%ebp)
0855e7da +0x32:  mov    -0x4(%ebp),%eax
0855e7dd +0x35:  cmp    0x14(%ebp),%eax
0855e7e0 +0x38:  setl   %al
0855e7e3 +0x3b:  test   %al,%al
0855e7e5 +0x3d:  jne    0855e7b7 <+0xf>
0855e7e7 +0x3f:  mov    $0x0,%eax
0855e7ec +0x44:  leave
0855e7ed +0x45:  ret
```

## 反编译 C

```c
// CLeagueMatch::_getSameSchool @ 0x855e7a8

/* CLeagueMatch::_getSameSchool(unsigned int*, int, int, unsigned int) */

undefined4 __thiscall
CLeagueMatch::_getSameSchool(CLeagueMatch *this,uint *param_1,int param_2,int param_3,uint param_4)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (param_3 <= local_8) {
      return 0;
    }
    if ((local_8 != param_2) && (param_1[local_8] == param_4)) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
