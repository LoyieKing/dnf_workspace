# _ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name

`CDBManager::ChangeCharName(Packet_DBMW_Change_Char_Name*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807b19c` | `0xda` | `0x805c44e` | `0xdf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x30,%esp
+sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    0xc(%ebp),%ecx
 add    $0xf,%ecx
 mov    %eax,0x10(%esp)
 mov    %ecx,0xc(%esp)
 movl   $"upDate charac_black_list set charac_name='%s' where charac_no=%d",0x8(%esp)
 movl   $0x4e85,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name+0x9f>
+je     <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name+0xa9>
 mov    0xc(%ebp),%eax
-mov    0xb(%eax),%ebx
+mov    0xb(%eax),%eax
+mov    %eax,-0x10(%ebp)
 mov    0xc(%ebp),%eax
-lea    0xf(%eax),%esi
+add    $0xf,%eax
+mov    %eax,-0xc(%ebp)
 movl   $0x1392,0x8(%esp)
 movl   $&_ZZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_NameE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::ChangeCharName() : upDate charac_black_list set charac_name='%s' where charac_no=%d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name+0xd3>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name+0xdd>
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e85,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x11(%ebp)
+movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name+0xce>
+je     <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name+0xd8>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name+0xd3>
+jmp    <T> <_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name+0xdd>
 mov    $0x1,%eax
-add    $0x30,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::ChangeCharName(Packet_DBMW_Change_Char_Name*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager14ChangeCharNameEP28Packet_DBMW_Change_Char_Name
          (CDBManager *this,Packet_DBMW_Change_Char_Name *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [12];
  int *local_10;
  
  local_10 = *(int **)(this + 0xc);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e85,
                     "upDate charac_black_list set charac_name=\'%s\' where charac_no=%d",
                     param_1 + 0xf,*(undefined4 *)(param_1 + 0xb));
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(*local_10 + 0x20))(local_10,0x4e85);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xb);
    CMyFileLog::CMyFileLog(local_1c,"ChangeCharName",0x1392);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr",
               "CDBManager::ChangeCharName() : upDate charac_black_list set charac_name=\'%s\' where charac_no=%d"
               ,param_1 + 0xf,uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 4212 行）：

```cpp
char CDBManager::ChangeCharName(Packet_DBMW_Change_Char_Name* packet)
{
    CDBHandle* h = m_handles[3];    // game db
    if (!h->set_query(0x4e85,
                      "upDate charac_black_list set charac_name='%s' where charac_no=%d",
                      packet->m_name, packet->m_characNo))
    {
        unsigned int characNo = packet->m_characNo;
        char* name = packet->m_name;
        CMyFileLog log(__FUNCTION__, 0x1392);
        log("./log/DBQueryErr",
            "CDBManager::ChangeCharName() : upDate charac_black_list set charac_name='%s' where charac_no=%d",
            name, characNo);
        return 0;
    }
    bool ret = h->exec(0x4e85);
    if (!ret)
        return 0;
    return 1;
}
```
