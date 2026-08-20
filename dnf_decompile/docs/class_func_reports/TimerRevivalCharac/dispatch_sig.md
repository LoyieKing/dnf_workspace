# dispatch_sig

`_ZN18TimerRevivalCharac12dispatch_sigEiij`

`TimerRevivalCharac::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerRevivalCharac` | `0x08638e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638e78  _ZN18TimerRevivalCharac12dispatch_sigEiij
#           TimerRevivalCharac::dispatch_sig(int, int, unsigned int)
# range [0x08638e78, 0x08638f69]
08638e78 +0x00:  push   %ebp
08638e79 +0x01:  mov    %esp,%ebp
08638e7b +0x03:  push   %esi
08638e7c +0x04:  push   %ebx
08638e7d +0x05:  sub    $0x20,%esp
08638e80 +0x08:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08638e85 +0x0d:  movl   $0x2,0x8(%esp)
08638e8d +0x15:  mov    0xc(%ebp),%edx
08638e90 +0x18:  mov    %edx,0x4(%esp)
08638e94 +0x1c:  mov    %eax,(%esp)
08638e97 +0x1f:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08638e9c +0x24:  mov    %eax,-0xc(%ebp)
08638e9f +0x27:  cmpl   $0x0,-0xc(%ebp)
08638ea3 +0x2b:  jne    08638eaf <+0x37>
08638ea5 +0x2d:  mov    $0x0,%ebx
08638eaa +0x32:  jmp    08638f61 <+0xe9>
08638eaf +0x37:  mov    -0xc(%ebp),%eax
08638eb2 +0x3a:  mov    %eax,(%esp)
08638eb5 +0x3d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08638eba +0x42:  test   %eax,%eax
08638ebc +0x44:  sete   %al
08638ebf +0x47:  test   %al,%al
08638ec1 +0x49:  je     08638ecd <+0x55>
08638ec3 +0x4b:  mov    $0x0,%ebx
08638ec8 +0x50:  jmp    08638f61 <+0xe9>
08638ecd +0x55:  mov    -0xc(%ebp),%eax
08638ed0 +0x58:  mov    %eax,(%esp)
08638ed3 +0x5b:  call   0814aa8c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x82b>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x82b
08638ed8 +0x60:  cmp    0x10(%ebp),%eax
08638edb +0x63:  setne  %al
08638ede +0x66:  test   %al,%al
08638ee0 +0x68:  je     08638ee9 <+0x71>
08638ee2 +0x6a:  mov    $0x0,%ebx
08638ee7 +0x6f:  jmp    08638f61 <+0xe9>
08638ee9 +0x71:  lea    -0x18(%ebp),%eax
08638eec +0x74:  mov    %eax,(%esp)
08638eef +0x77:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08638ef4 +0x7c:  movl   $0xe4,0x8(%esp)
08638efc +0x84:  movl   $0x0,0x4(%esp)
08638f04 +0x8c:  lea    -0x18(%ebp),%eax
08638f07 +0x8f:  mov    %eax,(%esp)
08638f0a +0x92:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08638f0f +0x97:  movl   $0x1,0x4(%esp)
08638f17 +0x9f:  lea    -0x18(%ebp),%eax
08638f1a +0xa2:  mov    %eax,(%esp)
08638f1d +0xa5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08638f22 +0xaa:  lea    -0x18(%ebp),%eax
08638f25 +0xad:  mov    %eax,0x4(%esp)
08638f29 +0xb1:  mov    -0xc(%ebp),%eax
08638f2c +0xb4:  mov    %eax,(%esp)
08638f2f +0xb7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08638f34 +0xbc:  mov    $0x1,%ebx
08638f39 +0xc1:  lea    -0x18(%ebp),%eax
08638f3c +0xc4:  mov    %eax,(%esp)
08638f3f +0xc7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08638f44 +0xcc:  jmp    08638f61 <+0xe9>
08638f46 +0xce:  mov    %edx,%ebx
08638f48 +0xd0:  mov    %eax,%esi
08638f4a +0xd2:  lea    -0x18(%ebp),%eax
08638f4d +0xd5:  mov    %eax,(%esp)
08638f50 +0xd8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08638f55 +0xdd:  mov    %esi,%eax
08638f57 +0xdf:  mov    %ebx,%edx
08638f59 +0xe1:  mov    %eax,(%esp)
08638f5c +0xe4:  call   08ae3750 <_Unwind_Resume>
08638f61 +0xe9:  mov    %ebx,%eax
08638f63 +0xeb:  add    $0x20,%esp
08638f66 +0xee:  pop    %ebx
08638f67 +0xef:  pop    %esi
08638f68 +0xf0:  pop    %ebp
08638f69 +0xf1:  ret
```

## 反编译 C

```c
// TimerRevivalCharac::dispatch_sig @ 0x8638e78

/* TimerRevivalCharac::dispatch_sig(int, int, unsigned int) */

undefined4 TimerRevivalCharac::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  CUser *local_10;
  
  iVar1 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar1,param_2);
  if (local_10 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_10);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = CUser::GetRevivalTime(local_10);
      if (uVar2 == param_3) {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08638f0a to 08638f33 has its CatchHandler @ 08638f46 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xe4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send(local_10,local_1c);
        uVar3 = 1;
        PacketGuard::~PacketGuard(local_1c);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```
