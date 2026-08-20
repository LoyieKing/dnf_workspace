# Select

`_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE`

`APSystem::DB_LoadRewardMedal::Select(APSystem::_SIG_LOAD_REWARD_MEDAL&)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_LoadRewardMedal` | `0x08124910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124910  _ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE
#           APSystem::DB_LoadRewardMedal::Select(APSystem::_SIG_LOAD_REWARD_MEDAL&)
# range [0x08124910, 0x08124b8d]
08124910 +0x000:  push   %ebp
08124911 +0x001:  mov    %esp,%ebp
08124913 +0x003:  push   %ebx
08124914 +0x004:  sub    $0xc4,%esp
0812491a +0x00a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0812491f +0x00f:  movl   $0x0,0x8(%esp)
08124927 +0x017:  movl   $0x2,0x4(%esp)
0812492f +0x01f:  mov    %eax,(%esp)
08124932 +0x022:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08124937 +0x027:  mov    %eax,-0x24(%ebp)
0812493a +0x02a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0812493f +0x02f:  mov    0x37c(%eax),%eax
08124945 +0x035:  mov    %eax,-0x20(%ebp)
08124948 +0x038:  movl   $0x0,0x8(%esp)
08124950 +0x040:  movl   $0x0,0x4(%esp)
08124958 +0x048:  mov    -0x20(%ebp),%eax
0812495b +0x04b:  mov    %eax,(%esp)
0812495e +0x04e:  call   086b1f5a <_Z22getDailyInitializeTimeiii>  ; getDailyInitializeTime(int, int, int)
08124963 +0x053:  mov    %eax,-0x28(%ebp)
08124966 +0x056:  mov    -0x28(%ebp),%eax
08124969 +0x059:  sub    $0x93a80,%eax
0812496e +0x05e:  mov    %eax,-0x2c(%ebp)
08124971 +0x061:  lea    -0x78(%ebp),%eax
08124974 +0x064:  mov    %eax,0x4(%esp)
08124978 +0x068:  lea    -0x28(%ebp),%eax
0812497b +0x06b:  mov    %eax,(%esp)
0812497e +0x06e:  call   0807e360 <_init+0xc58>
08124983 +0x073:  lea    -0xa4(%ebp),%eax
08124989 +0x079:  mov    %eax,0x4(%esp)
0812498d +0x07d:  lea    -0x2c(%ebp),%eax
08124990 +0x080:  mov    %eax,(%esp)
08124993 +0x083:  call   0807e360 <_init+0xc58>
08124998 +0x088:  mov    -0x6c(%ebp),%eax
0812499b +0x08b:  mov    -0x68(%ebp),%edx
0812499e +0x08e:  lea    0x1(%edx),%ecx
081249a1 +0x091:  mov    -0x64(%ebp),%edx
081249a4 +0x094:  add    $0x76c,%edx
081249aa +0x09a:  mov    %eax,0x10(%esp)
081249ae +0x09e:  mov    %ecx,0xc(%esp)
081249b2 +0x0a2:  mov    %edx,0x8(%esp)
081249b6 +0x0a6:  movl   $"%04d-%02d-%02d",0x4(%esp)
081249be +0x0ae:  lea    -0x3c(%ebp),%eax
081249c1 +0x0b1:  mov    %eax,(%esp)
081249c4 +0x0b4:  call   0807e440 <_init+0xd38>
081249c9 +0x0b9:  mov    -0x98(%ebp),%eax
081249cf +0x0bf:  mov    -0x94(%ebp),%edx
081249d5 +0x0c5:  lea    0x1(%edx),%ecx
081249d8 +0x0c8:  mov    -0x90(%ebp),%edx
081249de +0x0ce:  add    $0x76c,%edx
081249e4 +0x0d4:  mov    %eax,0x10(%esp)
081249e8 +0x0d8:  mov    %ecx,0xc(%esp)
081249ec +0x0dc:  mov    %edx,0x8(%esp)
081249f0 +0x0e0:  movl   $"%04d-%02d-%02d",0x4(%esp)
081249f8 +0x0e8:  lea    -0x4c(%ebp),%eax
081249fb +0x0eb:  mov    %eax,(%esp)
081249fe +0x0ee:  call   0807e440 <_init+0xd38>
08124a03 +0x0f3:  movzbl &_ZN8APSystem19CActionPointManager7_IsGMOnE,%eax
08124a0a +0x0fa:  movzbl %al,%ebx
08124a0d +0x0fd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08124a12 +0x102:  mov    %ebx,0x4(%esp)
08124a16 +0x106:  mov    %eax,(%esp)
08124a19 +0x109:  call   08122ace <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x41>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x41
08124a1e +0x10e:  add    $0x60,%eax
08124a21 +0x111:  mov    %eax,-0x1c(%ebp)
08124a24 +0x114:  mov    -0x1c(%ebp),%eax
08124a27 +0x117:  mov    %eax,(%esp)
08124a2a +0x11a:  call   0812578c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x4ef>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x4ef
08124a2f +0x11f:  mov    %eax,-0x18(%ebp)
08124a32 +0x122:  movl   $&_ZL14gUnicodeBuffer+0xe173,-0x14(%ebp)
08124a39 +0x129:  movl   $0x0,-0xc(%ebp)
08124a40 +0x130:  jmp    08124a83 <+0x173>
08124a42 +0x132:  mov    -0xc(%ebp),%eax
08124a45 +0x135:  mov    %eax,0x4(%esp)
08124a49 +0x139:  mov    -0x1c(%ebp),%eax
08124a4c +0x13c:  mov    %eax,(%esp)
08124a4f +0x13f:  call   081257ac <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x50f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x50f
08124a54 +0x144:  movzwl (%eax),%eax
08124a57 +0x147:  movzwl %ax,%eax
08124a5a +0x14a:  cmp    -0x14(%ebp),%eax
08124a5d +0x14d:  setl   %al
08124a60 +0x150:  test   %al,%al
08124a62 +0x152:  je     08124a7f <+0x16f>
08124a64 +0x154:  mov    -0xc(%ebp),%eax
08124a67 +0x157:  mov    %eax,0x4(%esp)
08124a6b +0x15b:  mov    -0x1c(%ebp),%eax
08124a6e +0x15e:  mov    %eax,(%esp)
08124a71 +0x161:  call   081257ac <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x50f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x50f
08124a76 +0x166:  movzwl (%eax),%eax
08124a79 +0x169:  movzwl %ax,%eax
08124a7c +0x16c:  mov    %eax,-0x14(%ebp)
08124a7f +0x16f:  addl   $0x1,-0xc(%ebp)
08124a83 +0x173:  mov    -0xc(%ebp),%eax
08124a86 +0x176:  cmp    -0x18(%ebp),%eax
08124a89 +0x179:  setb   %al
08124a8c +0x17c:  test   %al,%al
08124a8e +0x17e:  jne    08124a42 <+0x132>
08124a90 +0x180:  mov    0xc(%ebp),%eax
08124a93 +0x183:  mov    (%eax),%eax
08124a95 +0x185:  mov    -0x14(%ebp),%edx
08124a98 +0x188:  mov    %edx,0x18(%esp)
08124a9c +0x18c:  lea    -0x4c(%ebp),%edx
08124a9f +0x18f:  mov    %edx,0x14(%esp)
08124aa3 +0x193:  lea    -0x3c(%ebp),%edx
08124aa6 +0x196:  mov    %edx,0x10(%esp)
08124aaa +0x19a:  movl   $0x0,0xc(%esp)
08124ab2 +0x1a2:  mov    %eax,0x8(%esp)
08124ab6 +0x1a6:  movl   $"select occ_date, ap_sum  \t\t\t\t\tfrom charac_action_point\t\t\t\t\t\twhere charac_no = %u\t\t\t\t\t\tand is_reward_medal = %u \t\t\t\t\tand occ_date < '%s'\t\t\t\t\t\tand occ_date >= '%s'\t\t\t\t\t\tand ap_sum >= %d",0x4(%esp)
08124abe +0x1ae:  mov    -0x24(%ebp),%eax
08124ac1 +0x1b1:  mov    %eax,(%esp)
08124ac4 +0x1b4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08124ac9 +0x1b9:  movl   $0x1,0x4(%esp)
08124ad1 +0x1c1:  mov    -0x24(%ebp),%eax
08124ad4 +0x1c4:  mov    %eax,(%esp)
08124ad7 +0x1c7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08124adc +0x1cc:  xor    $0x1,%eax
08124adf +0x1cf:  test   %al,%al
08124ae1 +0x1d1:  je     08124aed <+0x1dd>
08124ae3 +0x1d3:  mov    $0x0,%eax
08124ae8 +0x1d8:  jmp    08124b84 <+0x274>
08124aed +0x1dd:  mov    -0x24(%ebp),%eax
08124af0 +0x1e0:  mov    %eax,(%esp)
08124af3 +0x1e3:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08124af8 +0x1e8:  mov    %eax,-0x10(%ebp)
08124afb +0x1eb:  cmpl   $0x0,-0x10(%ebp)
08124aff +0x1ef:  jle    08124b7f <+0x26f>
08124b01 +0x1f1:  mov    -0x24(%ebp),%eax
08124b04 +0x1f4:  mov    %eax,(%esp)
08124b07 +0x1f7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08124b0c +0x1fc:  xor    $0x1,%eax
08124b0f +0x1ff:  test   %al,%al
08124b11 +0x201:  je     08124b1a <+0x20a>
08124b13 +0x203:  mov    $0x0,%eax
08124b18 +0x208:  jmp    08124b84 <+0x274>
08124b1a +0x20a:  mov    0xc(%ebp),%eax
08124b1d +0x20d:  add    $0x8,%eax
08124b20 +0x210:  movl   $0xb,0xc(%esp)
08124b28 +0x218:  mov    %eax,0x8(%esp)
08124b2c +0x21c:  movl   $0x0,0x4(%esp)
08124b34 +0x224:  mov    -0x24(%ebp),%eax
08124b37 +0x227:  mov    %eax,(%esp)
08124b3a +0x22a:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08124b3f +0x22f:  xor    $0x1,%eax
08124b42 +0x232:  test   %al,%al
08124b44 +0x234:  je     08124b4d <+0x23d>
08124b46 +0x236:  mov    $0x0,%eax
08124b4b +0x23b:  jmp    08124b84 <+0x274>
08124b4d +0x23d:  mov    0xc(%ebp),%eax
08124b50 +0x240:  add    $0x4,%eax
08124b53 +0x243:  mov    %eax,0x8(%esp)
08124b57 +0x247:  movl   $0x1,0x4(%esp)
08124b5f +0x24f:  mov    -0x24(%ebp),%eax
08124b62 +0x252:  mov    %eax,(%esp)
08124b65 +0x255:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08124b6a +0x25a:  xor    $0x1,%eax
08124b6d +0x25d:  test   %al,%al
08124b6f +0x25f:  je     08124b78 <+0x268>
08124b71 +0x261:  mov    $0x0,%eax
08124b76 +0x266:  jmp    08124b84 <+0x274>
08124b78 +0x268:  mov    $0x1,%eax
08124b7d +0x26d:  jmp    08124b84 <+0x274>
08124b7f +0x26f:  mov    $0x0,%eax
08124b84 +0x274:  add    $0xc4,%esp
08124b8a +0x27a:  pop    %ebx
08124b8b +0x27b:  pop    %ebp
08124b8c +0x27c:  ret
08124b8d +0x27d:  nop
```

## 反编译 C

```c
// APSystem::DB_LoadRewardMedal::Select @ 0x8124910

/* APSystem::DB_LoadRewardMedal::Select(APSystem::_SIG_LOAD_REWARD_MEDAL&) */

undefined4 __thiscall
APSystem::DB_LoadRewardMedal::Select(DB_LoadRewardMedal *this,_SIG_LOAD_REWARD_MEDAL *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  ushort *puVar4;
  undefined4 uVar5;
  tm local_a8;
  tm local_7c;
  char local_50 [16];
  char local_40 [16];
  int local_30;
  int local_2c;
  MySQL *local_28;
  int local_24;
  vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  iVar3 = G_CEnvironment();
  local_24 = *(int *)(iVar3 + 0x37c);
  local_2c = getDailyInitializeTime(local_24,0,0);
  local_30 = local_2c + -0x93a80;
  localtime_r(&local_2c,&local_7c);
  localtime_r(&local_30,&local_a8);
  sprintf(local_40,"%04d-%02d-%02d",local_7c.tm_year + 0x76c,local_7c.tm_mon + 1,local_7c.tm_mday);
  sprintf(local_50,"%04d-%02d-%02d",local_a8.tm_year + 0x76c,local_a8.tm_mon + 1,local_a8.tm_mday);
  bVar1 = (bool)CActionPointManager::_IsGMOn;
  this_00 = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::GetActionPointEtcParameter(this_00,bVar1);
  local_20 = (vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *)
             (iVar3 + 0x60);
  local_1c = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             size(local_20);
  local_18 = 99999;
  for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
    puVar4 = (ushort *)
             std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             operator[](local_20,local_10);
    if ((int)(uint)*puVar4 < (int)local_18) {
      puVar4 = (ushort *)
               std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
               operator[](local_20,local_10);
      local_18 = (uint)*puVar4;
    }
  }
  MySQL::set_query(local_28,
                   "select occ_date, ap_sum  \t\t\t\t\tfrom charac_action_point\t\t\t\t\t\twhere charac_no = %u\t\t\t\t\t\tand is_reward_medal = %u \t\t\t\t\tand occ_date < \'%s\'\t\t\t\t\t\tand occ_date >= \'%s\'\t\t\t\t\t\tand ap_sum >= %d"
                   ,*(undefined4 *)param_1,0,local_40,local_50,local_18);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    local_14 = MySQL::get_n_rows(local_28);
    if (local_14 < 1) {
      uVar5 = 0;
    }
    else {
      cVar2 = MySQL::fetch(local_28);
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_str(local_28,0,(char *)(param_1 + 8),0xb);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_uint(local_28,1,(uint *)(param_1 + 4));
          if (cVar2 == '\x01') {
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
