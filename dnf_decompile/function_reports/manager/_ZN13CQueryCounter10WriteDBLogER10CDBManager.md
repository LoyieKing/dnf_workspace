# _ZN13CQueryCounter10WriteDBLogER10CDBManager

`CQueryCounter::WriteDBLog(CDBManager&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8062572` | `0x21d` | `0x8065876` | `0x1ac` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,138 +1,107 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x54,%esp
 mov    0x8(%ebp),%eax
 mov    0xf0c(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xf0c(%eax)
 mov    0x8(%ebp),%eax
 mov    0xf0c(%eax),%eax
 test   %eax,%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x215>
-movl   $0x4e21,-0xc(%ebp)
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x1f4>
-mov    -0xc(%ebp),%eax
+jg     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x1a5>
+movl   $0x4e21,-0x10(%ebp)
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x184>
+mov    -0x10(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0xa0,%edx
 fldl   0x4(%eax,%edx,8)
 fldl   &data#a2821b98(.rodata)
 fmulp  %st,%st(1)
 fnstcw -0x2a(%ebp)
 movzwl -0x2a(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0x2c(%ebp)
 fldcw  -0x2c(%ebp)
-fistpl -0x30(%ebp)
+fistpl -0xc(%ebp)
 fldcw  -0x2a(%ebp)
-mov    -0x30(%ebp),%ecx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%edx
-mov    -0xc(%ebp),%eax
+mov    (%eax,%edx,4),%eax
+mov    %eax,%edx
+mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager16UpdateQueryCountEjii>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x13a>
-mov    -0xc(%ebp),%eax
-lea    -0x4e20(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0xa0,%edx
-fldl   0x4(%eax,%edx,8)
-fldl   &data#a2821b98(.rodata)
-fmulp  %st,%st(1)
-fnstcw -0x2a(%ebp)
-movzwl -0x2a(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0x2c(%ebp)
-fldcw  -0x2c(%ebp)
-fistpl -0x30(%ebp)
-fldcw  -0x2a(%ebp)
-mov    -0x30(%ebp),%esi
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0xfe>
+mov    -0x10(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%ebx
 movl   $0x63,0x8(%esp)
 movl   $&_ZZN13CQueryCounter10WriteDBLogER10CDBManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Count DB Insert Fail! id(%d), count(%d), time(%d)",0x8(%esp)
 movl   $"./log/QueryCount",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x1f0>
-mov    -0xc(%ebp),%eax
-lea    -0x4e20(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0xa0,%edx
-fldl   0x4(%eax,%edx,8)
-fldl   &data#a2821b98(.rodata)
-fmulp  %st,%st(1)
-fnstcw -0x2a(%ebp)
-movzwl -0x2a(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0x2c(%ebp)
-fldcw  -0x2c(%ebp)
-fistpl -0x30(%ebp)
-fldcw  -0x2a(%ebp)
-mov    -0x30(%ebp),%esi
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x180>
+mov    -0x10(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%ebx
 movl   $0x66,0x8(%esp)
 movl   $&_ZZN13CQueryCounter10WriteDBLogER10CDBManagerE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Count DB Insert Success! id(%d), count(%d), time(%d)",0x8(%esp)
 movl   $"./log/QueryCount",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax,%edx,4)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 lea    -0x4e20(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0xa0,%edx
 fldz
 fstpl  0x4(%eax,%edx,8)
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x4f60,-0xc(%ebp)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x4f60,-0x10(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x3f>
+jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x39>
 mov    0x8(%ebp),%eax
 movl   $0x1e,0xf0c(%eax)
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x216>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x1a6>
 nop
-add    $0x50,%esp
+add    $0x54,%esp
 pop    %ebx
-pop    %esi
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
  double dVar2;
  char cVar3;
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  uint local_10;
  
  *(int *)(this + 0xf0c) = *(int *)(this + 0xf0c) + -1;
  if (*(int *)(this + 0xf0c) < 1) {
    for (local_10 = 0x4e21; (int)local_10 < 0x4f61; local_10 = local_10 + 1) {
      cVar3 = CDBManager::_ZN10CDBManager16UpdateQueryCountEjii
                        (param_1,local_10,*(int *)(this + (local_10 - 20000) * 4),
                         (int)ROUND(_DAT_08159b10 * *(double *)(this + (local_10 - 0x4d80) * 8 + 4))
                        );
      if (cVar3 == '\x01') {
        dVar2 = _DAT_08159b10 * *(double *)(this + (local_10 - 0x4d80) * 8 + 4);
        uVar1 = *(undefined4 *)(this + (local_10 - 20000) * 4);
        CMyFileLog::CMyFileLog(local_18,"WriteDBLog",0x66);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_18,"./log/QueryCount",
                   "Count DB Insert Success! id(%d), count(%d), time(%d)",local_10,uVar1,
                   (int)ROUND(dVar2));
        *(undefined4 *)(this + (local_10 - 20000) * 4) = 0;
        *(undefined8 *)(this + (local_10 - 0x4d80) * 8 + 4) = 0;
      }
      else {
        dVar2 = _DAT_08159b10 * *(double *)(this + (local_10 - 0x4d80) * 8 + 4);
        uVar1 = *(undefined4 *)(this + (local_10 - 20000) * 4);
        CMyFileLog::CMyFileLog(local_20,"WriteDBLog",99);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_20,"./log/QueryCount","Count DB Insert Fail! id(%d), count(%d), time(%d)",
                   local_10,uVar1,(int)ROUND(dVar2));
      }
    }
    *(undefined4 *)(this + 0xf0c) = 0x1e;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/QueryCounter.cpp](source/DNFServer/GameServer/Manager/QueryCounter.cpp)（约第 39 行）：

```cpp
void CQueryCounter::WriteDBLog(CDBManager& db)
{
    m_interval--;
    if (m_interval > 0)
        return;
    for (int q = 0x4e21; q <= 0x4f60; q++)
    {
        int time = (int)(m_responseTimes[q - 0x4e20] * 1000.0);
        if (!db.UpdateQueryCount(q, m_counts[q - 0x4e20], time))
        {
            DNF_LOG_SCOPE_LINE(0x63, "./log/QueryCount", "Count DB Insert Fail! id(%d), count(%d), time(%d)", q, m_counts[q - 0x4e20], time);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x66, "./log/QueryCount", "Count DB Insert Success! id(%d), count(%d), time(%d)", q, m_counts[q - 0x4e20], time);
            m_counts[q - 0x4e20] = 0;
            m_responseTimes[q - 0x4e20] = 0.0;
        }
    }
    m_interval = 0x1e;
}
```
