# _HardCodeEventItems

`_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM`

`DB_SaveEventItem::_HardCodeEventItems(SIG_SAVE_EVENTITEM*)`

| 类 | 地址 |
|---|---|
| `DB_SaveEventItem` | `0x0841a662` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a662  _ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM
#           DB_SaveEventItem::_HardCodeEventItems(SIG_SAVE_EVENTITEM*)
# range [0x0841a662, 0x0841a7e3]
0841a662 +0x000:  push   %ebp
0841a663 +0x001:  mov    %esp,%ebp
0841a665 +0x003:  push   %ebx
0841a666 +0x004:  sub    $0x34,%esp
0841a669 +0x007:  mov    0xc(%ebp),%eax
0841a66c +0x00a:  mov    0xc(%eax),%eax
0841a66f +0x00d:  cmp    $0x65ae,%eax
0841a674 +0x012:  je     0841a680 <+0x1e>
0841a676 +0x014:  mov    $0x0,%eax
0841a67b +0x019:  jmp    0841a7de <+0x17c>
0841a680 +0x01e:  nop
0841a681 +0x01f:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841a686 +0x024:  movl   $0x0,0x8(%esp)
0841a68e +0x02c:  movl   $0x3,0x4(%esp)
0841a696 +0x034:  mov    %eax,(%esp)
0841a699 +0x037:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841a69e +0x03c:  mov    %eax,-0xc(%ebp)
0841a6a1 +0x03f:  mov    0xc(%ebp),%eax
0841a6a4 +0x042:  mov    0xc(%eax),%edx
0841a6a7 +0x045:  mov    0xc(%ebp),%eax
0841a6aa +0x048:  mov    0x4(%eax),%eax
0841a6ad +0x04b:  mov    %edx,0xc(%esp)
0841a6b1 +0x04f:  mov    %eax,0x8(%esp)
0841a6b5 +0x053:  movl   $"seLect id from charac_event_items where charac_no=%d and it_id=%d",0x4(%esp)
0841a6bd +0x05b:  mov    -0xc(%ebp),%eax
0841a6c0 +0x05e:  mov    %eax,(%esp)
0841a6c3 +0x061:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a6c8 +0x066:  movl   $0x0,-0x10(%ebp)
0841a6cf +0x06d:  movl   $0x1,0x4(%esp)
0841a6d7 +0x075:  mov    -0xc(%ebp),%eax
0841a6da +0x078:  mov    %eax,(%esp)
0841a6dd +0x07b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a6e2 +0x080:  xor    $0x1,%eax
0841a6e5 +0x083:  test   %al,%al
0841a6e7 +0x085:  jne    0841a732 <+0xd0>
0841a6e9 +0x087:  mov    -0xc(%ebp),%eax
0841a6ec +0x08a:  mov    %eax,(%esp)
0841a6ef +0x08d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841a6f4 +0x092:  test   %eax,%eax
0841a6f6 +0x094:  je     0841a732 <+0xd0>
0841a6f8 +0x096:  mov    -0xc(%ebp),%eax
0841a6fb +0x099:  mov    %eax,(%esp)
0841a6fe +0x09c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841a703 +0x0a1:  xor    $0x1,%eax
0841a706 +0x0a4:  test   %al,%al
0841a708 +0x0a6:  jne    0841a732 <+0xd0>
0841a70a +0x0a8:  lea    -0x10(%ebp),%eax
0841a70d +0x0ab:  mov    %eax,0x8(%esp)
0841a711 +0x0af:  movl   $0x0,0x4(%esp)
0841a719 +0x0b7:  mov    -0xc(%ebp),%eax
0841a71c +0x0ba:  mov    %eax,(%esp)
0841a71f +0x0bd:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841a724 +0x0c2:  xor    $0x1,%eax
0841a727 +0x0c5:  test   %al,%al
0841a729 +0x0c7:  jne    0841a732 <+0xd0>
0841a72b +0x0c9:  mov    -0x10(%ebp),%eax
0841a72e +0x0cc:  test   %eax,%eax
0841a730 +0x0ce:  jne    0841a739 <+0xd7>
0841a732 +0x0d0:  mov    $0x1,%eax
0841a737 +0x0d5:  jmp    0841a73e <+0xdc>
0841a739 +0x0d7:  mov    $0x0,%eax
0841a73e +0x0dc:  test   %al,%al
0841a740 +0x0de:  je     0841a79e <+0x13c>
0841a742 +0x0e0:  mov    0xc(%ebp),%eax
0841a745 +0x0e3:  mov    0x8(%eax),%ebx
0841a748 +0x0e6:  mov    0xc(%ebp),%eax
0841a74b +0x0e9:  mov    0x10(%eax),%ecx
0841a74e +0x0ec:  mov    0xc(%ebp),%eax
0841a751 +0x0ef:  mov    0xc(%eax),%edx
0841a754 +0x0f2:  mov    0xc(%ebp),%eax
0841a757 +0x0f5:  mov    0x4(%eax),%eax
0841a75a +0x0f8:  mov    %ebx,0x14(%esp)
0841a75e +0x0fc:  mov    %ecx,0x10(%esp)
0841a762 +0x100:  mov    %edx,0xc(%esp)
0841a766 +0x104:  mov    %eax,0x8(%esp)
0841a76a +0x108:  movl   $"inSert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time,delete_time,delete_flag) values(%d,%d,%d,%d,now(),now(),1)",0x4(%esp)
0841a772 +0x110:  mov    -0xc(%ebp),%eax
0841a775 +0x113:  mov    %eax,(%esp)
0841a778 +0x116:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a77d +0x11b:  movl   $0x1,0x4(%esp)
0841a785 +0x123:  mov    -0xc(%ebp),%eax
0841a788 +0x126:  mov    %eax,(%esp)
0841a78b +0x129:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a790 +0x12e:  xor    $0x1,%eax
0841a793 +0x131:  test   %al,%al
0841a795 +0x133:  je     0841a7d9 <+0x177>
0841a797 +0x135:  mov    $0x1,%eax
0841a79c +0x13a:  jmp    0841a7de <+0x17c>
0841a79e +0x13c:  mov    -0x10(%ebp),%eax
0841a7a1 +0x13f:  mov    %eax,0x8(%esp)
0841a7a5 +0x143:  movl   $"upDate charac_event_items set stack_count=stack_count+1 where id=%d",0x4(%esp)
0841a7ad +0x14b:  mov    -0xc(%ebp),%eax
0841a7b0 +0x14e:  mov    %eax,(%esp)
0841a7b3 +0x151:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a7b8 +0x156:  movl   $0x1,0x4(%esp)
0841a7c0 +0x15e:  mov    -0xc(%ebp),%eax
0841a7c3 +0x161:  mov    %eax,(%esp)
0841a7c6 +0x164:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a7cb +0x169:  xor    $0x1,%eax
0841a7ce +0x16c:  test   %al,%al
0841a7d0 +0x16e:  je     0841a7d9 <+0x177>
0841a7d2 +0x170:  mov    $0x1,%eax
0841a7d7 +0x175:  jmp    0841a7de <+0x17c>
0841a7d9 +0x177:  mov    $0x1,%eax
0841a7de +0x17c:  add    $0x34,%esp
0841a7e1 +0x17f:  pop    %ebx
0841a7e2 +0x180:  pop    %ebp
0841a7e3 +0x181:  ret
```

## 反编译 C

```c
// DB_SaveEventItem::_HardCodeEventItems @ 0x841a662

/* DB_SaveEventItem::_HardCodeEventItems(SIG_SAVE_EVENTITEM*) */

undefined4 __thiscall
DB_SaveEventItem::_HardCodeEventItems(DB_SaveEventItem *this,SIG_SAVE_EVENTITEM *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  if (*(int *)(param_1 + 0xc) != 0x65ae) {
    return 0;
  }
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  MySQL::set_query(local_10,"seLect id from charac_event_items where charac_no=%d and it_id=%d",
                   *(undefined4 *)(param_1 + 4),uVar4);
  local_14 = 0;
  cVar2 = MySQL::exec(local_10,true);
  if ((((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(local_10), iVar3 != 0)) &&
      (cVar2 = MySQL::fetch(local_10), cVar2 == '\x01')) &&
     ((cVar2 = MySQL::get_int(local_10,0,&local_14), cVar2 == '\x01' && (local_14 != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(local_10,
                     "inSert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time,delete_time,delete_flag) values(%d,%d,%d,%d,now(),now(),1)"
                     ,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8));
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      return 1;
    }
  }
  else {
    MySQL::set_query(local_10,"upDate charac_event_items set stack_count=stack_count+1 where id=%d",
                     local_14,uVar4);
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      return 1;
    }
  }
  return 1;
}
```
