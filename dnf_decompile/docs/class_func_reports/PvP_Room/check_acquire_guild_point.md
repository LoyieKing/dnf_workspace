# check_acquire_guild_point

`_ZN8PvP_Room25check_acquire_guild_pointEv`

`PvP_Room::check_acquire_guild_point()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da7cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da7cc  _ZN8PvP_Room25check_acquire_guild_pointEv
#           PvP_Room::check_acquire_guild_point()
# range [0x085da7cc, 0x085da83f]
085da7cc +0x00:  push   %ebp
085da7cd +0x01:  mov    %esp,%ebp
085da7cf +0x03:  sub    $0x18,%esp
085da7d2 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085da7d7 +0x0b:  mov    %eax,(%esp)
085da7da +0x0e:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
085da7df +0x13:  test   %al,%al
085da7e1 +0x15:  je     085da839 <+0x6d>
085da7e3 +0x17:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085da7e8 +0x1c:  mov    %eax,(%esp)
085da7eb +0x1f:  call   081a0ab2 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1a1>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1a1
085da7f0 +0x24:  test   %al,%al
085da7f2 +0x26:  je     085da7fb <+0x2f>
085da7f4 +0x28:  mov    $0x0,%eax
085da7f9 +0x2d:  jmp    085da83e <+0x72>
085da7fb +0x2f:  movl   $0xa,0x4(%esp)
085da803 +0x37:  mov    0x8(%ebp),%eax
085da806 +0x3a:  mov    %eax,(%esp)
085da809 +0x3d:  call   085da58a <_ZN8PvP_Room18IsAllMoreThanGradeEi>  ; PvP_Room::IsAllMoreThanGrade(int)
085da80e +0x42:  xor    $0x1,%eax
085da811 +0x45:  test   %al,%al
085da813 +0x47:  je     085da81c <+0x50>
085da815 +0x49:  mov    $0x0,%eax
085da81a +0x4e:  jmp    085da83e <+0x72>
085da81c +0x50:  mov    0x8(%ebp),%eax
085da81f +0x53:  mov    %eax,(%esp)
085da822 +0x56:  call   085da5f4 <_ZN8PvP_Room22IsThereSameGuildMemberEv>  ; PvP_Room::IsThereSameGuildMember()
085da827 +0x5b:  test   %al,%al
085da829 +0x5d:  je     085da832 <+0x66>
085da82b +0x5f:  mov    $0x0,%eax
085da830 +0x64:  jmp    085da83e <+0x72>
085da832 +0x66:  mov    $0x1,%eax
085da837 +0x6b:  jmp    085da83e <+0x72>
085da839 +0x6d:  mov    $0x0,%eax
085da83e +0x72:  leave
085da83f +0x73:  ret
```

## 反编译 C

```c
// PvP_Room::check_acquire_guild_point @ 0x85da7cc

/* PvP_Room::check_acquire_guild_point() */

undefined4 __thiscall PvP_Room::check_acquire_guild_point(PvP_Room *this)

{
  char cVar1;
  GameWorld *pGVar2;
  undefined4 uVar3;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(pGVar2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    pGVar2 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsFreePvPChannel(pGVar2);
    if (cVar1 == '\0') {
      cVar1 = IsAllMoreThanGrade(this,10);
      if (cVar1 == '\x01') {
        cVar1 = IsThereSameGuildMember(this);
        if (cVar1 == '\0') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
