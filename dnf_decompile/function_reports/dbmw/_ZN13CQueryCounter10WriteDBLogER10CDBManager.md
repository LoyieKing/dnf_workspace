# _ZN13CQueryCounter10WriteDBLogER10CDBManager

`CQueryCounter::WriteDBLog(CDBManager&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808e4a8` | `0x2b6` | `0x80ed428` | `0x2be` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,182 +1,183 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    0x1054(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1054(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1054(%eax),%eax
 test   %eax,%eax
 setg   %al
-test   %al,%al
-jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x2ad>
+mov    %al,-0x1d(%ebp)
+cmpb   $0x0,-0x1d(%ebp)
+jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x2b5>
 movl   $0x4e21,-0x1c(%ebp)
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x28c>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x294>
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0xc8,%edx
 fldl   0xc(%eax,%edx,8)
 fldl   &data#a2821b98(.rodata)
 fmulp  %st,%st(1)
 fnstcw -0x3a(%ebp)
 movzwl -0x3a(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0x3c(%ebp)
 fldcw  -0x3c(%ebp)
 fistpl -0x40(%ebp)
 fldcw  -0x3a(%ebp)
 mov    -0x40(%ebp),%ecx
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
-mov    0x8(%eax,%edx,4),%edx
+mov    0x8(%eax,%edx,4),%eax
+mov    %eax,%edx
 mov    -0x1c(%ebp),%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager16UpdateQueryCountEjii>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x15e>
+je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x167>
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
 mov    0x8(%eax,%edx,4),%eax
 test   %eax,%eax
-je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x287>
+je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x290>
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0xc8,%edx
 fldl   0xc(%eax,%edx,8)
 fldl   &data#a2821b98(.rodata)
 fmulp  %st,%st(1)
 fnstcw -0x3a(%ebp)
 movzwl -0x3a(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0x3c(%ebp)
 fldcw  -0x3c(%ebp)
 fistpl -0x40(%ebp)
 fldcw  -0x3a(%ebp)
 mov    -0x40(%ebp),%esi
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
-mov    0x8(%eax,%edx,4),%ebx
+mov    0x8(%eax,%edx,4),%eax
+mov    %eax,%ebx
 movl   $0x76,0x8(%esp)
 movl   $&_ZZN13CQueryCounter10WriteDBLogER10CDBManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Count DB Insert Fail! id(%d), count(%d), time(%d)",0x8(%esp)
 movl   $"./log/QueryCount",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x288>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x290>
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
 mov    0x8(%eax,%edx,4),%eax
 test   %eax,%eax
-je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x256>
+je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x290>
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0xc8,%edx
 fldl   0xc(%eax,%edx,8)
 fldl   &data#a2821b98(.rodata)
 fmulp  %st,%st(1)
 fnstcw -0x3a(%ebp)
 movzwl -0x3a(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0x3c(%ebp)
 fldcw  -0x3c(%ebp)
 fistpl -0x40(%ebp)
 fldcw  -0x3a(%ebp)
 mov    -0x40(%ebp),%eax
 mov    -0x1c(%ebp),%edx
 lea    -0x4e20(%edx),%ecx
 mov    0x8(%ebp),%edx
 add    $0x50,%ecx
 mov    0x8(%edx,%ecx,4),%ecx
 mov    %ecx,-0x4c(%ebp)
-mov    %eax,%edx
-sar    $0x1f,%edx
-idivl  -0x4c(%ebp)
+mov    $0x0,%edx
+divl   -0x4c(%ebp)
 mov    %eax,%edi
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0xc8,%edx
 fldl   0xc(%eax,%edx,8)
 fldl   &data#a2821b98(.rodata)
 fmulp  %st,%st(1)
 fldcw  -0x3c(%ebp)
 fistpl -0x40(%ebp)
 fldcw  -0x3a(%ebp)
 mov    -0x40(%ebp),%esi
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
-mov    0x8(%eax,%edx,4),%ebx
+mov    0x8(%eax,%edx,4),%eax
+mov    %eax,%ebx
 movl   $0x7a,0x8(%esp)
 movl   $&_ZZN13CQueryCounter10WriteDBLogER10CDBManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Count DB Insert Success! id(%d), count(%d), time(%d), compute(%4.2f)",0x8(%esp)
 movl   $"./log/QueryCount",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
 movl   $0x0,0x8(%eax,%edx,4)
 mov    -0x1c(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0xc8,%edx
 fldz
 fstpl  0xc(%eax,%edx,8)
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x288>
-nop
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x4f60,-0x1c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x40>
+jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x45>
 mov    0x8(%ebp),%eax
 movl   $0x1e,0x1054(%eax)
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x2ae>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x2b6>
 nop
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CQueryCounter::WriteDBLog(CDBManager&) */

void __thiscall
CQueryCounter::_ZN13CQueryCounter10WriteDBLogER10CDBManager(CQueryCounter *this,CDBManager *param_1)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  uint local_20;
  
  *(int *)(this + 0x1054) = *(int *)(this + 0x1054) + -1;
  if (*(int *)(this + 0x1054) < 1) {
    for (local_20 = 0x4e21; (int)local_20 < 0x4f61; local_20 = local_20 + 1) {
      cVar5 = CDBManager::_ZN10CDBManager16UpdateQueryCountEjii
                        (param_1,local_20,*(int *)(this + (local_20 - 0x4dd0) * 4 + 8),
                         (int)ROUND(_DAT_081bab58 *
                                    *(double *)(this + (local_20 - 0x4d58) * 8 + 0xc)));
      if (cVar5 == '\x01') {
        if (*(int *)(this + (local_20 - 0x4dd0) * 4 + 8) != 0) {
          dVar3 = _DAT_081bab58 * *(double *)(this + (local_20 - 0x4d58) * 8 + 0xc);
          iVar2 = *(int *)(this + (local_20 - 0x4dd0) * 4 + 8);
          dVar4 = _DAT_081bab58 * *(double *)(this + (local_20 - 0x4d58) * 8 + 0xc);
          uVar1 = *(undefined4 *)(this + (local_20 - 0x4dd0) * 4 + 8);
          CMyFileLog::CMyFileLog(local_28,"WriteDBLog",0x7a);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_28,"./log/QueryCount",
                     "Count DB Insert Success! id(%d), count(%d), time(%d), compute(%4.2f)",local_20
                     ,uVar1,(int)ROUND(dVar4),(int)ROUND(dVar3) / iVar2);
        }
        *(undefined4 *)(this + (local_20 - 0x4dd0) * 4 + 8) = 0;
        *(undefined8 *)(this + (local_20 - 0x4d58) * 8 + 0xc) = 0;
      }
      else if (*(int *)(this + (local_20 - 0x4dd0) * 4 + 8) != 0) {
        dVar3 = _DAT_081bab58 * *(double *)(this + (local_20 - 0x4d58) * 8 + 0xc);
        uVar1 = *(undefined4 *)(this + (local_20 - 0x4dd0) * 4 + 8);
        CMyFileLog::CMyFileLog(local_30,"WriteDBLog",0x76);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_30,"./log/QueryCount","Count DB Insert Fail! id(%d), count(%d), time(%d)",
                   local_20,uVar1,(int)ROUND(dVar3));
      }
    }
    *(undefined4 *)(this + 0x1054) = 0x1e;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/QueryCounter.cpp](source/DNFServer/GameServer/DBMW/QueryCounter.cpp)（约第 46 行）：

```cpp
void CQueryCounter::WriteDBLog(CDBManager& db)
{
    m_interval--;
    bool b = m_interval > 0;
    if (b)
        return;
    for (int q = 0x4e21; q <= 0x4f60; q++)
    {
        if (!db.UpdateQueryCount(q, m_counts[q - 0x4e20],
                                 (int)(m_responseTimes[q - 0x4e20] * 1000.0)))
        {
            if (m_counts[q - 0x4e20] != 0)
            {
                register int t = (int)(m_responseTimes[q - 0x4e20] * 1000.0);
                register int c = m_counts[q - 0x4e20];
                CMyFileLog log(__FUNCTION__, 0x76);
                log("./log/QueryCount",
                    "Count DB Insert Fail! id(%d), count(%d), time(%d)", q,
                    c, t);
            }
        }
        else
        {
            if (m_counts[q - 0x4e20] != 0)
            {
                register int avg = (int)(m_responseTimes[q - 0x4e20] * 1000.0) /
                                   m_counts[q - 0x4e20];
                register int t = (int)(m_responseTimes[q - 0x4e20] * 1000.0);
                register int c = m_counts[q - 0x4e20];
                CMyFileLog log(__FUNCTION__, 0x7a);
                log("./log/QueryCount",
                    "Count DB Insert Success! id(%d), count(%d), time(%d), compute(%4.2f)",
                    q, c, t, avg);
                m_counts[q - 0x4e20] = 0;
                m_responseTimes[q - 0x4e20] = 0.0;
            }
        }
    }
    m_interval = 0x1e;
}
```
