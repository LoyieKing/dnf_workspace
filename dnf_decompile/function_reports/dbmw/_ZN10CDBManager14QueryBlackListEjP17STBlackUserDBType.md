# _ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType

`CDBManager::QueryBlackList(unsigned int, STBlackUserDBType*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8076258` | `0x228` | `0x804e4e2` | `0x20e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,162 +1,155 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 movl   $0xa,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no, charac_name, unix_timestamp(occ_time) from  charac_black_list where m_id = %s limit %d",0x8(%esp)
 movl   $0x4e44,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0xb1>
+je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0xaf>
+movl   $0xaac,0x8(%esp)
+movl   $&_ZZN10CDBManager14QueryBlackListEjP17STBlackUserDBTypeE12__FUNCTION__,0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0xaac,0x8(%esp)
-movl   $&_ZZN10CDBManager14QueryBlackListEjP17STBlackUserDBTypeE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryCharacNoByName() seLect charac_no, charac_name, occ_time from  charac_black_list where m_id = %s",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x222>
+jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x208>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e44,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0xe3>
+je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0xda>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x222>
+jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x208>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x20c>
+jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x1f2>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x12e>
+je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x11e>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x222>
+jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x208>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-add    0x10(%ebp),%eax
+lea    (%ebx,%eax,1),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x174>
+je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x160>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x222>
+jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x208>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
-shl    $0x3,%eax
-add    0x10(%ebp),%eax
-add    $0x4,%eax
+add    %eax,%eax
+add    $0x1,%eax
+shl    $0x2,%eax
+lea    (%ebx,%eax,1),%eax
 movl   $0x1e,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x1c2>
+je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x1ac>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x222>
+jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x208>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-add    0x10(%ebp),%eax
 add    $0x24,%eax
+lea    (%ebx,%eax,1),%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x208>
+je     <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x1ee>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x222>
+jmp    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x208>
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    -0x10(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0x104>
+jne    <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType+0xfb>
 mov    $0x1,%eax
 add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryBlackList(unsigned int, STBlackUserDBType*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType
          (CDBManager *this,uint param_1,STBlackUserDBType *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  int local_14;
  int local_10;
  
  local_18 = *(int **)(this + 0xc);
  pcVar1 = *(code **)(*local_18 + 0x1c);
  uVar3 = NumberToString(param_1,0);
  cVar2 = (*pcVar1)(local_18,0x4e44,
                    "seLect charac_no, charac_name, unix_timestamp(occ_time) from  charac_black_list where m_id = %s limit %d"
                    ,uVar3,10);
  if (cVar2 == '\x01') {
    local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4e44);
    if (local_19 == '\x01') {
      local_14 = (**(code **)(*local_18 + 0x6c))(local_18);
      for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
        local_19 = (**(code **)(*local_18 + 0x24))(local_18);
        if (local_19 != '\x01') {
          return 0;
        }
        local_19 = (**(code **)(*local_18 + 0x38))(local_18,0,param_2 + local_10 * 0x28);
        if (local_19 != '\x01') {
          return 0;
        }
        local_19 = (**(code **)(*local_18 + 0x2c))(local_18,1,param_2 + local_10 * 0x28 + 4,0x1e);
        if (local_19 != '\x01') {
          return 0;
        }
        cVar2 = (**(code **)(*local_18 + 0x38))(local_18,2,param_2 + local_10 * 0x28 + 0x24);
        if (cVar2 != '\x01') {
          return 0;
        }
        local_19 = '\x01';
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = NumberToString(param_1,0);
    CMyFileLog::CMyFileLog(local_24,"QueryBlackList",0xaac);
    CMyFileLog::operator()
              (local_24,"./log/DBQueryErr",
               "CDBManager::QueryCharacNoByName() seLect charac_no, charac_name, occ_time from  charac_black_list where m_id = %s"
               ,uVar3);
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 340 行）：

```cpp
char CDBManager::QueryBlackList(unsigned int m_id, STBlackUserDBType* list)
{
    CDBHandle* h = m_handles[3];    // game db
    if (!h->set_query(0x4e44,
                      "seLect charac_no, charac_name, unix_timestamp(occ_time) from  charac_black_list where m_id = %s limit %d",
                      NumberToString(m_id, 0), 0xa))
    {
        CMyFileLog log(__FUNCTION__, 0xaac);
        log("./log/DBQueryErr",
            "CDBManager::QueryCharacNoByName() seLect charac_no, charac_name, occ_time from  charac_black_list where m_id = %s",
            NumberToString(m_id, 0));
        return 0;
    }
    if (!h->exec(0x4e44))
        return 0;
    int n = h->get_n_rows();
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        if (!h->get_uint(0, *(unsigned int*)((char*)list + i * 0x28)))
            return 0;
        if (!h->get_str(1, (char*)list + i * 0x28 + 0x4, 0x1e))
            return 0;
        if (!h->get_uint(2, *(unsigned int*)((char*)list + i * 0x28 + 0x24)))
            return 0;
    }
    return 1;
}
```
