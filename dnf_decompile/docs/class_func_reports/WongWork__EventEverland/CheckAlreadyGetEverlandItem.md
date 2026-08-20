# CheckAlreadyGetEverlandItem

`_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji`

`WongWork::EventEverland::CheckAlreadyGetEverlandItem(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventEverland` | `0x083fac0d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fac0d  _ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji
#           WongWork::EventEverland::CheckAlreadyGetEverlandItem(unsigned int, int)
# range [0x083fac0d, 0x083face2]
083fac0d +0x00:  push   %ebp
083fac0e +0x01:  mov    %esp,%ebp
083fac10 +0x03:  sub    $0x28,%esp
083fac13 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fac18 +0x0b:  movl   $0x0,0x8(%esp)
083fac20 +0x13:  movl   $0x1,0x4(%esp)
083fac28 +0x1b:  mov    %eax,(%esp)
083fac2b +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fac30 +0x23:  mov    %eax,-0xc(%ebp)
083fac33 +0x26:  mov    0xc(%ebp),%eax
083fac36 +0x29:  mov    %eax,0x4(%esp)
083fac3a +0x2d:  movl   $0x4,(%esp)
083fac41 +0x34:  call   086c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>  ; WongWork::CWebEvent::GetItemType(int, int)
083fac46 +0x39:  cmp    $0x1,%eax
083fac49 +0x3c:  jne    083fac75 <+0x68>
083fac4b +0x3e:  movl   $0x0,0x4(%esp)
083fac53 +0x46:  mov    0x8(%ebp),%eax
083fac56 +0x49:  mov    %eax,(%esp)
083fac59 +0x4c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fac5e +0x51:  mov    %eax,0x8(%esp)
083fac62 +0x55:  movl   $"seLect coin_check from event_everland_info where id=%s",0x4(%esp)
083fac6a +0x5d:  mov    -0xc(%ebp),%eax
083fac6d +0x60:  mov    %eax,(%esp)
083fac70 +0x63:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fac75 +0x68:  movl   $0x1,0x4(%esp)
083fac7d +0x70:  mov    -0xc(%ebp),%eax
083fac80 +0x73:  mov    %eax,(%esp)
083fac83 +0x76:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fac88 +0x7b:  xor    $0x1,%eax
083fac8b +0x7e:  test   %al,%al
083fac8d +0x80:  je     083fac96 <+0x89>
083fac8f +0x82:  mov    $0x0,%eax
083fac94 +0x87:  jmp    083face1 <+0xd4>
083fac96 +0x89:  movl   $0x0,-0x10(%ebp)
083fac9d +0x90:  lea    -0x10(%ebp),%eax
083faca0 +0x93:  mov    %eax,0x8(%esp)
083faca4 +0x97:  movl   $0x0,0x4(%esp)
083facac +0x9f:  mov    -0xc(%ebp),%eax
083facaf +0xa2:  mov    %eax,(%esp)
083facb2 +0xa5:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083facb7 +0xaa:  xor    $0x1,%eax
083facba +0xad:  test   %al,%al
083facbc +0xaf:  jne    083facc5 <+0xb8>
083facbe +0xb1:  mov    -0x10(%ebp),%eax
083facc1 +0xb4:  test   %eax,%eax
083facc3 +0xb6:  jne    083faccc <+0xbf>
083facc5 +0xb8:  mov    $0x1,%eax
083facca +0xbd:  jmp    083facd1 <+0xc4>
083faccc +0xbf:  mov    $0x0,%eax
083facd1 +0xc4:  test   %al,%al
083facd3 +0xc6:  je     083facdc <+0xcf>
083facd5 +0xc8:  mov    $0x0,%eax
083facda +0xcd:  jmp    083face1 <+0xd4>
083facdc +0xcf:  mov    $0x1,%eax
083face1 +0xd4:  leave
083face2 +0xd5:  ret
```

## 反编译 C

```c
// WongWork::EventEverland::CheckAlreadyGetEverlandItem @ 0x83fac0d

/* WongWork::EventEverland::CheckAlreadyGetEverlandItem(unsigned int, int) */

undefined4 WongWork::EventEverland::CheckAlreadyGetEverlandItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar3 = CWebEvent::GetItemType(4,param_2);
  if (iVar3 == 1) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect coin_check from event_everland_info where id=%s",uVar4);
  }
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::get_int(local_10,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
