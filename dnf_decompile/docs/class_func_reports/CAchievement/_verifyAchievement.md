# _verifyAchievement

`_ZN12CAchievement18_verifyAchievementEj`

`CAchievement::_verifyAchievement(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828d092` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828d092  _ZN12CAchievement18_verifyAchievementEj
#           CAchievement::_verifyAchievement(unsigned int)
# range [0x0828d092, 0x0828d337]
0828d092 +0x000:  push   %ebp
0828d093 +0x001:  mov    %esp,%ebp
0828d095 +0x003:  push   %ebx
0828d096 +0x004:  sub    $0x54,%esp
0828d099 +0x007:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828d09e +0x00c:  lea    0xa7a0(%eax),%edx
0828d0a4 +0x012:  lea    -0x38(%ebp),%eax
0828d0a7 +0x015:  mov    %edx,0x4(%esp)
0828d0ab +0x019:  mov    %eax,(%esp)
0828d0ae +0x01c:  call   0828e232 <_GLOBAL__I__ZN12CAchievementC2Ev+0x9df>  ; global constructors keyed to CAchievement::CAchievement()+0x9df
0828d0b3 +0x021:  sub    $0x4,%esp
0828d0b6 +0x024:  movl   $0x0,-0x30(%ebp)
0828d0bd +0x02b:  movl   $0x0,-0x2c(%ebp)
0828d0c4 +0x032:  movl   $0x0,-0x28(%ebp)
0828d0cb +0x039:  movl   $0x0,-0x24(%ebp)
0828d0d2 +0x040:  movl   $0x4,-0x20(%ebp)
0828d0d9 +0x047:  jmp    0828d1fe <+0x16c>
0828d0de +0x04c:  movl   $0x0,-0x14(%ebp)
0828d0e5 +0x053:  jmp    0828d1cf <+0x13d>
0828d0ea +0x058:  lea    -0x38(%ebp),%eax
0828d0ed +0x05b:  mov    %eax,(%esp)
0828d0f0 +0x05e:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
0828d0f5 +0x063:  lea    0x4(%eax),%edx
0828d0f8 +0x066:  mov    -0x14(%ebp),%eax
0828d0fb +0x069:  mov    %eax,0x4(%esp)
0828d0ff +0x06d:  mov    %edx,(%esp)
0828d102 +0x070:  call   0828e112 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8bf>  ; global constructors keyed to CAchievement::CAchievement()+0x8bf
0828d107 +0x075:  mov    0x1c(%eax),%eax
0828d10a +0x078:  mov    %eax,-0x30(%ebp)
0828d10d +0x07b:  cmpl   $0xffffffff,-0x30(%ebp)
0828d111 +0x07f:  je     0828d1cb <+0x139>
0828d117 +0x085:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828d11c +0x08a:  mov    -0x30(%ebp),%edx
0828d11f +0x08d:  mov    %edx,0x4(%esp)
0828d123 +0x091:  mov    %eax,(%esp)
0828d126 +0x094:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828d12b +0x099:  mov    %eax,-0x10(%ebp)
0828d12e +0x09c:  cmpl   $0x0,-0x10(%ebp)
0828d132 +0x0a0:  je     0828d1c7 <+0x135>
0828d138 +0x0a6:  mov    -0x10(%ebp),%eax
0828d13b +0x0a9:  mov    0x8(%eax),%eax
0828d13e +0x0ac:  cmp    $0x7,%eax
0828d141 +0x0af:  jne    0828d162 <+0xd0>
0828d143 +0x0b1:  mov    -0x10(%ebp),%eax
0828d146 +0x0b4:  mov    0x7c(%eax),%eax
0828d149 +0x0b7:  cmp    $0xc,%eax
0828d14c +0x0ba:  jne    0828d162 <+0xd0>
0828d14e +0x0bc:  mov    -0x10(%ebp),%eax
0828d151 +0x0bf:  add    $0x84,%eax
0828d156 +0x0c4:  mov    %eax,(%esp)
0828d159 +0x0c7:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0828d15e +0x0cc:  test   %eax,%eax
0828d160 +0x0ce:  jne    0828d169 <+0xd7>
0828d162 +0x0d0:  mov    $0x1,%eax
0828d167 +0x0d5:  jmp    0828d16e <+0xdc>
0828d169 +0x0d7:  mov    $0x0,%eax
0828d16e +0x0dc:  test   %al,%al
0828d170 +0x0de:  jne    0828d1ca <+0x138>
0828d172 +0x0e0:  mov    -0x10(%ebp),%eax
0828d175 +0x0e3:  add    $0x84,%eax
0828d17a +0x0e8:  movl   $0x0,0x4(%esp)
0828d182 +0x0f0:  mov    %eax,(%esp)
0828d185 +0x0f3:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
0828d18a +0x0f8:  mov    (%eax),%eax
0828d18c +0x0fa:  mov    %eax,-0x2c(%ebp)
0828d18f +0x0fd:  mov    -0x2c(%ebp),%ebx
0828d192 +0x100:  mov    0x8(%ebp),%eax
0828d195 +0x103:  mov    0x8(%eax),%eax
0828d198 +0x106:  mov    %eax,(%esp)
0828d19b +0x109:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0828d1a0 +0x10e:  add    $0x4,%eax
0828d1a3 +0x111:  mov    %ebx,0x4(%esp)
0828d1a7 +0x115:  mov    %eax,(%esp)
0828d1aa +0x118:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
0828d1af +0x11d:  test   %al,%al
0828d1b1 +0x11f:  je     0828d1cb <+0x139>
0828d1b3 +0x121:  mov    -0x30(%ebp),%eax
0828d1b6 +0x124:  mov    %eax,0x4(%esp)
0828d1ba +0x128:  mov    0x8(%ebp),%eax
0828d1bd +0x12b:  mov    %eax,(%esp)
0828d1c0 +0x12e:  call   0828cc56 <_ZN12CAchievement11_forceClearEj>  ; CAchievement::_forceClear(unsigned int)
0828d1c5 +0x133:  jmp    0828d1cb <+0x139>
0828d1c7 +0x135:  nop
0828d1c8 +0x136:  jmp    0828d1cb <+0x139>
0828d1ca +0x138:  nop
0828d1cb +0x139:  addl   $0x1,-0x14(%ebp)
0828d1cf +0x13d:  lea    -0x38(%ebp),%eax
0828d1d2 +0x140:  mov    %eax,(%esp)
0828d1d5 +0x143:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
0828d1da +0x148:  add    $0x4,%eax
0828d1dd +0x14b:  mov    %eax,(%esp)
0828d1e0 +0x14e:  call   0828e258 <_GLOBAL__I__ZN12CAchievementC2Ev+0xa05>  ; global constructors keyed to CAchievement::CAchievement()+0xa05
0828d1e5 +0x153:  cmp    -0x14(%ebp),%eax
0828d1e8 +0x156:  seta   %al
0828d1eb +0x159:  test   %al,%al
0828d1ed +0x15b:  jne    0828d0ea <+0x58>
0828d1f3 +0x161:  lea    -0x38(%ebp),%eax
0828d1f6 +0x164:  mov    %eax,(%esp)
0828d1f9 +0x167:  call   0828e27a <_GLOBAL__I__ZN12CAchievementC2Ev+0xa27>  ; global constructors keyed to CAchievement::CAchievement()+0xa27
0828d1fe +0x16c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828d203 +0x171:  lea    0xa7a0(%eax),%edx
0828d209 +0x177:  lea    -0x34(%ebp),%eax
0828d20c +0x17a:  mov    %edx,0x4(%esp)
0828d210 +0x17e:  mov    %eax,(%esp)
0828d213 +0x181:  call   0828dfb8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x765>  ; global constructors keyed to CAchievement::CAchievement()+0x765
0828d218 +0x186:  sub    $0x4,%esp
0828d21b +0x189:  lea    -0x34(%ebp),%eax
0828d21e +0x18c:  mov    %eax,0x4(%esp)
0828d222 +0x190:  lea    -0x38(%ebp),%eax
0828d225 +0x193:  mov    %eax,(%esp)
0828d228 +0x196:  call   0828dfde <_GLOBAL__I__ZN12CAchievementC2Ev+0x78b>  ; global constructors keyed to CAchievement::CAchievement()+0x78b
0828d22d +0x19b:  test   %al,%al
0828d22f +0x19d:  jne    0828d0de <+0x4c>
0828d235 +0x1a3:  movl   $0x1983,-0x40(%ebp)
0828d23c +0x1aa:  movl   $0x198b,-0x3c(%ebp)
0828d243 +0x1b1:  mov    0x8(%ebp),%eax
0828d246 +0x1b4:  mov    0x8(%eax),%eax
0828d249 +0x1b7:  mov    %eax,(%esp)
0828d24c +0x1ba:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0828d251 +0x1bf:  cmp    $0x45,%eax
0828d254 +0x1c2:  setle  %al
0828d257 +0x1c5:  test   %al,%al
0828d259 +0x1c7:  je     0828d28b <+0x1f9>
0828d25b +0x1c9:  movl   $0x0,-0xc(%ebp)
0828d262 +0x1d0:  jmp    0828d27e <+0x1ec>
0828d264 +0x1d2:  mov    -0xc(%ebp),%eax
0828d267 +0x1d5:  mov    -0x40(%ebp,%eax,4),%eax
0828d26b +0x1d9:  mov    %eax,0x4(%esp)
0828d26f +0x1dd:  mov    0x8(%ebp),%eax
0828d272 +0x1e0:  mov    %eax,(%esp)
0828d275 +0x1e3:  call   0828ce40 <_ZN12CAchievement11_forceResetEj>  ; CAchievement::_forceReset(unsigned int)
0828d27a +0x1e8:  addl   $0x1,-0xc(%ebp)
0828d27e +0x1ec:  cmpl   $0x1,-0xc(%ebp)
0828d282 +0x1f0:  setle  %al
0828d285 +0x1f3:  test   %al,%al
0828d287 +0x1f5:  jne    0828d264 <+0x1d2>
0828d289 +0x1f7:  jmp    0828d2b6 <+0x224>
0828d28b +0x1f9:  mov    0x8(%ebp),%eax
0828d28e +0x1fc:  mov    0x8(%eax),%eax
0828d291 +0x1ff:  mov    %eax,(%esp)
0828d294 +0x202:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0828d299 +0x207:  cmp    $0x45,%eax
0828d29c +0x20a:  setg   %al
0828d29f +0x20d:  test   %al,%al
0828d2a1 +0x20f:  je     0828d2b6 <+0x224>
0828d2a3 +0x211:  movl   $0x1983,0x4(%esp)
0828d2ab +0x219:  mov    0x8(%ebp),%eax
0828d2ae +0x21c:  mov    %eax,(%esp)
0828d2b1 +0x21f:  call   0828cc56 <_ZN12CAchievement11_forceClearEj>  ; CAchievement::_forceClear(unsigned int)
0828d2b6 +0x224:  movl   $0x83,-0x48(%ebp)
0828d2bd +0x22b:  movl   $0x87,-0x44(%ebp)
0828d2c4 +0x232:  movl   $0x19c0,-0x1c(%ebp)
0828d2cb +0x239:  mov    0x8(%ebp),%eax
0828d2ce +0x23c:  mov    0x8(%eax),%eax
0828d2d1 +0x23f:  movl   $0x8,0x4(%esp)
0828d2d9 +0x247:  mov    %eax,(%esp)
0828d2dc +0x24a:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
0828d2e1 +0x24f:  mov    %eax,-0x18(%ebp)
0828d2e4 +0x252:  mov    -0x48(%ebp),%eax
0828d2e7 +0x255:  mov    %eax,0x4(%esp)
0828d2eb +0x259:  mov    -0x18(%ebp),%eax
0828d2ee +0x25c:  mov    %eax,(%esp)
0828d2f1 +0x25f:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
0828d2f6 +0x264:  test   %al,%al
0828d2f8 +0x266:  jne    0828d310 <+0x27e>
0828d2fa +0x268:  mov    -0x44(%ebp),%eax
0828d2fd +0x26b:  mov    %eax,0x4(%esp)
0828d301 +0x26f:  mov    -0x18(%ebp),%eax
0828d304 +0x272:  mov    %eax,(%esp)
0828d307 +0x275:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
0828d30c +0x27a:  test   %al,%al
0828d30e +0x27c:  je     0828d317 <+0x285>
0828d310 +0x27e:  mov    $0x1,%eax
0828d315 +0x283:  jmp    0828d31c <+0x28a>
0828d317 +0x285:  mov    $0x0,%eax
0828d31c +0x28a:  test   %al,%al
0828d31e +0x28c:  je     0828d332 <+0x2a0>
0828d320 +0x28e:  mov    -0x1c(%ebp),%eax
0828d323 +0x291:  mov    %eax,0x4(%esp)
0828d327 +0x295:  mov    0x8(%ebp),%eax
0828d32a +0x298:  mov    %eax,(%esp)
0828d32d +0x29b:  call   0828cc56 <_ZN12CAchievement11_forceClearEj>  ; CAchievement::_forceClear(unsigned int)
0828d332 +0x2a0:  mov    -0x4(%ebp),%ebx
0828d335 +0x2a3:  leave
0828d336 +0x2a4:  ret
0828d337 +0x2a5:  nop
```

## 反编译 C

```c
// CAchievement::_verifyAchievement @ 0x828d092

/* CAchievement::_verifyAchievement(unsigned int) */

void CAchievement::_verifyAchievement(uint param_1)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_3c [4];
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_38 [4];
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  CMissionList_Charac *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::begin(local_3c);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 4;
  while( true ) {
    G_CDataManager();
    std::
    map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
    ::end(local_38);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                          *)local_3c,(_Rb_tree_iterator *)local_38);
    if (cVar2 == '\0') break;
    local_18 = 0;
    while( true ) {
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)local_3c);
      uVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)(iVar5 + 4));
      if (uVar4 <= local_18) break;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)local_3c);
      iVar5 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)(iVar5 + 4),
                         local_18);
      local_34 = *(uint *)(iVar5 + 0x1c);
      if (local_34 != 0xffffffff) {
        iVar5 = G_CDataManager();
        local_14 = CDataManager::find_quest(iVar5);
        if (local_14 != 0) {
          if (((*(int *)(local_14 + 8) == 7) && (*(int *)(local_14 + 0x7c) == 0xc)) &&
             (iVar5 = std::vector<int,std::allocator<int>>::size
                                ((vector<int,std::allocator<int>> *)(local_14 + 0x84)), iVar5 != 0))
          {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            puVar3 = (uint *)std::vector<int,std::allocator<int>>::operator[]
                                       ((vector<int,std::allocator<int>> *)(local_14 + 0x84),0);
            uVar4 = *puVar3;
            local_30 = uVar4;
            iVar5 = CUser::getCurCharacQuestR(*(CUser **)(param_1 + 8));
            cVar2 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar5 + 4),uVar4);
            if (cVar2 != '\0') {
              _forceClear((CAchievement *)param_1,local_34);
            }
          }
        }
      }
      local_18 = local_18 + 1;
    }
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                  *)local_3c);
  }
  iVar5 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(param_1 + 8));
  if (iVar5 < 0x46) {
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      _forceReset(param_1);
    }
  }
  else {
    iVar5 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(param_1 + 8));
    if (0x45 < iVar5) {
      _forceClear((CAchievement *)param_1,0x1983);
    }
  }
  local_20 = 0x19c0;
  local_1c = (CMissionList_Charac *)CUser::GetCharacExpandDataR(*(CUser **)(param_1 + 8),8);
  cVar2 = CMissionList_Charac::isClearMission(local_1c,0x83);
  if ((cVar2 == '\0') && (cVar2 = CMissionList_Charac::isClearMission(local_1c,0x87), cVar2 == '\0')
     ) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    _forceClear((CAchievement *)param_1,local_20);
  }
  return;
}
```
