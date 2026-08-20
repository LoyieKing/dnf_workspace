# CheckAlreadyGetSigongItem

`_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji`

`WongWork::EventSigong::CheckAlreadyGetSigongItem(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventSigong` | `0x083fa69c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fa69c  _ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji
#           WongWork::EventSigong::CheckAlreadyGetSigongItem(unsigned int, int)
# range [0x083fa69c, 0x083fa7a4]
083fa69c +0x000:  push   %ebp
083fa69d +0x001:  mov    %esp,%ebp
083fa69f +0x003:  sub    $0x28,%esp
083fa6a2 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fa6a7 +0x00b:  movl   $0x0,0x8(%esp)
083fa6af +0x013:  movl   $0x1,0x4(%esp)
083fa6b7 +0x01b:  mov    %eax,(%esp)
083fa6ba +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fa6bf +0x023:  mov    %eax,-0xc(%ebp)
083fa6c2 +0x026:  mov    0xc(%ebp),%eax
083fa6c5 +0x029:  mov    %eax,0x4(%esp)
083fa6c9 +0x02d:  movl   $0x3,(%esp)
083fa6d0 +0x034:  call   086c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>  ; WongWork::CWebEvent::GetItemType(int, int)
083fa6d5 +0x039:  cmp    $0x1,%eax
083fa6d8 +0x03c:  je     083fa6e1 <+0x45>
083fa6da +0x03e:  cmp    $0x2,%eax
083fa6dd +0x041:  je     083fa70d <+0x71>
083fa6df +0x043:  jmp    083fa737 <+0x9b>
083fa6e1 +0x045:  movl   $0x0,0x4(%esp)
083fa6e9 +0x04d:  mov    0x8(%ebp),%eax
083fa6ec +0x050:  mov    %eax,(%esp)
083fa6ef +0x053:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa6f4 +0x058:  mov    %eax,0x8(%esp)
083fa6f8 +0x05c:  movl   $"seLect item1_check from event_sigong_info where id=%s",0x4(%esp)
083fa700 +0x064:  mov    -0xc(%ebp),%eax
083fa703 +0x067:  mov    %eax,(%esp)
083fa706 +0x06a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa70b +0x06f:  jmp    083fa737 <+0x9b>
083fa70d +0x071:  movl   $0x0,0x4(%esp)
083fa715 +0x079:  mov    0x8(%ebp),%eax
083fa718 +0x07c:  mov    %eax,(%esp)
083fa71b +0x07f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa720 +0x084:  mov    %eax,0x8(%esp)
083fa724 +0x088:  movl   $"seLect item2_check from event_sigong_info where id=%s",0x4(%esp)
083fa72c +0x090:  mov    -0xc(%ebp),%eax
083fa72f +0x093:  mov    %eax,(%esp)
083fa732 +0x096:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa737 +0x09b:  movl   $0x1,0x4(%esp)
083fa73f +0x0a3:  mov    -0xc(%ebp),%eax
083fa742 +0x0a6:  mov    %eax,(%esp)
083fa745 +0x0a9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fa74a +0x0ae:  xor    $0x1,%eax
083fa74d +0x0b1:  test   %al,%al
083fa74f +0x0b3:  je     083fa758 <+0xbc>
083fa751 +0x0b5:  mov    $0x0,%eax
083fa756 +0x0ba:  jmp    083fa7a3 <+0x107>
083fa758 +0x0bc:  movl   $0x0,-0x10(%ebp)
083fa75f +0x0c3:  lea    -0x10(%ebp),%eax
083fa762 +0x0c6:  mov    %eax,0x8(%esp)
083fa766 +0x0ca:  movl   $0x0,0x4(%esp)
083fa76e +0x0d2:  mov    -0xc(%ebp),%eax
083fa771 +0x0d5:  mov    %eax,(%esp)
083fa774 +0x0d8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa779 +0x0dd:  xor    $0x1,%eax
083fa77c +0x0e0:  test   %al,%al
083fa77e +0x0e2:  jne    083fa787 <+0xeb>
083fa780 +0x0e4:  mov    -0x10(%ebp),%eax
083fa783 +0x0e7:  test   %eax,%eax
083fa785 +0x0e9:  jne    083fa78e <+0xf2>
083fa787 +0x0eb:  mov    $0x1,%eax
083fa78c +0x0f0:  jmp    083fa793 <+0xf7>
083fa78e +0x0f2:  mov    $0x0,%eax
083fa793 +0x0f7:  test   %al,%al
083fa795 +0x0f9:  je     083fa79e <+0x102>
083fa797 +0x0fb:  mov    $0x0,%eax
083fa79c +0x100:  jmp    083fa7a3 <+0x107>
083fa79e +0x102:  mov    $0x1,%eax
083fa7a3 +0x107:  leave
083fa7a4 +0x108:  ret
```

## 反编译 C

```c
// WongWork::EventSigong::CheckAlreadyGetSigongItem @ 0x83fa69c

/* WongWork::EventSigong::CheckAlreadyGetSigongItem(unsigned int, int) */

undefined4 WongWork::EventSigong::CheckAlreadyGetSigongItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar3 = CWebEvent::GetItemType(3,param_2);
  if (iVar3 == 1) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect item1_check from event_sigong_info where id=%s",uVar4);
  }
  else if (iVar3 == 2) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect item2_check from event_sigong_info where id=%s",uVar4);
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
