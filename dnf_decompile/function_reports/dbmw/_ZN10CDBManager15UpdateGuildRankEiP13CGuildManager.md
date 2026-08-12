# _ZN10CDBManager15UpdateGuildRankEiP13CGuildManager

`CDBManager::UpdateGuildRank(int, CGuildManager*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8073e70` | `0x231` | `0x80501d0` | `0x223` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,158 +1,153 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x54,%esp
 cmpl   $0x0,0x10(%ebp)
-jne    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x18>
+jne    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x17>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x227>
+jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x21e>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set guild_rank = 0 where server_id = %d and expire_flag = 0",0x8(%esp)
 movl   $0x4e33,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x98>
+je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x97>
 movl   $0x6cf,0x8(%esp)
 movl   $&_ZZN10CDBManager15UpdateGuildRankEiP13CGuildManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::UpdateGuildRank() update guild_info set guild_rank = 0 where server_id = %d and expire_flag = 0\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x227>
+jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x21e>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e33,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0xca>
+je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0xc2>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x227>
+jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x21e>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager18GetVtGuildRankInfoEv>
 mov    %eax,-0x10(%ebp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1f3>
-lea    -0x30(%ebp),%eax
+jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1ea>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP15STGuildRankInfoESt6vectorIS4_SaIS4_EEEdeEv>
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP15STGuildRankInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1e4>
+je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1db>
 mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1e7>
+je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1de>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
 mov    0xc(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set guild_rank = %d where guild_id = %d and server_id = %d and expire_flag = 0",0x8(%esp)
 movl   $0x4e34,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1b5>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%esi
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%ebx
+je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1b3>
 movl   $0x6e6,0x8(%esp)
 movl   $&_ZZN10CDBManager15UpdateGuildRankEiP13CGuildManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xc(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::UpdateGuildRank() Fatal Error Break : update guild_info set guild_rank = %d where guild_id = %d and server_id = %d and expire_flag = 0\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x227>
+jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x21e>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e34,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1e8>
+je     <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1df>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x227>
+jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x21e>
 nop
-jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1e8>
+jmp    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0x1df>
 nop
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP15STGuildRankInfoESt6vectorIS4_SaIS4_EEEppEv>
-lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
+lea    -0x18(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSt4pairIjP15STGuildRankInfoESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 test   %al,%al
-jne    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0xf2>
+jne    <T> <_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager+0xea>
 mov    $0x1,%eax
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdateGuildRank(int, CGuildManager*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager15UpdateGuildRankEiP13CGuildManager
          (CDBManager *this,int param_1,CGuildManager *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  __normal_iterator<std::pair<unsigned_int,STGuildRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>>
  local_34 [4];
  CMyFileLog local_30 [8];
  __normal_iterator local_28 [4];
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (param_2 == (CGuildManager *)0x0) {
    uVar4 = 0;
  }
  else {
    local_18 = *(int **)(this + 0x20);
    cVar2 = (**(code **)(*local_18 + 0x1c))
                      (local_18,0x4e33,
                       "upDate guild_info set guild_rank = 0 where server_id = %d and expire_flag = 0"
                       ,param_1);
    if (cVar2 == '\x01') {
      local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4e33);
      if (local_19 == '\x01') {
        local_14 = CGuildManager::GetVtGuildRankInfo(param_2);
        std::
        vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
        ::begin();
        while( true ) {
          std::
          vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
          ::end();
          bVar3 = __gnu_cxx::operator!=(local_34,local_28);
          if (!bVar3) break;
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<unsigned_int,STGuildRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>>
                  ::operator*(local_34);
          local_10 = *(undefined4 **)(iVar5 + 4);
          if ((local_10 != (undefined4 *)0x0) && (local_10[2] != 0)) {
            cVar2 = (**(code **)(*local_18 + 0x1c))
                              (local_18,0x4e34,
                               "upDate guild_info set guild_rank = %d where guild_id = %d and server_id = %d and expire_flag = 0"
                               ,local_10[2],*local_10,param_1);
            if (cVar2 != '\x01') {
              uVar4 = *local_10;
              uVar1 = local_10[2];
              CMyFileLog::CMyFileLog(local_24,"UpdateGuildRank",0x6e6);
              CMyFileLog::operator()
                        (local_24,"./log/DBQueryErr",
                         "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_info set guild_rank = %d where guild_id = %d and server_id = %d and expire_flag = 0\n"
                         ,uVar1,uVar4,param_1);
              return 0;
            }
            local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4e34);
            if (local_19 != '\x01') {
              return 0;
            }
          }
          __gnu_cxx::
          __normal_iterator<std::pair<unsigned_int,STGuildRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>>
          ::operator++(local_34);
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_30,"UpdateGuildRank",0x6cf);
      CMyFileLog::operator()
                (local_30,"./log/DBQueryErr",
                 "CDBManager::UpdateGuildRank() update guild_info set guild_rank = 0 where server_id = %d and expire_flag = 0\n"
                 ,param_1);
      uVar4 = 0;
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 914 行）：

```cpp
char CDBManager::UpdateGuildRank(int serverId, CGuildManager* gm)
{
    if (!gm)
        return 0;
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e33,
                      "upDate guild_info set guild_rank = 0 where server_id = %d and expire_flag = 0",
                      serverId))
    {
        CMyFileLog log(__FUNCTION__, 0x6cf);
        log("./log/DBQueryErr",
            "CDBManager::UpdateGuildRank() update guild_info set guild_rank = 0 where server_id = %d and expire_flag = 0\n",
            serverId);
        return 0;
    }
    if (!h->exec(0x4e33))
        return 0;
    std::vector<std::pair<unsigned int, STGuildRankInfo*> >* rankList =
        gm->GetVtGuildRankInfo();
    for (std::vector<std::pair<unsigned int, STGuildRankInfo*> >::iterator it =
             rankList->begin();
         it != rankList->end(); ++it)
    {
        STGuildRankInfo* info = it->second;
        if (!info)
            continue;
        if (*(int*)((char*)info + 8) == 0)
            continue;
        if (!h->set_query(0x4e34,
                          "upDate guild_info set guild_rank = %d where guild_id = %d and server_id = %d and expire_flag = 0",
                          *(int*)((char*)info + 8),
                          *(int*)((char*)info + 0), serverId))
        {
            CMyFileLog log(__FUNCTION__, 0x6e6);
            log("./log/DBQueryErr",
                "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_info set guild_rank = %d where guild_id = %d and server_id = %d and expire_flag = 0\n",
                *(int*)((char*)info + 8), *(int*)((char*)info + 0), serverId);
            return 0;
        }
        if (!h->exec(0x4e34))
            return 0;
    }
    return 1;
}
```
