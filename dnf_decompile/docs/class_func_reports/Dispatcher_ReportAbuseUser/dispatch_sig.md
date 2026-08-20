# dispatch_sig

`_ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ReportAbuseUser::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ReportAbuseUser` | `0x0821ef48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821ef48  _ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ReportAbuseUser::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821ef48, 0x0821efeb]
0821ef48 +0x00:  push   %ebp
0821ef49 +0x01:  mov    %esp,%ebp
0821ef4b +0x03:  sub    $0x18,%esp
0821ef4e +0x06:  mov    0xc(%ebp),%eax
0821ef51 +0x09:  mov    %eax,(%esp)
0821ef54 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821ef59 +0x11:  cmp    $0x2,%eax
0821ef5c +0x14:  jle    0821ef6d <+0x25>
0821ef5e +0x16:  mov    0xc(%ebp),%eax
0821ef61 +0x19:  mov    %eax,(%esp)
0821ef64 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0821ef69 +0x21:  test   %eax,%eax
0821ef6b +0x23:  jne    0821ef74 <+0x2c>
0821ef6d +0x25:  mov    $0x1,%eax
0821ef72 +0x2a:  jmp    0821ef79 <+0x31>
0821ef74 +0x2c:  mov    $0x0,%eax
0821ef79 +0x31:  test   %al,%al
0821ef7b +0x33:  je     0821efa3 <+0x5b>
0821ef7d +0x35:  movl   $0x0,0xc(%esp)
0821ef85 +0x3d:  movl   $0x0,0x8(%esp)
0821ef8d +0x45:  movl   $&_ZZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ef95 +0x4d:  movl   $0xd7a1,(%esp)
0821ef9c +0x54:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821efa1 +0x59:  jmp    0821efe9 <+0xa1>
0821efa3 +0x5b:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0821efa8 +0x60:  mov    0xc(%ebp),%edx
0821efab +0x63:  mov    %edx,0x4(%esp)
0821efaf +0x67:  mov    %eax,(%esp)
0821efb2 +0x6a:  call   082efc54 <_ZN11pvp_assault11CAssaultMgr11OnAbuseUserEP5CUser>  ; pvp_assault::CAssaultMgr::OnAbuseUser(CUser*)
0821efb7 +0x6f:  xor    $0x1,%eax
0821efba +0x72:  test   %al,%al
0821efbc +0x74:  je     0821efe4 <+0x9c>
0821efbe +0x76:  movl   $0x0,0xc(%esp)
0821efc6 +0x7e:  movl   $0x0,0x8(%esp)
0821efce +0x86:  movl   $&_ZZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821efd6 +0x8e:  movl   $0xd7b1,(%esp)
0821efdd +0x95:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821efe2 +0x9a:  jmp    0821efe9 <+0xa1>
0821efe4 +0x9c:  mov    $0x0,%eax
0821efe9 +0xa1:  leave
0821efea +0xa2:  ret
0821efeb +0xa3:  nop
```

## 反编译 C

```c
// Dispatcher_ReportAbuseUser::dispatch_sig @ 0x821ef48

/* Dispatcher_ReportAbuseUser::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_ReportAbuseUser::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CAssaultMgr *this;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0821ef79;
    }
  }
  bVar1 = true;
LAB_0821ef79:
  if (bVar1) {
    uVar4 = LineFunc(0xd7a1,
                     "virtual int Dispatcher_ReportAbuseUser::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    cVar2 = pvp_assault::CAssaultMgr::OnAbuseUser(this,(CUser *)param_2);
    if (cVar2 == '\x01') {
      uVar4 = 0;
    }
    else {
      uVar4 = LineFunc(0xd7b1,
                       "virtual int Dispatcher_ReportAbuseUser::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar4;
}
```
