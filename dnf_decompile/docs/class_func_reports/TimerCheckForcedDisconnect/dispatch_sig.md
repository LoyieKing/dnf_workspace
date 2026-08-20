# dispatch_sig

`_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij`

`TimerCheckForcedDisconnect::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCheckForcedDisconnect` | `0x08636e06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636e06  _ZN26TimerCheckForcedDisconnect12dispatch_sigEiij
#           TimerCheckForcedDisconnect::dispatch_sig(int, int, unsigned int)
# range [0x08636e06, 0x08636f25]
08636e06 +0x000:  push   %ebp
08636e07 +0x001:  mov    %esp,%ebp
08636e09 +0x003:  push   %esi
08636e0a +0x004:  push   %ebx
08636e0b +0x005:  sub    $0x30,%esp
08636e0e +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08636e13 +0x00d:  movl   $0x2,0x8(%esp)
08636e1b +0x015:  mov    0xc(%ebp),%edx
08636e1e +0x018:  mov    %edx,0x4(%esp)
08636e22 +0x01c:  mov    %eax,(%esp)
08636e25 +0x01f:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08636e2a +0x024:  mov    %eax,-0x10(%ebp)
08636e2d +0x027:  cmpl   $0x0,-0x10(%ebp)
08636e31 +0x02b:  jne    08636e3d <+0x37>
08636e33 +0x02d:  mov    $0x0,%ebx
08636e38 +0x032:  jmp    08636f1d <+0x117>
08636e3d +0x037:  mov    -0x10(%ebp),%eax
08636e40 +0x03a:  mov    %eax,(%esp)
08636e43 +0x03d:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08636e48 +0x042:  movzwl %ax,%eax
08636e4b +0x045:  cmp    0x10(%ebp),%eax
08636e4e +0x048:  setne  %al
08636e51 +0x04b:  test   %al,%al
08636e53 +0x04d:  je     08636e5f <+0x59>
08636e55 +0x04f:  mov    $0x0,%ebx
08636e5a +0x054:  jmp    08636f1d <+0x117>
08636e5f +0x059:  mov    -0x10(%ebp),%eax
08636e62 +0x05c:  mov    %eax,(%esp)
08636e65 +0x05f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08636e6a +0x064:  cmp    $0x7,%eax
08636e6d +0x067:  setne  %al
08636e70 +0x06a:  test   %al,%al
08636e72 +0x06c:  je     08636e7e <+0x78>
08636e74 +0x06e:  mov    $0x1,%ebx
08636e79 +0x073:  jmp    08636f1d <+0x117>
08636e7e +0x078:  lea    -0x1c(%ebp),%eax
08636e81 +0x07b:  mov    %eax,(%esp)
08636e84 +0x07e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08636e89 +0x083:  movl   $0x7b,0x8(%esp)
08636e91 +0x08b:  movl   $0x0,0x4(%esp)
08636e99 +0x093:  lea    -0x1c(%ebp),%eax
08636e9c +0x096:  mov    %eax,(%esp)
08636e9f +0x099:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08636ea4 +0x09e:  movl   $0x1,0x4(%esp)
08636eac +0x0a6:  lea    -0x1c(%ebp),%eax
08636eaf +0x0a9:  mov    %eax,(%esp)
08636eb2 +0x0ac:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08636eb7 +0x0b1:  lea    -0x1c(%ebp),%eax
08636eba +0x0b4:  mov    %eax,0x4(%esp)
08636ebe +0x0b8:  mov    -0x10(%ebp),%eax
08636ec1 +0x0bb:  mov    %eax,(%esp)
08636ec4 +0x0be:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08636ec9 +0x0c3:  mov    -0x10(%ebp),%eax
08636ecc +0x0c6:  mov    %eax,0x4(%esp)
08636ed0 +0x0ca:  mov    0x8(%ebp),%eax
08636ed3 +0x0cd:  mov    %eax,(%esp)
08636ed6 +0x0d0:  call   08636f26 <_ZN26TimerCheckForcedDisconnect15RegistNextTimerEP5CUser>  ; TimerCheckForcedDisconnect::RegistNextTimer(CUser*)
08636edb +0x0d5:  mov    %al,-0x9(%ebp)
08636ede +0x0d8:  movzbl -0x9(%ebp),%eax
08636ee2 +0x0dc:  xor    $0x1,%eax
08636ee5 +0x0df:  test   %al,%al
08636ee7 +0x0e1:  je     08636ef0 <+0xea>
08636ee9 +0x0e3:  mov    $0x0,%ebx
08636eee +0x0e8:  jmp    08636f12 <+0x10c>
08636ef0 +0x0ea:  mov    $0x1,%ebx
08636ef5 +0x0ef:  jmp    08636f12 <+0x10c>
08636ef7 +0x0f1:  mov    %edx,%ebx
08636ef9 +0x0f3:  mov    %eax,%esi
08636efb +0x0f5:  lea    -0x1c(%ebp),%eax
08636efe +0x0f8:  mov    %eax,(%esp)
08636f01 +0x0fb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08636f06 +0x100:  mov    %esi,%eax
08636f08 +0x102:  mov    %ebx,%edx
08636f0a +0x104:  mov    %eax,(%esp)
08636f0d +0x107:  call   08ae3750 <_Unwind_Resume>
08636f12 +0x10c:  lea    -0x1c(%ebp),%eax
08636f15 +0x10f:  mov    %eax,(%esp)
08636f18 +0x112:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08636f1d +0x117:  mov    %ebx,%eax
08636f1f +0x119:  add    $0x30,%esp
08636f22 +0x11c:  pop    %ebx
08636f23 +0x11d:  pop    %esi
08636f24 +0x11e:  pop    %ebp
08636f25 +0x11f:  ret
```

## 反编译 C

```c
// TimerCheckForcedDisconnect::dispatch_sig @ 0x8636e06

/* TimerCheckForcedDisconnect::dispatch_sig(int, int, unsigned int) */

bool TimerCheckForcedDisconnect::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  PacketGuard local_20 [12];
  CUser *local_14;
  char local_d;
  
  iVar1 = G_CGameManager();
  local_14 = (CUser *)CGameManager::getUser(iVar1,param_2);
  if (local_14 == (CUser *)0x0) {
    bVar3 = false;
  }
  else {
    uVar2 = CUser::get_unique_id(local_14);
    if ((uVar2 & 0xffff) == param_3) {
      iVar1 = CUser::get_state(local_14);
      if (iVar1 == 7) {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08636e9f to 08636eda has its CatchHandler @ 08636ef7 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x7b);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send(local_14,local_20);
        local_d = RegistNextTimer((TimerCheckForcedDisconnect *)param_1,local_14);
        bVar3 = local_d == '\x01';
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        bVar3 = true;
      }
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}
```
