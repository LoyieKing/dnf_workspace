# CheckAlreadyGetATIItem

`_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji`

`WongWork::EventATI::CheckAlreadyGetATIItem(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventATI` | `0x083f9f2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f9f2e  _ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji
#           WongWork::EventATI::CheckAlreadyGetATIItem(unsigned int, int)
# range [0x083f9f2e, 0x083fa0ac]
083f9f2e +0x000:  push   %ebp
083f9f2f +0x001:  mov    %esp,%ebp
083f9f31 +0x003:  sub    $0x28,%esp
083f9f34 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083f9f39 +0x00b:  movl   $0x0,0x8(%esp)
083f9f41 +0x013:  movl   $0x1,0x4(%esp)
083f9f49 +0x01b:  mov    %eax,(%esp)
083f9f4c +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083f9f51 +0x023:  mov    %eax,-0xc(%ebp)
083f9f54 +0x026:  mov    0xc(%ebp),%eax
083f9f57 +0x029:  mov    %eax,0x4(%esp)
083f9f5b +0x02d:  movl   $0x2,(%esp)
083f9f62 +0x034:  call   086c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>  ; WongWork::CWebEvent::GetItemType(int, int)
083f9f67 +0x039:  cmp    $0x2,%eax
083f9f6a +0x03c:  je     083f9fbd <+0x8f>
083f9f6c +0x03e:  cmp    $0x2,%eax
083f9f6f +0x041:  jg     083f9f7b <+0x4d>
083f9f71 +0x043:  cmp    $0x1,%eax
083f9f74 +0x046:  je     083f9f8e <+0x60>
083f9f76 +0x048:  jmp    083fa03f <+0x111>
083f9f7b +0x04d:  cmp    $0x3,%eax
083f9f7e +0x050:  je     083f9fe9 <+0xbb>
083f9f80 +0x052:  cmp    $0x4,%eax
083f9f83 +0x055:  je     083fa015 <+0xe7>
083f9f89 +0x05b:  jmp    083fa03f <+0x111>
083f9f8e +0x060:  movl   $0x0,0x4(%esp)
083f9f96 +0x068:  mov    0x8(%ebp),%eax
083f9f99 +0x06b:  mov    %eax,(%esp)
083f9f9c +0x06e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083f9fa1 +0x073:  mov    %eax,0x8(%esp)
083f9fa5 +0x077:  movl   $"seLect avata_check1 from event_ati_info where id=%s",0x4(%esp)
083f9fad +0x07f:  mov    -0xc(%ebp),%eax
083f9fb0 +0x082:  mov    %eax,(%esp)
083f9fb3 +0x085:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083f9fb8 +0x08a:  jmp    083fa03f <+0x111>
083f9fbd +0x08f:  movl   $0x0,0x4(%esp)
083f9fc5 +0x097:  mov    0x8(%ebp),%eax
083f9fc8 +0x09a:  mov    %eax,(%esp)
083f9fcb +0x09d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083f9fd0 +0x0a2:  mov    %eax,0x8(%esp)
083f9fd4 +0x0a6:  movl   $"seLect avata_check2 from event_ati_info where id=%s",0x4(%esp)
083f9fdc +0x0ae:  mov    -0xc(%ebp),%eax
083f9fdf +0x0b1:  mov    %eax,(%esp)
083f9fe2 +0x0b4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083f9fe7 +0x0b9:  jmp    083fa03f <+0x111>
083f9fe9 +0x0bb:  movl   $0x0,0x4(%esp)
083f9ff1 +0x0c3:  mov    0x8(%ebp),%eax
083f9ff4 +0x0c6:  mov    %eax,(%esp)
083f9ff7 +0x0c9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083f9ffc +0x0ce:  mov    %eax,0x8(%esp)
083fa000 +0x0d2:  movl   $"seLect item_check from event_ati_info where id=%s",0x4(%esp)
083fa008 +0x0da:  mov    -0xc(%ebp),%eax
083fa00b +0x0dd:  mov    %eax,(%esp)
083fa00e +0x0e0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa013 +0x0e5:  jmp    083fa03f <+0x111>
083fa015 +0x0e7:  movl   $0x0,0x4(%esp)
083fa01d +0x0ef:  mov    0x8(%ebp),%eax
083fa020 +0x0f2:  mov    %eax,(%esp)
083fa023 +0x0f5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa028 +0x0fa:  mov    %eax,0x8(%esp)
083fa02c +0x0fe:  movl   $"seLect cera_check from event_ati_info where id=%s",0x4(%esp)
083fa034 +0x106:  mov    -0xc(%ebp),%eax
083fa037 +0x109:  mov    %eax,(%esp)
083fa03a +0x10c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa03f +0x111:  movl   $0x1,0x4(%esp)
083fa047 +0x119:  mov    -0xc(%ebp),%eax
083fa04a +0x11c:  mov    %eax,(%esp)
083fa04d +0x11f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fa052 +0x124:  xor    $0x1,%eax
083fa055 +0x127:  test   %al,%al
083fa057 +0x129:  je     083fa060 <+0x132>
083fa059 +0x12b:  mov    $0x0,%eax
083fa05e +0x130:  jmp    083fa0ab <+0x17d>
083fa060 +0x132:  movl   $0x0,-0x10(%ebp)
083fa067 +0x139:  lea    -0x10(%ebp),%eax
083fa06a +0x13c:  mov    %eax,0x8(%esp)
083fa06e +0x140:  movl   $0x0,0x4(%esp)
083fa076 +0x148:  mov    -0xc(%ebp),%eax
083fa079 +0x14b:  mov    %eax,(%esp)
083fa07c +0x14e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa081 +0x153:  xor    $0x1,%eax
083fa084 +0x156:  test   %al,%al
083fa086 +0x158:  jne    083fa08f <+0x161>
083fa088 +0x15a:  mov    -0x10(%ebp),%eax
083fa08b +0x15d:  test   %eax,%eax
083fa08d +0x15f:  jne    083fa096 <+0x168>
083fa08f +0x161:  mov    $0x1,%eax
083fa094 +0x166:  jmp    083fa09b <+0x16d>
083fa096 +0x168:  mov    $0x0,%eax
083fa09b +0x16d:  test   %al,%al
083fa09d +0x16f:  je     083fa0a6 <+0x178>
083fa09f +0x171:  mov    $0x0,%eax
083fa0a4 +0x176:  jmp    083fa0ab <+0x17d>
083fa0a6 +0x178:  mov    $0x1,%eax
083fa0ab +0x17d:  leave
083fa0ac +0x17e:  ret
```

## 反编译 C

```c
// WongWork::EventATI::CheckAlreadyGetATIItem @ 0x83f9f2e

/* WongWork::EventATI::CheckAlreadyGetATIItem(unsigned int, int) */

undefined4 WongWork::EventATI::CheckAlreadyGetATIItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar3 = CWebEvent::GetItemType(2,param_2);
  if (iVar3 == 2) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect avata_check2 from event_ati_info where id=%s",uVar4);
  }
  else if (iVar3 < 3) {
    if (iVar3 == 1) {
      uVar4 = NumberToString(param_1,0);
      MySQL::set_query(local_10,"seLect avata_check1 from event_ati_info where id=%s",uVar4);
    }
  }
  else if (iVar3 == 3) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect item_check from event_ati_info where id=%s",uVar4);
  }
  else if (iVar3 == 4) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect cera_check from event_ati_info where id=%s",uVar4);
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
