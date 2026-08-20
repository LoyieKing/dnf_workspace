# Update

`_ZN8APSystem20DB_UpdateRewardMedal6UpdateERNS_24_SIG_UPDATE_REWARD_MEDALE`

`APSystem::DB_UpdateRewardMedal::Update(APSystem::_SIG_UPDATE_REWARD_MEDAL&)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_UpdateRewardMedal` | `0x08124cb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124cb2  _ZN8APSystem20DB_UpdateRewardMedal6UpdateERNS_24_SIG_UPDATE_REWARD_MEDALE
#           APSystem::DB_UpdateRewardMedal::Update(APSystem::_SIG_UPDATE_REWARD_MEDAL&)
# range [0x08124cb2, 0x08124d29]
08124cb2 +0x00:  push   %ebp
08124cb3 +0x01:  mov    %esp,%ebp
08124cb5 +0x03:  sub    $0x38,%esp
08124cb8 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08124cbd +0x0b:  movl   $0x0,0x8(%esp)
08124cc5 +0x13:  movl   $0x2,0x4(%esp)
08124ccd +0x1b:  mov    %eax,(%esp)
08124cd0 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08124cd5 +0x23:  mov    %eax,-0x10(%ebp)
08124cd8 +0x26:  mov    0xc(%ebp),%eax
08124cdb +0x29:  lea    0x4(%eax),%edx
08124cde +0x2c:  mov    0xc(%ebp),%eax
08124ce1 +0x2f:  mov    (%eax),%eax
08124ce3 +0x31:  mov    %edx,0x14(%esp)
08124ce7 +0x35:  movl   $0x0,0x10(%esp)
08124cef +0x3d:  mov    %eax,0xc(%esp)
08124cf3 +0x41:  movl   $0x1,0x8(%esp)
08124cfb +0x49:  movl   $"update charac_action_point set is_reward_medal=%u \t\t\t\t\twhere charac_no = %u\t\t\t\t\t\tand is_reward_medal = %u \t\t\t\t\tand occ_date = '%s'",0x4(%esp)
08124d03 +0x51:  mov    -0x10(%ebp),%eax
08124d06 +0x54:  mov    %eax,(%esp)
08124d09 +0x57:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08124d0e +0x5c:  movl   $0x1,0x4(%esp)
08124d16 +0x64:  mov    -0x10(%ebp),%eax
08124d19 +0x67:  mov    %eax,(%esp)
08124d1c +0x6a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08124d21 +0x6f:  mov    %al,-0x9(%ebp)
08124d24 +0x72:  movzbl -0x9(%ebp),%eax
08124d28 +0x76:  leave
08124d29 +0x77:  ret
```

## 反编译 C

```c
// APSystem::DB_UpdateRewardMedal::Update @ 0x8124cb2

/* APSystem::DB_UpdateRewardMedal::Update(APSystem::_SIG_UPDATE_REWARD_MEDAL&) */

undefined1 __thiscall
APSystem::DB_UpdateRewardMedal::Update(DB_UpdateRewardMedal *this,_SIG_UPDATE_REWARD_MEDAL *param_1)

{
  undefined1 uVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "update charac_action_point set is_reward_medal=%u \t\t\t\t\twhere charac_no = %u\t\t\t\t\t\tand is_reward_medal = %u \t\t\t\t\tand occ_date = \'%s\'"
                   ,1,*(undefined4 *)param_1,0,param_1 + 4);
  uVar1 = MySQL::exec(this_00,true);
  return uVar1;
}
```
