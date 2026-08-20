# LoadEventFromDB

`_ZN13CEventManager15LoadEventFromDBEv`

`CEventManager::LoadEventFromDB()`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x081159b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081159b6  _ZN13CEventManager15LoadEventFromDBEv
#           CEventManager::LoadEventFromDB()
# range [0x081159b6, 0x08115bf3]
081159b6 +0x000:  push   %ebp
081159b7 +0x001:  mov    %esp,%ebp
081159b9 +0x003:  push   %edi
081159ba +0x004:  push   %esi
081159bb +0x005:  push   %ebx
081159bc +0x006:  sub    $0x6c,%esp
081159bf +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
081159c4 +0x00e:  movl   $0x0,0x8(%esp)
081159cc +0x016:  movl   $0x1,0x4(%esp)
081159d4 +0x01e:  mov    %eax,(%esp)
081159d7 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081159dc +0x026:  mov    %eax,-0x24(%ebp)
081159df +0x029:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081159e4 +0x02e:  mov    0x378(%eax),%eax
081159ea +0x034:  mov    %eax,0x8(%esp)
081159ee +0x038:  movl   $"seLect event_type, parameter1, parameter2 from dnf_event_log where end_time = 0 and server_id in (0,%d) and unix_timestamp() >= start_time order by start_time",0x4(%esp)
081159f6 +0x040:  mov    -0x24(%ebp),%eax
081159f9 +0x043:  mov    %eax,(%esp)
081159fc +0x046:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08115a01 +0x04b:  movl   $0x1,0x14(%esp)
08115a09 +0x053:  movl   $0x1,0x10(%esp)
08115a11 +0x05b:  movl   $0x9,0xc(%esp)
08115a19 +0x063:  movl   $0x296,0x8(%esp)
08115a21 +0x06b:  movl   $&_ZZN13CEventManager15LoadEventFromDBEvE19__PRETTY_FUNCTION__,0x4(%esp)
08115a29 +0x073:  lea    -0x48(%ebp),%eax
08115a2c +0x076:  mov    %eax,(%esp)
08115a2f +0x079:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08115a34 +0x07e:  movl   $"[!] Load Event From DB",0x4(%esp)
08115a3c +0x086:  lea    -0x48(%ebp),%eax
08115a3f +0x089:  mov    %eax,(%esp)
08115a42 +0x08c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08115a47 +0x091:  movl   $0x1,0x4(%esp)
08115a4f +0x099:  mov    -0x24(%ebp),%eax
08115a52 +0x09c:  mov    %eax,(%esp)
08115a55 +0x09f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08115a5a +0x0a4:  mov    %al,-0x25(%ebp)
08115a5d +0x0a7:  movzbl -0x25(%ebp),%eax
08115a61 +0x0ab:  xor    $0x1,%eax
08115a64 +0x0ae:  test   %al,%al
08115a66 +0x0b0:  je     08115a72 <+0xbc>
08115a68 +0x0b2:  mov    $0x0,%eax
08115a6d +0x0b7:  jmp    08115bec <+0x236>
08115a72 +0x0bc:  mov    -0x24(%ebp),%eax
08115a75 +0x0bf:  mov    %eax,(%esp)
08115a78 +0x0c2:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08115a7d +0x0c7:  mov    %eax,-0x20(%ebp)
08115a80 +0x0ca:  movl   $0x0,-0x1c(%ebp)
08115a87 +0x0d1:  jmp    08115bd3 <+0x21d>
08115a8c +0x0d6:  mov    -0x24(%ebp),%eax
08115a8f +0x0d9:  mov    %eax,(%esp)
08115a92 +0x0dc:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08115a97 +0x0e1:  mov    %al,-0x25(%ebp)
08115a9a +0x0e4:  movzbl -0x25(%ebp),%eax
08115a9e +0x0e8:  xor    $0x1,%eax
08115aa1 +0x0eb:  test   %al,%al
08115aa3 +0x0ed:  jne    08115be6 <+0x230>
08115aa9 +0x0f3:  lea    -0x4c(%ebp),%eax
08115aac +0x0f6:  mov    %eax,0x8(%esp)
08115ab0 +0x0fa:  movl   $0x0,0x4(%esp)
08115ab8 +0x102:  mov    -0x24(%ebp),%eax
08115abb +0x105:  mov    %eax,(%esp)
08115abe +0x108:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08115ac3 +0x10d:  mov    %al,-0x25(%ebp)
08115ac6 +0x110:  movzbl -0x25(%ebp),%eax
08115aca +0x114:  xor    $0x1,%eax
08115acd +0x117:  test   %al,%al
08115acf +0x119:  je     08115adb <+0x125>
08115ad1 +0x11b:  mov    $0x0,%eax
08115ad6 +0x120:  jmp    08115bec <+0x236>
08115adb +0x125:  lea    -0x50(%ebp),%eax
08115ade +0x128:  mov    %eax,0x8(%esp)
08115ae2 +0x12c:  movl   $0x1,0x4(%esp)
08115aea +0x134:  mov    -0x24(%ebp),%eax
08115aed +0x137:  mov    %eax,(%esp)
08115af0 +0x13a:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08115af5 +0x13f:  mov    %al,-0x25(%ebp)
08115af8 +0x142:  movzbl -0x25(%ebp),%eax
08115afc +0x146:  xor    $0x1,%eax
08115aff +0x149:  test   %al,%al
08115b01 +0x14b:  je     08115b0d <+0x157>
08115b03 +0x14d:  mov    $0x0,%eax
08115b08 +0x152:  jmp    08115bec <+0x236>
08115b0d +0x157:  lea    -0x50(%ebp),%eax
08115b10 +0x15a:  add    $0x2,%eax
08115b13 +0x15d:  mov    %eax,0x8(%esp)
08115b17 +0x161:  movl   $0x2,0x4(%esp)
08115b1f +0x169:  mov    -0x24(%ebp),%eax
08115b22 +0x16c:  mov    %eax,(%esp)
08115b25 +0x16f:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08115b2a +0x174:  mov    %al,-0x25(%ebp)
08115b2d +0x177:  movzbl -0x25(%ebp),%eax
08115b31 +0x17b:  xor    $0x1,%eax
08115b34 +0x17e:  test   %al,%al
08115b36 +0x180:  je     08115b42 <+0x18c>
08115b38 +0x182:  mov    $0x0,%eax
08115b3d +0x187:  jmp    08115bec <+0x236>
08115b42 +0x18c:  mov    -0x4c(%ebp),%eax
08115b45 +0x18f:  mov    -0x50(%ebp),%edx
08115b48 +0x192:  mov    %edx,0x8(%esp)
08115b4c +0x196:  mov    %eax,0x4(%esp)
08115b50 +0x19a:  mov    0x8(%ebp),%eax
08115b53 +0x19d:  mov    %eax,(%esp)
08115b56 +0x1a0:  call   08115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>  ; CEventManager::TriggerEventStart(int, Word_Param)
08115b5b +0x1a5:  xor    $0x1,%eax
08115b5e +0x1a8:  test   %al,%al
08115b60 +0x1aa:  je     08115b6c <+0x1b6>
08115b62 +0x1ac:  mov    $0x0,%eax
08115b67 +0x1b1:  jmp    08115bec <+0x236>
08115b6c +0x1b6:  movzwl -0x4e(%ebp),%eax
08115b70 +0x1ba:  movzwl %ax,%edi
08115b73 +0x1bd:  movzwl -0x50(%ebp),%eax
08115b77 +0x1c1:  movzwl %ax,%esi
08115b7a +0x1c4:  mov    -0x4c(%ebp),%ebx
08115b7d +0x1c7:  movl   $0x1,0x14(%esp)
08115b85 +0x1cf:  movl   $0x1,0x10(%esp)
08115b8d +0x1d7:  movl   $0x9,0xc(%esp)
08115b95 +0x1df:  movl   $0x305,0x8(%esp)
08115b9d +0x1e7:  movl   $&_ZZN13CEventManager15LoadEventFromDBEvE19__PRETTY_FUNCTION__,0x4(%esp)
08115ba5 +0x1ef:  lea    -0x38(%ebp),%eax
08115ba8 +0x1f2:  mov    %eax,(%esp)
08115bab +0x1f5:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08115bb0 +0x1fa:  mov    %edi,0x10(%esp)
08115bb4 +0x1fe:  mov    %esi,0xc(%esp)
08115bb8 +0x202:  mov    %ebx,0x8(%esp)
08115bbc +0x206:  movl   $"\t- Event Code(%d) , Parameter1(%d), Parameter2(%d)",0x4(%esp)
08115bc4 +0x20e:  lea    -0x38(%ebp),%eax
08115bc7 +0x211:  mov    %eax,(%esp)
08115bca +0x214:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08115bcf +0x219:  addl   $0x1,-0x1c(%ebp)
08115bd3 +0x21d:  mov    -0x1c(%ebp),%eax
08115bd6 +0x220:  cmp    -0x20(%ebp),%eax
08115bd9 +0x223:  setl   %al
08115bdc +0x226:  test   %al,%al
08115bde +0x228:  jne    08115a8c <+0xd6>
08115be4 +0x22e:  jmp    08115be7 <+0x231>
08115be6 +0x230:  nop
08115be7 +0x231:  mov    $0x1,%eax
08115bec +0x236:  add    $0x6c,%esp
08115bef +0x239:  pop    %ebx
08115bf0 +0x23a:  pop    %esi
08115bf1 +0x23b:  pop    %edi
08115bf2 +0x23c:  pop    %ebp
08115bf3 +0x23d:  ret
```

## 反编译 C

```c
// CEventManager::LoadEventFromDB @ 0x81159b6

/* CEventManager::LoadEventFromDB() */

undefined4 __thiscall CEventManager::LoadEventFromDB(CEventManager *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_54;
  int local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [19];
  char local_29;
  MySQL *local_28;
  int local_24;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar3 = G_CEnvironment();
  MySQL::set_query(local_28,
                   "seLect event_type, parameter1, parameter2 from dnf_event_log where end_time = 0 and server_id in (0,%d) and unix_timestamp() >= start_time order by start_time"
                   ,*(undefined4 *)(iVar3 + 0x378));
  cMyTrace::cMyTrace(local_4c,"bool CEventManager::LoadEventFromDB()",0x296,9,true,true);
  cMyTrace::operator()(local_4c,"[!] Load Event From DB");
  local_29 = MySQL::exec(local_28,true);
  if (local_29 == '\x01') {
    local_24 = MySQL::get_n_rows(local_28);
    local_20 = 0;
    while ((local_20 < local_24 && (local_29 = MySQL::fetch(local_28), local_29 == '\x01'))) {
      local_29 = MySQL::get_int(local_28,0,&local_50);
      if (local_29 != '\x01') {
        return 0;
      }
      local_29 = MySQL::get_ushort(local_28,1,(ushort *)&local_54);
      if (local_29 != '\x01') {
        return 0;
      }
      local_29 = MySQL::get_ushort(local_28,2,(ushort *)((int)&local_54 + 2));
      if (local_29 != '\x01') {
        return 0;
      }
      cVar2 = TriggerEventStart(this,local_50,local_54);
      iVar3 = local_50;
      if (cVar2 != '\x01') {
        return 0;
      }
      uVar1 = local_54 >> 0x10;
      uVar5 = local_54 & 0xffff;
      cMyTrace::cMyTrace(local_3c,"bool CEventManager::LoadEventFromDB()",0x305,9,true,true);
      cMyTrace::operator()
                (local_3c,"\t- Event Code(%d) , Parameter1(%d), Parameter2(%d)",iVar3,uVar5,uVar1);
      local_20 = local_20 + 1;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
