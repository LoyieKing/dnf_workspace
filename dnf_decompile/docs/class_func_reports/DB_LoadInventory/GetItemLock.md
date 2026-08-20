# GetItemLock

`_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo`

`DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840d766` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840d766  _ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo
#           DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)
# range [0x0840d766, 0x0840d98b]
0840d766 +0x000:  push   %ebp
0840d767 +0x001:  mov    %esp,%ebp
0840d769 +0x003:  push   %edi
0840d76a +0x004:  push   %ebx
0840d76b +0x005:  sub    $0x420,%esp
0840d771 +0x00b:  lea    -0x414(%ebp),%ebx
0840d777 +0x011:  mov    $0x0,%eax
0840d77c +0x016:  mov    $0xf3,%edx
0840d781 +0x01b:  mov    %ebx,%edi
0840d783 +0x01d:  mov    %edx,%ecx
0840d785 +0x01f:  rep stos %eax,%es:(%edi)
0840d787 +0x021:  movl   $0x3cc,-0x48(%ebp)
0840d78e +0x028:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840d793 +0x02d:  movl   $0x0,0x8(%esp)
0840d79b +0x035:  movl   $0x3,0x4(%esp)
0840d7a3 +0x03d:  mov    %eax,(%esp)
0840d7a6 +0x040:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840d7ab +0x045:  mov    %eax,-0x10(%ebp)
0840d7ae +0x048:  mov    0x8(%ebp),%eax
0840d7b1 +0x04b:  mov    %eax,0x8(%esp)
0840d7b5 +0x04f:  movl   $"seLect item_lock_info  from charac_item_lock_info where charac_no=%u",0x4(%esp)
0840d7bd +0x057:  mov    -0x10(%ebp),%eax
0840d7c0 +0x05a:  mov    %eax,(%esp)
0840d7c3 +0x05d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840d7c8 +0x062:  movl   $0x1,0x4(%esp)
0840d7d0 +0x06a:  mov    -0x10(%ebp),%eax
0840d7d3 +0x06d:  mov    %eax,(%esp)
0840d7d6 +0x070:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840d7db +0x075:  mov    %al,-0x11(%ebp)
0840d7de +0x078:  movzbl -0x11(%ebp),%eax
0840d7e2 +0x07c:  xor    $0x1,%eax
0840d7e5 +0x07f:  test   %al,%al
0840d7e7 +0x081:  je     0840d830 <+0xca>
0840d7e9 +0x083:  movl   $0x5,0xc(%esp)
0840d7f1 +0x08b:  movl   $0x2919,0x8(%esp)
0840d7f9 +0x093:  movl   $&_ZZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfoE19__PRETTY_FUNCTION__,0x4(%esp)
0840d801 +0x09b:  lea    -0x44(%ebp),%eax
0840d804 +0x09e:  mov    %eax,(%esp)
0840d807 +0x0a1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d80c +0x0a6:  mov    0x8(%ebp),%eax
0840d80f +0x0a9:  mov    %eax,0x8(%esp)
0840d813 +0x0ad:  movl   $"DB_LoadInventory::GetItemLock, exec() ERROR charac_no=%u",0x4(%esp)
0840d81b +0x0b5:  lea    -0x44(%ebp),%eax
0840d81e +0x0b8:  mov    %eax,(%esp)
0840d821 +0x0bb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d826 +0x0c0:  mov    $0x291a,%eax
0840d82b +0x0c5:  jmp    0840d981 <+0x21b>
0840d830 +0x0ca:  mov    -0x10(%ebp),%eax
0840d833 +0x0cd:  mov    %eax,(%esp)
0840d836 +0x0d0:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0840d83b +0x0d5:  test   %eax,%eax
0840d83d +0x0d7:  sete   %al
0840d840 +0x0da:  test   %al,%al
0840d842 +0x0dc:  je     0840d84e <+0xe8>
0840d844 +0x0de:  mov    $0x0,%eax
0840d849 +0x0e3:  jmp    0840d981 <+0x21b>
0840d84e +0x0e8:  mov    -0x10(%ebp),%eax
0840d851 +0x0eb:  mov    %eax,(%esp)
0840d854 +0x0ee:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840d859 +0x0f3:  mov    %al,-0x11(%ebp)
0840d85c +0x0f6:  movzbl -0x11(%ebp),%eax
0840d860 +0x0fa:  xor    $0x1,%eax
0840d863 +0x0fd:  test   %al,%al
0840d865 +0x0ff:  je     0840d8ae <+0x148>
0840d867 +0x101:  movl   $0x5,0xc(%esp)
0840d86f +0x109:  movl   $0x2923,0x8(%esp)
0840d877 +0x111:  movl   $&_ZZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfoE19__PRETTY_FUNCTION__,0x4(%esp)
0840d87f +0x119:  lea    -0x34(%ebp),%eax
0840d882 +0x11c:  mov    %eax,(%esp)
0840d885 +0x11f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d88a +0x124:  mov    0x8(%ebp),%eax
0840d88d +0x127:  mov    %eax,0x8(%esp)
0840d891 +0x12b:  movl   $"DB_LoadInventory::GetItemLock, fetch() ERROR charac_no=%u",0x4(%esp)
0840d899 +0x133:  lea    -0x34(%ebp),%eax
0840d89c +0x136:  mov    %eax,(%esp)
0840d89f +0x139:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d8a4 +0x13e:  mov    $0x2924,%eax
0840d8a9 +0x143:  jmp    0840d981 <+0x21b>
0840d8ae +0x148:  movl   $0x0,0x4(%esp)
0840d8b6 +0x150:  mov    -0x10(%ebp),%eax
0840d8b9 +0x153:  mov    %eax,(%esp)
0840d8bc +0x156:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840d8c1 +0x15b:  mov    %eax,-0xc(%ebp)
0840d8c4 +0x15e:  mov    -0x48(%ebp),%eax
0840d8c7 +0x161:  mov    %eax,0xc(%esp)
0840d8cb +0x165:  lea    -0x414(%ebp),%eax
0840d8d1 +0x16b:  mov    %eax,0x8(%esp)
0840d8d5 +0x16f:  movl   $0x0,0x4(%esp)
0840d8dd +0x177:  mov    -0x10(%ebp),%eax
0840d8e0 +0x17a:  mov    %eax,(%esp)
0840d8e3 +0x17d:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840d8e8 +0x182:  xor    $0x1,%eax
0840d8eb +0x185:  test   %al,%al
0840d8ed +0x187:  je     0840d933 <+0x1cd>
0840d8ef +0x189:  movl   $0x5,0xc(%esp)
0840d8f7 +0x191:  movl   $0x292a,0x8(%esp)
0840d8ff +0x199:  movl   $&_ZZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfoE19__PRETTY_FUNCTION__,0x4(%esp)
0840d907 +0x1a1:  lea    -0x24(%ebp),%eax
0840d90a +0x1a4:  mov    %eax,(%esp)
0840d90d +0x1a7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d912 +0x1ac:  mov    0x8(%ebp),%eax
0840d915 +0x1af:  mov    %eax,0x8(%esp)
0840d919 +0x1b3:  movl   $"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",0x4(%esp)
0840d921 +0x1bb:  lea    -0x24(%ebp),%eax
0840d924 +0x1be:  mov    %eax,(%esp)
0840d927 +0x1c1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d92c +0x1c6:  mov    $0x292b,%eax
0840d931 +0x1cb:  jmp    0840d981 <+0x21b>
0840d933 +0x1cd:  mov    0xc(%ebp),%eax
0840d936 +0x1d0:  mov    -0xc(%ebp),%edx
0840d939 +0x1d3:  mov    %edx,0xc(%esp)
0840d93d +0x1d7:  lea    -0x414(%ebp),%edx
0840d943 +0x1dd:  mov    %edx,0x8(%esp)
0840d947 +0x1e1:  lea    -0x48(%ebp),%edx
0840d94a +0x1e4:  mov    %edx,0x4(%esp)
0840d94e +0x1e8:  mov    %eax,(%esp)
0840d951 +0x1eb:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0840d956 +0x1f0:  xor    $0x1,%eax
0840d959 +0x1f3:  test   %al,%al
0840d95b +0x1f5:  je     0840d964 <+0x1fe>
0840d95d +0x1f7:  mov    $0x292f,%eax
0840d962 +0x1fc:  jmp    0840d981 <+0x21b>
0840d964 +0x1fe:  mov    -0x48(%ebp),%eax
0840d967 +0x201:  and    $0x7,%eax
0840d96a +0x204:  test   %eax,%eax
0840d96c +0x206:  je     0840d97c <+0x216>
0840d96e +0x208:  mov    -0x48(%ebp),%eax
0840d971 +0x20b:  test   %eax,%eax
0840d973 +0x20d:  je     0840d97c <+0x216>
0840d975 +0x20f:  mov    $0x2931,%eax
0840d97a +0x214:  jmp    0840d981 <+0x21b>
0840d97c +0x216:  mov    $0x0,%eax
0840d981 +0x21b:  add    $0x420,%esp
0840d987 +0x221:  pop    %ebx
0840d988 +0x222:  pop    %edi
0840d989 +0x223:  pop    %ebp
0840d98a +0x224:  ret
0840d98b +0x225:  nop
```

## 反编译 C

```c
// DB_LoadInventory::GetItemLock @ 0x840d766

/* DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*) */

undefined4 DB_LoadInventory::GetItemLock(uint param_1,stItemLockInfo *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char local_418 [972];
  uint local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  MySQL *local_14;
  uint local_10;
  
  pcVar4 = local_418;
  for (iVar3 = 0xf3; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  local_4c = 0x3cc;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_14,"seLect item_lock_info  from charac_item_lock_info where charac_no=%u",
                   param_1);
  local_15 = MySQL::exec(local_14,true);
  if (local_15 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_14);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      local_15 = MySQL::fetch(local_14);
      if (local_15 == '\x01') {
        local_10 = MySQL::get_binary_length(local_14,0);
        cVar1 = MySQL::get_binary(local_14,0,local_418,local_4c);
        if (cVar1 == '\x01') {
          cVar1 = uncompress_zip((char *)param_2,&local_4c,local_418,local_10);
          if (cVar1 == '\x01') {
            if (((local_4c & 7) == 0) || (local_4c == 0)) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0x2931;
            }
          }
          else {
            uVar2 = 0x292f;
          }
        }
        else {
          cMyTrace::cMyTrace(local_28,
                             "static unsigned int DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)"
                             ,0x292a,5);
          cMyTrace::operator()
                    (local_28,"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",
                     param_1);
          uVar2 = 0x292b;
        }
      }
      else {
        cMyTrace::cMyTrace(local_38,
                           "static unsigned int DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)"
                           ,0x2923,5);
        cMyTrace::operator()
                  (local_38,"DB_LoadInventory::GetItemLock, fetch() ERROR charac_no=%u",param_1);
        uVar2 = 0x2924;
      }
    }
  }
  else {
    cMyTrace::cMyTrace(local_48,
                       "static unsigned int DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)"
                       ,0x2919,5);
    cMyTrace::operator()
              (local_48,"DB_LoadInventory::GetItemLock, exec() ERROR charac_no=%u",param_1);
    uVar2 = 0x291a;
  }
  return uVar2;
}
```
