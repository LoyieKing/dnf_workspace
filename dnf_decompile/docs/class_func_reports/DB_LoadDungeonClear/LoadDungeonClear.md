# LoadDungeonClear

`_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR`

`DB_LoadDungeonClear::LoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)`

| 类 | 地址 |
|---|---|
| `DB_LoadDungeonClear` | `0x08419db4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08419db4  _ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR
#           DB_LoadDungeonClear::LoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)
# range [0x08419db4, 0x08419f09]
08419db4 +0x000:  push   %ebp
08419db5 +0x001:  mov    %esp,%ebp
08419db7 +0x003:  push   %ebx
08419db8 +0x004:  sub    $0x34,%esp
08419dbb +0x007:  mov    0xc(%ebp),%eax
08419dbe +0x00a:  movl   $0x1,0xc(%eax)
08419dc5 +0x011:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08419dca +0x016:  movl   $0x0,0x8(%esp)
08419dd2 +0x01e:  movl   $0x2,0x4(%esp)
08419dda +0x026:  mov    %eax,(%esp)
08419ddd +0x029:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08419de2 +0x02e:  mov    %eax,-0xc(%ebp)
08419de5 +0x031:  mov    0xc(%ebp),%eax
08419de8 +0x034:  mov    0x4(%eax),%eax
08419deb +0x037:  movl   $0x0,0x4(%esp)
08419df3 +0x03f:  mov    %eax,(%esp)
08419df6 +0x042:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08419dfb +0x047:  mov    %eax,0x8(%esp)
08419dff +0x04b:  movl   $"seLect dungeon from member_dungeon where m_id=%s",0x4(%esp)
08419e07 +0x053:  mov    -0xc(%ebp),%eax
08419e0a +0x056:  mov    %eax,(%esp)
08419e0d +0x059:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08419e12 +0x05e:  movl   $0x1,0x4(%esp)
08419e1a +0x066:  mov    -0xc(%ebp),%eax
08419e1d +0x069:  mov    %eax,(%esp)
08419e20 +0x06c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08419e25 +0x071:  xor    $0x1,%eax
08419e28 +0x074:  test   %al,%al
08419e2a +0x076:  je     08419e36 <+0x82>
08419e2c +0x078:  mov    $0x0,%eax
08419e31 +0x07d:  jmp    08419f04 <+0x150>
08419e36 +0x082:  mov    -0xc(%ebp),%eax
08419e39 +0x085:  mov    %eax,(%esp)
08419e3c +0x088:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419e41 +0x08d:  cmp    $0x1,%eax
08419e44 +0x090:  setne  %al
08419e47 +0x093:  test   %al,%al
08419e49 +0x095:  je     08419ea9 <+0xf5>
08419e4b +0x097:  mov    -0xc(%ebp),%eax
08419e4e +0x09a:  mov    %eax,(%esp)
08419e51 +0x09d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08419e56 +0x0a2:  mov    %eax,%ebx
08419e58 +0x0a4:  mov    0xc(%ebp),%eax
08419e5b +0x0a7:  mov    0x4(%eax),%eax
08419e5e +0x0aa:  movl   $0x0,0x4(%esp)
08419e66 +0x0b2:  mov    %eax,(%esp)
08419e69 +0x0b5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08419e6e +0x0ba:  mov    %ebx,0x18(%esp)
08419e72 +0x0be:  mov    %eax,0x14(%esp)
08419e76 +0x0c2:  movl   $"Dungeon count error : m_id(%s) dungeon count(%d)",0x10(%esp)
08419e7e +0x0ca:  movl   $0x4bbc,0xc(%esp)
08419e86 +0x0d2:  movl   $&_ZZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEARE19__PRETTY_FUNCTION__,0x8(%esp)
08419e8e +0x0da:  movl   $"DBThread.cpp",0x4(%esp)
08419e96 +0x0e2:  movl   $0x1,(%esp)
08419e9d +0x0e9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08419ea2 +0x0ee:  mov    $0x0,%eax
08419ea7 +0x0f3:  jmp    08419f04 <+0x150>
08419ea9 +0x0f5:  mov    -0xc(%ebp),%eax
08419eac +0x0f8:  mov    %eax,(%esp)
08419eaf +0x0fb:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08419eb4 +0x100:  xor    $0x1,%eax
08419eb7 +0x103:  test   %al,%al
08419eb9 +0x105:  je     08419ec2 <+0x10e>
08419ebb +0x107:  mov    $0x0,%eax
08419ec0 +0x10c:  jmp    08419f04 <+0x150>
08419ec2 +0x10e:  mov    0xc(%ebp),%eax
08419ec5 +0x111:  add    $0x10,%eax
08419ec8 +0x114:  movl   $0x17ff,0xc(%esp)
08419ed0 +0x11c:  mov    %eax,0x8(%esp)
08419ed4 +0x120:  movl   $0x0,0x4(%esp)
08419edc +0x128:  mov    -0xc(%ebp),%eax
08419edf +0x12b:  mov    %eax,(%esp)
08419ee2 +0x12e:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08419ee7 +0x133:  xor    $0x1,%eax
08419eea +0x136:  test   %al,%al
08419eec +0x138:  je     08419ef5 <+0x141>
08419eee +0x13a:  mov    $0x0,%eax
08419ef3 +0x13f:  jmp    08419f04 <+0x150>
08419ef5 +0x141:  mov    0xc(%ebp),%eax
08419ef8 +0x144:  movl   $0x0,0xc(%eax)
08419eff +0x14b:  mov    $0x1,%eax
08419f04 +0x150:  add    $0x34,%esp
08419f07 +0x153:  pop    %ebx
08419f08 +0x154:  pop    %ebp
08419f09 +0x155:  ret
```

## 反编译 C

```c
// DB_LoadDungeonClear::LoadDungeonClear @ 0x8419db4

/* DB_LoadDungeonClear::LoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_LoadDungeonClear::LoadDungeonClear(DB_LoadDungeonClear *this,SIG_LOAD_DUNGEON_CLEAR *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 4),0);
  MySQL::set_query(this_00,"seLect dungeon from member_dungeon where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(this_00,0,(char *)(param_1 + 0x10),0x17ff);
        if (cVar1 == '\x01') {
          *(undefined4 *)(param_1 + 0xc) = 0;
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
    else {
      uVar2 = MySQL::get_n_rows(this_00);
      uVar4 = NumberToString(*(uint *)(param_1 + 4),0);
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_LoadDungeonClear::LoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)",0x4bbc,
                 "Dungeon count error : m_id(%s) dungeon count(%d)",uVar4,uVar2);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
