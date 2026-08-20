# UpdateEventATIInfo

`_ZN8WongWork8EventATI18UpdateEventATIInfoEji`

`WongWork::EventATI::UpdateEventATIInfo(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventATI` | `0x083fa0ad` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fa0ad  _ZN8WongWork8EventATI18UpdateEventATIInfoEji
#           WongWork::EventATI::UpdateEventATIInfo(unsigned int, int)
# range [0x083fa0ad, 0x083fa1d2]
083fa0ad +0x000:  push   %ebp
083fa0ae +0x001:  mov    %esp,%ebp
083fa0b0 +0x003:  sub    $0x28,%esp
083fa0b3 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fa0b8 +0x00b:  movl   $0x0,0x8(%esp)
083fa0c0 +0x013:  movl   $0x1,0x4(%esp)
083fa0c8 +0x01b:  mov    %eax,(%esp)
083fa0cb +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fa0d0 +0x023:  mov    %eax,-0xc(%ebp)
083fa0d3 +0x026:  mov    0xc(%ebp),%eax
083fa0d6 +0x029:  mov    %eax,0x4(%esp)
083fa0da +0x02d:  movl   $0x2,(%esp)
083fa0e1 +0x034:  call   086c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>  ; WongWork::CWebEvent::GetItemType(int, int)
083fa0e6 +0x039:  cmp    $0x2,%eax
083fa0e9 +0x03c:  je     083fa13c <+0x8f>
083fa0eb +0x03e:  cmp    $0x2,%eax
083fa0ee +0x041:  jg     083fa0fa <+0x4d>
083fa0f0 +0x043:  cmp    $0x1,%eax
083fa0f3 +0x046:  je     083fa10d <+0x60>
083fa0f5 +0x048:  jmp    083fa1be <+0x111>
083fa0fa +0x04d:  cmp    $0x3,%eax
083fa0fd +0x050:  je     083fa168 <+0xbb>
083fa0ff +0x052:  cmp    $0x4,%eax
083fa102 +0x055:  je     083fa194 <+0xe7>
083fa108 +0x05b:  jmp    083fa1be <+0x111>
083fa10d +0x060:  movl   $0x0,0x4(%esp)
083fa115 +0x068:  mov    0x8(%ebp),%eax
083fa118 +0x06b:  mov    %eax,(%esp)
083fa11b +0x06e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa120 +0x073:  mov    %eax,0x8(%esp)
083fa124 +0x077:  movl   $"upDate event_ati_info set avata_check1=unix_timestamp(now()) where id=%s",0x4(%esp)
083fa12c +0x07f:  mov    -0xc(%ebp),%eax
083fa12f +0x082:  mov    %eax,(%esp)
083fa132 +0x085:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa137 +0x08a:  jmp    083fa1be <+0x111>
083fa13c +0x08f:  movl   $0x0,0x4(%esp)
083fa144 +0x097:  mov    0x8(%ebp),%eax
083fa147 +0x09a:  mov    %eax,(%esp)
083fa14a +0x09d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa14f +0x0a2:  mov    %eax,0x8(%esp)
083fa153 +0x0a6:  movl   $"upDate event_ati_info set avata_check2=unix_timestamp(now()) where id=%s",0x4(%esp)
083fa15b +0x0ae:  mov    -0xc(%ebp),%eax
083fa15e +0x0b1:  mov    %eax,(%esp)
083fa161 +0x0b4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa166 +0x0b9:  jmp    083fa1be <+0x111>
083fa168 +0x0bb:  movl   $0x0,0x4(%esp)
083fa170 +0x0c3:  mov    0x8(%ebp),%eax
083fa173 +0x0c6:  mov    %eax,(%esp)
083fa176 +0x0c9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa17b +0x0ce:  mov    %eax,0x8(%esp)
083fa17f +0x0d2:  movl   $"upDate event_ati_info set item_check=unix_timestamp(now()) where id=%s",0x4(%esp)
083fa187 +0x0da:  mov    -0xc(%ebp),%eax
083fa18a +0x0dd:  mov    %eax,(%esp)
083fa18d +0x0e0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa192 +0x0e5:  jmp    083fa1be <+0x111>
083fa194 +0x0e7:  movl   $0x0,0x4(%esp)
083fa19c +0x0ef:  mov    0x8(%ebp),%eax
083fa19f +0x0f2:  mov    %eax,(%esp)
083fa1a2 +0x0f5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa1a7 +0x0fa:  mov    %eax,0x8(%esp)
083fa1ab +0x0fe:  movl   $"upDate event_ati_info set cera_check=unix_timestamp(now()) where id=%s",0x4(%esp)
083fa1b3 +0x106:  mov    -0xc(%ebp),%eax
083fa1b6 +0x109:  mov    %eax,(%esp)
083fa1b9 +0x10c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa1be +0x111:  movl   $0x1,0x4(%esp)
083fa1c6 +0x119:  mov    -0xc(%ebp),%eax
083fa1c9 +0x11c:  mov    %eax,(%esp)
083fa1cc +0x11f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fa1d1 +0x124:  leave
083fa1d2 +0x125:  ret
```

## 反编译 C

```c
// WongWork::EventATI::UpdateEventATIInfo @ 0x83fa0ad

/* WongWork::EventATI::UpdateEventATIInfo(unsigned int, int) */

void WongWork::EventATI::UpdateEventATIInfo(uint param_1,int param_2)

{
  MySQL *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar1 = CWebEvent::GetItemType(2,param_2);
  if (iVar1 == 2) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,"upDate event_ati_info set avata_check2=unix_timestamp(now()) where id=%s"
                     ,uVar2);
  }
  else if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar2 = NumberToString(param_1,0);
      MySQL::set_query(this,
                       "upDate event_ati_info set avata_check1=unix_timestamp(now()) where id=%s",
                       uVar2);
    }
  }
  else if (iVar1 == 3) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,"upDate event_ati_info set item_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  else if (iVar1 == 4) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,"upDate event_ati_info set cera_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  MySQL::exec(this,true);
  return;
}
```
