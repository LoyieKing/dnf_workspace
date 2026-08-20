# dispatch_sig

`_ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci`

`Inter_PunishCancel::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PunishCancel` | `0x084e4b02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4b02  _ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci
#           Inter_PunishCancel::dispatch_sig(CUser*, char*, int)
# range [0x084e4b02, 0x084e4c29]
084e4b02 +0x000:  push   %ebp
084e4b03 +0x001:  mov    %esp,%ebp
084e4b05 +0x003:  push   %esi
084e4b06 +0x004:  push   %ebx
084e4b07 +0x005:  sub    $0x20,%esp
084e4b0a +0x008:  mov    0x10(%ebp),%eax
084e4b0d +0x00b:  mov    %eax,-0xc(%ebp)
084e4b10 +0x00e:  cmpl   $0x0,0xc(%ebp)
084e4b14 +0x012:  je     084e4c1d <+0x11b>
084e4b1a +0x018:  mov    -0xc(%ebp),%eax
084e4b1d +0x01b:  movzwl 0xe(%eax),%eax
084e4b21 +0x01f:  cmp    $0x2,%ax
084e4b25 +0x023:  jne    084e4b52 <+0x50>
084e4b27 +0x025:  mov    -0xc(%ebp),%eax
084e4b2a +0x028:  movzwl 0x10(%eax),%eax
084e4b2e +0x02c:  cmp    $0x20,%ax
084e4b32 +0x030:  jne    084e4b52 <+0x50>
084e4b34 +0x032:  movl   $0x20,0x4(%esp)
084e4b3c +0x03a:  mov    0xc(%ebp),%eax
084e4b3f +0x03d:  mov    %eax,(%esp)
084e4b42 +0x040:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
084e4b47 +0x045:  test   %al,%al
084e4b49 +0x047:  je     084e4b52 <+0x50>
084e4b4b +0x049:  mov    $0x1,%eax
084e4b50 +0x04e:  jmp    084e4b57 <+0x55>
084e4b52 +0x050:  mov    $0x0,%eax
084e4b57 +0x055:  test   %al,%al
084e4b59 +0x057:  je     084e4c1d <+0x11b>
084e4b5f +0x05d:  mov    -0xc(%ebp),%eax
084e4b62 +0x060:  movzwl 0x10(%eax),%eax
084e4b66 +0x064:  movzwl %ax,%eax
084e4b69 +0x067:  mov    %eax,0x4(%esp)
084e4b6d +0x06b:  mov    0xc(%ebp),%eax
084e4b70 +0x06e:  mov    %eax,(%esp)
084e4b73 +0x071:  call   086898c2 <_ZN5CUser18DelTradePunishTypeEi>  ; CUser::DelTradePunishType(int)
084e4b78 +0x076:  lea    -0x18(%ebp),%eax
084e4b7b +0x079:  mov    %eax,(%esp)
084e4b7e +0x07c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e4b83 +0x081:  movl   $0x13f,0x8(%esp)
084e4b8b +0x089:  movl   $0x0,0x4(%esp)
084e4b93 +0x091:  lea    -0x18(%ebp),%eax
084e4b96 +0x094:  mov    %eax,(%esp)
084e4b99 +0x097:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e4b9e +0x09c:  mov    -0xc(%ebp),%eax
084e4ba1 +0x09f:  movzwl 0xe(%eax),%eax
084e4ba5 +0x0a3:  movzwl %ax,%eax
084e4ba8 +0x0a6:  mov    %eax,0x4(%esp)
084e4bac +0x0aa:  lea    -0x18(%ebp),%eax
084e4baf +0x0ad:  mov    %eax,(%esp)
084e4bb2 +0x0b0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e4bb7 +0x0b5:  mov    -0xc(%ebp),%eax
084e4bba +0x0b8:  movzwl 0x10(%eax),%eax
084e4bbe +0x0bc:  movzwl %ax,%eax
084e4bc1 +0x0bf:  mov    %eax,0x4(%esp)
084e4bc5 +0x0c3:  lea    -0x18(%ebp),%eax
084e4bc8 +0x0c6:  mov    %eax,(%esp)
084e4bcb +0x0c9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e4bd0 +0x0ce:  movl   $0x1,0x4(%esp)
084e4bd8 +0x0d6:  lea    -0x18(%ebp),%eax
084e4bdb +0x0d9:  mov    %eax,(%esp)
084e4bde +0x0dc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e4be3 +0x0e1:  lea    -0x18(%ebp),%eax
084e4be6 +0x0e4:  mov    %eax,0x4(%esp)
084e4bea +0x0e8:  mov    0xc(%ebp),%eax
084e4bed +0x0eb:  mov    %eax,(%esp)
084e4bf0 +0x0ee:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e4bf5 +0x0f3:  jmp    084e4c12 <+0x110>
084e4bf7 +0x0f5:  mov    %edx,%ebx
084e4bf9 +0x0f7:  mov    %eax,%esi
084e4bfb +0x0f9:  lea    -0x18(%ebp),%eax
084e4bfe +0x0fc:  mov    %eax,(%esp)
084e4c01 +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e4c06 +0x104:  mov    %esi,%eax
084e4c08 +0x106:  mov    %ebx,%edx
084e4c0a +0x108:  mov    %eax,(%esp)
084e4c0d +0x10b:  call   08ae3750 <_Unwind_Resume>
084e4c12 +0x110:  lea    -0x18(%ebp),%eax
084e4c15 +0x113:  mov    %eax,(%esp)
084e4c18 +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e4c1d +0x11b:  mov    $0x0,%eax
084e4c22 +0x120:  add    $0x20,%esp
084e4c25 +0x123:  pop    %ebx
084e4c26 +0x124:  pop    %esi
084e4c27 +0x125:  pop    %ebp
084e4c28 +0x126:  ret
084e4c29 +0x127:  nop
```

## 反编译 C

```c
// Inter_PunishCancel::dispatch_sig @ 0x84e4b02

/* Inter_PunishCancel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PunishCancel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (param_2 != (char *)0x0) {
    if (((*(short *)(param_3 + 0xe) == 2) && (*(short *)(param_3 + 0x10) == 0x20)) &&
       (cVar2 = CUser::isTradePunishType((CUser *)param_2,0x20), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUser::DelTradePunishType((CUser *)param_2,(uint)*(ushort *)(local_10 + 0x10));
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e4b99 to 084e4bf4 has its CatchHandler @ 084e4bf7 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x13f);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0xe));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0x10));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    return 0;
  }
  return 0;
}
```
