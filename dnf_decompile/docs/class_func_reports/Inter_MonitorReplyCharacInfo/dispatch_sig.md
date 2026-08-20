# dispatch_sig

`_ZN28Inter_MonitorReplyCharacInfo12dispatch_sigEP5CUserPci`

`Inter_MonitorReplyCharacInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorReplyCharacInfo` | `0x084e7024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7024  _ZN28Inter_MonitorReplyCharacInfo12dispatch_sigEP5CUserPci
#           Inter_MonitorReplyCharacInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e7024, 0x084e71ed]
084e7024 +0x000:  push   %ebp
084e7025 +0x001:  mov    %esp,%ebp
084e7027 +0x003:  push   %esi
084e7028 +0x004:  push   %ebx
084e7029 +0x005:  sub    $0x30,%esp
084e702c +0x008:  mov    0x10(%ebp),%eax
084e702f +0x00b:  mov    %eax,-0x18(%ebp)
084e7032 +0x00e:  movw   $0x0,-0x12(%ebp)
084e7038 +0x014:  mov    -0x18(%ebp),%eax
084e703b +0x017:  mov    0x12(%eax),%ebx
084e703e +0x01a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084e7043 +0x01f:  movl   $0xa,0x8(%esp)
084e704b +0x027:  mov    %ebx,0x4(%esp)
084e704f +0x02b:  mov    %eax,(%esp)
084e7052 +0x02e:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
084e7057 +0x033:  mov    %eax,-0x10(%ebp)
084e705a +0x036:  cmpl   $0x0,-0x10(%ebp)
084e705e +0x03a:  je     084e706f <+0x4b>
084e7060 +0x03c:  mov    -0x10(%ebp),%eax
084e7063 +0x03f:  mov    %eax,(%esp)
084e7066 +0x042:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084e706b +0x047:  mov    %ax,-0x12(%ebp)
084e706f +0x04b:  lea    -0x24(%ebp),%eax
084e7072 +0x04e:  mov    %eax,(%esp)
084e7075 +0x051:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e707a +0x056:  movl   $0x1d6,0x8(%esp)
084e7082 +0x05e:  movl   $0x1,0x4(%esp)
084e708a +0x066:  lea    -0x24(%ebp),%eax
084e708d +0x069:  mov    %eax,(%esp)
084e7090 +0x06c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e7095 +0x071:  mov    -0x18(%ebp),%eax
084e7098 +0x074:  mov    0xa(%eax),%eax
084e709b +0x077:  test   %eax,%eax
084e709d +0x079:  jne    084e716c <+0x148>
084e70a3 +0x07f:  movl   $0x1,0x4(%esp)
084e70ab +0x087:  lea    -0x24(%ebp),%eax
084e70ae +0x08a:  mov    %eax,(%esp)
084e70b1 +0x08d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e70b6 +0x092:  mov    -0x18(%ebp),%eax
084e70b9 +0x095:  movzbl 0x16(%eax),%eax
084e70bd +0x099:  movzbl %al,%eax
084e70c0 +0x09c:  mov    %eax,0x4(%esp)
084e70c4 +0x0a0:  lea    -0x24(%ebp),%eax
084e70c7 +0x0a3:  mov    %eax,(%esp)
084e70ca +0x0a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e70cf +0x0ab:  movzwl -0x12(%ebp),%eax
084e70d3 +0x0af:  mov    %eax,0x4(%esp)
084e70d7 +0x0b3:  lea    -0x24(%ebp),%eax
084e70da +0x0b6:  mov    %eax,(%esp)
084e70dd +0x0b9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e70e2 +0x0be:  mov    -0x18(%ebp),%eax
084e70e5 +0x0c1:  add    $0x17,%eax
084e70e8 +0x0c4:  mov    %eax,(%esp)
084e70eb +0x0c7:  call   0807e3b0 <_init+0xca8>
084e70f0 +0x0cc:  mov    %eax,-0xc(%ebp)
084e70f3 +0x0cf:  mov    -0xc(%ebp),%eax
084e70f6 +0x0d2:  mov    %eax,0x4(%esp)
084e70fa +0x0d6:  lea    -0x24(%ebp),%eax
084e70fd +0x0d9:  mov    %eax,(%esp)
084e7100 +0x0dc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e7105 +0x0e1:  mov    -0x18(%ebp),%eax
084e7108 +0x0e4:  lea    0x17(%eax),%edx
084e710b +0x0e7:  mov    -0xc(%ebp),%eax
084e710e +0x0ea:  mov    %eax,0x8(%esp)
084e7112 +0x0ee:  mov    %edx,0x4(%esp)
084e7116 +0x0f2:  lea    -0x24(%ebp),%eax
084e7119 +0x0f5:  mov    %eax,(%esp)
084e711c +0x0f8:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e7121 +0x0fd:  mov    -0x18(%ebp),%eax
084e7124 +0x100:  movzwl 0x35(%eax),%eax
084e7128 +0x104:  cwtl
084e7129 +0x105:  mov    %eax,0x4(%esp)
084e712d +0x109:  lea    -0x24(%ebp),%eax
084e7130 +0x10c:  mov    %eax,(%esp)
084e7133 +0x10f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e7138 +0x114:  mov    -0x18(%ebp),%eax
084e713b +0x117:  movzbl 0x37(%eax),%eax
084e713f +0x11b:  movsbl %al,%eax
084e7142 +0x11e:  mov    %eax,0x4(%esp)
084e7146 +0x122:  lea    -0x24(%ebp),%eax
084e7149 +0x125:  mov    %eax,(%esp)
084e714c +0x128:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e7151 +0x12d:  mov    -0x18(%ebp),%eax
084e7154 +0x130:  movzbl 0x38(%eax),%eax
084e7158 +0x134:  movsbl %al,%eax
084e715b +0x137:  mov    %eax,0x4(%esp)
084e715f +0x13b:  lea    -0x24(%ebp),%eax
084e7162 +0x13e:  mov    %eax,(%esp)
084e7165 +0x141:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e716a +0x146:  jmp    084e7194 <+0x170>
084e716c +0x148:  movl   $0x0,0x4(%esp)
084e7174 +0x150:  lea    -0x24(%ebp),%eax
084e7177 +0x153:  mov    %eax,(%esp)
084e717a +0x156:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e717f +0x15b:  mov    -0x18(%ebp),%eax
084e7182 +0x15e:  mov    0xa(%eax),%eax
084e7185 +0x161:  mov    %eax,0x4(%esp)
084e7189 +0x165:  lea    -0x24(%ebp),%eax
084e718c +0x168:  mov    %eax,(%esp)
084e718f +0x16b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e7194 +0x170:  movl   $0x1,0x4(%esp)
084e719c +0x178:  lea    -0x24(%ebp),%eax
084e719f +0x17b:  mov    %eax,(%esp)
084e71a2 +0x17e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e71a7 +0x183:  lea    -0x24(%ebp),%eax
084e71aa +0x186:  mov    %eax,0x4(%esp)
084e71ae +0x18a:  mov    0xc(%ebp),%eax
084e71b1 +0x18d:  mov    %eax,(%esp)
084e71b4 +0x190:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e71b9 +0x195:  mov    $0x0,%ebx
084e71be +0x19a:  lea    -0x24(%ebp),%eax
084e71c1 +0x19d:  mov    %eax,(%esp)
084e71c4 +0x1a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e71c9 +0x1a5:  mov    %ebx,%eax
084e71cb +0x1a7:  add    $0x30,%esp
084e71ce +0x1aa:  pop    %ebx
084e71cf +0x1ab:  pop    %esi
084e71d0 +0x1ac:  pop    %ebp
084e71d1 +0x1ad:  ret
084e71d2 +0x1ae:  mov    %edx,%ebx
084e71d4 +0x1b0:  mov    %eax,%esi
084e71d6 +0x1b2:  lea    -0x24(%ebp),%eax
084e71d9 +0x1b5:  mov    %eax,(%esp)
084e71dc +0x1b8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e71e1 +0x1bd:  mov    %esi,%eax
084e71e3 +0x1bf:  mov    %ebx,%edx
084e71e5 +0x1c1:  mov    %eax,(%esp)
084e71e8 +0x1c4:  call   08ae3750 <_Unwind_Resume>
084e71ed +0x1c9:  nop
```

## 反编译 C

```c
// Inter_MonitorReplyCharacInfo::dispatch_sig @ 0x84e7024

/* Inter_MonitorReplyCharacInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorReplyCharacInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_28 [12];
  int local_1c;
  ushort local_16;
  CUser *local_14;
  size_t local_10;
  
  local_1c = param_3;
  local_16 = 0;
  iVar1 = *(int *)(param_3 + 0x12);
  iVar2 = G_CGameManager();
  local_14 = (CUser *)CGameManager::getUser(iVar2,iVar1);
  if (local_14 != (CUser *)0x0) {
    local_16 = CUser::get_unique_id(local_14);
  }
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084e7090 to 084e71b8 has its CatchHandler @ 084e71d2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x1d6);
  if (*(int *)(local_1c + 10) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 0x16));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,(uint)local_16);
    local_10 = strlen((char *)(local_1c + 0x17));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_28,(char *)(local_1c + 0x17),local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)*(short *)(local_1c + 0x35));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)*(char *)(local_1c + 0x37));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)*(char *)(local_1c + 0x38));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,*(int *)(local_1c + 10));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send((CUser *)param_2,local_28);
  PacketGuard::~PacketGuard(local_28);
  return 0;
}
```
