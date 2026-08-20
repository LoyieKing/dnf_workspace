# excludeAddHackCount

`_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser`

`DisPatcher_StartGame::excludeAddHackCount(CUser*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_StartGame` | `0x081ca2a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ca2a8  _ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser
#           DisPatcher_StartGame::excludeAddHackCount(CUser*)
# range [0x081ca2a8, 0x081ca2fd]
081ca2a8 +0x00:  push   %ebp
081ca2a9 +0x01:  mov    %esp,%ebp
081ca2ab +0x03:  sub    $0x18,%esp
081ca2ae +0x06:  cmpl   $0x0,0xc(%ebp)
081ca2b2 +0x0a:  jne    081ca2bb <+0x13>
081ca2b4 +0x0c:  mov    $0x0,%eax
081ca2b9 +0x11:  jmp    081ca2fb <+0x53>
081ca2bb +0x13:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ca2c0 +0x18:  mov    0xc(%ebp),%edx
081ca2c3 +0x1b:  mov    %edx,0x4(%esp)
081ca2c7 +0x1f:  mov    %eax,(%esp)
081ca2ca +0x22:  call   086cec84 <_ZN9GameWorld21isDungeonEntranceAreaEP5CUser>  ; GameWorld::isDungeonEntranceArea(CUser*)
081ca2cf +0x27:  test   %al,%al
081ca2d1 +0x29:  je     081ca2da <+0x32>
081ca2d3 +0x2b:  mov    $0x0,%eax
081ca2d8 +0x30:  jmp    081ca2fb <+0x53>
081ca2da +0x32:  mov    0xc(%ebp),%eax
081ca2dd +0x35:  mov    %eax,(%esp)
081ca2e0 +0x38:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081ca2e5 +0x3d:  cmp    $0x1,%eax
081ca2e8 +0x40:  sete   %al
081ca2eb +0x43:  test   %al,%al
081ca2ed +0x45:  je     081ca2f6 <+0x4e>
081ca2ef +0x47:  mov    $0x0,%eax
081ca2f4 +0x4c:  jmp    081ca2fb <+0x53>
081ca2f6 +0x4e:  mov    $0x1,%eax
081ca2fb +0x53:  leave
081ca2fc +0x54:  ret
081ca2fd +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_StartGame::excludeAddHackCount @ 0x81ca2a8

/* DisPatcher_StartGame::excludeAddHackCount(CUser*) */

undefined4 __thiscall
DisPatcher_StartGame::excludeAddHackCount(DisPatcher_StartGame *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  int iVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::isDungeonEntranceArea(this_00,param_1);
    if (cVar1 == '\0') {
      iVar3 = CUser::getMoveSpace(param_1);
      if (iVar3 == 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
