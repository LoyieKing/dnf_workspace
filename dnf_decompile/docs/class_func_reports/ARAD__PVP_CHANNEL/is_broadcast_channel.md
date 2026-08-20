# is_broadcast_channel

`_ZN4ARAD11PVP_CHANNEL20is_broadcast_channelEv`

`ARAD::PVP_CHANNEL::is_broadcast_channel()`

| 类 | 地址 |
|---|---|
| `ARAD::PVP_CHANNEL` | `0x08197684` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197684  _ZN4ARAD11PVP_CHANNEL20is_broadcast_channelEv
#           ARAD::PVP_CHANNEL::is_broadcast_channel()
# range [0x08197684, 0x081976c6]
08197684 +0x00:  push   %ebp
08197685 +0x01:  mov    %esp,%ebp
08197687 +0x03:  sub    $0x28,%esp
0819768a +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819768f +0x0b:  mov    %eax,(%esp)
08197692 +0x0e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08197697 +0x13:  mov    %eax,-0xc(%ebp)
0819769a +0x16:  call   0819763c <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv>  ; ARAD::PVP_CHANNEL::is_integrated_pvp_channel()
0819769f +0x1b:  test   %al,%al
081976a1 +0x1d:  jne    081976a9 <+0x25>
081976a3 +0x1f:  cmpl   $0x7,-0xc(%ebp)
081976a7 +0x23:  jne    081976b0 <+0x2c>
081976a9 +0x25:  mov    $0x1,%eax
081976ae +0x2a:  jmp    081976b5 <+0x31>
081976b0 +0x2c:  mov    $0x0,%eax
081976b5 +0x31:  test   %al,%al
081976b7 +0x33:  je     081976c0 <+0x3c>
081976b9 +0x35:  mov    $0x1,%eax
081976be +0x3a:  jmp    081976c5 <+0x41>
081976c0 +0x3c:  mov    $0x0,%eax
081976c5 +0x41:  leave
081976c6 +0x42:  ret
```

## 反编译 C

```c
// ARAD::PVP_CHANNEL::is_broadcast_channel @ 0x8197684

/* ARAD::PVP_CHANNEL::is_broadcast_channel() */

undefined1 ARAD::PVP_CHANNEL::is_broadcast_channel(void)

{
  undefined1 uVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  
  this = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(this);
  cVar2 = is_integrated_pvp_channel();
  if ((cVar2 == '\0') && (iVar3 != 7)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
