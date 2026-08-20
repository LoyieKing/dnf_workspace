# is_all_pvp_channel

`_ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv`

`ARAD::PVP_CHANNEL::is_all_pvp_channel()`

| 类 | 地址 |
|---|---|
| `ARAD::PVP_CHANNEL` | `0x081976c7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081976c7  _ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv
#           ARAD::PVP_CHANNEL::is_all_pvp_channel()
# range [0x081976c7, 0x08197709]
081976c7 +0x00:  push   %ebp
081976c8 +0x01:  mov    %esp,%ebp
081976ca +0x03:  sub    $0x28,%esp
081976cd +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081976d2 +0x0b:  mov    %eax,(%esp)
081976d5 +0x0e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081976da +0x13:  mov    %eax,-0xc(%ebp)
081976dd +0x16:  call   0819763c <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv>  ; ARAD::PVP_CHANNEL::is_integrated_pvp_channel()
081976e2 +0x1b:  test   %al,%al
081976e4 +0x1d:  jne    081976ec <+0x25>
081976e6 +0x1f:  cmpl   $0x7,-0xc(%ebp)
081976ea +0x23:  jne    081976f3 <+0x2c>
081976ec +0x25:  mov    $0x1,%eax
081976f1 +0x2a:  jmp    081976f8 <+0x31>
081976f3 +0x2c:  mov    $0x0,%eax
081976f8 +0x31:  test   %al,%al
081976fa +0x33:  je     08197703 <+0x3c>
081976fc +0x35:  mov    $0x1,%eax
08197701 +0x3a:  jmp    08197708 <+0x41>
08197703 +0x3c:  mov    $0x0,%eax
08197708 +0x41:  leave
08197709 +0x42:  ret
```

## 反编译 C

```c
// ARAD::PVP_CHANNEL::is_all_pvp_channel @ 0x81976c7

/* ARAD::PVP_CHANNEL::is_all_pvp_channel() */

undefined1 ARAD::PVP_CHANNEL::is_all_pvp_channel(void)

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
