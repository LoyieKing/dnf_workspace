# GetDirectionByTeam

`_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM`

`pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)`

| 类 | 地址 |
|---|---|
| `pvp_assault` | `0x082e564c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e564c  _ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM
#           pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)
# range [0x082e564c, 0x082e567b]
082e564c +0x00:  push   %ebp
082e564d +0x01:  mov    %esp,%ebp
082e564f +0x03:  sub    $0x10,%esp
082e5652 +0x06:  movl   $0x0,-0x4(%ebp)
082e5659 +0x0d:  mov    0x8(%ebp),%eax
082e565c +0x10:  test   %eax,%eax
082e565e +0x12:  je     082e5667 <+0x1b>
082e5660 +0x14:  cmp    $0x1,%eax
082e5663 +0x17:  je     082e5670 <+0x24>
082e5665 +0x19:  jmp    082e5677 <+0x2b>
082e5667 +0x1b:  movl   $0x6,-0x4(%ebp)
082e566e +0x22:  jmp    082e5677 <+0x2b>
082e5670 +0x24:  movl   $0x4,-0x4(%ebp)
082e5677 +0x2b:  mov    -0x4(%ebp),%eax
082e567a +0x2e:  leave
082e567b +0x2f:  ret
```

## 反编译 C

```c
// pvp_assault::GetDirectionByTeam @ 0x82e564c

/* pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM) */

undefined4 pvp_assault::GetDirectionByTeam(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 == 0) {
    local_8 = 6;
  }
  else if (param_1 == 1) {
    local_8 = 4;
  }
  return local_8;
}
```
