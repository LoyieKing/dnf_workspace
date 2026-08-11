# _ZN13CQueryCounter10WriteDBLogER10CDBManager

`CQueryCounter::WriteDBLog(CDBManager&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8062572` | `0x21d` | `0x806599c` | `0x18d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,138 +1,102 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x50,%esp
+sub    $0x58,%esp
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
-lea    -0x4e20(%eax),%edx
+jg     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x18a>
+movl   $0x4e21,-0x14(%ebp)
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x169>
+mov    -0x14(%ebp),%eax
+sub    $0x4e20,%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0xa0,%edx
 fldl   0x4(%eax,%edx,8)
-fldl   &data#6912e166(.rodata)
+fldl   &data#7e500300(.rodata)
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
-lea    -0x4e20(%eax),%edx
+mov    -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%edx
-mov    -0xc(%ebp),%eax
+mov    (%eax,%edx,4),%eax
+mov    %eax,%edx
+mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager16UpdateQueryCountEjii>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x13a>
-mov    -0xc(%ebp),%eax
-lea    -0x4e20(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0xa0,%edx
-fldl   0x4(%eax,%edx,8)
-fldl   &data#6912e166(.rodata)
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
-lea    -0x4e20(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%ebx
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0xf5>
 movl   $0x63,0x8(%esp)
 movl   $"WriteDBLog",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax,%edx,4),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Count DB Insert Fail! id(%d), count(%d), time(%d)",0x8(%esp)
 movl   $"./log/QueryCount",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x1f0>
-mov    -0xc(%ebp),%eax
-lea    -0x4e20(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0xa0,%edx
-fldl   0x4(%eax,%edx,8)
-fldl   &data#6912e166(.rodata)
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
-lea    -0x4e20(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%ebx
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x165>
 movl   $0x66,0x8(%esp)
 movl   $"WriteDBLog",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax,%edx,4),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Count DB Insert Success! id(%d), count(%d), time(%d)",0x8(%esp)
 movl   $"./log/QueryCount",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0xc(%ebp),%eax
-lea    -0x4e20(%eax),%edx
+mov    -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax,%edx,4)
-mov    -0xc(%ebp),%eax
-lea    -0x4e20(%eax),%edx
+mov    -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0xa0,%edx
 fldz
 fstpl  0x4(%eax,%edx,8)
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x4f60,-0xc(%ebp)
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x4f60,-0x14(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x3f>
+jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x38>
 mov    0x8(%ebp),%eax
 movl   $0x1e,0xf0c(%eax)
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x216>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x18b>
 nop
-add    $0x50,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
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

定义于 [source/DNFServer/GameServer/DBMW/QueryCounter.cpp](source/DNFServer/GameServer/DBMW/QueryCounter.cpp)（约第 55 行）：

```cpp
void CQueryCounter::WriteDBLog(CDBManager& db)
{
    m_interval--;
    if (m_interval > 0)
        return;
    for (int q = 0x4e21; q <= 0x4f60; q++)
    {
        int idx = q - 0x4e20;
        int time = (int)(m_responseTimes[idx] * 1000.0);
        if (!db.UpdateQueryCount(q, m_counts[idx], time))
        {
            if (m_counts[idx] != 0)
            {
                CMyFileLog log("WriteDBLog", 0x76);
                log("./log/QueryCount",
                    "Count DB Insert Fail! id(%d), count(%d), time(%d)", q,
                    m_counts[idx], time);
            }
        }
        else
        {
            if (m_counts[idx] != 0)
            {
                int avg = time / m_counts[idx];
                CMyFileLog log("WriteDBLog", 0x7a);
                log("./log/QueryCount",
                    "Count DB Insert Success! id(%d), count(%d), time(%d), compute(%4.2f)",
                    q, m_counts[idx], time, avg);
                m_counts[idx] = 0;
                m_responseTimes[idx] = 0.0;
            }
        }
    }
    m_interval = 0x1e;
}
```
