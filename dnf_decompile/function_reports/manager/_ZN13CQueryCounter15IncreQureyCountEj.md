# _ZN13CQueryCounter15IncreQureyCountEj

`CQueryCounter::IncreQureyCount(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80623b0` | `0x9f` | `0x8065b2a` | `0x9a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
+sub    $0x38,%esp
 cmpl   $0x4f60,0xc(%ebp)
-ja     <T> <_ZN13CQueryCounter15IncreQureyCountEj+0x98>
+ja     <T> <_ZN13CQueryCounter15IncreQureyCountEj+0x97>
 mov    0xc(%ebp),%eax
 sub    $0x4e20,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 mov    (%edx,%eax,4),%edx
 lea    0x1(%edx),%ecx
 mov    0x8(%ebp),%edx
 mov    %ecx,(%edx,%eax,4)
 mov    0x8(%ebp),%eax
 mov    0xf10(%eax),%eax
 mov    (%eax),%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0xf10(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%ebx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0xf10(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 movl   $0x42,0x8(%esp)
 movl   $"IncreQureyCount",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
+mov    -0xc(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax,%edx,4),%eax
+mov    %eax,0x10(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"IncreQureyCount() type(%d) , Count(%d)!",0x8(%esp)
 movl   $"./log/QueryCount",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CQueryCounter15IncreQureyCountEj+0x99>
+jmp    <T> <_ZN13CQueryCounter15IncreQureyCountEj+0x98>
 nop
-add    $0x34,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CQueryCounter::IncreQureyCount(unsigned int) */

void __thiscall
CQueryCounter::_ZN13CQueryCounter15IncreQureyCountEj(CQueryCounter *this,uint param_1)

{
  undefined4 uVar1;
  CMyFileLog local_18 [8];
  int local_10;
  
  if (param_1 < 0x4f61) {
    local_10 = param_1 - 20000;
    *(int *)(this + local_10 * 4) = *(int *)(this + local_10 * 4) + 1;
    (**(code **)**(undefined4 **)(this + 0xf10))(*(undefined4 *)(this + 0xf10));
    uVar1 = *(undefined4 *)(this + local_10 * 4);
    CMyFileLog::CMyFileLog(local_18,"IncreQureyCount",0x42);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_18,"./log/QueryCount","IncreQureyCount() type(%d) , Count(%d)!",local_10,uVar1)
    ;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/QueryCounter.cpp](source/DNFServer/GameServer/Manager/QueryCounter.cpp)（约第 64 行）：

```cpp
void CQueryCounter::IncreQureyCount(unsigned int idx)
{
    if (idx > 0x4f60)
        return;
    int i = idx - 0x4e20;
    m_counts[i]++;
    m_timer->SetLastTime();
    CMyFileLog log("IncreQureyCount", 0x42);
    log("./log/QueryCount", "IncreQureyCount() type(%d) , Count(%d)!", i, m_counts[i]);
}
```
