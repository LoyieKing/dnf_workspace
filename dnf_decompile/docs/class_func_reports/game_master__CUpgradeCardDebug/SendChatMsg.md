# SendChatMsg

`_ZN11game_master17CUpgradeCardDebug11SendChatMsgEP5CUserPc`

`game_master::CUpgradeCardDebug::SendChatMsg(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `game_master::CUpgradeCardDebug` | `0x084b1e8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b1e8a  _ZN11game_master17CUpgradeCardDebug11SendChatMsgEP5CUserPc
#           game_master::CUpgradeCardDebug::SendChatMsg(CUser*, char*)
# range [0x084b1e8a, 0x084b1f21]
084b1e8a +0x00:  push   %ebp
084b1e8b +0x01:  mov    %esp,%ebp
084b1e8d +0x03:  push   %esi
084b1e8e +0x04:  push   %ebx
084b1e8f +0x05:  sub    $0x30,%esp
084b1e92 +0x08:  lea    -0x14(%ebp),%eax
084b1e95 +0x0b:  mov    %eax,(%esp)
084b1e98 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084b1e9d +0x13:  mov    0x10(%ebp),%eax
084b1ea0 +0x16:  mov    %eax,(%esp)
084b1ea3 +0x19:  call   0807e3b0 <_init+0xca8>
084b1ea8 +0x1e:  mov    %eax,%ebx
084b1eaa +0x20:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084b1eaf +0x25:  movl   $0xc,0x18(%esp)
084b1eb7 +0x2d:  movl   $0x2,0x14(%esp)
084b1ebf +0x35:  mov    %ebx,0x10(%esp)
084b1ec3 +0x39:  mov    0x10(%ebp),%edx
084b1ec6 +0x3c:  mov    %edx,0xc(%esp)
084b1eca +0x40:  mov    0xc(%ebp),%edx
084b1ecd +0x43:  mov    %edx,0x8(%esp)
084b1ed1 +0x47:  lea    -0x14(%ebp),%edx
084b1ed4 +0x4a:  mov    %edx,0x4(%esp)
084b1ed8 +0x4e:  mov    %eax,(%esp)
084b1edb +0x51:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
084b1ee0 +0x56:  lea    -0x14(%ebp),%eax
084b1ee3 +0x59:  mov    %eax,0x4(%esp)
084b1ee7 +0x5d:  mov    0xc(%ebp),%eax
084b1eea +0x60:  mov    %eax,(%esp)
084b1eed +0x63:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084b1ef2 +0x68:  jmp    084b1f0f <+0x85>
084b1ef4 +0x6a:  mov    %edx,%ebx
084b1ef6 +0x6c:  mov    %eax,%esi
084b1ef8 +0x6e:  lea    -0x14(%ebp),%eax
084b1efb +0x71:  mov    %eax,(%esp)
084b1efe +0x74:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b1f03 +0x79:  mov    %esi,%eax
084b1f05 +0x7b:  mov    %ebx,%edx
084b1f07 +0x7d:  mov    %eax,(%esp)
084b1f0a +0x80:  call   08ae3750 <_Unwind_Resume>
084b1f0f +0x85:  lea    -0x14(%ebp),%eax
084b1f12 +0x88:  mov    %eax,(%esp)
084b1f15 +0x8b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b1f1a +0x90:  add    $0x30,%esp
084b1f1d +0x93:  pop    %ebx
084b1f1e +0x94:  pop    %esi
084b1f1f +0x95:  pop    %ebp
084b1f20 +0x96:  ret
084b1f21 +0x97:  nop
```

## 反编译 C

```c
// game_master::CUpgradeCardDebug::SendChatMsg @ 0x84b1e8a

/* game_master::CUpgradeCardDebug::SendChatMsg(CUser*, char*) */

void __thiscall
game_master::CUpgradeCardDebug::SendChatMsg(CUpgradeCardDebug *this,CUser *param_1,char *param_2)

{
  size_t sVar1;
  GameWorld *pGVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
  sVar1 = strlen(param_2);
                    /* try { // try from 084b1eaa to 084b1ef1 has its CatchHandler @ 084b1ef4 */
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::make_packet_chat_msg(pGVar2,local_18,param_1,param_2,sVar1,2,0xc);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
