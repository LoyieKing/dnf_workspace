# LoadPcRoomPlayTimeInfo

`_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadPcRoomPlayTimeInfo(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x084066ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084066ae  _ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadPcRoomPlayTimeInfo(SIG_LOAD_ETC*)
# range [0x084066ae, 0x0840680f]
084066ae +0x000:  push   %ebp
084066af +0x001:  mov    %esp,%ebp
084066b1 +0x003:  sub    $0x28,%esp
084066b4 +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084066b9 +0x00b:  movl   $0x5c,0x4(%esp)
084066c1 +0x013:  mov    %eax,(%esp)
084066c4 +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084066c9 +0x01b:  mov    (%eax),%edx
084066cb +0x01d:  add    $0x34,%edx
084066ce +0x020:  mov    (%edx),%edx
084066d0 +0x022:  movl   $0x0,0x4(%esp)
084066d8 +0x02a:  mov    %eax,(%esp)
084066db +0x02d:  call   *%edx
084066dd +0x02f:  xor    $0x1,%eax
084066e0 +0x032:  test   %al,%al
084066e2 +0x034:  je     084066ee <+0x40>
084066e4 +0x036:  mov    $0x1,%eax
084066e9 +0x03b:  jmp    0840680e <+0x160>
084066ee +0x040:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084066f3 +0x045:  movl   $0x0,0x8(%esp)
084066fb +0x04d:  movl   $0x9,0x4(%esp)
08406703 +0x055:  mov    %eax,(%esp)
08406706 +0x058:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840670b +0x05d:  mov    %eax,-0xc(%ebp)
0840670e +0x060:  mov    0xc(%ebp),%eax
08406711 +0x063:  mov    (%eax),%eax
08406713 +0x065:  movl   $0x0,0x4(%esp)
0840671b +0x06d:  mov    %eax,(%esp)
0840671e +0x070:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08406723 +0x075:  mov    %eax,0x8(%esp)
08406727 +0x079:  movl   $"seLect play_time, reward_cnt from event_1204_pcroom_play_time where m_id = %s and occ_date > curdate()",0x4(%esp)
0840672f +0x081:  mov    -0xc(%ebp),%eax
08406732 +0x084:  mov    %eax,(%esp)
08406735 +0x087:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840673a +0x08c:  movl   $0x1,0x4(%esp)
08406742 +0x094:  mov    -0xc(%ebp),%eax
08406745 +0x097:  mov    %eax,(%esp)
08406748 +0x09a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840674d +0x09f:  xor    $0x1,%eax
08406750 +0x0a2:  test   %al,%al
08406752 +0x0a4:  je     0840675e <+0xb0>
08406754 +0x0a6:  mov    $0x0,%eax
08406759 +0x0ab:  jmp    0840680e <+0x160>
0840675e +0x0b0:  movl   $0x0,-0x10(%ebp)
08406765 +0x0b7:  movb   $0x0,-0x11(%ebp)
08406769 +0x0bb:  mov    -0xc(%ebp),%eax
0840676c +0x0be:  mov    %eax,(%esp)
0840676f +0x0c1:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08406774 +0x0c6:  test   %eax,%eax
08406776 +0x0c8:  sete   %al
08406779 +0x0cb:  test   %al,%al
0840677b +0x0cd:  je     08406787 <+0xd9>
0840677d +0x0cf:  mov    $0x1,%eax
08406782 +0x0d4:  jmp    0840680e <+0x160>
08406787 +0x0d9:  mov    -0xc(%ebp),%eax
0840678a +0x0dc:  mov    %eax,(%esp)
0840678d +0x0df:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08406792 +0x0e4:  xor    $0x1,%eax
08406795 +0x0e7:  test   %al,%al
08406797 +0x0e9:  je     084067a0 <+0xf2>
08406799 +0x0eb:  mov    $0x0,%eax
0840679e +0x0f0:  jmp    0840680e <+0x160>
084067a0 +0x0f2:  lea    -0x10(%ebp),%eax
084067a3 +0x0f5:  mov    %eax,0x8(%esp)
084067a7 +0x0f9:  movl   $0x0,0x4(%esp)
084067af +0x101:  mov    -0xc(%ebp),%eax
084067b2 +0x104:  mov    %eax,(%esp)
084067b5 +0x107:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084067ba +0x10c:  xor    $0x1,%eax
084067bd +0x10f:  test   %al,%al
084067bf +0x111:  je     084067c8 <+0x11a>
084067c1 +0x113:  mov    $0x0,%eax
084067c6 +0x118:  jmp    0840680e <+0x160>
084067c8 +0x11a:  lea    -0x11(%ebp),%eax
084067cb +0x11d:  mov    %eax,0x8(%esp)
084067cf +0x121:  movl   $0x1,0x4(%esp)
084067d7 +0x129:  mov    -0xc(%ebp),%eax
084067da +0x12c:  mov    %eax,(%esp)
084067dd +0x12f:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
084067e2 +0x134:  xor    $0x1,%eax
084067e5 +0x137:  test   %al,%al
084067e7 +0x139:  je     084067f0 <+0x142>
084067e9 +0x13b:  mov    $0x0,%eax
084067ee +0x140:  jmp    0840680e <+0x160>
084067f0 +0x142:  mov    -0x10(%ebp),%edx
084067f3 +0x145:  mov    0xc(%ebp),%eax
084067f6 +0x148:  mov    %edx,0xc9b3(%eax)
084067fc +0x14e:  movzbl -0x11(%ebp),%edx
08406800 +0x152:  mov    0xc(%ebp),%eax
08406803 +0x155:  mov    %dl,0xc9b7(%eax)
08406809 +0x15b:  mov    $0x1,%eax
0840680e +0x160:  leave
0840680f +0x161:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadPcRoomPlayTimeInfo @ 0x84066ae

/* DB_LoadEtc::LoadPcRoomPlayTimeInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadPcRoomPlayTimeInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  SIG_LOAD_ETC local_15;
  uint local_14;
  MySQL *local_10;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5c);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    uVar3 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_10,
                     "seLect play_time, reward_cnt from event_1204_pcroom_play_time where m_id = %s and occ_date > curdate()"
                     ,uVar3);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      local_14 = 0;
      local_15 = (SIG_LOAD_ETC)0x0;
      iVar4 = MySQL::get_n_rows(local_10);
      if (iVar4 == 0) {
        uVar3 = 1;
      }
      else {
        cVar1 = MySQL::fetch(local_10);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_uint(local_10,0,&local_14);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_ubyte(local_10,1,(uchar *)&local_15);
            if (cVar1 == '\x01') {
              *(uint *)(param_1 + 0xc9b3) = local_14;
              param_1[0xc9b7] = local_15;
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
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
