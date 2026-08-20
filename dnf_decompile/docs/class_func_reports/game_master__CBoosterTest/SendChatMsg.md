# SendChatMsg

`_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc`

`game_master::CBoosterTest::SendChatMsg(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084aeac6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aeac6  _ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc
#           game_master::CBoosterTest::SendChatMsg(CUser*, char*)
# range [0x084aeac6, 0x084aeb5d]
084aeac6 +0x00:  push   %ebp
084aeac7 +0x01:  mov    %esp,%ebp
084aeac9 +0x03:  push   %esi
084aeaca +0x04:  push   %ebx
084aeacb +0x05:  sub    $0x30,%esp
084aeace +0x08:  lea    -0x14(%ebp),%eax
084aead1 +0x0b:  mov    %eax,(%esp)
084aead4 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084aead9 +0x13:  mov    0xc(%ebp),%eax
084aeadc +0x16:  mov    %eax,(%esp)
084aeadf +0x19:  call   0807e3b0 <_init+0xca8>
084aeae4 +0x1e:  mov    %eax,%ebx
084aeae6 +0x20:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084aeaeb +0x25:  movl   $0xc,0x18(%esp)
084aeaf3 +0x2d:  movl   $0x2,0x14(%esp)
084aeafb +0x35:  mov    %ebx,0x10(%esp)
084aeaff +0x39:  mov    0xc(%ebp),%edx
084aeb02 +0x3c:  mov    %edx,0xc(%esp)
084aeb06 +0x40:  mov    0x8(%ebp),%edx
084aeb09 +0x43:  mov    %edx,0x8(%esp)
084aeb0d +0x47:  lea    -0x14(%ebp),%edx
084aeb10 +0x4a:  mov    %edx,0x4(%esp)
084aeb14 +0x4e:  mov    %eax,(%esp)
084aeb17 +0x51:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
084aeb1c +0x56:  lea    -0x14(%ebp),%eax
084aeb1f +0x59:  mov    %eax,0x4(%esp)
084aeb23 +0x5d:  mov    0x8(%ebp),%eax
084aeb26 +0x60:  mov    %eax,(%esp)
084aeb29 +0x63:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084aeb2e +0x68:  jmp    084aeb4b <+0x85>
084aeb30 +0x6a:  mov    %edx,%ebx
084aeb32 +0x6c:  mov    %eax,%esi
084aeb34 +0x6e:  lea    -0x14(%ebp),%eax
084aeb37 +0x71:  mov    %eax,(%esp)
084aeb3a +0x74:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aeb3f +0x79:  mov    %esi,%eax
084aeb41 +0x7b:  mov    %ebx,%edx
084aeb43 +0x7d:  mov    %eax,(%esp)
084aeb46 +0x80:  call   08ae3750 <_Unwind_Resume>
084aeb4b +0x85:  lea    -0x14(%ebp),%eax
084aeb4e +0x88:  mov    %eax,(%esp)
084aeb51 +0x8b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aeb56 +0x90:  add    $0x30,%esp
084aeb59 +0x93:  pop    %ebx
084aeb5a +0x94:  pop    %esi
084aeb5b +0x95:  pop    %ebp
084aeb5c +0x96:  ret
084aeb5d +0x97:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::SendChatMsg @ 0x84aeac6

/* game_master::CBoosterTest::SendChatMsg(CUser*, char*) */

void game_master::CBoosterTest::SendChatMsg(CUser *param_1,char *param_2)

{
  size_t sVar1;
  GameWorld *pGVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
  sVar1 = strlen(param_2);
                    /* try { // try from 084aeae6 to 084aeb2d has its CatchHandler @ 084aeb30 */
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::make_packet_chat_msg(pGVar2,local_18,param_1,param_2,sVar1,2,0xc);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
