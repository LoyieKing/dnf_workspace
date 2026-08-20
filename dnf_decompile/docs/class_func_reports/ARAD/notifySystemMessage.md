# notifySystemMessage

`_ZN4ARAD19notifySystemMessageEP5CUserPc`

`ARAD::notifySystemMessage(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x08197d00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197d00  _ZN4ARAD19notifySystemMessageEP5CUserPc
#           ARAD::notifySystemMessage(CUser*, char*)
# range [0x08197d00, 0x08197db4]
08197d00 +0x00:  push   %ebp
08197d01 +0x01:  mov    %esp,%ebp
08197d03 +0x03:  push   %esi
08197d04 +0x04:  push   %ebx
08197d05 +0x05:  sub    $0x30,%esp
08197d08 +0x08:  cmpl   $0x0,0x8(%ebp)
08197d0c +0x0c:  je     08197daa <+0xaa>
08197d12 +0x12:  cmpl   $0x0,0xc(%ebp)
08197d16 +0x16:  je     08197dad <+0xad>
08197d1c +0x1c:  mov    0xc(%ebp),%eax
08197d1f +0x1f:  mov    %eax,(%esp)
08197d22 +0x22:  call   0807e3b0 <_init+0xca8>
08197d27 +0x27:  mov    %eax,-0xc(%ebp)
08197d2a +0x2a:  lea    -0x18(%ebp),%eax
08197d2d +0x2d:  mov    %eax,(%esp)
08197d30 +0x30:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08197d35 +0x35:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08197d3a +0x3a:  movl   $0xc,0x18(%esp)
08197d42 +0x42:  movl   $0x0,0x14(%esp)
08197d4a +0x4a:  mov    -0xc(%ebp),%edx
08197d4d +0x4d:  mov    %edx,0x10(%esp)
08197d51 +0x51:  mov    0xc(%ebp),%edx
08197d54 +0x54:  mov    %edx,0xc(%esp)
08197d58 +0x58:  mov    0x8(%ebp),%edx
08197d5b +0x5b:  mov    %edx,0x8(%esp)
08197d5f +0x5f:  lea    -0x18(%ebp),%edx
08197d62 +0x62:  mov    %edx,0x4(%esp)
08197d66 +0x66:  mov    %eax,(%esp)
08197d69 +0x69:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
08197d6e +0x6e:  lea    -0x18(%ebp),%eax
08197d71 +0x71:  mov    %eax,0x4(%esp)
08197d75 +0x75:  mov    0x8(%ebp),%eax
08197d78 +0x78:  mov    %eax,(%esp)
08197d7b +0x7b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08197d80 +0x80:  jmp    08197d9d <+0x9d>
08197d82 +0x82:  mov    %edx,%ebx
08197d84 +0x84:  mov    %eax,%esi
08197d86 +0x86:  lea    -0x18(%ebp),%eax
08197d89 +0x89:  mov    %eax,(%esp)
08197d8c +0x8c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08197d91 +0x91:  mov    %esi,%eax
08197d93 +0x93:  mov    %ebx,%edx
08197d95 +0x95:  mov    %eax,(%esp)
08197d98 +0x98:  call   08ae3750 <_Unwind_Resume>
08197d9d +0x9d:  lea    -0x18(%ebp),%eax
08197da0 +0xa0:  mov    %eax,(%esp)
08197da3 +0xa3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08197da8 +0xa8:  jmp    08197dae <+0xae>
08197daa +0xaa:  nop
08197dab +0xab:  jmp    08197dae <+0xae>
08197dad +0xad:  nop
08197dae +0xae:  add    $0x30,%esp
08197db1 +0xb1:  pop    %ebx
08197db2 +0xb2:  pop    %esi
08197db3 +0xb3:  pop    %ebp
08197db4 +0xb4:  ret
```

## 反编译 C

```c
// ARAD::notifySystemMessage @ 0x8197d00

/* ARAD::notifySystemMessage(CUser*, char*) */

void ARAD::notifySystemMessage(CUser *param_1,char *param_2)

{
  GameWorld *pGVar1;
  PacketGuard local_1c [12];
  size_t local_10;
  
  if ((param_1 != (CUser *)0x0) && (param_2 != (char *)0x0)) {
    local_10 = strlen(param_2);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08197d35 to 08197d7f has its CatchHandler @ 08197d82 */
    pGVar1 = (GameWorld *)G_GameWorld();
    GameWorld::make_packet_chat_msg(pGVar1,local_1c,param_1,param_2,local_10,0,0xc);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
