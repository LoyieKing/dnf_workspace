# is_winpoint_pvp_channel

`_ZN4ARAD11PVP_CHANNEL23is_winpoint_pvp_channelEv`

`ARAD::PVP_CHANNEL::is_winpoint_pvp_channel()`

| 类 | 地址 |
|---|---|
| `ARAD::PVP_CHANNEL` | `0x0819770a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819770a  _ZN4ARAD11PVP_CHANNEL23is_winpoint_pvp_channelEv
#           ARAD::PVP_CHANNEL::is_winpoint_pvp_channel()
# range [0x0819770a, 0x0819773a]
0819770a +0x00:  push   %ebp
0819770b +0x01:  mov    %esp,%ebp
0819770d +0x03:  sub    $0x28,%esp
08197710 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08197715 +0x0b:  mov    %eax,(%esp)
08197718 +0x0e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0819771d +0x13:  mov    %eax,-0xc(%ebp)
08197720 +0x16:  mov    -0xc(%ebp),%eax
08197723 +0x19:  cmp    $0x4,%eax
08197726 +0x1c:  je     0819772d <+0x23>
08197728 +0x1e:  cmp    $0x8,%eax
0819772b +0x21:  jne    08197734 <+0x2a>
0819772d +0x23:  mov    $0x1,%eax
08197732 +0x28:  jmp    08197739 <+0x2f>
08197734 +0x2a:  mov    $0x0,%eax
08197739 +0x2f:  leave
0819773a +0x30:  ret
```

## 反编译 C

```c
// ARAD::PVP_CHANNEL::is_winpoint_pvp_channel @ 0x819770a

/* ARAD::PVP_CHANNEL::is_winpoint_pvp_channel() */

undefined4 ARAD::PVP_CHANNEL::is_winpoint_pvp_channel(void)

{
  GameWorld *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if ((iVar1 == 4) || (iVar1 == 8)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
