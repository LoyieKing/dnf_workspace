# is_common_channel

`_ZN4ARAD11PVP_CHANNEL17is_common_channelEv`

`ARAD::PVP_CHANNEL::is_common_channel()`

| 类 | 地址 |
|---|---|
| `ARAD::PVP_CHANNEL` | `0x0819773b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819773b  _ZN4ARAD11PVP_CHANNEL17is_common_channelEv
#           ARAD::PVP_CHANNEL::is_common_channel()
# range [0x0819773b, 0x08197780]
0819773b +0x00:  push   %ebp
0819773c +0x01:  mov    %esp,%ebp
0819773e +0x03:  sub    $0x28,%esp
08197741 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08197746 +0x0b:  mov    %eax,(%esp)
08197749 +0x0e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0819774e +0x13:  mov    %eax,-0xc(%ebp)
08197751 +0x16:  call   0819763c <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv>  ; ARAD::PVP_CHANNEL::is_integrated_pvp_channel()
08197756 +0x1b:  xor    $0x1,%eax
08197759 +0x1e:  test   %al,%al
0819775b +0x20:  je     0819776a <+0x2f>
0819775d +0x22:  cmpl   $0x7,-0xc(%ebp)
08197761 +0x26:  je     0819776a <+0x2f>
08197763 +0x28:  mov    $0x1,%eax
08197768 +0x2d:  jmp    0819776f <+0x34>
0819776a +0x2f:  mov    $0x0,%eax
0819776f +0x34:  test   %al,%al
08197771 +0x36:  je     0819777a <+0x3f>
08197773 +0x38:  mov    $0x1,%eax
08197778 +0x3d:  jmp    0819777f <+0x44>
0819777a +0x3f:  mov    $0x0,%eax
0819777f +0x44:  leave
08197780 +0x45:  ret
```

## 反编译 C

```c
// ARAD::PVP_CHANNEL::is_common_channel @ 0x819773b

/* ARAD::PVP_CHANNEL::is_common_channel() */

undefined1 ARAD::PVP_CHANNEL::is_common_channel(void)

{
  undefined1 uVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  
  this = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(this);
  cVar2 = is_integrated_pvp_channel();
  if ((cVar2 == '\x01') || (iVar3 == 7)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
