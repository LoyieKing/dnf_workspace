# _ZN13CQueryCounter15SetResponseTimeEj

`CQueryCounter::SetResponseTime(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8062450` | `0x68` | `0x8065bc4` | `0x68` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x34,%esp
+sub    $0x24,%esp
 cmpl   $0x4f60,0xc(%ebp)
 ja     <T> <_ZN13CQueryCounter15SetResponseTimeEj+0x61>
 mov    0xc(%ebp),%eax
 sub    $0x4e20,%eax
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%ebx
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0xa0,%edx
 fldl   0x4(%eax,%edx,8)
-fstpl  -0x20(%ebp)
+fstpl  -0x18(%ebp)
+mov    -0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    0xf10(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0xf10(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
-faddl  -0x20(%ebp)
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0xf10(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
+faddl  -0x18(%ebp)
 mov    0x8(%ebp),%eax
 lea    0xa0(%ebx),%edx
 fstpl  0x4(%eax,%edx,8)
 jmp    <T> <_ZN13CQueryCounter15SetResponseTimeEj+0x62>
 nop
-add    $0x34,%esp
+add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CQueryCounter::SetResponseTime(unsigned int) */

void __thiscall
CQueryCounter::_ZN13CQueryCounter15SetResponseTimeEj(CQueryCounter *this,uint param_1)

{
  double dVar1;
  longdouble lVar2;
  
  if (param_1 < 0x4f61) {
    dVar1 = *(double *)(this + (param_1 - 0x4d80) * 8 + 4);
    lVar2 = (longdouble)(**(code **)(**(int **)(this + 0xf10) + 4))(*(undefined4 *)(this + 0xf10));
    *(double *)(this + (param_1 - 0x4d80) * 8 + 4) = (double)(lVar2 + (longdouble)dVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/QueryCounter.cpp](source/DNFServer/GameServer/DBMW/QueryCounter.cpp)（约第 101 行）：

```cpp
void CQueryCounter::SetResponseTime(unsigned int ms)
{
    if (ms > 0x4f60)
        return;
    int i = ms - 0x4e20;
    double interval = m_timer->GetTimeInterval();
    m_responseTimes[i] = interval + m_responseTimes[i];
    if (interval > 500.0)
    {
        CMyFileLog log("SetResponseTime", 0x5d);
        log("./log/SlowQuery", "type(%d)interval(%d)", ms, interval);
    }
}
```
