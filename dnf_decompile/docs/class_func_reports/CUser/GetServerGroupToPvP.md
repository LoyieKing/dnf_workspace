# GetServerGroupToPvP

`_ZNK5CUser19GetServerGroupToPvPEv`

`CUser::GetServerGroupToPvP() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a97c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a97c  _ZNK5CUser19GetServerGroupToPvPEv
#           CUser::GetServerGroupToPvP() const
# range [0x0864a97c, 0x0864a9ab]
0864a97c +0x00:  push   %ebp
0864a97d +0x01:  mov    %esp,%ebp
0864a97f +0x03:  sub    $0x18,%esp
0864a982 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0864a987 +0x0b:  mov    %eax,(%esp)
0864a98a +0x0e:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0864a98f +0x13:  test   %al,%al
0864a991 +0x15:  je     0864a99e <+0x22>
0864a993 +0x17:  mov    0x8(%ebp),%eax
0864a996 +0x1a:  mov    0x79630(%eax),%eax
0864a99c +0x20:  jmp    0864a9a9 <+0x2d>
0864a99e +0x22:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864a9a3 +0x27:  mov    0x378(%eax),%eax
0864a9a9 +0x2d:  leave
0864a9aa +0x2e:  ret
0864a9ab +0x2f:  nop
```

## 反编译 C

```c
// CUser::GetServerGroupToPvP @ 0x864a97c

/* CUser::GetServerGroupToPvP() const */

undefined4 __thiscall CUser::GetServerGroupToPvP(CUser *this)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar1 == '\0') {
    iVar2 = G_CEnvironment();
    uVar3 = *(undefined4 *)(iVar2 + 0x378);
  }
  else {
    uVar3 = *(undefined4 *)(this + 0x79630);
  }
  return uVar3;
}
```
