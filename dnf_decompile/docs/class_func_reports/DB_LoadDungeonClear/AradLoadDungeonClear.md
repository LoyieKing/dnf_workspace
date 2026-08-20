# AradLoadDungeonClear

`_ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR`

`DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)`

| 类 | 地址 |
|---|---|
| `DB_LoadDungeonClear` | `0x08419a76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08419a76  _ZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR
#           DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)
# range [0x08419a76, 0x08419db3]
08419a76 +0x000:  push   %ebp
08419a77 +0x001:  mov    %esp,%ebp
08419a79 +0x003:  push   %edi
08419a7a +0x004:  push   %ebx
08419a7b +0x005:  sub    $0x1e0,%esp
08419a81 +0x00b:  mov    0xc(%ebp),%eax
08419a84 +0x00e:  mov    %eax,0x4(%esp)
08419a88 +0x012:  mov    0x8(%ebp),%eax
08419a8b +0x015:  mov    %eax,(%esp)
08419a8e +0x018:  call   0841996e <_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR>  ; DB_LoadDungeonClear::AradLoadMemberDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)
08419a93 +0x01d:  test   %al,%al
08419a95 +0x01f:  je     08419aa1 <+0x2b>
08419a97 +0x021:  mov    $0x1,%eax
08419a9c +0x026:  jmp    08419daa <+0x334>
08419aa1 +0x02b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08419aa6 +0x030:  movl   $0x0,0x8(%esp)
08419aae +0x038:  movl   $0x2,0x4(%esp)
08419ab6 +0x040:  mov    %eax,(%esp)
08419ab9 +0x043:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08419abe +0x048:  mov    %eax,-0x14(%ebp)
08419ac1 +0x04b:  mov    0xc(%ebp),%eax
08419ac4 +0x04e:  mov    0x4(%eax),%eax
08419ac7 +0x051:  mov    %eax,0x8(%esp)
08419acb +0x055:  movl   $"select B.dungeon from charac_info A Inner Join charac_dungeon B where A.m_id = %d and B.charac_no = A.charac_no and A.delete_flag = 0",0x4(%esp)
08419ad3 +0x05d:  mov    -0x14(%ebp),%eax
08419ad6 +0x060:  mov    %eax,(%esp)
08419ad9 +0x063:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08419ade +0x068:  movl   $0x1,0x4(%esp)
08419ae6 +0x070:  mov    -0x14(%ebp),%eax
08419ae9 +0x073:  mov    %eax,(%esp)
08419aec +0x076:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08419af1 +0x07b:  xor    $0x1,%eax
08419af4 +0x07e:  test   %al,%al
08419af6 +0x080:  je     08419b47 <+0xd1>
08419af8 +0x082:  mov    -0x14(%ebp),%eax
08419afb +0x085:  mov    %eax,(%esp)
08419afe +0x088:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419b03 +0x08d:  mov    0xc(%ebp),%edx
08419b06 +0x090:  mov    0x4(%edx),%edx
08419b09 +0x093:  mov    %eax,0x18(%esp)
08419b0d +0x097:  mov    %edx,0x14(%esp)
08419b11 +0x09b:  movl   $"Dungeon share query error : m_id(%d) dungeon count(%d)",0x10(%esp)
08419b19 +0x0a3:  movl   $0x4b72,0xc(%esp)
08419b21 +0x0ab:  movl   $&_ZZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEARE19__PRETTY_FUNCTION__,0x8(%esp)
08419b29 +0x0b3:  movl   $"DBThread.cpp",0x4(%esp)
08419b31 +0x0bb:  movl   $0x1,(%esp)
08419b38 +0x0c2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08419b3d +0x0c7:  mov    $0x0,%eax
08419b42 +0x0cc:  jmp    08419daa <+0x334>
08419b47 +0x0d1:  mov    -0x14(%ebp),%eax
08419b4a +0x0d4:  mov    %eax,(%esp)
08419b4d +0x0d7:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419b52 +0x0dc:  test   %eax,%eax
08419b54 +0x0de:  sete   %al
08419b57 +0x0e1:  test   %al,%al
08419b59 +0x0e3:  je     08419baa <+0x134>
08419b5b +0x0e5:  mov    -0x14(%ebp),%eax
08419b5e +0x0e8:  mov    %eax,(%esp)
08419b61 +0x0eb:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419b66 +0x0f0:  mov    0xc(%ebp),%edx
08419b69 +0x0f3:  mov    0x4(%edx),%edx
08419b6c +0x0f6:  mov    %eax,0x18(%esp)
08419b70 +0x0fa:  mov    %edx,0x14(%esp)
08419b74 +0x0fe:  movl   $"Dungeon count error : m_id(%d) dungeon count(%d)",0x10(%esp)
08419b7c +0x106:  movl   $0x4b79,0xc(%esp)
08419b84 +0x10e:  movl   $&_ZZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEARE19__PRETTY_FUNCTION__,0x8(%esp)
08419b8c +0x116:  movl   $"DBThread.cpp",0x4(%esp)
08419b94 +0x11e:  movl   $0x1,(%esp)
08419b9b +0x125:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08419ba0 +0x12a:  mov    $0x1,%eax
08419ba5 +0x12f:  jmp    08419daa <+0x334>
08419baa +0x134:  lea    -0x1c0(%ebp),%ebx
08419bb0 +0x13a:  mov    $0x0,%eax
08419bb5 +0x13f:  mov    $0x6b,%edx
08419bba +0x144:  mov    %ebx,%edi
08419bbc +0x146:  mov    %edx,%ecx
08419bbe +0x148:  rep stos %eax,%es:(%edi)
08419bc0 +0x14a:  mov    0xc(%ebp),%eax
08419bc3 +0x14d:  add    $0x10,%eax
08419bc6 +0x150:  mov    %eax,-0x10(%ebp)
08419bc9 +0x153:  movl   $0x0,-0xc(%ebp)
08419bd0 +0x15a:  jmp    08419d7b <+0x305>
08419bd5 +0x15f:  mov    -0x14(%ebp),%eax
08419bd8 +0x162:  mov    %eax,(%esp)
08419bdb +0x165:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08419be0 +0x16a:  xor    $0x1,%eax
08419be3 +0x16d:  test   %al,%al
08419be5 +0x16f:  je     08419c36 <+0x1c0>
08419be7 +0x171:  mov    -0x14(%ebp),%eax
08419bea +0x174:  mov    %eax,(%esp)
08419bed +0x177:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419bf2 +0x17c:  mov    0xc(%ebp),%edx
08419bf5 +0x17f:  mov    0x4(%edx),%edx
08419bf8 +0x182:  mov    %eax,0x18(%esp)
08419bfc +0x186:  mov    %edx,0x14(%esp)
08419c00 +0x18a:  movl   $"Dungeon fetch error : m_id(%d) dungeon count(%d)",0x10(%esp)
08419c08 +0x192:  movl   $0x4b89,0xc(%esp)
08419c10 +0x19a:  movl   $&_ZZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEARE19__PRETTY_FUNCTION__,0x8(%esp)
08419c18 +0x1a2:  movl   $"DBThread.cpp",0x4(%esp)
08419c20 +0x1aa:  movl   $0x1,(%esp)
08419c27 +0x1b1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08419c2c +0x1b6:  mov    $0x0,%eax
08419c31 +0x1bb:  jmp    08419daa <+0x334>
08419c36 +0x1c0:  movl   $0x1ab,0xc(%esp)
08419c3e +0x1c8:  lea    -0x1c0(%ebp),%eax
08419c44 +0x1ce:  mov    %eax,0x8(%esp)
08419c48 +0x1d2:  movl   $0x0,0x4(%esp)
08419c50 +0x1da:  mov    -0x14(%ebp),%eax
08419c53 +0x1dd:  mov    %eax,(%esp)
08419c56 +0x1e0:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08419c5b +0x1e5:  xor    $0x1,%eax
08419c5e +0x1e8:  test   %al,%al
08419c60 +0x1ea:  je     08419cb1 <+0x23b>
08419c62 +0x1ec:  mov    -0x14(%ebp),%eax
08419c65 +0x1ef:  mov    %eax,(%esp)
08419c68 +0x1f2:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419c6d +0x1f7:  mov    0xc(%ebp),%edx
08419c70 +0x1fa:  mov    0x4(%edx),%edx
08419c73 +0x1fd:  mov    %eax,0x18(%esp)
08419c77 +0x201:  mov    %edx,0x14(%esp)
08419c7b +0x205:  movl   $"Dungeon Parsing error : m_id(%d) dungeon count(%d)",0x10(%esp)
08419c83 +0x20d:  movl   $0x4b8f,0xc(%esp)
08419c8b +0x215:  movl   $&_ZZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEARE19__PRETTY_FUNCTION__,0x8(%esp)
08419c93 +0x21d:  movl   $"DBThread.cpp",0x4(%esp)
08419c9b +0x225:  movl   $0x1,(%esp)
08419ca2 +0x22c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08419ca7 +0x231:  mov    $0x0,%eax
08419cac +0x236:  jmp    08419daa <+0x334>
08419cb1 +0x23b:  mov    0xc(%ebp),%eax
08419cb4 +0x23e:  add    $0x10,%eax
08419cb7 +0x241:  mov    %eax,(%esp)
08419cba +0x244:  call   0807e3b0 <_init+0xca8>
08419cbf +0x249:  mov    %eax,%ebx
08419cc1 +0x24b:  lea    -0x1c0(%ebp),%eax
08419cc7 +0x251:  mov    %eax,(%esp)
08419cca +0x254:  call   0807e3b0 <_init+0xca8>
08419ccf +0x259:  lea    (%ebx,%eax,1),%eax
08419cd2 +0x25c:  cmp    $0x1800,%eax
08419cd7 +0x261:  jbe    08419d28 <+0x2b2>
08419cd9 +0x263:  mov    -0x14(%ebp),%eax
08419cdc +0x266:  mov    %eax,(%esp)
08419cdf +0x269:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419ce4 +0x26e:  mov    0xc(%ebp),%edx
08419ce7 +0x271:  mov    0x4(%edx),%edx
08419cea +0x274:  mov    %eax,0x18(%esp)
08419cee +0x278:  mov    %edx,0x14(%esp)
08419cf2 +0x27c:  movl   $"Dungeon Total Data Error : m_id(%d) dungeon count(%d)",0x10(%esp)
08419cfa +0x284:  movl   $0x4b95,0xc(%esp)
08419d02 +0x28c:  movl   $&_ZZN19DB_LoadDungeonClear20AradLoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEARE19__PRETTY_FUNCTION__,0x8(%esp)
08419d0a +0x294:  movl   $"DBThread.cpp",0x4(%esp)
08419d12 +0x29c:  movl   $0x1,(%esp)
08419d19 +0x2a3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08419d1e +0x2a8:  mov    $0x0,%eax
08419d23 +0x2ad:  jmp    08419daa <+0x334>
08419d28 +0x2b2:  movl   $0x1ac,0x8(%esp)
08419d30 +0x2ba:  lea    -0x1c0(%ebp),%eax
08419d36 +0x2c0:  mov    %eax,0x4(%esp)
08419d3a +0x2c4:  mov    -0x10(%ebp),%eax
08419d3d +0x2c7:  mov    %eax,(%esp)
08419d40 +0x2ca:  call   0807d8a0 <_init+0x198>
08419d45 +0x2cf:  mov    -0x10(%ebp),%eax
08419d48 +0x2d2:  mov    %eax,(%esp)
08419d4b +0x2d5:  call   0807e3b0 <_init+0xca8>
08419d50 +0x2da:  add    %eax,-0x10(%ebp)
08419d53 +0x2dd:  mov    -0xc(%ebp),%ebx
08419d56 +0x2e0:  mov    -0x14(%ebp),%eax
08419d59 +0x2e3:  mov    %eax,(%esp)
08419d5c +0x2e6:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419d61 +0x2eb:  sub    $0x1,%eax
08419d64 +0x2ee:  cmp    %eax,%ebx
08419d66 +0x2f0:  setne  %al
08419d69 +0x2f3:  test   %al,%al
08419d6b +0x2f5:  je     08419d77 <+0x301>
08419d6d +0x2f7:  mov    -0x10(%ebp),%eax
08419d70 +0x2fa:  movb   $0x2c,(%eax)
08419d73 +0x2fd:  addl   $0x1,-0x10(%ebp)
08419d77 +0x301:  addl   $0x1,-0xc(%ebp)
08419d7b +0x305:  mov    -0x14(%ebp),%eax
08419d7e +0x308:  mov    %eax,(%esp)
08419d81 +0x30b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419d86 +0x310:  cmp    -0xc(%ebp),%eax
08419d89 +0x313:  setg   %al
08419d8c +0x316:  test   %al,%al
08419d8e +0x318:  jne    08419bd5 <+0x15f>
08419d94 +0x31e:  mov    0xc(%ebp),%eax
08419d97 +0x321:  movb   $0x1,0x8(%eax)
08419d9b +0x325:  mov    0xc(%ebp),%eax
08419d9e +0x328:  movl   $0x0,0xc(%eax)
08419da5 +0x32f:  mov    $0x1,%eax
08419daa +0x334:  add    $0x1e0,%esp
08419db0 +0x33a:  pop    %ebx
08419db1 +0x33b:  pop    %edi
08419db2 +0x33c:  pop    %ebp
08419db3 +0x33d:  ret
```

## 反编译 C

```c
// DB_LoadDungeonClear::AradLoadDungeonClear @ 0x8419a76

/* DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_LoadDungeonClear::AradLoadDungeonClear(DB_LoadDungeonClear *this,SIG_LOAD_DUNGEON_CLEAR *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  char local_1c4 [428];
  MySQL *local_18;
  SIG_LOAD_DUNGEON_CLEAR *local_14;
  int local_10;
  
  bVar8 = 0;
  cVar1 = AradLoadMemberDungeonClear(this,param_1);
  if (cVar1 == '\0') {
    local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(local_18,
                     "select B.dungeon from charac_info A Inner Join charac_dungeon B where A.m_id = %d and B.charac_no = A.charac_no and A.delete_flag = 0"
                     ,*(undefined4 *)(param_1 + 4));
    cVar1 = MySQL::exec(local_18,true);
    if (cVar1 == '\x01') {
      iVar3 = MySQL::get_n_rows(local_18);
      if (iVar3 == 0) {
        uVar2 = MySQL::get_n_rows(local_18);
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",0x4b79,
                   "Dungeon count error : m_id(%d) dungeon count(%d)",*(undefined4 *)(param_1 + 4),
                   uVar2);
        uVar2 = 1;
      }
      else {
        pcVar7 = local_1c4;
        for (iVar3 = 0x6b; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
        }
        local_14 = param_1 + 0x10;
        local_10 = 0;
        while (iVar3 = MySQL::get_n_rows(local_18), local_10 < iVar3) {
          cVar1 = MySQL::fetch(local_18);
          if (cVar1 != '\x01') {
            uVar2 = MySQL::get_n_rows(local_18);
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",
                       0x4b89,"Dungeon fetch error : m_id(%d) dungeon count(%d)",
                       *(undefined4 *)(param_1 + 4),uVar2);
            return 0;
          }
          cVar1 = MySQL::get_str(local_18,0,local_1c4,0x1ab);
          if (cVar1 != '\x01') {
            uVar2 = MySQL::get_n_rows(local_18);
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",
                       0x4b8f,"Dungeon Parsing error : m_id(%d) dungeon count(%d)",
                       *(undefined4 *)(param_1 + 4),uVar2);
            return 0;
          }
          sVar4 = strlen((char *)(param_1 + 0x10));
          sVar5 = strlen(local_1c4);
          if (0x1800 < sVar4 + sVar5) {
            uVar2 = MySQL::get_n_rows(local_18);
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",
                       0x4b95,"Dungeon Total Data Error : m_id(%d) dungeon count(%d)",
                       *(undefined4 *)(param_1 + 4),uVar2);
            return 0;
          }
          memcpy(local_14,local_1c4,0x1ac);
          sVar4 = strlen((char *)local_14);
          iVar3 = local_10;
          local_14 = local_14 + sVar4;
          iVar6 = MySQL::get_n_rows(local_18);
          if (iVar3 != iVar6 + -1) {
            *local_14 = (SIG_LOAD_DUNGEON_CLEAR)0x2c;
            local_14 = local_14 + 1;
          }
          local_10 = local_10 + 1;
        }
        param_1[8] = (SIG_LOAD_DUNGEON_CLEAR)0x1;
        *(undefined4 *)(param_1 + 0xc) = 0;
        uVar2 = 1;
      }
    }
    else {
      uVar2 = MySQL::get_n_rows(local_18);
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_LoadDungeonClear::AradLoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",0x4b72,
                 "Dungeon share query error : m_id(%d) dungeon count(%d)",
                 *(undefined4 *)(param_1 + 4),uVar2);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
