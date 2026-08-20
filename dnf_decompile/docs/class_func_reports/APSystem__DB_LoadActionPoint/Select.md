# Select

`_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE`

`APSystem::DB_LoadActionPoint::Select(APSystem::_SIG_LOAD_ACTION_POINT&)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_LoadActionPoint` | `0x08123b9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08123b9e  _ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE
#           APSystem::DB_LoadActionPoint::Select(APSystem::_SIG_LOAD_ACTION_POINT&)
# range [0x08123b9e, 0x08123f4f]
08123b9e +0x000:  push   %ebp
08123b9f +0x001:  mov    %esp,%ebp
08123ba1 +0x003:  sub    $0x98,%esp
08123ba7 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08123bac +0x00e:  movl   $0x0,0x8(%esp)
08123bb4 +0x016:  movl   $0x2,0x4(%esp)
08123bbc +0x01e:  mov    %eax,(%esp)
08123bbf +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08123bc4 +0x026:  mov    %eax,-0x24(%ebp)
08123bc7 +0x029:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08123bcc +0x02e:  mov    0x37c(%eax),%eax
08123bd2 +0x034:  mov    %eax,-0x20(%ebp)
08123bd5 +0x037:  movl   $0x0,0x8(%esp)
08123bdd +0x03f:  movl   $0x0,0x4(%esp)
08123be5 +0x047:  mov    -0x20(%ebp),%eax
08123be8 +0x04a:  mov    %eax,(%esp)
08123beb +0x04d:  call   086b1f5a <_Z22getDailyInitializeTimeiii>  ; getDailyInitializeTime(int, int, int)
08123bf0 +0x052:  mov    %eax,-0x28(%ebp)
08123bf3 +0x055:  lea    -0x6c(%ebp),%eax
08123bf6 +0x058:  mov    %eax,0x4(%esp)
08123bfa +0x05c:  lea    -0x28(%ebp),%eax
08123bfd +0x05f:  mov    %eax,(%esp)
08123c00 +0x062:  call   0807e360 <_init+0xc58>
08123c05 +0x067:  mov    -0x60(%ebp),%eax
08123c08 +0x06a:  mov    -0x5c(%ebp),%edx
08123c0b +0x06d:  lea    0x1(%edx),%ecx
08123c0e +0x070:  mov    -0x58(%ebp),%edx
08123c11 +0x073:  add    $0x76c,%edx
08123c17 +0x079:  mov    %eax,0x10(%esp)
08123c1b +0x07d:  mov    %ecx,0xc(%esp)
08123c1f +0x081:  mov    %edx,0x8(%esp)
08123c23 +0x085:  movl   $"%04d-%02d-%02d",0x4(%esp)
08123c2b +0x08d:  lea    -0x38(%ebp),%eax
08123c2e +0x090:  mov    %eax,(%esp)
08123c31 +0x093:  call   0807e440 <_init+0xd38>
08123c36 +0x098:  mov    0xc(%ebp),%eax
08123c39 +0x09b:  mov    (%eax),%eax
08123c3b +0x09d:  lea    -0x38(%ebp),%edx
08123c3e +0x0a0:  mov    %edx,0xc(%esp)
08123c42 +0x0a4:  mov    %eax,0x8(%esp)
08123c46 +0x0a8:  movl   $"select ap_sum, is_reward_medal, is_reward_item_1, is_reward_item_2, is_reward_item_3, is_reward_item_4, ap_clear_state  from charac_action_point  where charac_no = %u  and occ_date = '%s' ",0x4(%esp)
08123c4e +0x0b0:  mov    -0x24(%ebp),%eax
08123c51 +0x0b3:  mov    %eax,(%esp)
08123c54 +0x0b6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08123c59 +0x0bb:  movl   $0x1,0x4(%esp)
08123c61 +0x0c3:  mov    -0x24(%ebp),%eax
08123c64 +0x0c6:  mov    %eax,(%esp)
08123c67 +0x0c9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08123c6c +0x0ce:  xor    $0x1,%eax
08123c6f +0x0d1:  test   %al,%al
08123c71 +0x0d3:  je     08123c7d <+0xdf>
08123c73 +0x0d5:  mov    $0x0,%eax
08123c78 +0x0da:  jmp    08123f4e <+0x3b0>
08123c7d +0x0df:  mov    -0x24(%ebp),%eax
08123c80 +0x0e2:  mov    %eax,(%esp)
08123c83 +0x0e5:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08123c88 +0x0ea:  mov    %eax,-0x1c(%ebp)
08123c8b +0x0ed:  cmpl   $0x1,-0x1c(%ebp)
08123c8f +0x0f1:  jne    08123f49 <+0x3ab>
08123c95 +0x0f7:  mov    -0x24(%ebp),%eax
08123c98 +0x0fa:  mov    %eax,(%esp)
08123c9b +0x0fd:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08123ca0 +0x102:  xor    $0x1,%eax
08123ca3 +0x105:  test   %al,%al
08123ca5 +0x107:  je     08123cb1 <+0x113>
08123ca7 +0x109:  mov    $0x0,%eax
08123cac +0x10e:  jmp    08123f4e <+0x3b0>
08123cb1 +0x113:  movl   $0x0,-0x18(%ebp)
08123cb8 +0x11a:  movl   $0x0,-0x14(%ebp)
08123cbf +0x121:  mov    0xc(%ebp),%eax
08123cc2 +0x124:  lea    0x4(%eax),%edx
08123cc5 +0x127:  mov    -0x18(%ebp),%eax
08123cc8 +0x12a:  addl   $0x1,-0x18(%ebp)
08123ccc +0x12e:  mov    %edx,0x8(%esp)
08123cd0 +0x132:  mov    %eax,0x4(%esp)
08123cd4 +0x136:  mov    -0x24(%ebp),%eax
08123cd7 +0x139:  mov    %eax,(%esp)
08123cda +0x13c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08123cdf +0x141:  xor    $0x1,%eax
08123ce2 +0x144:  test   %al,%al
08123ce4 +0x146:  je     08123cf0 <+0x152>
08123ce6 +0x148:  mov    $0x0,%eax
08123ceb +0x14d:  jmp    08123f4e <+0x3b0>
08123cf0 +0x152:  movb   $0x0,-0x39(%ebp)
08123cf4 +0x156:  mov    -0x18(%ebp),%eax
08123cf7 +0x159:  addl   $0x1,-0x18(%ebp)
08123cfb +0x15d:  lea    -0x39(%ebp),%edx
08123cfe +0x160:  mov    %edx,0x8(%esp)
08123d02 +0x164:  mov    %eax,0x4(%esp)
08123d06 +0x168:  mov    -0x24(%ebp),%eax
08123d09 +0x16b:  mov    %eax,(%esp)
08123d0c +0x16e:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08123d11 +0x173:  xor    $0x1,%eax
08123d14 +0x176:  test   %al,%al
08123d16 +0x178:  je     08123d22 <+0x184>
08123d18 +0x17a:  mov    $0x0,%eax
08123d1d +0x17f:  jmp    08123f4e <+0x3b0>
08123d22 +0x184:  movzbl -0x39(%ebp),%eax
08123d26 +0x188:  test   %al,%al
08123d28 +0x18a:  setne  %dl
08123d2b +0x18d:  mov    0xc(%ebp),%eax
08123d2e +0x190:  mov    %dl,0x8(%eax)
08123d31 +0x193:  mov    -0x18(%ebp),%eax
08123d34 +0x196:  addl   $0x1,-0x18(%ebp)
08123d38 +0x19a:  lea    -0x39(%ebp),%edx
08123d3b +0x19d:  mov    %edx,0x8(%esp)
08123d3f +0x1a1:  mov    %eax,0x4(%esp)
08123d43 +0x1a5:  mov    -0x24(%ebp),%eax
08123d46 +0x1a8:  mov    %eax,(%esp)
08123d49 +0x1ab:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08123d4e +0x1b0:  xor    $0x1,%eax
08123d51 +0x1b3:  test   %al,%al
08123d53 +0x1b5:  je     08123d5f <+0x1c1>
08123d55 +0x1b7:  mov    $0x0,%eax
08123d5a +0x1bc:  jmp    08123f4e <+0x3b0>
08123d5f +0x1c1:  movzbl -0x39(%ebp),%eax
08123d63 +0x1c5:  test   %al,%al
08123d65 +0x1c7:  setne  %dl
08123d68 +0x1ca:  mov    0xc(%ebp),%eax
08123d6b +0x1cd:  mov    %dl,0x9(%eax)
08123d6e +0x1d0:  mov    -0x18(%ebp),%eax
08123d71 +0x1d3:  addl   $0x1,-0x18(%ebp)
08123d75 +0x1d7:  lea    -0x39(%ebp),%edx
08123d78 +0x1da:  mov    %edx,0x8(%esp)
08123d7c +0x1de:  mov    %eax,0x4(%esp)
08123d80 +0x1e2:  mov    -0x24(%ebp),%eax
08123d83 +0x1e5:  mov    %eax,(%esp)
08123d86 +0x1e8:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08123d8b +0x1ed:  xor    $0x1,%eax
08123d8e +0x1f0:  test   %al,%al
08123d90 +0x1f2:  je     08123d9c <+0x1fe>
08123d92 +0x1f4:  mov    $0x0,%eax
08123d97 +0x1f9:  jmp    08123f4e <+0x3b0>
08123d9c +0x1fe:  movzbl -0x39(%ebp),%eax
08123da0 +0x202:  test   %al,%al
08123da2 +0x204:  setne  %dl
08123da5 +0x207:  mov    0xc(%ebp),%eax
08123da8 +0x20a:  mov    %dl,0xa(%eax)
08123dab +0x20d:  mov    -0x18(%ebp),%eax
08123dae +0x210:  addl   $0x1,-0x18(%ebp)
08123db2 +0x214:  lea    -0x39(%ebp),%edx
08123db5 +0x217:  mov    %edx,0x8(%esp)
08123db9 +0x21b:  mov    %eax,0x4(%esp)
08123dbd +0x21f:  mov    -0x24(%ebp),%eax
08123dc0 +0x222:  mov    %eax,(%esp)
08123dc3 +0x225:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08123dc8 +0x22a:  xor    $0x1,%eax
08123dcb +0x22d:  test   %al,%al
08123dcd +0x22f:  je     08123dd9 <+0x23b>
08123dcf +0x231:  mov    $0x0,%eax
08123dd4 +0x236:  jmp    08123f4e <+0x3b0>
08123dd9 +0x23b:  movzbl -0x39(%ebp),%eax
08123ddd +0x23f:  test   %al,%al
08123ddf +0x241:  setne  %dl
08123de2 +0x244:  mov    0xc(%ebp),%eax
08123de5 +0x247:  mov    %dl,0xb(%eax)
08123de8 +0x24a:  mov    -0x18(%ebp),%eax
08123deb +0x24d:  addl   $0x1,-0x18(%ebp)
08123def +0x251:  lea    -0x39(%ebp),%edx
08123df2 +0x254:  mov    %edx,0x8(%esp)
08123df6 +0x258:  mov    %eax,0x4(%esp)
08123dfa +0x25c:  mov    -0x24(%ebp),%eax
08123dfd +0x25f:  mov    %eax,(%esp)
08123e00 +0x262:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08123e05 +0x267:  xor    $0x1,%eax
08123e08 +0x26a:  test   %al,%al
08123e0a +0x26c:  je     08123e16 <+0x278>
08123e0c +0x26e:  mov    $0x0,%eax
08123e11 +0x273:  jmp    08123f4e <+0x3b0>
08123e16 +0x278:  movzbl -0x39(%ebp),%eax
08123e1a +0x27c:  test   %al,%al
08123e1c +0x27e:  setne  %dl
08123e1f +0x281:  mov    0xc(%ebp),%eax
08123e22 +0x284:  mov    %dl,0xc(%eax)
08123e25 +0x287:  mov    -0x18(%ebp),%eax
08123e28 +0x28a:  mov    %eax,0x4(%esp)
08123e2c +0x28e:  mov    -0x24(%ebp),%eax
08123e2f +0x291:  mov    %eax,(%esp)
08123e32 +0x294:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08123e37 +0x299:  mov    %eax,-0x10(%ebp)
08123e3a +0x29c:  cmpl   $0x7ff,-0x10(%ebp)
08123e41 +0x2a3:  jbe    08123e4d <+0x2af>
08123e43 +0x2a5:  mov    $0x0,%eax
08123e48 +0x2aa:  jmp    08123f4e <+0x3b0>
08123e4d +0x2af:  movl   $0x800,0x8(%esp)
08123e55 +0x2b7:  movl   $0x0,0x4(%esp)
08123e5d +0x2bf:  movl   $&_ZN8APSystem21g_szZipAP_CLEAR_STATEE,(%esp)
08123e64 +0x2c6:  call   0807dcc0 <_init+0x5b8>
08123e69 +0x2cb:  mov    -0x10(%ebp),%eax
08123e6c +0x2ce:  mov    %eax,0xc(%esp)
08123e70 +0x2d2:  movl   $&_ZN8APSystem21g_szZipAP_CLEAR_STATEE,0x8(%esp)
08123e78 +0x2da:  mov    -0x18(%ebp),%eax
08123e7b +0x2dd:  mov    %eax,0x4(%esp)
08123e7f +0x2e1:  mov    -0x24(%ebp),%eax
08123e82 +0x2e4:  mov    %eax,(%esp)
08123e85 +0x2e7:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08123e8a +0x2ec:  xor    $0x1,%eax
08123e8d +0x2ef:  test   %al,%al
08123e8f +0x2f1:  je     08123e9b <+0x2fd>
08123e91 +0x2f3:  mov    $0x0,%eax
08123e96 +0x2f8:  jmp    08123f4e <+0x3b0>
08123e9b +0x2fd:  mov    $&_ZN8APSystem21g_szZipAP_CLEAR_STATEE,%eax
08123ea0 +0x302:  mov    (%eax),%eax
08123ea2 +0x304:  and    $0x3fffffff,%eax
08123ea7 +0x309:  mov    %eax,-0xc(%ebp)
08123eaa +0x30c:  cmpl   $0x7ff,-0xc(%ebp)
08123eb1 +0x313:  jbe    08123ebd <+0x31f>
08123eb3 +0x315:  mov    $0x0,%eax
08123eb8 +0x31a:  jmp    08123f4e <+0x3b0>
08123ebd +0x31f:  movl   $0x800,0x8(%esp)
08123ec5 +0x327:  movl   $0x0,0x4(%esp)
08123ecd +0x32f:  movl   $&_ZN8APSystem21g_szStrAP_CLEAR_STATEE,(%esp)
08123ed4 +0x336:  call   0807dcc0 <_init+0x5b8>
08123ed9 +0x33b:  mov    -0xc(%ebp),%eax
08123edc +0x33e:  mov    %eax,-0x40(%ebp)
08123edf +0x341:  mov    -0x10(%ebp),%eax
08123ee2 +0x344:  mov    %eax,0xc(%esp)
08123ee6 +0x348:  movl   $&_ZN8APSystem21g_szZipAP_CLEAR_STATEE,0x8(%esp)
08123eee +0x350:  lea    -0x40(%ebp),%eax
08123ef1 +0x353:  mov    %eax,0x4(%esp)
08123ef5 +0x357:  movl   $&_ZN8APSystem21g_szStrAP_CLEAR_STATEE,(%esp)
08123efc +0x35e:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08123f01 +0x363:  xor    $0x1,%eax
08123f04 +0x366:  test   %al,%al
08123f06 +0x368:  je     08123f0f <+0x371>
08123f08 +0x36a:  mov    $0x0,%eax
08123f0d +0x36f:  jmp    08123f4e <+0x3b0>
08123f0f +0x371:  mov    0xc(%ebp),%eax
08123f12 +0x374:  add    $0xd,%eax
08123f15 +0x377:  movl   $0x12c,0xc(%esp)
08123f1d +0x37f:  mov    %eax,0x8(%esp)
08123f21 +0x383:  movl   $&_ZN8APSystem21g_szStrAP_CLEAR_STATEE,0x4(%esp)
08123f29 +0x38b:  mov    0x8(%ebp),%eax
08123f2c +0x38e:  mov    %eax,(%esp)
08123f2f +0x391:  call   08123f50 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj>  ; APSystem::DB_LoadActionPoint::ParseActionClearState(char*, APSystem::_ActionPoint*, unsigned int)
08123f34 +0x396:  xor    $0x1,%eax
08123f37 +0x399:  test   %al,%al
08123f39 +0x39b:  je     08123f42 <+0x3a4>
08123f3b +0x39d:  mov    $0x0,%eax
08123f40 +0x3a2:  jmp    08123f4e <+0x3b0>
08123f42 +0x3a4:  mov    $0x1,%eax
08123f47 +0x3a9:  jmp    08123f4e <+0x3b0>
08123f49 +0x3ab:  mov    $0x0,%eax
08123f4e +0x3b0:  leave
08123f4f +0x3b1:  ret
```

## 反编译 C

```c
// APSystem::DB_LoadActionPoint::Select @ 0x8123b9e

/* APSystem::DB_LoadActionPoint::Select(APSystem::_SIG_LOAD_ACTION_POINT&) */

undefined4 __thiscall
APSystem::DB_LoadActionPoint::Select(DB_LoadActionPoint *this,_SIG_LOAD_ACTION_POINT *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  tm local_70;
  uint local_44;
  uchar local_3d;
  char local_3c [16];
  time_t local_2c;
  MySQL *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  iVar2 = G_CEnvironment();
  local_24 = *(int *)(iVar2 + 0x37c);
  local_2c = getDailyInitializeTime(local_24,0,0);
  localtime_r(&local_2c,&local_70);
  sprintf(local_3c,"%04d-%02d-%02d",local_70.tm_year + 0x76c,local_70.tm_mon + 1,local_70.tm_mday);
  MySQL::set_query(local_28,
                   "select ap_sum, is_reward_medal, is_reward_item_1, is_reward_item_2, is_reward_item_3, is_reward_item_4, ap_clear_state  from charac_action_point  where charac_no = %u  and occ_date = \'%s\' "
                   ,*(undefined4 *)param_1,local_3c);
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 == '\x01') {
    local_20 = MySQL::get_n_rows(local_28);
    if (local_20 == 1) {
      cVar1 = MySQL::fetch(local_28);
      if (cVar1 == '\x01') {
        local_18 = 0;
        local_1c = 1;
        cVar1 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 4));
        iVar2 = local_1c;
        if (cVar1 == '\x01') {
          local_3d = '\0';
          local_1c = local_1c + 1;
          cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
          iVar2 = local_1c;
          if (cVar1 == '\x01') {
            param_1[8] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
            local_1c = local_1c + 1;
            cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
            iVar2 = local_1c;
            if (cVar1 == '\x01') {
              param_1[9] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
              local_1c = local_1c + 1;
              cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
              iVar2 = local_1c;
              if (cVar1 == '\x01') {
                param_1[10] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
                local_1c = local_1c + 1;
                cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
                iVar2 = local_1c;
                if (cVar1 == '\x01') {
                  param_1[0xb] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
                  local_1c = local_1c + 1;
                  cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
                  if (cVar1 == '\x01') {
                    param_1[0xc] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
                    local_14 = MySQL::get_binary_length(local_28,local_1c);
                    if (local_14 < 0x800) {
                      memset(&g_szZipAP_CLEAR_STATE,0,0x800);
                      cVar1 = MySQL::get_binary(local_28,local_1c,&g_szZipAP_CLEAR_STATE,local_14);
                      if (cVar1 == '\x01') {
                        local_10 = g_szZipAP_CLEAR_STATE & 0x3fffffff;
                        if (local_10 < 0x800) {
                          memset(g_szStrAP_CLEAR_STATE,0,0x800);
                          local_44 = local_10;
                          cVar1 = uncompress_zip(g_szStrAP_CLEAR_STATE,&local_44,
                                                 (char *)&g_szZipAP_CLEAR_STATE,local_14);
                          if (cVar1 == '\x01') {
                            cVar1 = ParseActionClearState
                                              (this,g_szStrAP_CLEAR_STATE,
                                               (_ActionPoint *)(param_1 + 0xd),300);
                            if (cVar1 == '\x01') {
                              uVar3 = 1;
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
