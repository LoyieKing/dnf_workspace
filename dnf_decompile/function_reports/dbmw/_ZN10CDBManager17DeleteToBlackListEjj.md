# _ZN10CDBManager17DeleteToBlackListEjj

`CDBManager::DeleteToBlackList(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8075ece` | `0x38a` | `0x805eaf4` | `0x38e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,236 +1,238 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x74,%esp
+sub    $0x64,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"deLete from charac_black_list where m_id = %s and charac_no = %d",0x8(%esp)
 movl   $0x4e40,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x10(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x61>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e40,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x82>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x384>
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x8c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $0x4ed6,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0xf9>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x103>
 movl   $0xa6c,0x8(%esp)
 movl   $&_ZZN10CDBManager17DeleteToBlackListEjjE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::DeleteToBlackList() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x384>
-mov    -0x10(%ebp),%eax
+movl   $"./log/BlackListModify",0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ed6,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x124>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x384>
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x12e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,-0xc(%ebp)
-cmpl   $0x1,-0xc(%ebp)
-jle    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x17c>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+cmp    $0x1,%eax
+setg   %al
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x187>
 movl   $0xa74,0x8(%esp)
 movl   $&_ZZN10CDBManager17DeleteToBlackListEjjE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::seLect_black_point_offset_point_from_charac_black_info() idata > 1 seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $"./log/BlackListModify",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x1dc>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x1e7>
 movl   $0xa7a,0x8(%esp)
 movl   $&_ZZN10CDBManager17DeleteToBlackListEjjE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::seLect_black_point_offset_point_from_charac_black_info() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x384>
-movl   $0x0,-0x48(%ebp)
-movl   $0x0,-0x4c(%ebp)
-mov    -0x10(%ebp),%eax
+movl   $"./log/BlackListModify",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
+movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0x14(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x259>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x264>
 movl   $0xa82,0x8(%esp)
 movl   $&_ZZN10CDBManager17DeleteToBlackListEjjE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::DeleteToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x384>
-mov    -0x10(%ebp),%eax
+movl   $"./log/BlackListModify",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x4c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x2c8>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x2d3>
 movl   $0xa87,0x8(%esp)
 movl   $&_ZZN10CDBManager17DeleteToBlackListEjjE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::DeleteToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x384>
-mov    -0x48(%ebp),%edx
-mov    -0x4c(%ebp),%eax
+movl   $"./log/BlackListModify",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
+mov    -0x10(%ebp),%edx
+mov    -0x14(%ebp),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 test   %eax,%eax
-jle    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x37f>
-mov    -0x10(%ebp),%eax
+jle    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x383>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_black_info set black_point = black_point - 1 where charac_no = %d",0x8(%esp)
 movl   $0x4e42,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x350>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x35b>
 movl   $0xa91,0x8(%esp)
 movl   $&_ZZN10CDBManager17DeleteToBlackListEjjE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::DeleteToBlackList() upDate charac_black_info set black_point = black_point - 1 where charac_no = %d",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x384>
-mov    -0x10(%ebp),%eax
+movl   $"./log/BlackListModify",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e42,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x37f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x384>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x383>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17DeleteToBlackListEjj+0x388>
 mov    $0x1,%eax
-add    $0x74,%esp
+add    $0x64,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::DeleteToBlackList(unsigned int, unsigned int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager17DeleteToBlackListEjj(CDBManager *this,uint param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int local_50;
  int local_4c;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0xc);
  pcVar1 = *(code **)(*local_14 + 0x1c);
  uVar3 = NumberToString(param_1,0);
  (*pcVar1)(local_14,0x4e40,"deLete from charac_black_list where m_id = %s and charac_no = %d",uVar3
            ,param_2);
  local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4e40);
  if (local_15 == '\x01') {
    cVar2 = (**(code **)(*local_14 + 0x1c))
                      (local_14,0x4ed6,
                       "seLect black_point,offset_point from charac_black_info where charac_no=%d",
                       param_2);
    if (cVar2 == '\x01') {
      cVar2 = (**(code **)(*local_14 + 0x20))(local_14,0x4ed6);
      if (cVar2 == '\x01') {
        local_10 = (**(code **)(*local_14 + 0x6c))(local_14);
        if (1 < local_10) {
          CMyFileLog::CMyFileLog(local_40,"DeleteToBlackList",0xa74);
          CMyFileLog::operator()
                    (local_40,"./log/BlackListModify",
                     "CDBManager::seLect_black_point_offset_point_from_charac_black_info() idata > 1 seLect black_point,offset_point from charac_black_info where charac_no=%d"
                     ,param_2);
        }
        cVar2 = (**(code **)(*local_14 + 0x24))(local_14);
        if (cVar2 == '\x01') {
          local_4c = 0;
          local_50 = 0;
          cVar2 = (**(code **)(*local_14 + 0x34))(local_14,0,&local_4c);
          if (cVar2 == '\x01') {
            cVar2 = (**(code **)(*local_14 + 0x34))(local_14,1,&local_50);
            if (cVar2 == '\x01') {
              if (local_4c != local_50 && -1 < local_4c - local_50) {
                cVar2 = (**(code **)(*local_14 + 0x1c))
                                  (local_14,0x4e42,
                                   "upDate charac_black_info set black_point = black_point - 1 where charac_no = %d"
                                   ,param_2);
                if (cVar2 != '\x01') {
                  CMyFileLog::CMyFileLog(local_20,"DeleteToBlackList",0xa91);
                  CMyFileLog::operator()
                            (local_20,"./log/DBQueryErr",
                             "CDBManager::DeleteToBlackList() upDate charac_black_info set black_point = black_point - 1 where charac_no = %d"
                             ,param_2);
                  return 0;
                }
                cVar2 = (**(code **)(*local_14 + 0x20))(local_14,0x4e42);
                if (cVar2 != '\x01') {
                  return 0;
                }
              }
              uVar3 = 1;
            }
            else {
              CMyFileLog::CMyFileLog(local_28,"DeleteToBlackList",0xa87);
              CMyFileLog::operator()
                        (local_28,"./log/DBQueryErr",
                         "CDBManager::DeleteToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d"
                         ,param_2);
              uVar3 = 0;
            }
          }
          else {
            CMyFileLog::CMyFileLog(local_30,"DeleteToBlackList",0xa82);
            CMyFileLog::operator()
                      (local_30,"./log/DBQueryErr",
                       "CDBManager::DeleteToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d"
                       ,param_2);
            uVar3 = 0;
          }
        }
        else {
          CMyFileLog::CMyFileLog(local_38,"DeleteToBlackList",0xa7a);
          CMyFileLog::operator()
                    (local_38,"./log/DBQueryErr",
                     "CDBManager::seLect_black_point_offset_point_from_charac_black_info() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d"
                     ,param_2);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_48,"DeleteToBlackList",0xa6c);
      CMyFileLog::operator()
                (local_48,"./log/DBQueryErr",
                 "CDBManager::DeleteToBlackList() seLect black_point,offset_point from charac_black_info where charac_no=%d"
                 ,param_2);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 4726 行）：

```cpp
char CDBManager::DeleteToBlackList(unsigned int m_id, unsigned int characNo)
{
    CDBHandle* h = m_handles[3];    // game db
    if (!h->set_query(0x4e40,
                      "deLete from charac_black_list where m_id = %s and charac_no = %d",
                      NumberToString(m_id, 0), characNo))
        return 0;
    if (!h->exec(0x4e40))
        return 0;
    if (!h->set_query(0x4ed6,
                      "seLect black_point,offset_point from charac_black_info where charac_no=%d",
                      characNo))
    {
        CMyFileLog log(__FUNCTION__, 0xa6c);
        log("./log/BlackListModify",
            "CDBManager::DeleteToBlackList() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (!h->exec(0x4ed6))
        return 0;
    if (h->get_n_rows() > 1)
    {
        CMyFileLog log(__FUNCTION__, 0xa74);
        log("./log/BlackListModify",
            "CDBManager::seLect_black_point_offset_point_from_charac_black_info() idata > 1 seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
    }
    if (!h->fetch())
    {
        CMyFileLog log(__FUNCTION__, 0xa7a);
        log("./log/BlackListModify",
            "CDBManager::seLect_black_point_offset_point_from_charac_black_info() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    int blackPoint = 0;
    int offsetPoint = 0;
    if (!h->get_int(0, blackPoint))
    {
        CMyFileLog log(__FUNCTION__, 0xa82);
        log("./log/BlackListModify",
            "CDBManager::DeleteToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (!h->get_int(1, offsetPoint))
    {
        CMyFileLog log(__FUNCTION__, 0xa87);
        log("./log/BlackListModify",
            "CDBManager::DeleteToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (blackPoint - offsetPoint > 0)
    {
        if (!h->set_query(0x4e42,
                          "upDate charac_black_info set black_point = black_point - 1 where charac_no = %d",
                          characNo))
        {
            CMyFileLog log(__FUNCTION__, 0xa91);
            log("./log/BlackListModify",
                "CDBManager::DeleteToBlackList() upDate charac_black_info set black_point = black_point - 1 where charac_no = %d",
                characNo);
            return 0;
        }
        if (!h->exec(0x4e42))
            return 0;
    }
    return 1;
}
```
