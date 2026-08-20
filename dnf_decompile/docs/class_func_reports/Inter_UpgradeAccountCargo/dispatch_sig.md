# dispatch_sig

`_ZN25Inter_UpgradeAccountCargo12dispatch_sigEP5CUserPci`

`Inter_UpgradeAccountCargo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UpgradeAccountCargo` | `0x084e243a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e243a  _ZN25Inter_UpgradeAccountCargo12dispatch_sigEP5CUserPci
#           Inter_UpgradeAccountCargo::dispatch_sig(CUser*, char*, int)
# range [0x084e243a, 0x084e24eb]
084e243a +0x00:  push   %ebp
084e243b +0x01:  mov    %esp,%ebp
084e243d +0x03:  sub    $0x28,%esp
084e2440 +0x06:  mov    0x10(%ebp),%eax
084e2443 +0x09:  mov    %eax,-0x10(%ebp)
084e2446 +0x0c:  mov    0xc(%ebp),%eax
084e2449 +0x0f:  mov    %eax,(%esp)
084e244c +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e2451 +0x17:  cmp    $0x2,%eax
084e2454 +0x1a:  setle  %al
084e2457 +0x1d:  test   %al,%al
084e2459 +0x1f:  je     084e2465 <+0x2b>
084e245b +0x21:  mov    $0x0,%eax
084e2460 +0x26:  jmp    084e24ea <+0xb0>
084e2465 +0x2b:  mov    -0x10(%ebp),%eax
084e2468 +0x2e:  movzbl (%eax),%eax
084e246b +0x31:  test   %al,%al
084e246d +0x33:  je     084e2496 <+0x5c>
084e246f +0x35:  mov    -0x10(%ebp),%eax
084e2472 +0x38:  movzbl (%eax),%eax
084e2475 +0x3b:  movzbl %al,%eax
084e2478 +0x3e:  mov    %eax,0x8(%esp)
084e247c +0x42:  movl   $0x133,0x4(%esp)
084e2484 +0x4a:  mov    0xc(%ebp),%eax
084e2487 +0x4d:  mov    %eax,(%esp)
084e248a +0x50:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e248f +0x55:  mov    $0x0,%eax
084e2494 +0x5a:  jmp    084e24ea <+0xb0>
084e2496 +0x5c:  mov    0xc(%ebp),%eax
084e2499 +0x5f:  mov    %eax,(%esp)
084e249c +0x62:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
084e24a1 +0x67:  xor    $0x1,%eax
084e24a4 +0x6a:  test   %al,%al
084e24a6 +0x6c:  je     084e24af <+0x75>
084e24a8 +0x6e:  mov    $0x0,%eax
084e24ad +0x73:  jmp    084e24ea <+0xb0>
084e24af +0x75:  mov    0xc(%ebp),%eax
084e24b2 +0x78:  mov    %eax,(%esp)
084e24b5 +0x7b:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
084e24ba +0x80:  mov    %eax,-0xc(%ebp)
084e24bd +0x83:  mov    -0x10(%ebp),%eax
084e24c0 +0x86:  mov    0x4(%eax),%eax
084e24c3 +0x89:  mov    %eax,0x4(%esp)
084e24c7 +0x8d:  mov    -0xc(%ebp),%eax
084e24ca +0x90:  mov    %eax,(%esp)
084e24cd +0x93:  call   084ebe46 <_GLOBAL__I__Z7getUserj+0x2df8>  ; global constructors keyed to getUser(unsigned int)+0x2df8
084e24d2 +0x98:  movl   $0x133,0x4(%esp)
084e24da +0xa0:  mov    0xc(%ebp),%eax
084e24dd +0xa3:  mov    %eax,(%esp)
084e24e0 +0xa6:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
084e24e5 +0xab:  mov    $0x0,%eax
084e24ea +0xb0:  leave
084e24eb +0xb1:  ret
```

## 反编译 C

```c
// Inter_UpgradeAccountCargo::dispatch_sig @ 0x84e243a

/* Inter_UpgradeAccountCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpgradeAccountCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CAccountCargo *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    if (*(char *)param_3 == '\0') {
      cVar1 = CUser::IsExistAccountCargo((CUser *)param_2);
      if (cVar1 == '\x01') {
        this = (CAccountCargo *)CUser::GetAccountCargo((CUser *)param_2);
        CAccountCargo::SetCapacity(this,*(uint *)(param_3 + 4));
        CUser::SendCmdOkPacket((CUser *)param_2,0x133);
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x133,*(undefined1 *)param_3);
    }
  }
  return 0;
}
```
