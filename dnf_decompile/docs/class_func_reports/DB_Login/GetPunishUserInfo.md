# GetPunishUserInfo

`_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA`

`DB_Login::GetPunishUserInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08410cf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08410cf6  _ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA
#           DB_Login::GetPunishUserInfo(SIG_LOGIN_DATA*)
# range [0x08410cf6, 0x08410f73]
08410cf6 +0x000:  push   %ebp
08410cf7 +0x001:  mov    %esp,%ebp
08410cf9 +0x003:  sub    $0x28,%esp
08410cfc +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08410d01 +0x00b:  movl   $0x0,0x8(%esp)
08410d09 +0x013:  movl   $0x1,0x4(%esp)
08410d11 +0x01b:  mov    %eax,(%esp)
08410d14 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08410d19 +0x023:  mov    %eax,-0x10(%ebp)
08410d1c +0x026:  mov    0xc(%ebp),%eax
08410d1f +0x029:  mov    0xc0(%eax),%eax
08410d25 +0x02f:  movl   $0x0,0x4(%esp)
08410d2d +0x037:  mov    %eax,(%esp)
08410d30 +0x03a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08410d35 +0x03f:  movl   $0x32,0xc(%esp)
08410d3d +0x047:  mov    %eax,0x8(%esp)
08410d41 +0x04b:  movl   $"seLect punish_type, unix_timestamp(occ_time), punish_value, apply_flag, unix_timestamp(start_time), unix_timestamp(end_time) from member_punish_info where m_id=%s and apply_flag>=1 LIMIT %d",0x4(%esp)
08410d49 +0x053:  mov    -0x10(%ebp),%eax
08410d4c +0x056:  mov    %eax,(%esp)
08410d4f +0x059:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410d54 +0x05e:  movl   $0x1,0x4(%esp)
08410d5c +0x066:  mov    -0x10(%ebp),%eax
08410d5f +0x069:  mov    %eax,(%esp)
08410d62 +0x06c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410d67 +0x071:  xor    $0x1,%eax
08410d6a +0x074:  test   %al,%al
08410d6c +0x076:  jne    08410d7d <+0x87>
08410d6e +0x078:  mov    -0x10(%ebp),%eax
08410d71 +0x07b:  mov    %eax,(%esp)
08410d74 +0x07e:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08410d79 +0x083:  test   %eax,%eax
08410d7b +0x085:  jne    08410d84 <+0x8e>
08410d7d +0x087:  mov    $0x1,%eax
08410d82 +0x08c:  jmp    08410d89 <+0x93>
08410d84 +0x08e:  mov    $0x0,%eax
08410d89 +0x093:  test   %al,%al
08410d8b +0x095:  je     08410d97 <+0xa1>
08410d8d +0x097:  mov    $0x1,%eax
08410d92 +0x09c:  jmp    08410f72 <+0x27c>
08410d97 +0x0a1:  movl   $0x0,-0xc(%ebp)
08410d9e +0x0a8:  mov    -0x10(%ebp),%eax
08410da1 +0x0ab:  mov    %eax,(%esp)
08410da4 +0x0ae:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08410da9 +0x0b3:  mov    %eax,%edx
08410dab +0x0b5:  mov    0xc(%ebp),%eax
08410dae +0x0b8:  mov    %edx,0x3a50(%eax)
08410db4 +0x0be:  movl   $0x0,-0xc(%ebp)
08410dbb +0x0c5:  jmp    08410f54 <+0x25e>
08410dc0 +0x0ca:  mov    -0x10(%ebp),%eax
08410dc3 +0x0cd:  mov    %eax,(%esp)
08410dc6 +0x0d0:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08410dcb +0x0d5:  xor    $0x1,%eax
08410dce +0x0d8:  test   %al,%al
08410dd0 +0x0da:  je     08410ddc <+0xe6>
08410dd2 +0x0dc:  mov    $0x0,%eax
08410dd7 +0x0e1:  jmp    08410f72 <+0x27c>
08410ddc +0x0e6:  mov    -0xc(%ebp),%edx
08410ddf +0x0e9:  mov    %edx,%eax
08410de1 +0x0eb:  add    %eax,%eax
08410de3 +0x0ed:  add    %edx,%eax
08410de5 +0x0ef:  shl    $0x3,%eax
08410de8 +0x0f2:  add    $0x3a50,%eax
08410ded +0x0f7:  add    0xc(%ebp),%eax
08410df0 +0x0fa:  add    $0x4,%eax
08410df3 +0x0fd:  mov    %eax,0x8(%esp)
08410df7 +0x101:  movl   $0x0,0x4(%esp)
08410dff +0x109:  mov    -0x10(%ebp),%eax
08410e02 +0x10c:  mov    %eax,(%esp)
08410e05 +0x10f:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08410e0a +0x114:  xor    $0x1,%eax
08410e0d +0x117:  test   %al,%al
08410e0f +0x119:  je     08410e1b <+0x125>
08410e11 +0x11b:  mov    $0x0,%eax
08410e16 +0x120:  jmp    08410f72 <+0x27c>
08410e1b +0x125:  mov    -0xc(%ebp),%edx
08410e1e +0x128:  mov    %edx,%eax
08410e20 +0x12a:  add    %eax,%eax
08410e22 +0x12c:  add    %edx,%eax
08410e24 +0x12e:  shl    $0x3,%eax
08410e27 +0x131:  add    $0x3a50,%eax
08410e2c +0x136:  add    0xc(%ebp),%eax
08410e2f +0x139:  add    $0x8,%eax
08410e32 +0x13c:  mov    %eax,0x8(%esp)
08410e36 +0x140:  movl   $0x1,0x4(%esp)
08410e3e +0x148:  mov    -0x10(%ebp),%eax
08410e41 +0x14b:  mov    %eax,(%esp)
08410e44 +0x14e:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08410e49 +0x153:  xor    $0x1,%eax
08410e4c +0x156:  test   %al,%al
08410e4e +0x158:  je     08410e5a <+0x164>
08410e50 +0x15a:  mov    $0x0,%eax
08410e55 +0x15f:  jmp    08410f72 <+0x27c>
08410e5a +0x164:  mov    -0xc(%ebp),%edx
08410e5d +0x167:  mov    %edx,%eax
08410e5f +0x169:  add    %eax,%eax
08410e61 +0x16b:  add    %edx,%eax
08410e63 +0x16d:  shl    $0x3,%eax
08410e66 +0x170:  add    $0x3a50,%eax
08410e6b +0x175:  add    0xc(%ebp),%eax
08410e6e +0x178:  add    $0xc,%eax
08410e71 +0x17b:  mov    %eax,0x8(%esp)
08410e75 +0x17f:  movl   $0x2,0x4(%esp)
08410e7d +0x187:  mov    -0x10(%ebp),%eax
08410e80 +0x18a:  mov    %eax,(%esp)
08410e83 +0x18d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08410e88 +0x192:  xor    $0x1,%eax
08410e8b +0x195:  test   %al,%al
08410e8d +0x197:  je     08410e99 <+0x1a3>
08410e8f +0x199:  mov    $0x0,%eax
08410e94 +0x19e:  jmp    08410f72 <+0x27c>
08410e99 +0x1a3:  mov    -0xc(%ebp),%edx
08410e9c +0x1a6:  mov    %edx,%eax
08410e9e +0x1a8:  add    %eax,%eax
08410ea0 +0x1aa:  add    %edx,%eax
08410ea2 +0x1ac:  shl    $0x3,%eax
08410ea5 +0x1af:  add    $0x3a50,%eax
08410eaa +0x1b4:  add    0xc(%ebp),%eax
08410ead +0x1b7:  add    $0x10,%eax
08410eb0 +0x1ba:  mov    %eax,0x8(%esp)
08410eb4 +0x1be:  movl   $0x3,0x4(%esp)
08410ebc +0x1c6:  mov    -0x10(%ebp),%eax
08410ebf +0x1c9:  mov    %eax,(%esp)
08410ec2 +0x1cc:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08410ec7 +0x1d1:  xor    $0x1,%eax
08410eca +0x1d4:  test   %al,%al
08410ecc +0x1d6:  je     08410ed8 <+0x1e2>
08410ece +0x1d8:  mov    $0x0,%eax
08410ed3 +0x1dd:  jmp    08410f72 <+0x27c>
08410ed8 +0x1e2:  mov    -0xc(%ebp),%edx
08410edb +0x1e5:  mov    %edx,%eax
08410edd +0x1e7:  add    %eax,%eax
08410edf +0x1e9:  add    %edx,%eax
08410ee1 +0x1eb:  shl    $0x3,%eax
08410ee4 +0x1ee:  add    $0x3a60,%eax
08410ee9 +0x1f3:  add    0xc(%ebp),%eax
08410eec +0x1f6:  add    $0x4,%eax
08410eef +0x1f9:  mov    %eax,0x8(%esp)
08410ef3 +0x1fd:  movl   $0x4,0x4(%esp)
08410efb +0x205:  mov    -0x10(%ebp),%eax
08410efe +0x208:  mov    %eax,(%esp)
08410f01 +0x20b:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08410f06 +0x210:  xor    $0x1,%eax
08410f09 +0x213:  test   %al,%al
08410f0b +0x215:  je     08410f14 <+0x21e>
08410f0d +0x217:  mov    $0x0,%eax
08410f12 +0x21c:  jmp    08410f72 <+0x27c>
08410f14 +0x21e:  mov    -0xc(%ebp),%edx
08410f17 +0x221:  mov    %edx,%eax
08410f19 +0x223:  add    %eax,%eax
08410f1b +0x225:  add    %edx,%eax
08410f1d +0x227:  shl    $0x3,%eax
08410f20 +0x22a:  add    $0x3a60,%eax
08410f25 +0x22f:  add    0xc(%ebp),%eax
08410f28 +0x232:  add    $0x8,%eax
08410f2b +0x235:  mov    %eax,0x8(%esp)
08410f2f +0x239:  movl   $0x5,0x4(%esp)
08410f37 +0x241:  mov    -0x10(%ebp),%eax
08410f3a +0x244:  mov    %eax,(%esp)
08410f3d +0x247:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08410f42 +0x24c:  xor    $0x1,%eax
08410f45 +0x24f:  test   %al,%al
08410f47 +0x251:  je     08410f50 <+0x25a>
08410f49 +0x253:  mov    $0x0,%eax
08410f4e +0x258:  jmp    08410f72 <+0x27c>
08410f50 +0x25a:  addl   $0x1,-0xc(%ebp)
08410f54 +0x25e:  mov    -0x10(%ebp),%eax
08410f57 +0x261:  mov    %eax,(%esp)
08410f5a +0x264:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08410f5f +0x269:  cmp    -0xc(%ebp),%eax
08410f62 +0x26c:  seta   %al
08410f65 +0x26f:  test   %al,%al
08410f67 +0x271:  jne    08410dc0 <+0xca>
08410f6d +0x277:  mov    $0x1,%eax
08410f72 +0x27c:  leave
08410f73 +0x27d:  ret
```

## 反编译 C

```c
// DB_Login::GetPunishUserInfo @ 0x8410cf6

/* DB_Login::GetPunishUserInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetPunishUserInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint local_10;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,
                   "seLect punish_type, unix_timestamp(occ_time), punish_value, apply_flag, unix_timestamp(start_time), unix_timestamp(end_time) from member_punish_info where m_id=%s and apply_flag>=1 LIMIT %d"
                   ,uVar3,0x32);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(this_00), iVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = MySQL::get_n_rows(this_00);
    *(undefined4 *)(param_1 + 0x3a50) = uVar3;
    for (local_10 = 0; uVar5 = MySQL::get_n_rows(this_00), local_10 < uVar5; local_10 = local_10 + 1
        ) {
      cVar2 = MySQL::fetch(this_00);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(this_00,0,(int *)(param_1 + local_10 * 0x18 + 0x3a54));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(this_00,1,(uint *)(param_1 + local_10 * 0x18 + 0x3a58));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(this_00,2,(int *)(param_1 + local_10 * 0x18 + 0x3a5c));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(this_00,3,(int *)(param_1 + local_10 * 0x18 + 0x3a60));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(this_00,4,(uint *)(param_1 + local_10 * 0x18 + 0x3a64));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(this_00,5,(uint *)(param_1 + local_10 * 0x18 + 0x3a68));
      if (cVar2 != '\x01') {
        return 0;
      }
    }
  }
  return 1;
}
```
