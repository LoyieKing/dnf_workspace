# CheckAndSendToUserSchedule

`_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb`

`CDailyScheduleManager::CheckAndSendToUserSchedule(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08125cda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08125cda  _ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb
#           CDailyScheduleManager::CheckAndSendToUserSchedule(CUser*, bool)
# range [0x08125cda, 0x08125ff3]
08125cda +0x000:  push   %ebp
08125cdb +0x001:  mov    %esp,%ebp
08125cdd +0x003:  push   %esi
08125cde +0x004:  push   %ebx
08125cdf +0x005:  sub    $0xb0,%esp
08125ce5 +0x00b:  mov    0x10(%ebp),%eax
08125ce8 +0x00e:  mov    %al,-0x9c(%ebp)
08125cee +0x014:  mov    0x8(%ebp),%eax
08125cf1 +0x017:  add    $0xd8,%eax
08125cf6 +0x01c:  mov    %eax,(%esp)
08125cf9 +0x01f:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
08125cfe +0x024:  mov    %eax,-0x20(%ebp)
08125d01 +0x027:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08125d08 +0x02e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08125d0d +0x033:  mov    %eax,-0x24(%ebp)
08125d10 +0x036:  lea    -0x94(%ebp),%eax
08125d16 +0x03c:  mov    %eax,0x4(%esp)
08125d1a +0x040:  lea    -0x24(%ebp),%eax
08125d1d +0x043:  mov    %eax,(%esp)
08125d20 +0x046:  call   0807e360 <_init+0xc58>
08125d25 +0x04b:  mov    -0x7c(%ebp),%eax
08125d28 +0x04e:  mov    %eax,-0x1c(%ebp)
08125d2b +0x051:  movl   $0x0,-0x18(%ebp)
08125d32 +0x058:  jmp    08125fd9 <+0x2ff>
08125d37 +0x05d:  mov    0x8(%ebp),%eax
08125d3a +0x060:  lea    0xd8(%eax),%edx
08125d40 +0x066:  mov    -0x18(%ebp),%eax
08125d43 +0x069:  mov    %eax,0x4(%esp)
08125d47 +0x06d:  mov    %edx,(%esp)
08125d4a +0x070:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08125d4f +0x075:  mov    %eax,-0x14(%ebp)
08125d52 +0x078:  movl   $0x0,-0x28(%ebp)
08125d59 +0x07f:  movb   $0x0,-0xd(%ebp)
08125d5d +0x083:  cmpl   $0x0,0xc(%ebp)
08125d61 +0x087:  jne    08125dc9 <+0xef>
08125d63 +0x089:  movzbl -0x9c(%ebp),%eax
08125d6a +0x090:  mov    %eax,0xc(%esp)
08125d6e +0x094:  lea    -0x28(%ebp),%eax
08125d71 +0x097:  mov    %eax,0x8(%esp)
08125d75 +0x09b:  mov    -0x14(%ebp),%eax
08125d78 +0x09e:  mov    %eax,0x4(%esp)
08125d7c +0x0a2:  mov    0x8(%ebp),%eax
08125d7f +0x0a5:  mov    %eax,(%esp)
08125d82 +0x0a8:  call   08125ff4 <_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb>  ; CDailyScheduleManager::CheckScheduleState(_DailySchedule const&, unsigned int&, bool) const
08125d87 +0x0ad:  mov    %eax,-0xc(%ebp)
08125d8a +0x0b0:  cmpl   $0x1,-0xc(%ebp)
08125d8e +0x0b4:  jne    08125daa <+0xd0>
08125d90 +0x0b6:  mov    -0x14(%ebp),%eax
08125d93 +0x0b9:  mov    0x20(%eax),%eax
08125d96 +0x0bc:  test   %eax,%eax
08125d98 +0x0be:  jne    08125dc9 <+0xef>
08125d9a +0x0c0:  mov    -0x14(%ebp),%eax
08125d9d +0x0c3:  movl   $0x1,0x20(%eax)
08125da4 +0x0ca:  movb   $0x1,-0xd(%ebp)
08125da8 +0x0ce:  jmp    08125dc9 <+0xef>
08125daa +0x0d0:  cmpl   $0x0,-0xc(%ebp)
08125dae +0x0d4:  jne    08125dc9 <+0xef>
08125db0 +0x0d6:  mov    -0x14(%ebp),%eax
08125db3 +0x0d9:  mov    0x20(%eax),%eax
08125db6 +0x0dc:  cmp    $0x1,%eax
08125db9 +0x0df:  jne    08125dc9 <+0xef>
08125dbb +0x0e1:  mov    -0x14(%ebp),%eax
08125dbe +0x0e4:  movl   $0x0,0x20(%eax)
08125dc5 +0x0eb:  movb   $0x1,-0xd(%ebp)
08125dc9 +0x0ef:  cmpb   $0x0,-0xd(%ebp)
08125dcd +0x0f3:  je     08125e42 <+0x168>
08125dcf +0x0f5:  movl   $0x0,-0x2c(%ebp)
08125dd6 +0x0fc:  movl   $0x0,-0x30(%ebp)
08125ddd +0x103:  lea    -0x30(%ebp),%eax
08125de0 +0x106:  mov    %eax,0xc(%esp)
08125de4 +0x10a:  lea    -0x2c(%ebp),%eax
08125de7 +0x10d:  mov    %eax,0x8(%esp)
08125deb +0x111:  mov    -0x14(%ebp),%eax
08125dee +0x114:  mov    %eax,0x4(%esp)
08125df2 +0x118:  mov    0x8(%ebp),%eax
08125df5 +0x11b:  mov    %eax,(%esp)
08125df8 +0x11e:  call   081261a8 <_ZN21CDailyScheduleManager21CheckContinueScheduleERK14_DailySchedulePPS0_S4_>  ; CDailyScheduleManager::CheckContinueSchedule(_DailySchedule const&, _DailySchedule**, _DailySchedule**)
08125dfd +0x123:  test   %al,%al
08125dff +0x125:  je     08125e42 <+0x168>
08125e01 +0x127:  mov    -0x14(%ebp),%eax
08125e04 +0x12a:  mov    0x20(%eax),%eax
08125e07 +0x12d:  test   %eax,%eax
08125e09 +0x12f:  jne    08125e22 <+0x148>
08125e0b +0x131:  mov    -0x30(%ebp),%eax
08125e0e +0x134:  test   %eax,%eax
08125e10 +0x136:  je     08125e1c <+0x142>
08125e12 +0x138:  mov    -0x30(%ebp),%eax
08125e15 +0x13b:  movl   $0x1,0x20(%eax)
08125e1c +0x142:  movb   $0x0,-0xd(%ebp)
08125e20 +0x146:  jmp    08125e42 <+0x168>
08125e22 +0x148:  mov    -0x14(%ebp),%eax
08125e25 +0x14b:  mov    0x20(%eax),%eax
08125e28 +0x14e:  cmp    $0x1,%eax
08125e2b +0x151:  jne    08125e42 <+0x168>
08125e2d +0x153:  mov    -0x2c(%ebp),%eax
08125e30 +0x156:  test   %eax,%eax
08125e32 +0x158:  je     08125e3e <+0x164>
08125e34 +0x15a:  mov    -0x2c(%ebp),%eax
08125e37 +0x15d:  movl   $0x0,0x20(%eax)
08125e3e +0x164:  movb   $0x0,-0xd(%ebp)
08125e42 +0x168:  cmpb   $0x0,-0xd(%ebp)
08125e46 +0x16c:  je     08125f01 <+0x227>
08125e4c +0x172:  lea    -0x3c(%ebp),%eax
08125e4f +0x175:  mov    %eax,(%esp)
08125e52 +0x178:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08125e57 +0x17d:  movl   $0x1ed,0x8(%esp)
08125e5f +0x185:  movl   $0x0,0x4(%esp)
08125e67 +0x18d:  lea    -0x3c(%ebp),%eax
08125e6a +0x190:  mov    %eax,(%esp)
08125e6d +0x193:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08125e72 +0x198:  mov    -0x14(%ebp),%eax
08125e75 +0x19b:  mov    0x4(%eax),%eax
08125e78 +0x19e:  mov    %eax,-0x4c(%ebp)
08125e7b +0x1a1:  mov    -0x14(%ebp),%eax
08125e7e +0x1a4:  mov    0x20(%eax),%eax
08125e81 +0x1a7:  mov    %eax,-0x48(%ebp)
08125e84 +0x1aa:  mov    -0x14(%ebp),%eax
08125e87 +0x1ad:  mov    0x8(%eax),%eax
08125e8a +0x1b0:  mov    %eax,-0x44(%ebp)
08125e8d +0x1b3:  mov    -0x28(%ebp),%eax
08125e90 +0x1b6:  mov    %eax,-0x40(%ebp)
08125e93 +0x1b9:  lea    -0x4c(%ebp),%eax
08125e96 +0x1bc:  movl   $0x10,0x8(%esp)
08125e9e +0x1c4:  mov    %eax,0x4(%esp)
08125ea2 +0x1c8:  lea    -0x3c(%ebp),%eax
08125ea5 +0x1cb:  mov    %eax,(%esp)
08125ea8 +0x1ce:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08125ead +0x1d3:  movl   $0x1,0x4(%esp)
08125eb5 +0x1db:  lea    -0x3c(%ebp),%eax
08125eb8 +0x1de:  mov    %eax,(%esp)
08125ebb +0x1e1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08125ec0 +0x1e6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08125ec5 +0x1eb:  lea    -0x3c(%ebp),%edx
08125ec8 +0x1ee:  mov    %edx,0x4(%esp)
08125ecc +0x1f2:  mov    %eax,(%esp)
08125ecf +0x1f5:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08125ed4 +0x1fa:  jmp    08125ef1 <+0x217>
08125ed6 +0x1fc:  mov    %edx,%ebx
08125ed8 +0x1fe:  mov    %eax,%esi
08125eda +0x200:  lea    -0x3c(%ebp),%eax
08125edd +0x203:  mov    %eax,(%esp)
08125ee0 +0x206:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08125ee5 +0x20b:  mov    %esi,%eax
08125ee7 +0x20d:  mov    %ebx,%edx
08125ee9 +0x20f:  mov    %eax,(%esp)
08125eec +0x212:  call   08ae3750 <_Unwind_Resume>
08125ef1 +0x217:  lea    -0x3c(%ebp),%eax
08125ef4 +0x21a:  mov    %eax,(%esp)
08125ef7 +0x21d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08125efc +0x222:  jmp    08125fd5 <+0x2fb>
08125f01 +0x227:  movzbl -0xd(%ebp),%eax
08125f05 +0x22b:  xor    $0x1,%eax
08125f08 +0x22e:  test   %al,%al
08125f0a +0x230:  je     08125fd5 <+0x2fb>
08125f10 +0x236:  mov    -0x14(%ebp),%eax
08125f13 +0x239:  mov    0x20(%eax),%eax
08125f16 +0x23c:  cmp    $0x1,%eax
08125f19 +0x23f:  jne    08125fd5 <+0x2fb>
08125f1f +0x245:  cmpl   $0x0,0xc(%ebp)
08125f23 +0x249:  je     08125fd5 <+0x2fb>
08125f29 +0x24f:  lea    -0x58(%ebp),%eax
08125f2c +0x252:  mov    %eax,(%esp)
08125f2f +0x255:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08125f34 +0x25a:  movl   $0x1ed,0x8(%esp)
08125f3c +0x262:  movl   $0x0,0x4(%esp)
08125f44 +0x26a:  lea    -0x58(%ebp),%eax
08125f47 +0x26d:  mov    %eax,(%esp)
08125f4a +0x270:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08125f4f +0x275:  mov    -0x14(%ebp),%eax
08125f52 +0x278:  mov    0x4(%eax),%eax
08125f55 +0x27b:  mov    %eax,-0x68(%ebp)
08125f58 +0x27e:  movl   $0x2,-0x64(%ebp)
08125f5f +0x285:  mov    -0x14(%ebp),%eax
08125f62 +0x288:  mov    0x8(%eax),%eax
08125f65 +0x28b:  mov    %eax,-0x60(%ebp)
08125f68 +0x28e:  mov    -0x28(%ebp),%eax
08125f6b +0x291:  mov    %eax,-0x5c(%ebp)
08125f6e +0x294:  lea    -0x68(%ebp),%eax
08125f71 +0x297:  movl   $0x10,0x8(%esp)
08125f79 +0x29f:  mov    %eax,0x4(%esp)
08125f7d +0x2a3:  lea    -0x58(%ebp),%eax
08125f80 +0x2a6:  mov    %eax,(%esp)
08125f83 +0x2a9:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08125f88 +0x2ae:  movl   $0x1,0x4(%esp)
08125f90 +0x2b6:  lea    -0x58(%ebp),%eax
08125f93 +0x2b9:  mov    %eax,(%esp)
08125f96 +0x2bc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08125f9b +0x2c1:  lea    -0x58(%ebp),%eax
08125f9e +0x2c4:  mov    %eax,0x4(%esp)
08125fa2 +0x2c8:  mov    0xc(%ebp),%eax
08125fa5 +0x2cb:  mov    %eax,(%esp)
08125fa8 +0x2ce:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08125fad +0x2d3:  jmp    08125fca <+0x2f0>
08125faf +0x2d5:  mov    %edx,%ebx
08125fb1 +0x2d7:  mov    %eax,%esi
08125fb3 +0x2d9:  lea    -0x58(%ebp),%eax
08125fb6 +0x2dc:  mov    %eax,(%esp)
08125fb9 +0x2df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08125fbe +0x2e4:  mov    %esi,%eax
08125fc0 +0x2e6:  mov    %ebx,%edx
08125fc2 +0x2e8:  mov    %eax,(%esp)
08125fc5 +0x2eb:  call   08ae3750 <_Unwind_Resume>
08125fca +0x2f0:  lea    -0x58(%ebp),%eax
08125fcd +0x2f3:  mov    %eax,(%esp)
08125fd0 +0x2f6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08125fd5 +0x2fb:  addl   $0x1,-0x18(%ebp)
08125fd9 +0x2ff:  mov    -0x18(%ebp),%eax
08125fdc +0x302:  cmp    -0x20(%ebp),%eax
08125fdf +0x305:  setb   %al
08125fe2 +0x308:  test   %al,%al
08125fe4 +0x30a:  jne    08125d37 <+0x5d>
08125fea +0x310:  add    $0xb0,%esp
08125ff0 +0x316:  pop    %ebx
08125ff1 +0x317:  pop    %esi
08125ff2 +0x318:  pop    %ebp
08125ff3 +0x319:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::CheckAndSendToUserSchedule @ 0x8125cda

/* CDailyScheduleManager::CheckAndSendToUserSchedule(CUser*, bool) */

void CDailyScheduleManager::CheckAndSendToUserSchedule(CUser *param_1,bool param_2)

{
  char cVar1;
  GameWorld *this;
  undefined3 in_stack_00000009;
  tm local_98;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  PacketGuard local_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  PacketGuard local_40 [12];
  _DailySchedule *local_34;
  _DailySchedule *local_30;
  undefined4 local_2c;
  time_t local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  _DailySchedule *local_18;
  char local_11;
  int local_10;
  
  local_24 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                       ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(param_1 + 0xd8));
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_28,&local_98);
  local_20 = local_98.tm_wday;
  for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
    local_18 = (_DailySchedule *)
               std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                         ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(param_1 + 0xd8),
                          local_1c);
    local_2c = 0;
    local_11 = '\0';
    if (_param_2 == (CUser *)0x0) {
      local_10 = CheckScheduleState((_DailySchedule *)param_1,(uint *)local_18,SUB41(&local_2c,0));
      if (local_10 == 1) {
        if (*(uint *)(local_18 + 0x20) == 0) {
          *(uint *)(local_18 + 0x20) = 1;
          local_11 = '\x01';
        }
      }
      else if ((local_10 == 0) && (*(uint *)(local_18 + 0x20) == 1)) {
        *(uint *)(local_18 + 0x20) = 0;
        local_11 = '\x01';
      }
    }
    if (local_11 != '\0') {
      local_30 = (_DailySchedule *)0x0;
      local_34 = (_DailySchedule *)0x0;
      cVar1 = CheckContinueSchedule((CDailyScheduleManager *)param_1,local_18,&local_30,&local_34);
      if (cVar1 != '\0') {
        if (*(int *)(local_18 + 0x20) == 0) {
          if (local_34 != (_DailySchedule *)0x0) {
            *(undefined4 *)(local_34 + 0x20) = 1;
          }
          local_11 = '\0';
        }
        else if (*(int *)(local_18 + 0x20) == 1) {
          if (local_30 != (_DailySchedule *)0x0) {
            *(undefined4 *)(local_30 + 0x20) = 0;
          }
          local_11 = '\0';
        }
      }
    }
    if (local_11 == '\0') {
      if ((*(int *)(local_18 + 0x20) == 1) && (_param_2 != (CUser *)0x0)) {
        PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 08125f4a to 08125fac has its CatchHandler @ 08125faf */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0x1ed);
        local_6c = *(undefined4 *)(local_18 + 4);
        local_68 = 2;
        local_64 = *(undefined4 *)(local_18 + 8);
        local_60 = local_2c;
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,(char *)&local_6c,0x10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
        CUser::Send(_param_2,local_5c);
        PacketGuard::~PacketGuard(local_5c);
      }
    }
    else {
      PacketGuard::PacketGuard(local_40);
                    /* try { // try from 08125e6d to 08125ed3 has its CatchHandler @ 08125ed6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x1ed);
      local_50 = *(undefined4 *)(local_18 + 4);
      local_4c = *(undefined4 *)(local_18 + 0x20);
      local_48 = *(undefined4 *)(local_18 + 8);
      local_44 = local_2c;
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_40,(char *)&local_50,0x10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      this = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this,local_40);
      PacketGuard::~PacketGuard(local_40);
    }
  }
  return;
}
```
