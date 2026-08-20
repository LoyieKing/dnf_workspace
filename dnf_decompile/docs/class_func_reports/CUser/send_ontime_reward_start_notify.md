# send_ontime_reward_start_notify

`_ZN5CUser31send_ontime_reward_start_notifyEv`

`CUser::send_ontime_reward_start_notify()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868c170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868c170  _ZN5CUser31send_ontime_reward_start_notifyEv
#           CUser::send_ontime_reward_start_notify()
# range [0x0868c170, 0x0868c3bb]
0868c170 +0x000:  push   %ebp
0868c171 +0x001:  mov    %esp,%ebp
0868c173 +0x003:  push   %edi
0868c174 +0x004:  push   %esi
0868c175 +0x005:  push   %ebx
0868c176 +0x006:  sub    $0x15c,%esp
0868c17c +0x00c:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0868c181 +0x011:  movl   $0x33,0x4(%esp)
0868c189 +0x019:  mov    %eax,(%esp)
0868c18c +0x01c:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0868c191 +0x021:  mov    %eax,-0x24(%ebp)
0868c194 +0x024:  cmpl   $0x0,-0x24(%ebp)
0868c198 +0x028:  je     0868c1c5 <+0x55>
0868c19a +0x02a:  mov    -0x24(%ebp),%eax
0868c19d +0x02d:  mov    (%eax),%eax
0868c19f +0x02f:  add    $0x34,%eax
0868c1a2 +0x032:  mov    (%eax),%edx
0868c1a4 +0x034:  mov    -0x24(%ebp),%eax
0868c1a7 +0x037:  movl   $0x0,0x4(%esp)
0868c1af +0x03f:  mov    %eax,(%esp)
0868c1b2 +0x042:  call   *%edx
0868c1b4 +0x044:  xor    $0x1,%eax
0868c1b7 +0x047:  test   %al,%al
0868c1b9 +0x049:  je     0868c205 <+0x95>
0868c1bb +0x04b:  mov    $0x0,%eax
0868c1c0 +0x050:  jmp    0868c3b1 <+0x241>
0868c1c5 +0x055:  movl   $0x5,0xc(%esp)
0868c1cd +0x05d:  movl   $0xa7f7,0x8(%esp)
0868c1d5 +0x065:  movl   $&_ZZN5CUser31send_ontime_reward_start_notifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
0868c1dd +0x06d:  lea    -0x3c(%ebp),%eax
0868c1e0 +0x070:  mov    %eax,(%esp)
0868c1e3 +0x073:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0868c1e8 +0x078:  movl   $"[ON_TIME_EVENT] send_ontime_reward_start_notify() error",0x4(%esp)
0868c1f0 +0x080:  lea    -0x3c(%ebp),%eax
0868c1f3 +0x083:  mov    %eax,(%esp)
0868c1f6 +0x086:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0868c1fb +0x08b:  mov    $0x0,%eax
0868c200 +0x090:  jmp    0868c3b1 <+0x241>
0868c205 +0x095:  mov    -0x24(%ebp),%eax
0868c208 +0x098:  mov    %eax,(%esp)
0868c20b +0x09b:  call   081bb96c <_ZN12COnTimeEvent16get_reward_stateEv>  ; COnTimeEvent::get_reward_state()
0868c210 +0x0a0:  test   %eax,%eax
0868c212 +0x0a2:  setne  %al
0868c215 +0x0a5:  test   %al,%al
0868c217 +0x0a7:  je     0868c223 <+0xb3>
0868c219 +0x0a9:  mov    $0x0,%eax
0868c21e +0x0ae:  jmp    0868c3b1 <+0x241>
0868c223 +0x0b3:  lea    -0x148(%ebp),%ebx
0868c229 +0x0b9:  mov    $0x0,%eax
0868c22e +0x0be:  mov    $0x40,%edx
0868c233 +0x0c3:  mov    %ebx,%edi
0868c235 +0x0c5:  mov    %edx,%ecx
0868c237 +0x0c7:  rep stos %eax,%es:(%edi)
0868c239 +0x0c9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0868c23e +0x0ce:  mov    %eax,(%esp)
0868c241 +0x0d1:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
0868c246 +0x0d6:  mov    %eax,0x8(%esp)
0868c24a +0x0da:  movl   $"./log/%s/OnTimeEvent",0x4(%esp)
0868c252 +0x0e2:  lea    -0x148(%ebp),%eax
0868c258 +0x0e8:  mov    %eax,(%esp)
0868c25b +0x0eb:  call   0807e440 <_init+0xd38>
0868c260 +0x0f0:  movl   $0xffffffff,0x4(%esp)
0868c268 +0x0f8:  mov    0x8(%ebp),%eax
0868c26b +0x0fb:  mov    %eax,(%esp)
0868c26e +0x0fe:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0868c273 +0x103:  mov    %eax,%esi
0868c275 +0x105:  mov    0x8(%ebp),%eax
0868c278 +0x108:  mov    %eax,(%esp)
0868c27b +0x10b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0868c280 +0x110:  movl   $0x0,0x4(%esp)
0868c288 +0x118:  mov    %eax,(%esp)
0868c28b +0x11b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0868c290 +0x120:  mov    %eax,%ebx
0868c292 +0x122:  movl   $0xa803,0x8(%esp)
0868c29a +0x12a:  movl   $&_ZZN5CUser31send_ontime_reward_start_notifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
0868c2a2 +0x132:  lea    -0x2c(%ebp),%eax
0868c2a5 +0x135:  mov    %eax,(%esp)
0868c2a8 +0x138:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
0868c2ad +0x13d:  mov    %esi,0x10(%esp)
0868c2b1 +0x141:  mov    %ebx,0xc(%esp)
0868c2b5 +0x145:  movl   $"On Time Event : On Charac Login(%s, %u)",0x8(%esp)
0868c2bd +0x14d:  lea    -0x148(%ebp),%eax
0868c2c3 +0x153:  mov    %eax,0x4(%esp)
0868c2c7 +0x157:  lea    -0x2c(%ebp),%eax
0868c2ca +0x15a:  mov    %eax,(%esp)
0868c2cd +0x15d:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
0868c2d2 +0x162:  mov    -0x24(%ebp),%eax
0868c2d5 +0x165:  mov    %eax,(%esp)
0868c2d8 +0x168:  call   081bc0fa <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x194>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x194
0868c2dd +0x16d:  mov    %eax,%ebx
0868c2df +0x16f:  mov    0x8(%ebp),%eax
0868c2e2 +0x172:  mov    %eax,(%esp)
0868c2e5 +0x175:  call   081bc130 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1ca>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1ca
0868c2ea +0x17a:  cmp    %eax,%ebx
0868c2ec +0x17c:  setg   %al
0868c2ef +0x17f:  test   %al,%al
0868c2f1 +0x181:  je     0868c3ac <+0x23c>
0868c2f7 +0x187:  movl   $0x0,(%esp)
0868c2fe +0x18e:  call   0807d750 <_init+0x48>
0868c303 +0x193:  mov    %eax,-0x20(%ebp)
0868c306 +0x196:  mov    -0x24(%ebp),%eax
0868c309 +0x199:  mov    %eax,(%esp)
0868c30c +0x19c:  call   081bb9ba <_ZN12COnTimeEvent19get_reward_end_timeEv>  ; COnTimeEvent::get_reward_end_time()
0868c311 +0x1a1:  sub    -0x20(%ebp),%eax
0868c314 +0x1a4:  mov    %eax,-0x1c(%ebp)
0868c317 +0x1a7:  cmpl   $0x0,-0x1c(%ebp)
0868c31b +0x1ab:  jns    0868c327 <+0x1b7>
0868c31d +0x1ad:  mov    $0x0,%eax
0868c322 +0x1b2:  jmp    0868c3b1 <+0x241>
0868c327 +0x1b7:  lea    -0x48(%ebp),%eax
0868c32a +0x1ba:  mov    %eax,(%esp)
0868c32d +0x1bd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868c332 +0x1c2:  movl   $0x105,0x8(%esp)
0868c33a +0x1ca:  movl   $0x0,0x4(%esp)
0868c342 +0x1d2:  lea    -0x48(%ebp),%eax
0868c345 +0x1d5:  mov    %eax,(%esp)
0868c348 +0x1d8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868c34d +0x1dd:  mov    -0x1c(%ebp),%eax
0868c350 +0x1e0:  mov    %eax,0x4(%esp)
0868c354 +0x1e4:  lea    -0x48(%ebp),%eax
0868c357 +0x1e7:  mov    %eax,(%esp)
0868c35a +0x1ea:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868c35f +0x1ef:  movl   $0x1,0x4(%esp)
0868c367 +0x1f7:  lea    -0x48(%ebp),%eax
0868c36a +0x1fa:  mov    %eax,(%esp)
0868c36d +0x1fd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868c372 +0x202:  lea    -0x48(%ebp),%eax
0868c375 +0x205:  mov    %eax,0x4(%esp)
0868c379 +0x209:  mov    0x8(%ebp),%eax
0868c37c +0x20c:  mov    %eax,(%esp)
0868c37f +0x20f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868c384 +0x214:  jmp    0868c3a1 <+0x231>
0868c386 +0x216:  mov    %edx,%ebx
0868c388 +0x218:  mov    %eax,%esi
0868c38a +0x21a:  lea    -0x48(%ebp),%eax
0868c38d +0x21d:  mov    %eax,(%esp)
0868c390 +0x220:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868c395 +0x225:  mov    %esi,%eax
0868c397 +0x227:  mov    %ebx,%edx
0868c399 +0x229:  mov    %eax,(%esp)
0868c39c +0x22c:  call   08ae3750 <_Unwind_Resume>
0868c3a1 +0x231:  lea    -0x48(%ebp),%eax
0868c3a4 +0x234:  mov    %eax,(%esp)
0868c3a7 +0x237:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868c3ac +0x23c:  mov    $0x1,%eax
0868c3b1 +0x241:  add    $0x15c,%esp
0868c3b7 +0x247:  pop    %ebx
0868c3b8 +0x248:  pop    %esi
0868c3b9 +0x249:  pop    %edi
0868c3ba +0x24a:  pop    %ebp
0868c3bb +0x24b:  ret
```

## 反编译 C

```c
// CUser::send_ontime_reward_start_notify @ 0x868c170

/* CUser::send_ontime_reward_start_notify() */

undefined4 __thiscall CUser::send_ontime_reward_start_notify(CUser *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CEnvironment *this_00;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  char local_14c [256];
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  CMyFileLog local_30 [8];
  COnTimeEvent *local_28;
  int local_24;
  int local_20;
  
  bVar8 = 0;
  local_28 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
  if (local_28 == (COnTimeEvent *)0x0) {
    cMyTrace::cMyTrace(local_40,"bool CUser::send_ontime_reward_start_notify()",42999,5);
    cMyTrace::operator()(local_40,"[ON_TIME_EVENT] send_ontime_reward_start_notify() error");
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(int *)local_28 + 0x34))(local_28,0);
    if (cVar1 == '\x01') {
      iVar3 = COnTimeEvent::get_reward_state(local_28);
      if (iVar3 == 0) {
        pcVar7 = local_14c;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
        }
        this_00 = (CEnvironment *)G_CEnvironment();
        uVar2 = CEnvironment::get_file_name(this_00);
        sprintf(local_14c,"./log/%s/OnTimeEvent",uVar2);
        uVar2 = get_charac_no(this,-1);
        uVar4 = get_acc_id(this);
        uVar5 = NumberToString(uVar4,0);
        CMyFileLog::CMyFileLog(local_30,"bool CUser::send_ontime_reward_start_notify()",0xa803);
        CMyFileLog::operator()
                  (local_30,local_14c,"On Time Event : On Charac Login(%s, %u)",uVar5,uVar2);
        iVar3 = COnTimeEvent::get_ontime_id(local_28);
        iVar6 = get_ontime_last_recv_idx(this);
        if (iVar6 < iVar3) {
          local_24 = time((time_t *)0x0);
          local_20 = COnTimeEvent::get_reward_end_time(local_28);
          local_20 = local_20 - local_24;
          if (local_20 < 0) {
            return 0;
          }
          PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 0868c348 to 0868c383 has its CatchHandler @ 0868c386 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0x105);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_4c,local_20);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
          Send(this,local_4c);
          PacketGuard::~PacketGuard(local_4c);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
