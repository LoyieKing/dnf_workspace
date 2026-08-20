# SaveDungeonClear

`_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR`

`DB_SaveDungeonClear::SaveDungeonClear(SIG_SAVE_DUNGEON_CLEAR*)`

| 类 | 地址 |
|---|---|
| `DB_SaveDungeonClear` | `0x0841a0a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a0a6  _ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR
#           DB_SaveDungeonClear::SaveDungeonClear(SIG_SAVE_DUNGEON_CLEAR*)
# range [0x0841a0a6, 0x0841a1a1]
0841a0a6 +0x00:  push   %ebp
0841a0a7 +0x01:  mov    %esp,%ebp
0841a0a9 +0x03:  push   %ebx
0841a0aa +0x04:  sub    $0x24,%esp
0841a0ad +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841a0b2 +0x0c:  movl   $0x0,0x8(%esp)
0841a0ba +0x14:  movl   $0x2,0x4(%esp)
0841a0c2 +0x1c:  mov    %eax,(%esp)
0841a0c5 +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841a0ca +0x24:  mov    %eax,-0xc(%ebp)
0841a0cd +0x27:  mov    0xc(%ebp),%eax
0841a0d0 +0x2a:  mov    0x4(%eax),%eax
0841a0d3 +0x2d:  movl   $0x0,0x4(%esp)
0841a0db +0x35:  mov    %eax,(%esp)
0841a0de +0x38:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841a0e3 +0x3d:  mov    0xc(%ebp),%edx
0841a0e6 +0x40:  add    $0xc,%edx
0841a0e9 +0x43:  mov    %eax,0xc(%esp)
0841a0ed +0x47:  mov    %edx,0x8(%esp)
0841a0f1 +0x4b:  movl   $"upDate member_dungeon set dungeon='%s' where m_id=%s",0x4(%esp)
0841a0f9 +0x53:  mov    -0xc(%ebp),%eax
0841a0fc +0x56:  mov    %eax,(%esp)
0841a0ff +0x59:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a104 +0x5e:  movl   $0x1,0x4(%esp)
0841a10c +0x66:  mov    -0xc(%ebp),%eax
0841a10f +0x69:  mov    %eax,(%esp)
0841a112 +0x6c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a117 +0x71:  xor    $0x1,%eax
0841a11a +0x74:  test   %al,%al
0841a11c +0x76:  jne    0841a12f <+0x89>
0841a11e +0x78:  mov    -0xc(%ebp),%eax
0841a121 +0x7b:  mov    %eax,(%esp)
0841a124 +0x7e:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0841a129 +0x83:  or     %edx,%eax
0841a12b +0x85:  test   %eax,%eax
0841a12d +0x87:  jne    0841a136 <+0x90>
0841a12f +0x89:  mov    $0x1,%eax
0841a134 +0x8e:  jmp    0841a13b <+0x95>
0841a136 +0x90:  mov    $0x0,%eax
0841a13b +0x95:  test   %al,%al
0841a13d +0x97:  je     0841a197 <+0xf1>
0841a13f +0x99:  mov    0xc(%ebp),%eax
0841a142 +0x9c:  lea    0xc(%eax),%ebx
0841a145 +0x9f:  mov    0xc(%ebp),%eax
0841a148 +0xa2:  mov    0x4(%eax),%eax
0841a14b +0xa5:  movl   $0x0,0x4(%esp)
0841a153 +0xad:  mov    %eax,(%esp)
0841a156 +0xb0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841a15b +0xb5:  mov    %ebx,0xc(%esp)
0841a15f +0xb9:  mov    %eax,0x8(%esp)
0841a163 +0xbd:  movl   $"inSert into member_dungeon (m_id,dungeon) values (%s,'%s')",0x4(%esp)
0841a16b +0xc5:  mov    -0xc(%ebp),%eax
0841a16e +0xc8:  mov    %eax,(%esp)
0841a171 +0xcb:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a176 +0xd0:  movl   $0x1,0x4(%esp)
0841a17e +0xd8:  mov    -0xc(%ebp),%eax
0841a181 +0xdb:  mov    %eax,(%esp)
0841a184 +0xde:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a189 +0xe3:  xor    $0x1,%eax
0841a18c +0xe6:  test   %al,%al
0841a18e +0xe8:  je     0841a197 <+0xf1>
0841a190 +0xea:  mov    $0x0,%eax
0841a195 +0xef:  jmp    0841a19c <+0xf6>
0841a197 +0xf1:  mov    $0x1,%eax
0841a19c +0xf6:  add    $0x24,%esp
0841a19f +0xf9:  pop    %ebx
0841a1a0 +0xfa:  pop    %ebp
0841a1a1 +0xfb:  ret
```

## 反编译 C

```c
// DB_SaveDungeonClear::SaveDungeonClear @ 0x841a0a6

/* DB_SaveDungeonClear::SaveDungeonClear(SIG_SAVE_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_SaveDungeonClear::SaveDungeonClear(DB_SaveDungeonClear *this,SIG_SAVE_DUNGEON_CLEAR *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  longlong lVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 4),0);
  MySQL::set_query(this_00,"upDate member_dungeon set dungeon=\'%s\' where m_id=%s",param_1 + 0xc,
                   uVar3);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this_00), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(*(uint *)(param_1 + 4),0);
    MySQL::set_query(this_00,"inSert into member_dungeon (m_id,dungeon) values (%s,\'%s\')",uVar3,
                     param_1 + 0xc);
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
