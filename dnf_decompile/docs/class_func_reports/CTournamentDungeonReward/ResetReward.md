# ResetReward

`_ZN24CTournamentDungeonReward11ResetRewardEv`

`CTournamentDungeonReward::ResetReward()`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284820  _ZN24CTournamentDungeonReward11ResetRewardEv
#           CTournamentDungeonReward::ResetReward()
# range [0x08284820, 0x0828488f]
08284820 +0x00:  push   %ebp
08284821 +0x01:  mov    %esp,%ebp
08284823 +0x03:  sub    $0x14,%esp
08284826 +0x06:  movl   $0x0,-0x8(%ebp)
0828482d +0x0d:  jmp    08284878 <+0x58>
0828482f +0x0f:  movl   $0x0,-0x4(%ebp)
08284836 +0x16:  jmp    08284869 <+0x49>
08284838 +0x18:  mov    -0x8(%ebp),%edx
0828483b +0x1b:  mov    -0x4(%ebp),%ecx
0828483e +0x1e:  mov    %ecx,%eax
08284840 +0x20:  add    %eax,%eax
08284842 +0x22:  add    %ecx,%eax
08284844 +0x24:  lea    0x0(,%eax,4),%ecx
0828484b +0x2b:  mov    %edx,%eax
0828484d +0x2d:  add    %eax,%eax
0828484f +0x2f:  add    %edx,%eax
08284851 +0x31:  shl    $0x3,%eax
08284854 +0x34:  lea    (%ecx,%eax,1),%eax
08284857 +0x37:  add    0x8(%ebp),%eax
0828485a +0x3a:  add    $0x8,%eax
0828485d +0x3d:  mov    %eax,(%esp)
08284860 +0x40:  call   08284750 <_ZN20TournamentRewardType5ClearEv>  ; TournamentRewardType::Clear()
08284865 +0x45:  addl   $0x1,-0x4(%ebp)
08284869 +0x49:  cmpl   $0x1,-0x4(%ebp)
0828486d +0x4d:  setle  %al
08284870 +0x50:  test   %al,%al
08284872 +0x52:  jne    08284838 <+0x18>
08284874 +0x54:  addl   $0x1,-0x8(%ebp)
08284878 +0x58:  cmpl   $0x1,-0x8(%ebp)
0828487c +0x5c:  setle  %al
0828487f +0x5f:  test   %al,%al
08284881 +0x61:  jne    0828482f <+0xf>
08284883 +0x63:  mov    0x8(%ebp),%eax
08284886 +0x66:  movl   $0x0,0x4(%eax)
0828488d +0x6d:  leave
0828488e +0x6e:  ret
0828488f +0x6f:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::ResetReward @ 0x8284820

/* CTournamentDungeonReward::ResetReward() */

void __thiscall CTournamentDungeonReward::ResetReward(CTournamentDungeonReward *this)

{
  int local_c;
  int local_8;
  
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
      TournamentRewardType::Clear
                ((TournamentRewardType *)(this + local_8 * 0xc + local_c * 0x18 + 8));
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
