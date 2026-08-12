# _ZN10CDBManager19QueryGuildPointListEiP13CGuildManager

`CDBManager::QueryGuildPointList(int, CGuildManager*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8073c4c` | `0x224` | `0x8050424` | `0x22f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,160 +1,168 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x44,%esp
+sub    $0x4c,%esp
 cmpl   $0x0,0x10(%ebp)
-jne    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x17>
+jne    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x19>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x21f>
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x224>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0",0x8(%esp)
 movl   $0x4e32,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x97>
+je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x99>
 movl   $0x692,0x8(%esp)
 movl   $&_ZZN10CDBManager19QueryGuildPointListEiP13CGuildManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuild() select guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x21f>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x224>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e32,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0xc9>
+je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0xc4>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x21f>
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x224>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager18GetVtGuildRankInfoEv>
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x209>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x20e>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x122>
+je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x116>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x21f>
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x224>
 movl   $&_ZSt7nothrow,0x4(%esp)
 movl   $0xc,(%esp)
 call   <T> <_ZnwjRKSt9nothrow_t>
 mov    %eax,%ebx
 mov    %ebx,%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x14c>
+je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x162>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15STGuildRankInfoC1Ev>
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x15e>
+mov    %edx,%esi
+mov    %eax,%edi
+movl   $&_ZSt7nothrow,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvRKSt9nothrow_t>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x14e>
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x164>
 mov    %ebx,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x3c(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x162>
+jne    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x178>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x21f>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x224>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-mov    -0x30(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x19b>
+je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x1a7>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x21f>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x224>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-mov    -0x30(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x1d4>
+je     <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x1d9>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x21f>
-mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0x224>
+mov    -0x3c(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x24(%ebp),%eax
-lea    -0x30(%ebp),%edx
+lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRP15STGuildRankInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE9push_backEOS3_>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+cmp    -0x20(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0xf8>
+jne    <T> <_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager+0xf3>
 mov    $0x1,%eax
-mov    -0x4(%ebp),%ebx
-leave
+lea    -0xc(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryGuildPointList(int, CGuildManager*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager19QueryGuildPointListEiP13CGuildManager
          (CDBManager *this,int param_1,CGuildManager *param_2)

{
  char cVar1;
  undefined4 uVar2;
  STGuildRankInfo *this_00;
  uint *puVar3;
  char *pcVar4;
  STGuildRankInfo *local_34;
  CMyFileLog local_30 [8];
  uint local_28 [2];
  char local_1d;
  int *local_1c;
  vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
  *local_18;
  int local_14;
  int local_10;
  
  if (param_2 == (CGuildManager *)0x0) {
    uVar2 = 0;
  }
  else {
    local_1c = *(int **)(this + 0x20);
    pcVar4 = "seLect guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0"
    ;
    cVar1 = (**(code **)(*local_1c + 0x1c))
                      (local_1c,0x4e32,
                       "seLect guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0"
                       ,param_1);
    if (cVar1 == '\x01') {
      puVar3 = (uint *)0x4e32;
      local_1d = (**(code **)(*local_1c + 0x20))(local_1c,0x4e32);
      if (local_1d == '\x01') {
        local_18 = (vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
                    *)CGuildManager::GetVtGuildRankInfo(param_2);
        local_14 = (**(code **)(*local_1c + 0x6c))(local_1c);
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          local_1d = (**(code **)(*local_1c + 0x24))(local_1c,puVar3,pcVar4);
          if (local_1d != '\x01') {
            return 0;
          }
          this_00 = operator_new(0xc,(nothrow_t *)&std::nothrow);
          if (this_00 == (STGuildRankInfo *)0x0) {
            return 0;
          }
          STGuildRankInfo::STGuildRankInfo(this_00);
          local_34 = this_00;
          local_1d = (**(code **)(*local_1c + 0x38))(local_1c,0,this_00);
          if (local_1d != '\x01') {
            return 0;
          }
          local_1d = (**(code **)(*local_1c + 0x38))(local_1c,1,local_34 + 4);
          if (local_1d != '\x01') {
            return 0;
          }
          pcVar4 = (char *)&local_34;
          std::make_pair<unsigned_int&,STGuildRankInfo*&>
                    (local_28,(STGuildRankInfo **)(local_34 + 4));
          puVar3 = local_28;
          std::
          vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
          ::push_back(local_18,(pair *)puVar3);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_30,"QueryGuildPointList",0x692);
      CMyFileLog::operator()
                (local_30,"./log/DBQueryErr",
                 "CDBManager::QueryGuild() select guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0\n"
                 ,param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 958 行）：

```cpp
char CDBManager::QueryGuildPointList(int serverId, CGuildManager* gm)
{
    if (!gm)
        return 0;
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e32,
                      "seLect guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0",
                      serverId))
    {
        CMyFileLog log(__FUNCTION__, 0x692);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuild() select guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0\n",
            serverId);
        return 0;
    }
    if (!h->exec(0x4e32))
        return 0;
    std::vector<std::pair<unsigned int, STGuildRankInfo*> >* rankList =
        gm->GetVtGuildRankInfo();
    int n = h->get_n_rows();
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        STGuildRankInfo* info = new (std::nothrow) STGuildRankInfo;
        if (!info)
            return 0;
        if (!h->get_uint(0, *(unsigned int*)((char*)info + 0)))
            return 0;
        if (!h->get_uint(1, *(unsigned int*)((char*)info + 4)))
            return 0;
        rankList->push_back(
            std::make_pair(*(unsigned int*)((char*)info + 4), info));
    }
    return 1;
}
```
