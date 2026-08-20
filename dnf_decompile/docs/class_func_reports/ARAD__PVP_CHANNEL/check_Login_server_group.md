# check_Login_server_group

`_ZN4ARAD11PVP_CHANNEL24check_Login_server_groupEP14SIG_LOGIN_DATA`

`ARAD::PVP_CHANNEL::check_Login_server_group(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `ARAD::PVP_CHANNEL` | `0x08197781` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197781  _ZN4ARAD11PVP_CHANNEL24check_Login_server_groupEP14SIG_LOGIN_DATA
#           ARAD::PVP_CHANNEL::check_Login_server_group(SIG_LOGIN_DATA*)
# range [0x08197781, 0x081977b5]
08197781 +0x00:  push   %ebp
08197782 +0x01:  mov    %esp,%ebp
08197784 +0x03:  sub    $0x28,%esp
08197787 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819778c +0x0b:  mov    %eax,(%esp)
0819778f +0x0e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08197794 +0x13:  mov    %eax,-0xc(%ebp)
08197797 +0x16:  call   081976c7 <_ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv>  ; ARAD::PVP_CHANNEL::is_all_pvp_channel()
0819779c +0x1b:  xor    $0x1,%eax
0819779f +0x1e:  test   %al,%al
081977a1 +0x20:  je     081977af <+0x2e>
081977a3 +0x22:  mov    0x8(%ebp),%eax
081977a6 +0x25:  movw   $0x0,0x3a38(%eax)
081977af +0x2e:  mov    $0x1,%eax
081977b4 +0x33:  leave
081977b5 +0x34:  ret
```

## 反编译 C

```c
// ARAD::PVP_CHANNEL::check_Login_server_group @ 0x8197781

/* ARAD::PVP_CHANNEL::check_Login_server_group(SIG_LOGIN_DATA*) */

undefined4 ARAD::PVP_CHANNEL::check_Login_server_group(SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  GameWorld *this;
  
  this = (GameWorld *)G_GameWorld();
  GameWorld::GetChannelType(this);
  cVar1 = is_all_pvp_channel();
  if (cVar1 != '\x01') {
    *(undefined2 *)(param_1 + 0x3a38) = 0;
  }
  return 1;
}
```
