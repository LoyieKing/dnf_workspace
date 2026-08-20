# checkPvpEnterCharacter

`_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::checkPvpEnterCharacter(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c6c22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c6c22  _ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::checkPvpEnterCharacter(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c6c22, 0x081c6c9f]
081c6c22 +0x00:  push   %ebp
081c6c23 +0x01:  mov    %esp,%ebp
081c6c25 +0x03:  sub    $0x18,%esp
081c6c28 +0x06:  cmpl   $0x0,0xc(%ebp)
081c6c2c +0x0a:  jne    081c6c35 <+0x13>
081c6c2e +0x0c:  mov    $0x0,%eax
081c6c33 +0x11:  jmp    081c6c9d <+0x7b>
081c6c35 +0x13:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c6c3a +0x18:  mov    %eax,(%esp)
081c6c3d +0x1b:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
081c6c42 +0x20:  test   %al,%al
081c6c44 +0x22:  je     081c6c98 <+0x76>
081c6c46 +0x24:  mov    0x10(%ebp),%eax
081c6c49 +0x27:  movzbl 0xd(%eax),%eax
081c6c4d +0x2b:  movsbl %al,%eax
081c6c50 +0x2e:  mov    %eax,0x4(%esp)
081c6c54 +0x32:  mov    0xc(%ebp),%eax
081c6c57 +0x35:  mov    %eax,(%esp)
081c6c5a +0x38:  call   0822ff0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x55b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x55b6
081c6c5f +0x3d:  cmp    $0x9,%al
081c6c61 +0x3f:  sete   %al
081c6c64 +0x42:  test   %al,%al
081c6c66 +0x44:  je     081c6c6f <+0x4d>
081c6c68 +0x46:  mov    $0x0,%eax
081c6c6d +0x4b:  jmp    081c6c9d <+0x7b>
081c6c6f +0x4d:  mov    0x10(%ebp),%eax
081c6c72 +0x50:  movzbl 0xd(%eax),%eax
081c6c76 +0x54:  movsbl %al,%eax
081c6c79 +0x57:  mov    %eax,0x4(%esp)
081c6c7d +0x5b:  mov    0xc(%ebp),%eax
081c6c80 +0x5e:  mov    %eax,(%esp)
081c6c83 +0x61:  call   0822ff0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x55b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x55b6
081c6c88 +0x66:  cmp    $0xa,%al
081c6c8a +0x68:  sete   %al
081c6c8d +0x6b:  test   %al,%al
081c6c8f +0x6d:  je     081c6c98 <+0x76>
081c6c91 +0x6f:  mov    $0x0,%eax
081c6c96 +0x74:  jmp    081c6c9d <+0x7b>
081c6c98 +0x76:  mov    $0x1,%eax
081c6c9d +0x7b:  leave
081c6c9e +0x7c:  ret
081c6c9f +0x7d:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::checkPvpEnterCharacter @ 0x81c6c22

/* DisPatcher_SelectCharac::checkPvpEnterCharacter(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::checkPvpEnterCharacter
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    return 0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(this_00);
  if (cVar1 != '\0') {
    cVar1 = CUser::GetCharacJob(param_1,(int)(char)param_2[0xd]);
    if (cVar1 == '\t') {
      return 0;
    }
    cVar1 = CUser::GetCharacJob(param_1,(int)(char)param_2[0xd]);
    if (cVar1 == '\n') {
      return 0;
    }
  }
  return 1;
}
```
