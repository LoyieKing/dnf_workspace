# _ZN5CUser16req_remove_buddyEcPKc

`CUser::req_remove_buddy(char, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x8053b94` | `0x167` | `0x8053ede` | `0x167` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 movsbl -0x2c(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x34(%edx),%ecx
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CBuddyManager10find_buddyEcPKc>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 jne    <T> <_ZN5CUser16req_remove_buddyEcPKc+0x4c>
 movl   $0x3,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser24notice_remove_buddy_failEh>
 jmp    <T> <_ZN5CUser16req_remove_buddyEcPKc+0x160>
 mov    -0x1c(%ebp),%eax
 mov    0x1(%eax),%eax
 mov    %eax,-0x18(%ebp)
 mov    -0x1c(%ebp),%eax
 movzbl (%eax),%eax
 mov    %al,-0x11(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x5(%eax),%eax
 mov    %eax,-0x10(%ebp)
 movsbl -0x2c(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x34(%edx),%ecx
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CBuddyManager9del_buddyEcPKc>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN5CUser16req_remove_buddyEcPKc+0xa3>
 movl   $0x3,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser24notice_remove_buddy_failEh>
 jmp    <T> <_ZN5CUser16req_remove_buddyEcPKc+0x160>
 movsbl -0x2c(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $&g_user_manager,(%esp)
 call   <T> <_ZN12CUserManager9find_userEcPKc>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 je     <T> <_ZN5CUser16req_remove_buddyEcPKc+0xf2>
 mov    0x8(%ebp),%eax
 lea    0x12(%eax),%esi
-mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%eax
 movzbl 0x4(%eax),%eax
 movsbl %al,%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17get_buddy_managerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CBuddyManager9del_buddyEcPKc>
+mov    -0x10(%ebp),%edx
 movsbl -0x11(%ebp),%eax
-mov    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15db_delete_buddyEcj>
 movsbl -0x2c(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser27notice_remove_buddy_successEcPKc>
 movsbl -0x11(%ebp),%ecx
 mov    0x8(%ebp),%eax
 mov    0xe(%eax),%edx
 mov    0x8(%ebp),%eax
 movzbl 0x4(%eax),%eax
 movsbl %al,%eax
 mov    -0x10(%ebp),%ebx
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"CUser::req_remove_buddy REQ(server_id:%d, charac_no:%d), RES(server_id:%d, charac_no:%d)",0x4(%esp)
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ArchiveLogC1EPKcz>
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::req_remove_buddy(char, char const*) */

void __thiscall CUser::_ZN5CUser16req_remove_buddyEcPKc(CUser *this,char param_1,char *param_2)

{
  CUser CVar1;
  char cVar2;
  CBuddyManager *this_00;
  ArchiveLog local_21;
  char *local_20;
  undefined4 local_1c;
  char local_15;
  uint local_14;
  CUser *local_10;
  
  local_20 = (char *)CBuddyManager::_ZN13CBuddyManager10find_buddyEcPKc
                               ((CBuddyManager *)(this + 0x34),param_1,param_2);
  if (local_20 == (char *)0x0) {
    notice_remove_buddy_fail(this,'\x03');
  }
  else {
    local_1c = *(undefined4 *)(local_20 + 1);
    local_15 = *local_20;
    local_14 = *(uint *)(local_20 + 5);
    cVar2 = CBuddyManager::_ZN13CBuddyManager9del_buddyEcPKc
                      ((CBuddyManager *)(this + 0x34),param_1,param_2);
    if (cVar2 == '\x01') {
      local_10 = (CUser *)CUserManager::_ZN12CUserManager9find_userEcPKc
                                    ((CUserManager *)g_user_manager,param_1,param_2);
      if (local_10 != (CUser *)0x0) {
        CVar1 = this[4];
        this_00 = (CBuddyManager *)get_buddy_manager(local_10);
        CBuddyManager::_ZN13CBuddyManager9del_buddyEcPKc(this_00,(char)CVar1,(char *)(this + 0x12));
      }
      _ZN5CUser15db_delete_buddyEcj(this,local_15,local_14);
      notice_remove_buddy_success(this,param_1,param_2);
      ArchiveLog::_ZN10ArchiveLogC2EPKcz
                (&local_21,
                 "CUser::req_remove_buddy REQ(server_id:%d, charac_no:%d), RES(server_id:%d, charac_no:%d)"
                 ,(int)(char)this[4],*(undefined4 *)(this + 0xe),(int)local_15,local_14);
    }
    else {
      notice_remove_buddy_fail(this,'\x03');
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/Community/User.cpp](source/Community/User.cpp)（约第 173 行）：

```cpp
void CUser::req_remove_buddy(char param_server_id, char const *param_user_id_what) {
    STPvPBuddyDBInfo* removingBuddy = buddyManager.find_buddy(param_server_id, param_user_id_what);
    if (removingBuddy == NULL) {
        // 3 means buddy not found?
        notice_remove_buddy_fail(3);
        return;
    }
    // copied from server, never used
    __attribute__((unused)) int user_m_id = removingBuddy->user_m_id;
    char server_id = removingBuddy->server_id;
    int charac_no = removingBuddy->charac_no;
    if (!buddyManager.del_buddy(param_server_id, param_user_id_what)) {
        // 3 not means buddy not found???
        notice_remove_buddy_fail(3);
    } else {
        CUser* user = g_user_manager.find_user(param_server_id, param_user_id_what);
        if (user != NULL) {
            user->get_buddy_manager()->del_buddy(user->stGameUserInfo.server_id, stGameUserInfo.buddy_n_user_id_what);
        }
        db_delete_buddy(server_id, charac_no);
        notice_remove_buddy_success(param_server_id, param_user_id_what);
        ArchiveLog("CUser::req_remove_buddy REQ(server_id:%d, charac_no:%d), RES(server_id:%d, charac_no:%d)", stGameUserInfo.server_id, stGameUserInfo.charac_no, server_id, charac_no);
    }
}
```
