# OnCreateDisjointStore

`_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii`

`expert_job::CDisjointer::OnCreateDisjointStore(CUser*, char const*, int, int, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d2d08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d2d08  _ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii
#           expert_job::CDisjointer::OnCreateDisjointStore(CUser*, char const*, int, int, int)
# range [0x085d2d08, 0x085d3099]
085d2d08 +0x000:  push   %ebp
085d2d09 +0x001:  mov    %esp,%ebp
085d2d0b +0x003:  push   %esi
085d2d0c +0x004:  push   %ebx
085d2d0d +0x005:  sub    $0x60,%esp
085d2d10 +0x008:  cmpl   $0x0,0x14(%ebp)
085d2d14 +0x00c:  js     085d2d26 <+0x1e>
085d2d16 +0x00e:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d2d1b +0x013:  mov    0x28c(%eax),%eax
085d2d21 +0x019:  cmp    0x14(%ebp),%eax
085d2d24 +0x01c:  jge    085d2d2d <+0x25>
085d2d26 +0x01e:  mov    $0x1,%eax
085d2d2b +0x023:  jmp    085d2d32 <+0x2a>
085d2d2d +0x025:  mov    $0x0,%eax
085d2d32 +0x02a:  test   %al,%al
085d2d34 +0x02c:  je     085d2d40 <+0x38>
085d2d36 +0x02e:  mov    $0xa,%ebx
085d2d3b +0x033:  jmp    085d3090 <+0x388>
085d2d40 +0x038:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
085d2d45 +0x03d:  mov    0xc(%ebp),%edx
085d2d48 +0x040:  mov    %edx,0x4(%esp)
085d2d4c +0x044:  mov    %eax,(%esp)
085d2d4f +0x047:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
085d2d54 +0x04c:  test   %al,%al
085d2d56 +0x04e:  je     085d2d62 <+0x5a>
085d2d58 +0x050:  mov    $0xbe,%ebx
085d2d5d +0x055:  jmp    085d3090 <+0x388>
085d2d62 +0x05a:  mov    0xc(%ebp),%eax
085d2d65 +0x05d:  mov    %eax,(%esp)
085d2d68 +0x060:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d2d6d +0x065:  cmp    $0x7,%al
085d2d6f +0x067:  sete   %al
085d2d72 +0x06a:  test   %al,%al
085d2d74 +0x06c:  je     085d2d80 <+0x78>
085d2d76 +0x06e:  mov    $0xbe,%ebx
085d2d7b +0x073:  jmp    085d3090 <+0x388>
085d2d80 +0x078:  movl   $0x0,0x4(%esp)
085d2d88 +0x080:  mov    0xc(%ebp),%eax
085d2d8b +0x083:  mov    %eax,(%esp)
085d2d8e +0x086:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085d2d93 +0x08b:  mov    %eax,%ebx
085d2d95 +0x08d:  mov    0xc(%ebp),%eax
085d2d98 +0x090:  mov    %eax,(%esp)
085d2d9b +0x093:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d2da0 +0x098:  movsbl %al,%esi
085d2da3 +0x09b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d2da8 +0x0a0:  mov    0x1c(%ebp),%edx
085d2dab +0x0a3:  mov    %edx,0x10(%esp)
085d2daf +0x0a7:  mov    0x18(%ebp),%edx
085d2db2 +0x0aa:  mov    %edx,0xc(%esp)
085d2db6 +0x0ae:  mov    %ebx,0x8(%esp)
085d2dba +0x0b2:  mov    %esi,0x4(%esp)
085d2dbe +0x0b6:  mov    %eax,(%esp)
085d2dc1 +0x0b9:  call   086c4814 <_ZNK9GameWorld18is_available_pointEiiii>  ; GameWorld::is_available_point(int, int, int, int) const
085d2dc6 +0x0be:  xor    $0x1,%eax
085d2dc9 +0x0c1:  test   %al,%al
085d2dcb +0x0c3:  je     085d2dd7 <+0xcf>
085d2dcd +0x0c5:  mov    $0xbe,%ebx
085d2dd2 +0x0ca:  jmp    085d3090 <+0x388>
085d2dd7 +0x0cf:  movl   $0x0,0x4(%esp)
085d2ddf +0x0d7:  mov    0xc(%ebp),%eax
085d2de2 +0x0da:  mov    %eax,(%esp)
085d2de5 +0x0dd:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085d2dea +0x0e2:  mov    %eax,%ebx
085d2dec +0x0e4:  mov    0xc(%ebp),%eax
085d2def +0x0e7:  mov    %eax,(%esp)
085d2df2 +0x0ea:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d2df7 +0x0ef:  movsbl %al,%esi
085d2dfa +0x0f2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d2dff +0x0f7:  mov    0x1c(%ebp),%edx
085d2e02 +0x0fa:  mov    %edx,0x10(%esp)
085d2e06 +0x0fe:  mov    0x18(%ebp),%edx
085d2e09 +0x101:  mov    %edx,0xc(%esp)
085d2e0d +0x105:  mov    %ebx,0x8(%esp)
085d2e11 +0x109:  mov    %esi,0x4(%esp)
085d2e15 +0x10d:  mov    %eax,(%esp)
085d2e18 +0x110:  call   086c45aa <_ZN9GameWorld45check_restrictive_commercial_transaction_zoneEiiii>  ; GameWorld::check_restrictive_commercial_transaction_zone(int, int, int, int)
085d2e1d +0x115:  mov    %eax,-0xc(%ebp)
085d2e20 +0x118:  cmpl   $0x0,-0xc(%ebp)
085d2e24 +0x11c:  je     085d2e2e <+0x126>
085d2e26 +0x11e:  mov    -0xc(%ebp),%ebx
085d2e29 +0x121:  jmp    085d3090 <+0x388>
085d2e2e +0x126:  movl   $0x0,0x4(%esp)
085d2e36 +0x12e:  mov    0xc(%ebp),%eax
085d2e39 +0x131:  mov    %eax,(%esp)
085d2e3c +0x134:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d2e41 +0x139:  mov    %eax,(%esp)
085d2e44 +0x13c:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d2e49 +0x141:  test   %eax,%eax
085d2e4b +0x143:  setle  %al
085d2e4e +0x146:  test   %al,%al
085d2e50 +0x148:  je     085d2e5c <+0x154>
085d2e52 +0x14a:  mov    $0x16,%ebx
085d2e57 +0x14f:  jmp    085d3090 <+0x388>
085d2e5c +0x154:  movl   $0x0,0x4(%esp)
085d2e64 +0x15c:  mov    0xc(%ebp),%eax
085d2e67 +0x15f:  mov    %eax,(%esp)
085d2e6a +0x162:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d2e6f +0x167:  mov    %eax,(%esp)
085d2e72 +0x16a:  call   085d3e8e <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x383>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x383
085d2e77 +0x16f:  movsbl %al,%eax
085d2e7a +0x172:  mov    0x1c(%ebp),%edx
085d2e7d +0x175:  mov    %edx,0x18(%esp)
085d2e81 +0x179:  mov    0x18(%ebp),%edx
085d2e84 +0x17c:  mov    %edx,0x14(%esp)
085d2e88 +0x180:  mov    %eax,0x10(%esp)
085d2e8c +0x184:  mov    0x14(%ebp),%eax
085d2e8f +0x187:  mov    %eax,0xc(%esp)
085d2e93 +0x18b:  mov    0x10(%ebp),%eax
085d2e96 +0x18e:  mov    %eax,0x8(%esp)
085d2e9a +0x192:  mov    0xc(%ebp),%eax
085d2e9d +0x195:  mov    %eax,0x4(%esp)
085d2ea1 +0x199:  lea    -0x3c(%ebp),%eax
085d2ea4 +0x19c:  mov    %eax,(%esp)
085d2ea7 +0x19f:  call   085d1ae8 <_ZN10expert_job16CDisjointMachineC1EP5CUserPKcicii>  ; expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)
085d2eac +0x1a4:  mov    0x8(%ebp),%eax
085d2eaf +0x1a7:  lea    0x8(%eax),%edx
085d2eb2 +0x1aa:  lea    -0x3c(%ebp),%eax
085d2eb5 +0x1ad:  mov    %eax,0x4(%esp)
085d2eb9 +0x1b1:  mov    %edx,(%esp)
085d2ebc +0x1b4:  call   085d3ed6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x3cb>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x3cb
085d2ec1 +0x1b9:  jmp    085d2ede <+0x1d6>
085d2ec3 +0x1bb:  mov    %edx,%ebx
085d2ec5 +0x1bd:  mov    %eax,%esi
085d2ec7 +0x1bf:  lea    -0x3c(%ebp),%eax
085d2eca +0x1c2:  mov    %eax,(%esp)
085d2ecd +0x1c5:  call   085d3eb6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x3ab>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x3ab
085d2ed2 +0x1ca:  mov    %esi,%eax
085d2ed4 +0x1cc:  mov    %ebx,%edx
085d2ed6 +0x1ce:  mov    %eax,(%esp)
085d2ed9 +0x1d1:  call   08ae3750 <_Unwind_Resume>
085d2ede +0x1d6:  lea    -0x3c(%ebp),%eax
085d2ee1 +0x1d9:  mov    %eax,(%esp)
085d2ee4 +0x1dc:  call   085d3eb6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x3ab>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x3ab
085d2ee9 +0x1e1:  mov    0x1c(%ebp),%eax
085d2eec +0x1e4:  movzwl %ax,%edx
085d2eef +0x1e7:  mov    0x18(%ebp),%eax
085d2ef2 +0x1ea:  movzwl %ax,%eax
085d2ef5 +0x1ed:  movl   $0x0,0xc(%esp)
085d2efd +0x1f5:  mov    %edx,0x8(%esp)
085d2f01 +0x1f9:  mov    %eax,0x4(%esp)
085d2f05 +0x1fd:  mov    0xc(%ebp),%eax
085d2f08 +0x200:  mov    %eax,(%esp)
085d2f0b +0x203:  call   082f0e2a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbae>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbae
085d2f10 +0x208:  mov    0x8(%ebp),%eax
085d2f13 +0x20b:  lea    0x8(%eax),%esi
085d2f16 +0x20e:  movl   $0x0,0x4(%esp)
085d2f1e +0x216:  mov    0xc(%ebp),%eax
085d2f21 +0x219:  mov    %eax,(%esp)
085d2f24 +0x21c:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085d2f29 +0x221:  movzbl %al,%ebx
085d2f2c +0x224:  mov    0xc(%ebp),%eax
085d2f2f +0x227:  mov    %eax,(%esp)
085d2f32 +0x22a:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d2f37 +0x22f:  movzbl %al,%eax
085d2f3a +0x232:  mov    %ebx,0x8(%esp)
085d2f3e +0x236:  mov    %eax,0x4(%esp)
085d2f42 +0x23a:  lea    -0xe(%ebp),%eax
085d2f45 +0x23d:  mov    %eax,(%esp)
085d2f48 +0x240:  call   085cb63a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x350>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x350
085d2f4d +0x245:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
085d2f52 +0x24a:  mov    %esi,0x8(%esp)
085d2f56 +0x24e:  movzwl -0xe(%ebp),%edx
085d2f5a +0x252:  mov    %dx,0x4(%esp)
085d2f5f +0x257:  mov    %eax,(%esp)
085d2f62 +0x25a:  call   086b6f58 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE>  ; village_object::CVillageObjectMgr::register_object(village_object::Zone, village_object::IObject*)
085d2f67 +0x25f:  xor    $0x1,%eax
085d2f6a +0x262:  test   %al,%al
085d2f6c +0x264:  je     085d2f78 <+0x270>
085d2f6e +0x266:  mov    $0x14,%ebx
085d2f73 +0x26b:  jmp    085d3090 <+0x388>
085d2f78 +0x270:  lea    -0x48(%ebp),%eax
085d2f7b +0x273:  mov    %eax,(%esp)
085d2f7e +0x276:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d2f83 +0x27b:  movl   $0xce,0x8(%esp)
085d2f8b +0x283:  movl   $0x0,0x4(%esp)
085d2f93 +0x28b:  lea    -0x48(%ebp),%eax
085d2f96 +0x28e:  mov    %eax,(%esp)
085d2f99 +0x291:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d2f9e +0x296:  mov    0x8(%ebp),%eax
085d2fa1 +0x299:  lea    0x8(%eax),%edx
085d2fa4 +0x29c:  lea    -0x48(%ebp),%eax
085d2fa7 +0x29f:  mov    %eax,0x4(%esp)
085d2fab +0x2a3:  mov    %edx,(%esp)
085d2fae +0x2a6:  call   085d1bc0 <_ZN10expert_job16CDisjointMachine25put_disjoint_machine_infoER11PacketGuard>  ; expert_job::CDisjointMachine::put_disjoint_machine_info(PacketGuard&)
085d2fb3 +0x2ab:  movl   $0x1,0x4(%esp)
085d2fbb +0x2b3:  lea    -0x48(%ebp),%eax
085d2fbe +0x2b6:  mov    %eax,(%esp)
085d2fc1 +0x2b9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d2fc6 +0x2be:  movl   $0x0,0x4(%esp)
085d2fce +0x2c6:  mov    0xc(%ebp),%eax
085d2fd1 +0x2c9:  mov    %eax,(%esp)
085d2fd4 +0x2cc:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085d2fd9 +0x2d1:  mov    %eax,%ebx
085d2fdb +0x2d3:  mov    0xc(%ebp),%eax
085d2fde +0x2d6:  mov    %eax,(%esp)
085d2fe1 +0x2d9:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d2fe6 +0x2de:  movsbl %al,%esi
085d2fe9 +0x2e1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d2fee +0x2e6:  lea    -0x48(%ebp),%edx
085d2ff1 +0x2e9:  mov    %edx,0xc(%esp)
085d2ff5 +0x2ed:  mov    %ebx,0x8(%esp)
085d2ff9 +0x2f1:  mov    %esi,0x4(%esp)
085d2ffd +0x2f5:  mov    %eax,(%esp)
085d3000 +0x2f8:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
085d3005 +0x2fd:  lea    -0x48(%ebp),%eax
085d3008 +0x300:  mov    %eax,(%esp)
085d300b +0x303:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085d3010 +0x308:  movl   $0xee,0x8(%esp)
085d3018 +0x310:  movl   $0x1,0x4(%esp)
085d3020 +0x318:  lea    -0x48(%ebp),%eax
085d3023 +0x31b:  mov    %eax,(%esp)
085d3026 +0x31e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d302b +0x323:  movl   $0x1,0x4(%esp)
085d3033 +0x32b:  lea    -0x48(%ebp),%eax
085d3036 +0x32e:  mov    %eax,(%esp)
085d3039 +0x331:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d303e +0x336:  movl   $0x1,0x4(%esp)
085d3046 +0x33e:  lea    -0x48(%ebp),%eax
085d3049 +0x341:  mov    %eax,(%esp)
085d304c +0x344:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d3051 +0x349:  lea    -0x48(%ebp),%eax
085d3054 +0x34c:  mov    %eax,0x4(%esp)
085d3058 +0x350:  mov    0xc(%ebp),%eax
085d305b +0x353:  mov    %eax,(%esp)
085d305e +0x356:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d3063 +0x35b:  mov    $0x0,%ebx
085d3068 +0x360:  lea    -0x48(%ebp),%eax
085d306b +0x363:  mov    %eax,(%esp)
085d306e +0x366:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d3073 +0x36b:  jmp    085d3090 <+0x388>
085d3075 +0x36d:  mov    %edx,%ebx
085d3077 +0x36f:  mov    %eax,%esi
085d3079 +0x371:  lea    -0x48(%ebp),%eax
085d307c +0x374:  mov    %eax,(%esp)
085d307f +0x377:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d3084 +0x37c:  mov    %esi,%eax
085d3086 +0x37e:  mov    %ebx,%edx
085d3088 +0x380:  mov    %eax,(%esp)
085d308b +0x383:  call   08ae3750 <_Unwind_Resume>
085d3090 +0x388:  mov    %ebx,%eax
085d3092 +0x38a:  add    $0x60,%esp
085d3095 +0x38d:  pop    %ebx
085d3096 +0x38e:  pop    %esi
085d3097 +0x38f:  pop    %ebp
085d3098 +0x390:  ret
085d3099 +0x391:  nop
```

## 反编译 C

```c
// expert_job::CDisjointer::OnCreateDisjointStore @ 0x85d2d08

/* expert_job::CDisjointer::OnCreateDisjointStore(CUser*, char const*, int, int, int) */

int __thiscall
expert_job::CDisjointer::OnCreateDisjointStore
          (CDisjointer *this,CUser *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  uchar uVar4;
  int iVar5;
  CPrivateStoreMgr *this_00;
  GameWorld *pGVar6;
  CCharacExpertJob *pCVar7;
  undefined2 uVar8;
  PacketGuard local_4c [12];
  CDisjointMachine local_40 [46];
  undefined2 local_12;
  int local_10;
  
  if ((param_3 < 0) || (iVar5 = GetScript(), *(int *)(iVar5 + 0x28c) < param_3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    iVar5 = 10;
  }
  else {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar2 == '\0') {
      cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      if (cVar2 == '\a') {
        iVar5 = 0xbe;
      }
      else {
        iVar5 = CUser::get_area(param_1,false);
        cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
        pGVar6 = (GameWorld *)G_GameWorld();
        cVar2 = GameWorld::is_available_point(pGVar6,(int)cVar2,iVar5,param_4,param_5);
        if (cVar2 == '\x01') {
          iVar5 = CUser::get_area(param_1,false);
          cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
          pGVar6 = (GameWorld *)G_GameWorld();
          iVar5 = GameWorld::check_restrictive_commercial_transaction_zone
                            (pGVar6,(int)cVar2,iVar5,param_4,param_5);
          if (iVar5 == 0) {
            local_10 = iVar5;
            pCVar7 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
            iVar5 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar7);
            if (iVar5 < 1) {
              iVar5 = 0x16;
            }
            else {
              pCVar7 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
              cVar2 = CCharacExpertJob::get_disjoint_machine_grade(pCVar7);
              CDisjointMachine::CDisjointMachine
                        (local_40,param_1,param_2,param_3,cVar2,param_4,param_5);
                    /* try { // try from 085d2ebc to 085d2ec0 has its CatchHandler @ 085d2ec3 */
              CDisjointMachine::operator=((CDisjointMachine *)(this + 8),local_40);
              CDisjointMachine::~CDisjointMachine(local_40);
              CUser::set_position(param_1,(ushort)param_4,(ushort)param_5,'\0');
              uVar3 = CUser::get_area(param_1,false);
              uVar4 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
              uVar8 = 0;
              village_object::Zone::Zone((Zone *)&local_12,uVar4,uVar3);
              cVar2 = village_object::CVillageObjectMgr::register_object
                                (GlobalData::s_villageObjectMgr,CONCAT22(uVar8,local_12),this + 8);
              if (cVar2 == '\x01') {
                PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 085d2f99 to 085d3062 has its CatchHandler @ 085d3075 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0xce);
                CDisjointMachine::put_disjoint_machine_info((CDisjointMachine *)(this + 8),local_4c)
                ;
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
                iVar5 = CUser::get_area(param_1,false);
                cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                pGVar6 = (GameWorld *)G_GameWorld();
                GameWorld::send_to_area(pGVar6,(int)cVar2,iVar5,local_4c);
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_4c);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,1,0xee);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
                CUser::Send(param_1,local_4c);
                iVar5 = 0;
                PacketGuard::~PacketGuard(local_4c);
              }
              else {
                iVar5 = 0x14;
              }
            }
          }
        }
        else {
          iVar5 = 0xbe;
        }
      }
    }
    else {
      iVar5 = 0xbe;
    }
  }
  return iVar5;
}
```
