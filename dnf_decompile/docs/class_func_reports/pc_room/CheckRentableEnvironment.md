# CheckRentableEnvironment

`_ZN7pc_room24CheckRentableEnvironmentER5CUser`

`pc_room::CheckRentableEnvironment(CUser&)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x08271002` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08271002  _ZN7pc_room24CheckRentableEnvironmentER5CUser
#           pc_room::CheckRentableEnvironment(CUser&)
# range [0x08271002, 0x08271031]
08271002 +0x00:  push   %ebp
08271003 +0x01:  mov    %esp,%ebp
08271005 +0x03:  sub    $0x28,%esp
08271008 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0827100d +0x0b:  mov    %eax,(%esp)
08271010 +0x0e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08271015 +0x13:  mov    %eax,-0xc(%ebp)
08271018 +0x16:  cmpl   $0xf,-0xc(%ebp)
0827101c +0x1a:  je     08271024 <+0x22>
0827101e +0x1c:  cmpl   $0x10,-0xc(%ebp)
08271022 +0x20:  jne    0827102b <+0x29>
08271024 +0x22:  mov    $0x0,%eax
08271029 +0x27:  jmp    08271030 <+0x2e>
0827102b +0x29:  mov    $0x1,%eax
08271030 +0x2e:  leave
08271031 +0x2f:  ret
```

## 反编译 C

```c
// pc_room::CheckRentableEnvironment @ 0x8271002

/* pc_room::CheckRentableEnvironment(CUser&) */

undefined4 pc_room::CheckRentableEnvironment(CUser *param_1)

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
