# CheckRentableEnvironmentAtChannelType

`_ZN7pc_room37CheckRentableEnvironmentAtChannelTypeER5CUser`

`pc_room::CheckRentableEnvironmentAtChannelType(CUser&)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x08271032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08271032  _ZN7pc_room37CheckRentableEnvironmentAtChannelTypeER5CUser
#           pc_room::CheckRentableEnvironmentAtChannelType(CUser&)
# range [0x08271032, 0x08271061]
08271032 +0x00:  push   %ebp
08271033 +0x01:  mov    %esp,%ebp
08271035 +0x03:  sub    $0x28,%esp
08271038 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0827103d +0x0b:  mov    %eax,(%esp)
08271040 +0x0e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08271045 +0x13:  mov    %eax,-0xc(%ebp)
08271048 +0x16:  cmpl   $0xf,-0xc(%ebp)
0827104c +0x1a:  je     08271054 <+0x22>
0827104e +0x1c:  cmpl   $0x10,-0xc(%ebp)
08271052 +0x20:  jne    0827105b <+0x29>
08271054 +0x22:  mov    $0x0,%eax
08271059 +0x27:  jmp    08271060 <+0x2e>
0827105b +0x29:  mov    $0x1,%eax
08271060 +0x2e:  leave
08271061 +0x2f:  ret
```

## 反编译 C

```c
// pc_room::CheckRentableEnvironmentAtChannelType @ 0x8271032

/* pc_room::CheckRentableEnvironmentAtChannelType(CUser&) */

undefined4 pc_room::CheckRentableEnvironmentAtChannelType(CUser *param_1)

{
  GameWorld *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if ((iVar1 == 0xf) || (iVar1 == 0x10)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
