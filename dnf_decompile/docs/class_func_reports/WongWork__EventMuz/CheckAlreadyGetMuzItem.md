# CheckAlreadyGetMuzItem

`_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji`

`WongWork::EventMuz::CheckAlreadyGetMuzItem(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventMuz` | `0x083fb047` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fb047  _ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji
#           WongWork::EventMuz::CheckAlreadyGetMuzItem(unsigned int, int)
# range [0x083fb047, 0x083fb104]
083fb047 +0x00:  push   %ebp
083fb048 +0x01:  mov    %esp,%ebp
083fb04a +0x03:  sub    $0x28,%esp
083fb04d +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fb052 +0x0b:  movl   $0x0,0x8(%esp)
083fb05a +0x13:  movl   $0x1,0x4(%esp)
083fb062 +0x1b:  mov    %eax,(%esp)
083fb065 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fb06a +0x23:  mov    %eax,-0xc(%ebp)
083fb06d +0x26:  movl   $0x0,0x4(%esp)
083fb075 +0x2e:  mov    0x8(%ebp),%eax
083fb078 +0x31:  mov    %eax,(%esp)
083fb07b +0x34:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb080 +0x39:  mov    %eax,0x8(%esp)
083fb084 +0x3d:  movl   $"seLect item_check from event_muz_entry where id=%s",0x4(%esp)
083fb08c +0x45:  mov    -0xc(%ebp),%eax
083fb08f +0x48:  mov    %eax,(%esp)
083fb092 +0x4b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fb097 +0x50:  movl   $0x1,0x4(%esp)
083fb09f +0x58:  mov    -0xc(%ebp),%eax
083fb0a2 +0x5b:  mov    %eax,(%esp)
083fb0a5 +0x5e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fb0aa +0x63:  xor    $0x1,%eax
083fb0ad +0x66:  test   %al,%al
083fb0af +0x68:  je     083fb0b8 <+0x71>
083fb0b1 +0x6a:  mov    $0x0,%eax
083fb0b6 +0x6f:  jmp    083fb103 <+0xbc>
083fb0b8 +0x71:  movl   $0x0,-0x10(%ebp)
083fb0bf +0x78:  lea    -0x10(%ebp),%eax
083fb0c2 +0x7b:  mov    %eax,0x8(%esp)
083fb0c6 +0x7f:  movl   $0x0,0x4(%esp)
083fb0ce +0x87:  mov    -0xc(%ebp),%eax
083fb0d1 +0x8a:  mov    %eax,(%esp)
083fb0d4 +0x8d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb0d9 +0x92:  xor    $0x1,%eax
083fb0dc +0x95:  test   %al,%al
083fb0de +0x97:  jne    083fb0e7 <+0xa0>
083fb0e0 +0x99:  mov    -0x10(%ebp),%eax
083fb0e3 +0x9c:  test   %eax,%eax
083fb0e5 +0x9e:  jne    083fb0ee <+0xa7>
083fb0e7 +0xa0:  mov    $0x1,%eax
083fb0ec +0xa5:  jmp    083fb0f3 <+0xac>
083fb0ee +0xa7:  mov    $0x0,%eax
083fb0f3 +0xac:  test   %al,%al
083fb0f5 +0xae:  je     083fb0fe <+0xb7>
083fb0f7 +0xb0:  mov    $0x0,%eax
083fb0fc +0xb5:  jmp    083fb103 <+0xbc>
083fb0fe +0xb7:  mov    $0x1,%eax
083fb103 +0xbc:  leave
083fb104 +0xbd:  ret
```

## 反编译 C

```c
// WongWork::EventMuz::CheckAlreadyGetMuzItem @ 0x83fb047

/* WongWork::EventMuz::CheckAlreadyGetMuzItem(unsigned int, int) */

undefined4 WongWork::EventMuz::CheckAlreadyGetMuzItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect item_check from event_muz_entry where id=%s",uVar3);
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
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
