# reach_game_world

`_ZN9GameWorld16reach_game_worldEP5CUser`

`GameWorld::reach_game_world(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4e50  _ZN9GameWorld16reach_game_worldEP5CUser
#           GameWorld::reach_game_world(CUser*)
# range [0x086c4e50, 0x086c5287]
086c4e50 +0x000:  push   %ebp
086c4e51 +0x001:  mov    %esp,%ebp
086c4e53 +0x003:  push   %esi
086c4e54 +0x004:  push   %ebx
086c4e55 +0x005:  add    $0xffffff80,%esp
086c4e58 +0x008:  mov    0xc(%ebp),%eax
086c4e5b +0x00b:  test   %eax,%eax
086c4e5d +0x00d:  jne    086c4e95 <+0x45>
086c4e5f +0x00f:  movl   $"param pUser is null",0x10(%esp)
086c4e67 +0x017:  movl   $0x509,0xc(%esp)
086c4e6f +0x01f:  movl   $&_ZZN9GameWorld16reach_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c4e77 +0x027:  movl   $"world.cpp",0x4(%esp)
086c4e7f +0x02f:  movl   $0x1,(%esp)
086c4e86 +0x036:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c4e8b +0x03b:  mov    $0x0,%ebx
086c4e90 +0x040:  jmp    086c527b <+0x42b>
086c4e95 +0x045:  call   0807dd70 <_init+0x668>
086c4e9a +0x04a:  movl   $0x0,(%eax)
086c4ea0 +0x050:  lea    -0x50(%ebp),%eax
086c4ea3 +0x053:  mov    %eax,(%esp)
086c4ea6 +0x056:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c4eab +0x05b:  mov    0xc(%ebp),%eax
086c4eae +0x05e:  mov    %eax,(%esp)
086c4eb1 +0x061:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c4eb6 +0x066:  mov    %ax,-0x4a(%ebp)
086c4eba +0x06a:  mov    0x8(%ebp),%eax
086c4ebd +0x06d:  lea    0x134(%eax),%ecx
086c4ec3 +0x073:  lea    -0x5c(%ebp),%eax
086c4ec6 +0x076:  lea    -0x4a(%ebp),%edx
086c4ec9 +0x079:  mov    %edx,0x8(%esp)
086c4ecd +0x07d:  mov    %ecx,0x4(%esp)
086c4ed1 +0x081:  mov    %eax,(%esp)
086c4ed4 +0x084:  call   086d3834 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2065>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2065
086c4ed9 +0x089:  sub    $0x4,%esp
086c4edc +0x08c:  mov    -0x5c(%ebp),%eax
086c4edf +0x08f:  mov    %eax,-0x50(%ebp)
086c4ee2 +0x092:  mov    0x8(%ebp),%eax
086c4ee5 +0x095:  lea    0x134(%eax),%edx
086c4eeb +0x09b:  lea    -0x48(%ebp),%eax
086c4eee +0x09e:  mov    %edx,0x4(%esp)
086c4ef2 +0x0a2:  mov    %eax,(%esp)
086c4ef5 +0x0a5:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c4efa +0x0aa:  sub    $0x4,%esp
086c4efd +0x0ad:  lea    -0x48(%ebp),%eax
086c4f00 +0x0b0:  mov    %eax,0x4(%esp)
086c4f04 +0x0b4:  lea    -0x50(%ebp),%eax
086c4f07 +0x0b7:  mov    %eax,(%esp)
086c4f0a +0x0ba:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c4f0f +0x0bf:  test   %al,%al
086c4f11 +0x0c1:  je     086c4f5b <+0x10b>
086c4f13 +0x0c3:  mov    0xc(%ebp),%eax
086c4f16 +0x0c6:  mov    %eax,(%esp)
086c4f19 +0x0c9:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c4f1e +0x0ce:  movzwl %ax,%eax
086c4f21 +0x0d1:  mov    %eax,0x14(%esp)
086c4f25 +0x0d5:  movl   $"m_UserInWorld.find() fail. uid(%u)",0x10(%esp)
086c4f2d +0x0dd:  movl   $0x515,0xc(%esp)
086c4f35 +0x0e5:  movl   $&_ZZN9GameWorld16reach_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c4f3d +0x0ed:  movl   $"world.cpp",0x4(%esp)
086c4f45 +0x0f5:  movl   $0x1,(%esp)
086c4f4c +0x0fc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c4f51 +0x101:  mov    $0x0,%ebx
086c4f56 +0x106:  jmp    086c527b <+0x42b>
086c4f5b +0x10b:  lea    -0x54(%ebp),%eax
086c4f5e +0x10e:  mov    %eax,(%esp)
086c4f61 +0x111:  call   086d3f34 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2765>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2765
086c4f66 +0x116:  mov    0xc(%ebp),%eax
086c4f69 +0x119:  mov    %eax,(%esp)
086c4f6c +0x11c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c4f71 +0x121:  mov    %eax,-0x44(%ebp)
086c4f74 +0x124:  mov    0x8(%ebp),%eax
086c4f77 +0x127:  lea    0x14c(%eax),%ecx
086c4f7d +0x12d:  lea    -0x5c(%ebp),%eax
086c4f80 +0x130:  lea    -0x44(%ebp),%edx
086c4f83 +0x133:  mov    %edx,0x8(%esp)
086c4f87 +0x137:  mov    %ecx,0x4(%esp)
086c4f8b +0x13b:  mov    %eax,(%esp)
086c4f8e +0x13e:  call   086d3f42 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2773>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2773
086c4f93 +0x143:  sub    $0x4,%esp
086c4f96 +0x146:  mov    -0x5c(%ebp),%eax
086c4f99 +0x149:  mov    %eax,-0x54(%ebp)
086c4f9c +0x14c:  mov    0x8(%ebp),%eax
086c4f9f +0x14f:  lea    0x14c(%eax),%edx
086c4fa5 +0x155:  lea    -0x40(%ebp),%eax
086c4fa8 +0x158:  mov    %edx,0x4(%esp)
086c4fac +0x15c:  mov    %eax,(%esp)
086c4faf +0x15f:  call   086d3f6e <_GLOBAL__I_MAX_VILLAGE_NUM+0x279f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x279f
086c4fb4 +0x164:  sub    $0x4,%esp
086c4fb7 +0x167:  lea    -0x40(%ebp),%eax
086c4fba +0x16a:  mov    %eax,0x4(%esp)
086c4fbe +0x16e:  lea    -0x54(%ebp),%eax
086c4fc1 +0x171:  mov    %eax,(%esp)
086c4fc4 +0x174:  call   086d3fb6 <_GLOBAL__I_MAX_VILLAGE_NUM+0x27e7>  ; global constructors keyed to MAX_VILLAGE_NUM+0x27e7
086c4fc9 +0x179:  test   %al,%al
086c4fcb +0x17b:  je     086c5022 <+0x1d2>
086c4fcd +0x17d:  mov    0xc(%ebp),%eax
086c4fd0 +0x180:  mov    %eax,(%esp)
086c4fd3 +0x183:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c4fd8 +0x188:  movl   $0x0,0x4(%esp)
086c4fe0 +0x190:  mov    %eax,(%esp)
086c4fe3 +0x193:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086c4fe8 +0x198:  mov    %eax,0x14(%esp)
086c4fec +0x19c:  movl   $"session_list.find() fail accid(%s)",0x10(%esp)
086c4ff4 +0x1a4:  movl   $0x51d,0xc(%esp)
086c4ffc +0x1ac:  movl   $&_ZZN9GameWorld16reach_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c5004 +0x1b4:  movl   $"world.cpp",0x4(%esp)
086c500c +0x1bc:  movl   $0x1,(%esp)
086c5013 +0x1c3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c5018 +0x1c8:  mov    $0x0,%ebx
086c501d +0x1cd:  jmp    086c527b <+0x42b>
086c5022 +0x1d2:  mov    0x8(%ebp),%eax
086c5025 +0x1d5:  add    $0x134,%eax
086c502a +0x1da:  mov    %eax,(%esp)
086c502d +0x1dd:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086c5032 +0x1e2:  mov    %eax,-0x10(%ebp)
086c5035 +0x1e5:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086c503a +0x1ea:  mov    0x3c0(%eax),%eax
086c5040 +0x1f0:  mov    %eax,-0xc(%ebp)
086c5043 +0x1f3:  mov    -0x10(%ebp),%eax
086c5046 +0x1f6:  add    $0x1,%eax
086c5049 +0x1f9:  cmp    -0xc(%ebp),%eax
086c504c +0x1fc:  jle    086c5058 <+0x208>
086c504e +0x1fe:  mov    $0x0,%ebx
086c5053 +0x203:  jmp    086c527b <+0x42b>
086c5058 +0x208:  mov    0xc(%ebp),%eax
086c505b +0x20b:  mov    %eax,(%esp)
086c505e +0x20e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c5063 +0x213:  mov    %ax,-0x2a(%ebp)
086c5067 +0x217:  lea    0xc(%ebp),%eax
086c506a +0x21a:  mov    %eax,0x8(%esp)
086c506e +0x21e:  lea    -0x2a(%ebp),%eax
086c5071 +0x221:  mov    %eax,0x4(%esp)
086c5075 +0x225:  lea    -0x34(%ebp),%eax
086c5078 +0x228:  mov    %eax,(%esp)
086c507b +0x22b:  call   086d3860 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2091>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2091
086c5080 +0x230:  mov    0x8(%ebp),%eax
086c5083 +0x233:  lea    0x134(%eax),%ecx
086c5089 +0x239:  lea    -0x3c(%ebp),%eax
086c508c +0x23c:  lea    -0x34(%ebp),%edx
086c508f +0x23f:  mov    %edx,0x8(%esp)
086c5093 +0x243:  mov    %ecx,0x4(%esp)
086c5097 +0x247:  mov    %eax,(%esp)
086c509a +0x24a:  call   086d3890 <_GLOBAL__I_MAX_VILLAGE_NUM+0x20c1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x20c1
086c509f +0x24f:  sub    $0x4,%esp
086c50a2 +0x252:  mov    0xc(%ebp),%eax
086c50a5 +0x255:  mov    %eax,(%esp)
086c50a8 +0x258:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c50ad +0x25d:  mov    %eax,-0x28(%ebp)
086c50b0 +0x260:  mov    0x8(%ebp),%eax
086c50b3 +0x263:  lea    0x14c(%eax),%edx
086c50b9 +0x269:  lea    -0x28(%ebp),%eax
086c50bc +0x26c:  mov    %eax,0x4(%esp)
086c50c0 +0x270:  mov    %edx,(%esp)
086c50c3 +0x273:  call   086d3fca <_GLOBAL__I_MAX_VILLAGE_NUM+0x27fb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x27fb
086c50c8 +0x278:  mov    %eax,%ebx
086c50ca +0x27a:  mov    0xc(%ebp),%eax
086c50cd +0x27d:  mov    %eax,(%esp)
086c50d0 +0x280:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c50d5 +0x285:  mov    %ax,(%ebx)
086c50d8 +0x288:  mov    0xc(%ebp),%eax
086c50db +0x28b:  mov    %eax,0x4(%esp)
086c50df +0x28f:  mov    0x8(%ebp),%eax
086c50e2 +0x292:  mov    %eax,(%esp)
086c50e5 +0x295:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c50ea +0x29a:  mov    %eax,-0x14(%ebp)
086c50ed +0x29d:  cmpl   $0x0,-0x14(%ebp)
086c50f1 +0x2a1:  jne    086c5163 <+0x313>
086c50f3 +0x2a3:  jmp    086c517f <+0x32f>
086c50f8 +0x2a8:  mov    %eax,(%esp)
086c50fb +0x2ab:  call   08725ce0 <__cxa_begin_catch>
086c5100 +0x2b0:  call   0807dd70 <_init+0x668>
086c5105 +0x2b5:  mov    (%eax),%eax
086c5107 +0x2b7:  mov    %eax,(%esp)
086c510a +0x2ba:  call   0807d730 <_init+0x28>
086c510f +0x2bf:  mov    %eax,0x14(%esp)
086c5113 +0x2c3:  movl   $"[EXCEPTION insert_user In GameWorld] - code = %s\n",0x10(%esp)
086c511b +0x2cb:  movl   $0x52d,0xc(%esp)
086c5123 +0x2d3:  movl   $&_ZZN9GameWorld16reach_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c512b +0x2db:  movl   $"world.cpp",0x4(%esp)
086c5133 +0x2e3:  movl   $0x1,(%esp)
086c513a +0x2ea:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c513f +0x2ef:  mov    $0x0,%ebx
086c5144 +0x2f4:  call   08725c30 <__cxa_end_catch>
086c5149 +0x2f9:  jmp    086c527b <+0x42b>
086c514e +0x2fe:  mov    %edx,%ebx
086c5150 +0x300:  mov    %eax,%esi
086c5152 +0x302:  call   08725c30 <__cxa_end_catch>
086c5157 +0x307:  mov    %esi,%eax
086c5159 +0x309:  mov    %ebx,%edx
086c515b +0x30b:  mov    %eax,(%esp)
086c515e +0x30e:  call   08ae3750 <_Unwind_Resume>
086c5163 +0x313:  mov    -0x14(%ebp),%eax
086c5166 +0x316:  mov    %eax,(%esp)
086c5169 +0x319:  call   086c3b58 <_ZN7Village13get_gate_areaEv>  ; Village::get_gate_area()
086c516e +0x31e:  mov    0xc(%ebp),%edx
086c5171 +0x321:  mov    %eax,0x4(%esp)
086c5175 +0x325:  mov    %edx,(%esp)
086c5178 +0x328:  call   08647864 <_ZN5CUser8set_areaEi>  ; CUser::set_area(int)
086c517d +0x32d:  jmp    086c51c7 <+0x377>
086c517f +0x32f:  mov    0xc(%ebp),%eax
086c5182 +0x332:  mov    %eax,(%esp)
086c5185 +0x335:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c518a +0x33a:  movsbl %al,%ebx
086c518d +0x33d:  movl   $0x5,0xc(%esp)
086c5195 +0x345:  movl   $0x538,0x8(%esp)
086c519d +0x34d:  movl   $&_ZZN9GameWorld16reach_game_worldEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c51a5 +0x355:  lea    -0x24(%ebp),%eax
086c51a8 +0x358:  mov    %eax,(%esp)
086c51ab +0x35b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c51b0 +0x360:  mov    %ebx,0x8(%esp)
086c51b4 +0x364:  movl   $"getUserVillage %d",0x4(%esp)
086c51bc +0x36c:  lea    -0x24(%ebp),%eax
086c51bf +0x36f:  mov    %eax,(%esp)
086c51c2 +0x372:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c51c7 +0x377:  mov    0xc(%ebp),%eax
086c51ca +0x37a:  movl   $0x3,0x4(%esp)
086c51d2 +0x382:  mov    %eax,(%esp)
086c51d5 +0x385:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c51da +0x38a:  mov    0xc(%ebp),%eax
086c51dd +0x38d:  mov    %eax,0x4(%esp)
086c51e1 +0x391:  mov    0x8(%ebp),%eax
086c51e4 +0x394:  mov    %eax,(%esp)
086c51e7 +0x397:  call   086cf602 <_ZN9GameWorld14EraseLoginUserEP5CUser>  ; GameWorld::EraseLoginUser(CUser*)
086c51ec +0x39c:  mov    0xc(%ebp),%eax
086c51ef +0x39f:  mov    %eax,0x4(%esp)
086c51f3 +0x3a3:  mov    0x8(%ebp),%eax
086c51f6 +0x3a6:  mov    %eax,(%esp)
086c51f9 +0x3a9:  call   086c83fc <_ZN9GameWorld17send_AllBasicInfoEP5CUser>  ; GameWorld::send_AllBasicInfo(CUser*)
086c51fe +0x3ae:  mov    0xc(%ebp),%eax
086c5201 +0x3b1:  mov    %eax,(%esp)
086c5204 +0x3b4:  call   0865c65c <_ZN5CUser24IsPermissionPrivateStoreEv>  ; CUser::IsPermissionPrivateStore()
086c5209 +0x3b9:  test   %al,%al
086c520b +0x3bb:  je     086c5227 <+0x3d7>
086c520d +0x3bd:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
086c5212 +0x3c2:  mov    (%eax),%edx
086c5214 +0x3c4:  add    $0x4,%edx
086c5217 +0x3c7:  mov    (%edx),%ecx
086c5219 +0x3c9:  mov    0xc(%ebp),%edx
086c521c +0x3cc:  mov    %edx,0x4(%esp)
086c5220 +0x3d0:  mov    %eax,(%esp)
086c5223 +0x3d3:  call   *%ecx
086c5225 +0x3d5:  jmp    086c523b <+0x3eb>
086c5227 +0x3d7:  mov    0xc(%ebp),%ebx
086c522a +0x3da:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
086c522f +0x3df:  mov    %ebx,0x4(%esp)
086c5233 +0x3e3:  mov    %eax,(%esp)
086c5236 +0x3e6:  call   085cab24 <_ZN13private_store16CPrivateStoreMgr16LoadPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::LoadPrivateStore(CUser*)
086c523b +0x3eb:  mov    0xc(%ebp),%eax
086c523e +0x3ee:  mov    %eax,(%esp)
086c5241 +0x3f1:  call   084ec9b8 <_GLOBAL__I__Z7getUserj+0x396a>  ; global constructors keyed to getUser(unsigned int)+0x396a
086c5246 +0x3f6:  test   %al,%al
086c5248 +0x3f8:  je     086c5261 <+0x411>
086c524a +0x3fa:  mov    0x8(%ebp),%eax
086c524d +0x3fd:  mov    0x194(%eax),%eax
086c5253 +0x403:  lea    0x1(%eax),%edx
086c5256 +0x406:  mov    0x8(%ebp),%eax
086c5259 +0x409:  mov    %edx,0x194(%eax)
086c525f +0x40f:  jmp    086c5276 <+0x426>
086c5261 +0x411:  mov    0x8(%ebp),%eax
086c5264 +0x414:  mov    0x190(%eax),%eax
086c526a +0x41a:  lea    0x1(%eax),%edx
086c526d +0x41d:  mov    0x8(%ebp),%eax
086c5270 +0x420:  mov    %edx,0x190(%eax)
086c5276 +0x426:  mov    $0x1,%ebx
086c527b +0x42b:  mov    %ebx,%eax
086c527d +0x42d:  lea    -0x8(%ebp),%esp
086c5280 +0x430:  add    $0x0,%esp
086c5283 +0x433:  pop    %ebx
086c5284 +0x434:  pop    %esi
086c5285 +0x435:  pop    %ebp
086c5286 +0x436:  ret
086c5287 +0x437:  nop
```

## 反编译 C

```c
// GameWorld::reach_game_world @ 0x86c4e50

/* GameWorld::reach_game_world(CUser*) */

undefined4 __thiscall GameWorld::reach_game_world(GameWorld *this,CUser *param_1)

{
  CUser *pCVar1;
  char cVar2;
  undefined2 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  CPrivateStoreMgr *this_00;
  undefined4 uVar8;
  uint local_60 [2];
  uint local_58;
  uint local_54;
  undefined2 local_4e;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_4c [4];
  undefined4 local_48;
  map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  local_44 [4];
  pair local_40 [8];
  pair<unsigned_short_const,CUser*> local_38 [10];
  ushort local_2e;
  uint local_2c;
  cMyTrace local_28 [16];
  Village *local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"world.cpp","bool GameWorld::reach_game_world(CUser*)",0x509,"param pUser is null")
    ;
    uVar8 = 0;
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0;
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_54);
    local_4e = CUser::get_unique_id(param_1);
                    /* try { // try from 086c4ed4 to 086c50c7 has its CatchHandler @ 086c50f8 */
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::find((ushort *)local_60);
    local_54 = local_60[0];
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_4c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_54,
                       (_Rb_tree_iterator *)local_4c);
    if (cVar2 == '\0') {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>>::_Rb_tree_iterator
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>> *)&local_58);
      local_48 = CUser::get_acc_id(param_1);
      std::
      map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
      ::find(local_60);
      local_58 = local_60[0];
      std::
      map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
      ::end(local_44);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>> *)
                         &local_58,(_Rb_tree_iterator *)local_44);
      if (cVar2 == '\0') {
        local_14 = std::
                   map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                   ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                           *)(this + 0x134));
        iVar6 = G_CEnvironment();
        local_10 = *(int *)(iVar6 + 0x3c0);
        if (local_10 < local_14 + 1) {
          uVar8 = 0;
        }
        else {
          local_2e = CUser::get_unique_id(param_1);
          std::pair<unsigned_short_const,CUser*>::pair<unsigned_short,CUser*&>
                    (local_38,&local_2e,&param_1);
          std::
          map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          ::insert(local_40);
          local_2c = CUser::get_acc_id(param_1);
          puVar7 = (undefined2 *)
                   std::
                   map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                   ::operator[]((map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                                 *)(this + 0x14c),&local_2c);
          uVar3 = CUser::get_unique_id(param_1);
          *puVar7 = uVar3;
          local_18 = (Village *)getUserVillage(this,param_1);
          if (local_18 == (Village *)0x0) {
            cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
            cMyTrace::cMyTrace(local_28,"bool GameWorld::reach_game_world(CUser*)",0x538,5);
            cMyTrace::operator()(local_28,"getUserVillage %d",(int)cVar2);
          }
          else {
            iVar6 = Village::get_gate_area(local_18);
            CUser::set_area(param_1,iVar6);
          }
          CUser::set_state(param_1,3);
          EraseLoginUser(this,param_1);
          send_AllBasicInfo(this,param_1);
          cVar2 = CUser::IsPermissionPrivateStore(param_1);
          pCVar1 = param_1;
          if (cVar2 == '\0') {
            this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
            private_store::CPrivateStoreMgr::LoadPrivateStore(this_00,pCVar1);
          }
          else {
            piVar4 = (int *)private_store::GetInstancePrivateStoreMgr();
            (**(code **)(*piVar4 + 4))(piVar4,param_1);
          }
          cVar2 = CUser::isHangameUser(param_1);
          if (cVar2 == '\0') {
            *(int *)(this + 400) = *(int *)(this + 400) + 1;
          }
          else {
            *(int *)(this + 0x194) = *(int *)(this + 0x194) + 1;
          }
          uVar8 = 1;
        }
      }
      else {
        uVar5 = CUser::get_acc_id(param_1);
        uVar8 = NumberToString(uVar5,0);
        LogManager::logFormat
                  (1,"world.cpp","bool GameWorld::reach_game_world(CUser*)",0x51d,
                   "session_list.find() fail accid(%s)",uVar8);
        uVar8 = 0;
      }
    }
    else {
      uVar5 = CUser::get_unique_id(param_1);
      LogManager::logFormat
                (1,"world.cpp","bool GameWorld::reach_game_world(CUser*)",0x515,
                 "m_UserInWorld.find() fail. uid(%u)",uVar5 & 0xffff);
      uVar8 = 0;
    }
  }
  return uVar8;
}
```
