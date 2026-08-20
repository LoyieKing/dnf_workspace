# dispatch_sig

`_ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CheckEnableServerMessage` | `0x0821df6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821df6a  _ZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821df6a, 0x0821e1f3]
0821df6a +0x000:  push   %ebp
0821df6b +0x001:  mov    %esp,%ebp
0821df6d +0x003:  push   %esi
0821df6e +0x004:  push   %ebx
0821df6f +0x005:  sub    $0x40,%esp
0821df72 +0x008:  mov    0xc(%ebp),%eax
0821df75 +0x00b:  mov    %eax,(%esp)
0821df78 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821df7d +0x013:  cmp    $0x3,%eax
0821df80 +0x016:  setne  %al
0821df83 +0x019:  test   %al,%al
0821df85 +0x01b:  je     0821e01e <+0xb4>
0821df8b +0x021:  mov    0xc(%ebp),%eax
0821df8e +0x024:  mov    %eax,(%esp)
0821df91 +0x027:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0821df96 +0x02c:  movl   $0x0,0x4(%esp)
0821df9e +0x034:  mov    %eax,(%esp)
0821dfa1 +0x037:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0821dfa6 +0x03c:  mov    %eax,%ebx
0821dfa8 +0x03e:  mov    0xc(%ebp),%eax
0821dfab +0x041:  mov    %eax,(%esp)
0821dfae +0x044:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821dfb3 +0x049:  mov    %eax,%esi
0821dfb5 +0x04b:  movl   $0x0,0xc(%esp)
0821dfbd +0x053:  movl   $0xd236,0x8(%esp)
0821dfc5 +0x05b:  movl   $&_ZZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821dfcd +0x063:  lea    -0x20(%ebp),%eax
0821dfd0 +0x066:  mov    %eax,(%esp)
0821dfd3 +0x069:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0821dfd8 +0x06e:  mov    %ebx,0xc(%esp)
0821dfdc +0x072:  mov    %esi,0x8(%esp)
0821dfe0 +0x076:  movl   $"ServerMessage : Dispatcher_CheckEnableServerMessage => User State : %d, m_id : %s",0x4(%esp)
0821dfe8 +0x07e:  lea    -0x20(%ebp),%eax
0821dfeb +0x081:  mov    %eax,(%esp)
0821dfee +0x084:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0821dff3 +0x089:  movl   $0x0,0xc(%esp)
0821dffb +0x091:  movl   $0x0,0x8(%esp)
0821e003 +0x099:  movl   $&_ZZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e00b +0x0a1:  movl   $0xd237,(%esp)
0821e012 +0x0a8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e017 +0x0ad:  mov    %eax,%ebx
0821e019 +0x0af:  jmp    0821e1eb <+0x281>
0821e01e +0x0b4:  movb   $0x0,-0x21(%ebp)
0821e022 +0x0b8:  lea    -0x21(%ebp),%eax
0821e025 +0x0bb:  mov    %eax,0x4(%esp)
0821e029 +0x0bf:  mov    0x10(%ebp),%eax
0821e02c +0x0c2:  mov    %eax,(%esp)
0821e02f +0x0c5:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821e034 +0x0ca:  xor    $0x1,%eax
0821e037 +0x0cd:  test   %al,%al
0821e039 +0x0cf:  je     0821e066 <+0xfc>
0821e03b +0x0d1:  movl   $0x0,0xc(%esp)
0821e043 +0x0d9:  movl   $0x0,0x8(%esp)
0821e04b +0x0e1:  movl   $&_ZZN35Dispatcher_CheckEnableServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e053 +0x0e9:  movl   $0xd23d,(%esp)
0821e05a +0x0f0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e05f +0x0f5:  mov    %eax,%ebx
0821e061 +0x0f7:  jmp    0821e1eb <+0x281>
0821e066 +0x0fc:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0821e06d +0x103:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0821e072 +0x108:  mov    %eax,-0x10(%ebp)
0821e075 +0x10b:  lea    -0x30(%ebp),%eax
0821e078 +0x10e:  mov    %eax,(%esp)
0821e07b +0x111:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821e080 +0x116:  movl   $0xde,0x8(%esp)
0821e088 +0x11e:  movl   $0x1,0x4(%esp)
0821e090 +0x126:  lea    -0x30(%ebp),%eax
0821e093 +0x129:  mov    %eax,(%esp)
0821e096 +0x12c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821e09b +0x131:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0821e0a0 +0x136:  mov    %eax,(%esp)
0821e0a3 +0x139:  call   08298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>  ; CGameManager::GetSharedServerMessageManager()
0821e0a8 +0x13e:  mov    %eax,-0xc(%ebp)
0821e0ab +0x141:  cmpl   $0x0,-0xc(%ebp)
0821e0af +0x145:  je     0821e183 <+0x219>
0821e0b5 +0x14b:  movl   $0x0,-0x34(%ebp)
0821e0bc +0x152:  movzbl -0x21(%ebp),%eax
0821e0c0 +0x156:  movzbl %al,%eax
0821e0c3 +0x159:  lea    -0x34(%ebp),%edx
0821e0c6 +0x15c:  mov    %edx,0xc(%esp)
0821e0ca +0x160:  mov    %eax,0x8(%esp)
0821e0ce +0x164:  mov    0xc(%ebp),%eax
0821e0d1 +0x167:  mov    %eax,0x4(%esp)
0821e0d5 +0x16b:  mov    -0xc(%ebp),%eax
0821e0d8 +0x16e:  mov    %eax,(%esp)
0821e0db +0x171:  call   08600dcc <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi>  ; CSharedServerMessageManager::CheckUserCondition(CUser*, int, int&)
0821e0e0 +0x176:  test   %al,%al
0821e0e2 +0x178:  je     0821e142 <+0x1d8>
0821e0e4 +0x17a:  mov    -0x10(%ebp),%edx
0821e0e7 +0x17d:  movzbl -0x21(%ebp),%eax
0821e0eb +0x181:  movzbl %al,%eax
0821e0ee +0x184:  mov    %edx,0x8(%esp)
0821e0f2 +0x188:  mov    %eax,0x4(%esp)
0821e0f6 +0x18c:  mov    -0xc(%ebp),%eax
0821e0f9 +0x18f:  mov    %eax,(%esp)
0821e0fc +0x192:  call   08600cc8 <_ZN27CSharedServerMessageManager18IsChangableMessageEii>  ; CSharedServerMessageManager::IsChangableMessage(int, int)
0821e101 +0x197:  test   %al,%al
0821e103 +0x199:  je     0821e11a <+0x1b0>
0821e105 +0x19b:  movl   $0x1,0x4(%esp)
0821e10d +0x1a3:  lea    -0x30(%ebp),%eax
0821e110 +0x1a6:  mov    %eax,(%esp)
0821e113 +0x1a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e118 +0x1ae:  jmp    0821e183 <+0x219>
0821e11a +0x1b0:  movl   $0x0,0x4(%esp)
0821e122 +0x1b8:  lea    -0x30(%ebp),%eax
0821e125 +0x1bb:  mov    %eax,(%esp)
0821e128 +0x1be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e12d +0x1c3:  movl   $0x1,0x4(%esp)
0821e135 +0x1cb:  lea    -0x30(%ebp),%eax
0821e138 +0x1ce:  mov    %eax,(%esp)
0821e13b +0x1d1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e140 +0x1d6:  jmp    0821e183 <+0x219>
0821e142 +0x1d8:  movl   $0x0,0x4(%esp)
0821e14a +0x1e0:  lea    -0x30(%ebp),%eax
0821e14d +0x1e3:  mov    %eax,(%esp)
0821e150 +0x1e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e155 +0x1eb:  mov    -0x34(%ebp),%eax
0821e158 +0x1ee:  test   %eax,%eax
0821e15a +0x1f0:  je     0821e170 <+0x206>
0821e15c +0x1f2:  mov    -0x34(%ebp),%eax
0821e15f +0x1f5:  mov    %eax,0x4(%esp)
0821e163 +0x1f9:  lea    -0x30(%ebp),%eax
0821e166 +0x1fc:  mov    %eax,(%esp)
0821e169 +0x1ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e16e +0x204:  jmp    0821e183 <+0x219>
0821e170 +0x206:  movl   $0x3,0x4(%esp)
0821e178 +0x20e:  lea    -0x30(%ebp),%eax
0821e17b +0x211:  mov    %eax,(%esp)
0821e17e +0x214:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e183 +0x219:  movzbl -0x21(%ebp),%eax
0821e187 +0x21d:  movzbl %al,%eax
0821e18a +0x220:  mov    %eax,0x4(%esp)
0821e18e +0x224:  lea    -0x30(%ebp),%eax
0821e191 +0x227:  mov    %eax,(%esp)
0821e194 +0x22a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e199 +0x22f:  movl   $0x1,0x4(%esp)
0821e1a1 +0x237:  lea    -0x30(%ebp),%eax
0821e1a4 +0x23a:  mov    %eax,(%esp)
0821e1a7 +0x23d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821e1ac +0x242:  lea    -0x30(%ebp),%eax
0821e1af +0x245:  mov    %eax,0x4(%esp)
0821e1b3 +0x249:  mov    0xc(%ebp),%eax
0821e1b6 +0x24c:  mov    %eax,(%esp)
0821e1b9 +0x24f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821e1be +0x254:  mov    $0x0,%ebx
0821e1c3 +0x259:  lea    -0x30(%ebp),%eax
0821e1c6 +0x25c:  mov    %eax,(%esp)
0821e1c9 +0x25f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821e1ce +0x264:  jmp    0821e1eb <+0x281>
0821e1d0 +0x266:  mov    %edx,%ebx
0821e1d2 +0x268:  mov    %eax,%esi
0821e1d4 +0x26a:  lea    -0x30(%ebp),%eax
0821e1d7 +0x26d:  mov    %eax,(%esp)
0821e1da +0x270:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821e1df +0x275:  mov    %esi,%eax
0821e1e1 +0x277:  mov    %ebx,%edx
0821e1e3 +0x279:  mov    %eax,(%esp)
0821e1e6 +0x27c:  call   08ae3750 <_Unwind_Resume>
0821e1eb +0x281:  mov    %ebx,%eax
0821e1ed +0x283:  add    $0x40,%esp
0821e1f0 +0x286:  pop    %ebx
0821e1f1 +0x287:  pop    %esi
0821e1f2 +0x288:  pop    %ebp
0821e1f3 +0x289:  ret
```

## 反编译 C

```c
// Dispatcher_CheckEnableServerMessage::dispatch_sig @ 0x821df6a

/* WARNING: Removing unreachable block (ram,0x0821e15c) */
/* Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CheckEnableServerMessage::dispatch_sig
          (Dispatcher_CheckEnableServerMessage *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CGameManager *this_00;
  PacketGuard local_34 [15];
  byte local_25;
  cMyTrace local_24 [16];
  int local_14;
  CSharedServerMessageManager *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    local_25 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_25);
    if (cVar1 == '\x01') {
      local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0821e096 to 0821e1bd has its CatchHandler @ 0821e1d0 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xde);
      this_00 = (CGameManager *)G_CGameManager();
      local_10 = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this_00)
      ;
      if (local_10 != (CSharedServerMessageManager *)0x0) {
        cVar1 = CSharedServerMessageManager::CheckUserCondition
                          ((CUser *)local_10,(int)param_1,(int *)(uint)local_25);
        if (cVar1 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,3);
        }
        else {
          cVar1 = CSharedServerMessageManager::IsChangableMessage(local_10,(uint)local_25,local_14);
          if (cVar1 == '\0') {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
          }
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)local_25);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send(param_1,local_34);
      uVar4 = 0;
      PacketGuard::~PacketGuard(local_34);
    }
    else {
      uVar4 = LineFunc(0xd23d,
                       "virtual int Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    uVar5 = CUser::get_state(param_1);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xd236,0);
    cMyTrace::operator()
              (local_24,
               "ServerMessage : Dispatcher_CheckEnableServerMessage => User State : %d, m_id : %s",
               uVar5,uVar4);
    uVar4 = LineFunc(0xd237,
                     "virtual int Dispatcher_CheckEnableServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar4;
}
```
