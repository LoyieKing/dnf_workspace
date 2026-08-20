# LoadProperDungeonClearCount

`_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadProperDungeonClearCount(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x084073aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084073aa  _ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadProperDungeonClearCount(SIG_LOAD_ETC*)
# range [0x084073aa, 0x08407481]
084073aa +0x00:  push   %ebp
084073ab +0x01:  mov    %esp,%ebp
084073ad +0x03:  sub    $0x28,%esp
084073b0 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084073b5 +0x0b:  movl   $0x0,0x8(%esp)
084073bd +0x13:  movl   $0x2,0x4(%esp)
084073c5 +0x1b:  mov    %eax,(%esp)
084073c8 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084073cd +0x23:  mov    %eax,-0x10(%ebp)
084073d0 +0x26:  mov    0xc(%ebp),%eax
084073d3 +0x29:  mov    0x4(%eax),%eax
084073d6 +0x2c:  mov    %eax,0x8(%esp)
084073da +0x30:  movl   $"seLect clear_cnt from event_dungeon_clear where charac_no=%u",0x4(%esp)
084073e2 +0x38:  mov    -0x10(%ebp),%eax
084073e5 +0x3b:  mov    %eax,(%esp)
084073e8 +0x3e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084073ed +0x43:  movl   $0x1,0x4(%esp)
084073f5 +0x4b:  mov    -0x10(%ebp),%eax
084073f8 +0x4e:  mov    %eax,(%esp)
084073fb +0x51:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08407400 +0x56:  xor    $0x1,%eax
08407403 +0x59:  test   %al,%al
08407405 +0x5b:  je     0840740e <+0x64>
08407407 +0x5d:  mov    $0x0,%eax
0840740c +0x62:  jmp    08407480 <+0xd6>
0840740e +0x64:  mov    -0x10(%ebp),%eax
08407411 +0x67:  mov    %eax,(%esp)
08407414 +0x6a:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08407419 +0x6f:  mov    %eax,-0xc(%ebp)
0840741c +0x72:  cmpl   $0x1,-0xc(%ebp)
08407420 +0x76:  je     08407435 <+0x8b>
08407422 +0x78:  mov    0xc(%ebp),%eax
08407425 +0x7b:  movw   $0x0,0x40cc(%eax)
0840742e +0x84:  mov    $0x1,%eax
08407433 +0x89:  jmp    08407480 <+0xd6>
08407435 +0x8b:  mov    -0x10(%ebp),%eax
08407438 +0x8e:  mov    %eax,(%esp)
0840743b +0x91:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08407440 +0x96:  xor    $0x1,%eax
08407443 +0x99:  test   %al,%al
08407445 +0x9b:  je     0840744e <+0xa4>
08407447 +0x9d:  mov    $0x0,%eax
0840744c +0xa2:  jmp    08407480 <+0xd6>
0840744e +0xa4:  mov    0xc(%ebp),%eax
08407451 +0xa7:  add    $0x40cc,%eax
08407456 +0xac:  mov    %eax,0x8(%esp)
0840745a +0xb0:  movl   $0x0,0x4(%esp)
08407462 +0xb8:  mov    -0x10(%ebp),%eax
08407465 +0xbb:  mov    %eax,(%esp)
08407468 +0xbe:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840746d +0xc3:  xor    $0x1,%eax
08407470 +0xc6:  test   %al,%al
08407472 +0xc8:  je     0840747b <+0xd1>
08407474 +0xca:  mov    $0x0,%eax
08407479 +0xcf:  jmp    08407480 <+0xd6>
0840747b +0xd1:  mov    $0x1,%eax
08407480 +0xd6:  leave
08407481 +0xd7:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadProperDungeonClearCount @ 0x84073aa

/* DB_LoadEtc::LoadProperDungeonClearCount(SIG_LOAD_ETC*) */

undefined4 __thiscall
DB_LoadEtc::LoadProperDungeonClearCount(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect clear_cnt from event_dungeon_clear where charac_no=%u",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + 0x40cc));
        if (cVar1 == '\x01') {
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
      *(undefined2 *)(param_1 + 0x40cc) = 0;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
