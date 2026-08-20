# isMemberSelectCard

`_ZN24CTournamentDungeonReward18isMemberSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEi`

`CTournamentDungeonReward::isMemberSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08285284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285284  _ZN24CTournamentDungeonReward18isMemberSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEi
#           CTournamentDungeonReward::isMemberSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int)
# range [0x08285284, 0x082852e3]
08285284 +0x00:  push   %ebp
08285285 +0x01:  mov    %esp,%ebp
08285287 +0x03:  push   %ebx
08285288 +0x04:  sub    $0x10,%esp
0828528b +0x07:  movl   $0x0,-0x8(%ebp)
08285292 +0x0e:  jmp    082852ce <+0x4a>
08285294 +0x10:  mov    0xc(%ebp),%edx
08285297 +0x13:  mov    -0x8(%ebp),%ecx
0828529a +0x16:  mov    0x8(%ebp),%ebx
0828529d +0x19:  mov    %ecx,%eax
0828529f +0x1b:  add    %eax,%eax
082852a1 +0x1d:  add    %ecx,%eax
082852a3 +0x1f:  lea    0x0(,%eax,4),%ecx
082852aa +0x26:  mov    %edx,%eax
082852ac +0x28:  add    %eax,%eax
082852ae +0x2a:  add    %edx,%eax
082852b0 +0x2c:  shl    $0x3,%eax
082852b3 +0x2f:  lea    (%ecx,%eax,1),%eax
082852b6 +0x32:  movzbl 0x10(%eax,%ebx,1),%eax
082852bb +0x37:  movsbl %al,%eax
082852be +0x3a:  cmp    0x10(%ebp),%eax
082852c1 +0x3d:  jne    082852ca <+0x46>
082852c3 +0x3f:  mov    $0x1,%eax
082852c8 +0x44:  jmp    082852de <+0x5a>
082852ca +0x46:  addl   $0x1,-0x8(%ebp)
082852ce +0x4a:  cmpl   $0x1,-0x8(%ebp)
082852d2 +0x4e:  setle  %al
082852d5 +0x51:  test   %al,%al
082852d7 +0x53:  jne    08285294 <+0x10>
082852d9 +0x55:  mov    $0x0,%eax
082852de +0x5a:  add    $0x10,%esp
082852e1 +0x5d:  pop    %ebx
082852e2 +0x5e:  pop    %ebp
082852e3 +0x5f:  ret
```

## 反编译 C

```c
// CTournamentDungeonReward::isMemberSelectCard @ 0x8285284

/* CTournamentDungeonReward::isMemberSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int) */

undefined4 __thiscall
CTournamentDungeonReward::isMemberSelectCard(CTournamentDungeonReward *this,int param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (1 < local_c) {
      return 0;
    }
    if ((char)this[local_c * 0xc + param_2 * 0x18 + 0x10] == param_3) break;
    local_c = local_c + 1;
  }
  return 1;
}
```
