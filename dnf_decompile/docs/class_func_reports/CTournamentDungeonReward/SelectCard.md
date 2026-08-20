# SelectCard

`_ZN24CTournamentDungeonReward10SelectCardEicc`

`CTournamentDungeonReward::SelectCard(int, char, char)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284ee4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284ee4  _ZN24CTournamentDungeonReward10SelectCardEicc
#           CTournamentDungeonReward::SelectCard(int, char, char)
# range [0x08284ee4, 0x08284fa3]
08284ee4 +0x00:  push   %ebp
08284ee5 +0x01:  mov    %esp,%ebp
08284ee7 +0x03:  push   %esi
08284ee8 +0x04:  push   %ebx
08284ee9 +0x05:  sub    $0x8,%esp
08284eec +0x08:  mov    0x10(%ebp),%edx
08284eef +0x0b:  mov    0x14(%ebp),%eax
08284ef2 +0x0e:  mov    %dl,-0xc(%ebp)
08284ef5 +0x11:  mov    %al,-0x10(%ebp)
08284ef8 +0x14:  cmpb   $0x0,-0xc(%ebp)
08284efc +0x18:  js     08284f04 <+0x20>
08284efe +0x1a:  cmpb   $0x1,-0xc(%ebp)
08284f02 +0x1e:  jle    08284f0e <+0x2a>
08284f04 +0x20:  mov    $0x0,%eax
08284f09 +0x25:  jmp    08284f9c <+0xb8>
08284f0e +0x2a:  cmpb   $0x0,-0x10(%ebp)
08284f12 +0x2e:  js     08284f1a <+0x36>
08284f14 +0x30:  cmpb   $0x1,-0x10(%ebp)
08284f18 +0x34:  jle    08284f21 <+0x3d>
08284f1a +0x36:  mov    $0x0,%eax
08284f1f +0x3b:  jmp    08284f9c <+0xb8>
08284f21 +0x3d:  cmpl   $0x0,0xc(%ebp)
08284f25 +0x41:  js     08284f2d <+0x49>
08284f27 +0x43:  cmpl   $0x3,0xc(%ebp)
08284f2b +0x47:  jle    08284f34 <+0x50>
08284f2d +0x49:  mov    $0x0,%eax
08284f32 +0x4e:  jmp    08284f9c <+0xb8>
08284f34 +0x50:  movsbl -0xc(%ebp),%edx
08284f38 +0x54:  movsbl -0x10(%ebp),%ecx
08284f3c +0x58:  mov    0x8(%ebp),%ebx
08284f3f +0x5b:  mov    %ecx,%eax
08284f41 +0x5d:  add    %eax,%eax
08284f43 +0x5f:  add    %ecx,%eax
08284f45 +0x61:  lea    0x0(,%eax,4),%ecx
08284f4c +0x68:  mov    %edx,%eax
08284f4e +0x6a:  add    %eax,%eax
08284f50 +0x6c:  add    %edx,%eax
08284f52 +0x6e:  shl    $0x3,%eax
08284f55 +0x71:  lea    (%ecx,%eax,1),%eax
08284f58 +0x74:  movzbl 0x10(%eax,%ebx,1),%eax
08284f5d +0x79:  cmp    $0xff,%al
08284f5f +0x7b:  jne    08284f97 <+0xb3>
08284f61 +0x7d:  movsbl -0xc(%ebp),%edx
08284f65 +0x81:  movsbl -0x10(%ebp),%ecx
08284f69 +0x85:  mov    0xc(%ebp),%eax
08284f6c +0x88:  mov    %eax,%esi
08284f6e +0x8a:  mov    0x8(%ebp),%ebx
08284f71 +0x8d:  mov    %ecx,%eax
08284f73 +0x8f:  add    %eax,%eax
08284f75 +0x91:  add    %ecx,%eax
08284f77 +0x93:  lea    0x0(,%eax,4),%ecx
08284f7e +0x9a:  mov    %edx,%eax
08284f80 +0x9c:  add    %eax,%eax
08284f82 +0x9e:  add    %edx,%eax
08284f84 +0xa0:  shl    $0x3,%eax
08284f87 +0xa3:  lea    (%ecx,%eax,1),%eax
08284f8a +0xa6:  mov    %esi,%edx
08284f8c +0xa8:  mov    %dl,0x10(%eax,%ebx,1)
08284f90 +0xac:  mov    $0x1,%eax
08284f95 +0xb1:  jmp    08284f9c <+0xb8>
08284f97 +0xb3:  mov    $0x0,%eax
08284f9c +0xb8:  add    $0x8,%esp
08284f9f +0xbb:  pop    %ebx
08284fa0 +0xbc:  pop    %esi
08284fa1 +0xbd:  pop    %ebp
08284fa2 +0xbe:  ret
08284fa3 +0xbf:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::SelectCard @ 0x8284ee4

/* CTournamentDungeonReward::SelectCard(int, char, char) */

undefined4 __thiscall
CTournamentDungeonReward::SelectCard
          (CTournamentDungeonReward *this,int param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < '\0') || ('\x01' < param_2)) {
    uVar1 = 0;
  }
  else if ((param_3 < '\0') || ('\x01' < param_3)) {
    uVar1 = 0;
  }
  else if ((param_1 < 0) || (3 < param_1)) {
    uVar1 = 0;
  }
  else if (this[param_3 * 0xc + param_2 * 0x18 + 0x10] == (CTournamentDungeonReward)0xff) {
    this[param_3 * 0xc + param_2 * 0x18 + 0x10] = SUB41(param_1,0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
