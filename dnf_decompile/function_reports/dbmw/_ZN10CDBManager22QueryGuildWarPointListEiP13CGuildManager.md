# _ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager

`CDBManager::QueryGuildWarPointList(int, CGuildManager*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80753bc` | `0x306` | `0x8058cee` | `0x303` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,216 +1,220 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x54,%esp
+sub    $0x5c,%esp
 cmpl   $0x0,0x10(%ebp)
-jne    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x17>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
+jne    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x19>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $0xa,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect guild_id, guild_war_point, guild_name, guild_point_prev from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0",0x8(%esp)
 movl   $0x4e3b,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0xa7>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0xa9>
 movl   $0x953,0x8(%esp)
 movl   $&_ZZN10CDBManager22QueryGuildWarPointListEiP13CGuildManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0xa,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildWarPointList() select guild_id, guild_war_point from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e3b,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0xd9>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0xd4>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager21GetVtGuildWarRankInfoEv>
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,-0x10(%ebp)
-cmpl   $0xa,-0x10(%ebp)
-jle    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x14e>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,-0x20(%ebp)
+cmpl   $0xa,-0x20(%ebp)
+jle    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x149>
 movl   $0x963,0x8(%esp)
 movl   $&_ZZN10CDBManager22QueryGuildWarPointListEiP13CGuildManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x10(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x14(%esp)
 movl   $0xa,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryGuildWarPointList() : Server Group( %d )\tMAX_GUILD_WAR_ENTERABLE_RANK( %d ) <-> select n_data( %d )\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2eb>
-mov    -0x18(%ebp),%eax
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2e2>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x184>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x178>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
 movl   $&_ZSt7nothrow,0x4(%esp)
 movl   $0x28,(%esp)
 call   <T> <_ZnwjRKSt9nothrow_t>
 mov    %eax,%ebx
 mov    %ebx,%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x1ae>
+je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x1c4>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildWarRankInfoC1Ev>
-mov    %ebx,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x1b0>
-mov    %ebx,%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x38(%ebp),%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x1c0>
+mov    %edx,%esi
+mov    %eax,%edi
+movl   $&_ZSt7nothrow,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvRKSt9nothrow_t>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x1c6>
+mov    %ebx,%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x44(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x1c4>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
-mov    -0x18(%ebp),%eax
+jne    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x1da>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-mov    -0x38(%ebp),%eax
+mov    -0x44(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x1fd>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x20c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-mov    -0x38(%ebp),%eax
+mov    -0x44(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x239>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x241>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
-mov    -0x38(%ebp),%eax
+mov    -0x44(%ebp),%eax
 add    $0xc,%eax
 movl   $0x17,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x27d>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x27b>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-mov    -0x38(%ebp),%eax
+mov    -0x44(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2b6>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x301>
-mov    -0x38(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2ad>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x2f8>
+mov    -0x44(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x24(%ebp),%eax
-lea    -0x38(%ebp),%edx
+lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRP18STGuildWarRankInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE9push_backEOS3_>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+cmp    -0x20(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x15a>
+jne    <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager+0x155>
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

/* CDBManager::QueryGuildWarPointList(int, CGuildManager*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager
          (CDBManager *this,int param_1,CGuildManager *param_2)

{
  char cVar1;
  undefined4 uVar2;
  STGuildWarRankInfo *this_00;
  char *pcVar3;
  char *pcVar4;
  STGuildWarRankInfo *local_3c;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  uint local_28 [2];
  char local_1d;
  int *local_1c;
  vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
  *local_18;
  int local_14;
  int local_10;
  
  if (param_2 == (CGuildManager *)0x0) {
    uVar2 = 0;
  }
  else {
    local_1c = *(int **)(this + 0x20);
    pcVar4 = 
    "seLect guild_id, guild_war_point, guild_name, guild_point_prev from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0"
    ;
    cVar1 = (**(code **)(*local_1c + 0x1c))
                      (local_1c,0x4e3b,
                       "seLect guild_id, guild_war_point, guild_name, guild_point_prev from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0"
                       ,param_1,10);
    if (cVar1 == '\x01') {
      pcVar3 = (char *)0x4e3b;
      local_1d = (**(code **)(*local_1c + 0x20))(local_1c,0x4e3b);
      if (local_1d == '\x01') {
        local_18 = (vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
                    *)CGuildManager::GetVtGuildWarRankInfo(param_2);
        local_14 = (**(code **)(*local_1c + 0x6c))(local_1c);
        if (10 < local_14) {
          CMyFileLog::CMyFileLog(local_30,"QueryGuildWarPointList",0x963);
          pcVar4 = 
          "CDBManager::QueryGuildWarPointList() : Server Group( %d )\tMAX_GUILD_WAR_ENTERABLE_RANK( %d ) <-> select n_data( %d )\n"
          ;
          pcVar3 = "./log/DBQueryErr";
          CMyFileLog::operator()
                    (local_30,"./log/DBQueryErr",
                     "CDBManager::QueryGuildWarPointList() : Server Group( %d )\tMAX_GUILD_WAR_ENTERABLE_RANK( %d ) <-> select n_data( %d )\n"
                     ,param_1,10,local_14);
        }
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          local_1d = (**(code **)(*local_1c + 0x24))(local_1c,pcVar3,pcVar4);
          if (local_1d != '\x01') {
            return 0;
          }
          this_00 = operator_new(0x28,(nothrow_t *)&std::nothrow);
          if (this_00 == (STGuildWarRankInfo *)0x0) {
            return 0;
          }
          STGuildWarRankInfo::STGuildWarRankInfo(this_00);
          local_3c = this_00;
          local_1d = (**(code **)(*local_1c + 0x38))(local_1c,0,this_00);
          if (local_1d != '\x01') {
            return 0;
          }
          local_1d = (**(code **)(*local_1c + 0x38))(local_1c,1,local_3c + 4);
          if (local_1d != '\x01') {
            return 0;
          }
          local_1d = (**(code **)(*local_1c + 0x2c))(local_1c,2,local_3c + 0xc,0x17);
          if (local_1d != '\x01') {
            return 0;
          }
          local_1d = (**(code **)(*local_1c + 0x38))(local_1c,3,local_3c + 0x24);
          if (local_1d != '\x01') {
            return 0;
          }
          pcVar4 = (char *)&local_3c;
          std::make_pair<unsigned_int&,STGuildWarRankInfo*&>
                    (local_28,(STGuildWarRankInfo **)(local_3c + 4));
          pcVar3 = (char *)local_28;
          std::
          vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
          ::push_back(local_18,pcVar3);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_38,"QueryGuildWarPointList",0x953);
      CMyFileLog::operator()
                (local_38,"./log/DBQueryErr",
                 "CDBManager::QueryGuildWarPointList() select guild_id, guild_war_point from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0\n"
                 ,param_1,10);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 3295 行）：

```cpp
char CDBManager::QueryGuildWarPointList(int guildWarPoint, CGuildManager* gm)
{
    if (!gm)
        return 0;
    CDBHandle* h = m_handles[8];
    if (!h->set_query(
            0x4e3b,
            "seLect guild_id, guild_war_point, guild_name, guild_point_prev from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0",
            guildWarPoint, 0xa))
    {
        CMyFileLog log(__FUNCTION__, 0x953);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildWarPointList() select guild_id, guild_war_point from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0\n",
            guildWarPoint, 0xa);
        return 0;
    }
    if (!h->exec(0x4e3b))
        return 0;
    std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >* ranks =
        gm->GetVtGuildWarRankInfo();
    int n = h->get_n_rows();
    if (n > 0xa)
    {
        CMyFileLog log(__FUNCTION__, 0x963);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildWarPointList() : Server Group( %d )\tMAX_GUILD_WAR_ENTERABLE_RANK( %d ) <-> select n_data( %d )\n",
            guildWarPoint, 0xa, n);
    }
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        STGuildWarRankInfo* info = new (std::nothrow) STGuildWarRankInfo;
        if (!info)
            return 0;
        if (!h->get_uint(0, info->m_field0))
            return 0;
        if (!h->get_uint(1, info->m_field4))
            return 0;
        if (!h->get_str(2, info->m_name, 0x17))
            return 0;
        if (!h->get_uint(3, info->m_field24))
            return 0;
        ranks->push_back(std::make_pair(info->m_field4, info));
    }
    return 1;
}
```
