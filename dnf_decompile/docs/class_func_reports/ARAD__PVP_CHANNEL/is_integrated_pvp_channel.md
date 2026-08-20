# is_integrated_pvp_channel

`_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv`

`ARAD::PVP_CHANNEL::is_integrated_pvp_channel()`

| 类 | 地址 |
|---|---|
| `ARAD::PVP_CHANNEL` | `0x0819763c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819763c  _ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv
#           ARAD::PVP_CHANNEL::is_integrated_pvp_channel()
# range [0x0819763c, 0x08197683]
0819763c +0x00:  push   %ebp
0819763d +0x01:  mov    %esp,%ebp
0819763f +0x03:  push   %ebx
08197640 +0x04:  sub    $0x24,%esp
08197643 +0x07:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08197648 +0x0c:  mov    %eax,(%esp)
0819764b +0x0f:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08197650 +0x14:  mov    %eax,-0xc(%ebp)
08197653 +0x17:  cmpl   $0x10,-0xc(%ebp)
08197657 +0x1b:  ja     08197679 <+0x3d>
08197659 +0x1d:  mov    -0xc(%ebp),%eax
0819765c +0x20:  mov    $0x1,%edx
08197661 +0x25:  mov    %edx,%ebx
08197663 +0x27:  mov    %eax,%ecx
08197665 +0x29:  shl    %cl,%ebx
08197667 +0x2b:  mov    %ebx,%eax
08197669 +0x2d:  and    $&_ZL14gUnicodeBuffer+0x141d4,%eax
0819766e +0x32:  test   %eax,%eax
08197670 +0x34:  je     08197679 <+0x3d>
08197672 +0x36:  mov    $0x1,%eax
08197677 +0x3b:  jmp    0819767e <+0x42>
08197679 +0x3d:  mov    $0x0,%eax
0819767e +0x42:  add    $0x24,%esp
08197681 +0x45:  pop    %ebx
08197682 +0x46:  pop    %ebp
08197683 +0x47:  ret
```

## 反编译 C

```c
// ARAD::PVP_CHANNEL::is_integrated_pvp_channel @ 0x819763c

/* ARAD::PVP_CHANNEL::is_integrated_pvp_channel() */

undefined4 ARAD::PVP_CHANNEL::is_integrated_pvp_channel(void)

{
  GameWorld *this;
  uint uVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  uVar1 = GameWorld::GetChannelType(this);
  if ((uVar1 < 0x11) && ((1 << ((byte)uVar1 & 0x1f) & 0x1e700U) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
