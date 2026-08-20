# AradLoadMemberDungeonClear

`_ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR`

`DB_LoadDungeonClear::AradLoadMemberDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)`

| 类 | 地址 |
|---|---|
| `DB_LoadDungeonClear` | `0x0841996e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841996e  _ZN19DB_LoadDungeonClear26AradLoadMemberDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR
#           DB_LoadDungeonClear::AradLoadMemberDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)
# range [0x0841996e, 0x08419a75]
0841996e +0x000:  push   %ebp
0841996f +0x001:  mov    %esp,%ebp
08419971 +0x003:  sub    $0x28,%esp
08419974 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08419979 +0x00b:  movl   $0x0,0x8(%esp)
08419981 +0x013:  movl   $0x2,0x4(%esp)
08419989 +0x01b:  mov    %eax,(%esp)
0841998c +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08419991 +0x023:  mov    %eax,-0x10(%ebp)
08419994 +0x026:  mov    0xc(%ebp),%eax
08419997 +0x029:  mov    0x4(%eax),%eax
0841999a +0x02c:  mov    %eax,0x8(%esp)
0841999e +0x030:  movl   $"seLect dungeon from member_dungeon where m_id=%u",0x4(%esp)
084199a6 +0x038:  mov    -0x10(%ebp),%eax
084199a9 +0x03b:  mov    %eax,(%esp)
084199ac +0x03e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084199b1 +0x043:  movl   $0x1,0x4(%esp)
084199b9 +0x04b:  mov    -0x10(%ebp),%eax
084199bc +0x04e:  mov    %eax,(%esp)
084199bf +0x051:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084199c4 +0x056:  xor    $0x1,%eax
084199c7 +0x059:  test   %al,%al
084199c9 +0x05b:  je     084199d5 <+0x67>
084199cb +0x05d:  mov    $0x0,%eax
084199d0 +0x062:  jmp    08419a73 <+0x105>
084199d5 +0x067:  mov    -0x10(%ebp),%eax
084199d8 +0x06a:  mov    %eax,(%esp)
084199db +0x06d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084199e0 +0x072:  test   %eax,%eax
084199e2 +0x074:  sete   %al
084199e5 +0x077:  test   %al,%al
084199e7 +0x079:  je     084199f3 <+0x85>
084199e9 +0x07b:  mov    $0x0,%eax
084199ee +0x080:  jmp    08419a73 <+0x105>
084199f3 +0x085:  mov    -0x10(%ebp),%eax
084199f6 +0x088:  mov    %eax,(%esp)
084199f9 +0x08b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084199fe +0x090:  xor    $0x1,%eax
08419a01 +0x093:  test   %al,%al
08419a03 +0x095:  je     08419a0c <+0x9e>
08419a05 +0x097:  mov    $0x0,%eax
08419a0a +0x09c:  jmp    08419a73 <+0x105>
08419a0c +0x09e:  mov    0xc(%ebp),%eax
08419a0f +0x0a1:  add    $0x10,%eax
08419a12 +0x0a4:  movl   $0x17ff,0xc(%esp)
08419a1a +0x0ac:  mov    %eax,0x8(%esp)
08419a1e +0x0b0:  movl   $0x0,0x4(%esp)
08419a26 +0x0b8:  mov    -0x10(%ebp),%eax
08419a29 +0x0bb:  mov    %eax,(%esp)
08419a2c +0x0be:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08419a31 +0x0c3:  xor    $0x1,%eax
08419a34 +0x0c6:  test   %al,%al
08419a36 +0x0c8:  je     08419a3f <+0xd1>
08419a38 +0x0ca:  mov    $0x0,%eax
08419a3d +0x0cf:  jmp    08419a73 <+0x105>
08419a3f +0x0d1:  mov    0xc(%ebp),%eax
08419a42 +0x0d4:  add    $0x10,%eax
08419a45 +0x0d7:  mov    %eax,(%esp)
08419a48 +0x0da:  call   0807e3b0 <_init+0xca8>
08419a4d +0x0df:  mov    %eax,-0xc(%ebp)
08419a50 +0x0e2:  cmpl   $0x0,-0xc(%ebp)
08419a54 +0x0e6:  jne    08419a5d <+0xef>
08419a56 +0x0e8:  mov    $0x0,%eax
08419a5b +0x0ed:  jmp    08419a73 <+0x105>
08419a5d +0x0ef:  mov    0xc(%ebp),%eax
08419a60 +0x0f2:  movb   $0x0,0x8(%eax)
08419a64 +0x0f6:  mov    0xc(%ebp),%eax
08419a67 +0x0f9:  movl   $0x0,0xc(%eax)
08419a6e +0x100:  mov    $0x1,%eax
08419a73 +0x105:  leave
08419a74 +0x106:  ret
08419a75 +0x107:  nop
```

## 反编译 C

```c
// DB_LoadDungeonClear::AradLoadMemberDungeonClear @ 0x841996e

/* DB_LoadDungeonClear::AradLoadMemberDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_LoadDungeonClear::AradLoadMemberDungeonClear
          (DB_LoadDungeonClear *this,SIG_LOAD_DUNGEON_CLEAR *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect dungeon from member_dungeon where m_id=%u",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(this_00,0,(char *)(param_1 + 0x10),0x17ff);
        if (cVar1 == '\x01') {
          sVar4 = strlen((char *)(param_1 + 0x10));
          if (sVar4 == 0) {
            uVar2 = 0;
          }
          else {
            param_1[8] = (SIG_LOAD_DUNGEON_CLEAR)0x0;
            *(undefined4 *)(param_1 + 0xc) = 0;
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
