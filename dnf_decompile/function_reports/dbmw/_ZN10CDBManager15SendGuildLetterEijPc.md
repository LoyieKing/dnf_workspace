# _ZN10CDBManager15SendGuildLetterEijPc

`CDBManager::SendGuildLetter(int, unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80746c2` | `0x2f9` | `0x804d4de` | `0x307` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,216 +1,219 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-add    $0xffffff80,%esp
+sub    $0x8c,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1",0x8(%esp)
 movl   $0x4e39,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x96>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x9a>
 movl   $0x7d3,0x8(%esp)
 movl   $&_ZZN10CDBManager15SendGuildLetterEijPcE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::AwardGuildTitleByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2ef>
-mov    -0x1c(%ebp),%eax
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2fa>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e39,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0xc8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2ef>
-mov    -0x1c(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0xc5>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2fa>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,-0x18(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,-0x28(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x3c(%ebp)
-lea    -0x3c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0x8(%eax),%eax
 lea    0x1(%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %edx,0x8(%eax)
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 movl   $0x0,0x4(%eax)
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 movl   $0x0,(%eax)
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2d9>
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2e4>
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x160>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2ef>
-mov    -0x1c(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x156>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2fa>
+movl   $0x0,-0x3c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x199>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2ef>
-lea    -0x5e(%ebp),%eax
-mov    $0x1e,%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x18f>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2fa>
+lea    -0x5a(%ebp),%eax
+mov    $0x1e,%esi
 mov    $0x0,%edx
 mov    %eax,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x1b8>
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x1ae>
 mov    %dx,(%eax)
 add    $0x2,%eax
-sub    $0x2,%ebx
-mov    %ebx,%esi
-and    $0xfffffffc,%esi
+sub    $0x2,%esi
+mov    %esi,%edi
+and    $0xfffffffc,%edi
 mov    $0x0,%ecx
 mov    %edx,(%eax,%ecx,1)
 add    $0x4,%ecx
-cmp    %esi,%ecx
-jb     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x1c2>
+cmp    %edi,%ecx
+jb     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x1b8>
 add    %ecx,%eax
-mov    %ebx,%ecx
+mov    %esi,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x1dd>
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x1d3>
 mov    %dx,(%eax)
 add    $0x2,%eax
-mov    %ebx,%ecx
+mov    %esi,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x1eb>
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x1e1>
 mov    %dl,(%eax)
 add    $0x1,%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 movl   $0x0,0xc(%esp)
 movl   $0x431,0x8(%esp)
 movl   $&g_ServerString_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 sub    $0x4,%esp
-lea    -0x2c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x5e(%ebp),%eax
+lea    -0x5a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    -0x38(%ebp),%eax
-mov    -0x10(%ebp),%edx
+movl   $0x0,-0x64(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    -0x20(%ebp),%edx
 mov    %edx,0x18(%esp)
-lea    -0x40(%ebp),%edx
+lea    -0x64(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0x10(%esp)
-lea    -0x5e(%ebp),%edx
+lea    -0x5a(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x298>
-jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2d5>
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2af>
+movl   $0x80d,0x8(%esp)
+movl   $&_ZZN10CDBManager15SendGuildLetterEijPcE12__FUNCTION__,0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"InsertLetter Err",0x8(%esp)
+movl   $"./log/Postal",0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2d1>
+mov    $0x1,%esi
+jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2d1>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-movl   $0x80d,0x8(%esp)
-movl   $&_ZZN10CDBManager15SendGuildLetterEijPcE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"InsertLetter Err",0x8(%esp)
-movl   $"./log/Postal",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2ef>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x18(%ebp),%eax
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+je     <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x2fa>
+addl   $0x1,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+cmp    -0x28(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x136>
-mov    $0x1,%eax
-lea    -0x8(%ebp),%esp
+jne    <T> <_ZN10CDBManager15SendGuildLetterEijPc+0x133>
+mov    $0x1,%ebx
+mov    %ebx,%eax
+lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x080748a8) */
/* CDBManager::SendGuildLetter(int, unsigned int, char*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager15SendGuildLetterEijPc
          (CDBManager *this,int param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char local_62 [30];
  int local_44;
  time_t local_40;
  uint local_3c;
  CMyFileLog local_38 [8];
  string local_30 [4];
  CMyFileLog local_2c [11];
  char local_21;
  int *local_20;
  int local_1c;
  tm *local_18;
  long local_14;
  int local_10;
  
  local_20 = *(int **)(this + 0x20);
  cVar2 = (**(code **)(*local_20 + 0x1c))
                    (local_20,0x4e39,
                     "seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1"
                     ,param_2,param_1);
  if (cVar2 == '\x01') {
    local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4e39);
    if (local_21 == '\x01') {
      local_1c = (**(code **)(*local_20 + 0x6c))(local_20);
      local_40 = time((time_t *)0x0);
      local_18 = localtime(&local_40);
      local_18->tm_hour = local_18->tm_hour + 1;
      local_18->tm_min = 0;
      local_18->tm_sec = 0;
      local_14 = mktime(local_18);
      for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
        local_21 = (**(code **)(*local_20 + 0x24))(local_20);
        if (local_21 != '\x01') {
          return 0;
        }
        cVar2 = (**(code **)(*local_20 + 0x38))(local_20,0,&local_3c);
        if (cVar2 != '\x01') {
          return 0;
        }
        pcVar4 = local_62;
        uVar6 = 0x1e;
        bVar7 = ((uint)pcVar4 & 2) != 0;
        if (bVar7) {
          local_62[0] = '\0';
          local_62[1] = '\0';
          pcVar4 = local_62 + 2;
          uVar6 = 0x1c;
        }
        uVar5 = 0;
        local_21 = '\x01';
        do {
          pcVar1 = pcVar4 + uVar5;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          uVar5 = uVar5 + 4;
        } while (uVar5 < (uVar6 & 0xfffffffc));
        if (!bVar7) {
          (pcVar4 + uVar5)[0] = '\0';
          (pcVar4 + uVar5)[1] = '\0';
        }
        np_server_xml::CServerXml::GetServerString((int)local_30,(bool *)g_ServerString_);
                    /* try { // try from 080748d9 to 080748dd has its CatchHandler @ 0807493f */
        pcVar4 = (char *)std::string::c_str(local_30);
        strncpy(local_62,pcVar4,0x1d);
        std::string::~string(local_30);
        cVar2 = _ZN10CDBManager12InsertLetterEjjPKcS1_Ril
                          (this,local_3c,0,local_62,param_3,&local_44,local_14);
        if (cVar2 != '\x01') {
          CMyFileLog::CMyFileLog(local_2c,"SendGuildLetter",0x80d);
          CMyFileLog::operator()(local_2c,"./log/Postal","InsertLetter Err");
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_38,"SendGuildLetter",0x7d3);
    CMyFileLog::operator()
              (local_38,"./log/DBQueryErr",
               "CDBManager::AwardGuildTitleByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n"
               ,param_1,param_2);
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 482 行）：

```cpp
bool CDBManager::SendGuildLetter(int serverId, unsigned int guildId, char* msg)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e39,
                      "seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1",
                      guildId, serverId))
    {
        CMyFileLog log(__FUNCTION__, 0x7d3);
        log("./log/DBQueryErr",
            "CDBManager::AwardGuildTitleByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n",
            serverId, guildId);
        return 0;
    }
    if (!h->exec(0x4e39))
        return 0;
    int n = h->get_n_rows();
    time_t now = time(0);
    struct tm* lt = localtime(&now);
    lt->tm_hour += 1;
    lt->tm_min = 0;
    lt->tm_sec = 0;
    long expiry = mktime(lt);
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        unsigned int characNo = 0;
        if (!h->get_uint(0, characNo))
            return 0;
        char subject[0x1e] = {0};
        std::string s = g_ServerString_.GetServerString(0x431, 0);
        strncpy(subject, s.c_str(), 0x1d);
        int letterNo = 0;
        if (!InsertLetter(characNo, 0, subject, msg, letterNo, expiry))
        {
            CMyFileLog log(__FUNCTION__, 0x80d);
            log("./log/Postal", "InsertLetter Err");
            return 0;
        }
    }
    return 1;
}
```
