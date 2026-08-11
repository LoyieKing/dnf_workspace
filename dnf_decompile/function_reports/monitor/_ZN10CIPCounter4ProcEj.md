# _ZN10CIPCounter4ProcEj

`CIPCounter::Proc(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805e77c` | `0xb4` | `0x809376c` | `0xb7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 cmp    0xc(%ebp),%eax
 jae    <T> <_ZN10CIPCounter4ProcEj+0xae>
 mov    0x8(%ebp),%eax
 movzbl 0x10(%eax),%eax
 test   %al,%al
 je     <T> <_ZN10CIPCounter4ProcEj+0xb1>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 lea    (%edx,%eax,1),%eax
 cmp    0xc(%ebp),%eax
-jae    <T> <_ZN10CIPCounter4ProcEj+0xa0>
+jae    <T> <_ZN10CIPCounter4ProcEj+0xb4>
+mov    0x8(%ebp),%eax
+movzbl (%eax),%eax
+movzbl %al,%ecx
 mov    0x8(%ebp),%eax
 movzbl 0x11(%eax),%eax
-movzbl %al,%ecx
-mov    0x8(%ebp),%eax
-movzbl (%eax),%eax
 movzbl %al,%edx
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler24SendDBMWRequestIPCounterEhh>
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%eax)
 movl   $0x3c,0x8(%esp)
 movl   $"Proc",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"[IP Counter] LoadStart",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0xc(%ebp),%eax
 lea    0x3c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x8(%eax)
-jmp    <T> <_ZN10CIPCounter4ProcEj+0xb2>
+jmp    <T> <_ZN10CIPCounter4ProcEj+0xb5>
 nop
-jmp    <T> <_ZN10CIPCounter4ProcEj+0xb2>
+jmp    <T> <_ZN10CIPCounter4ProcEj+0xb5>
+nop
+jmp    <T> <_ZN10CIPCounter4ProcEj+0xb5>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CIPCounter::Proc(unsigned int) */

void __thiscall CIPCounter::_ZN10CIPCounter4ProcEj(CIPCounter *this,uint param_1)

{
  CMyFileLog local_14 [16];
  
  if ((*(uint *)(this + 8) < param_1) && (this[0x10] != (CIPCounter)0x0)) {
    if ((uint)(*(int *)(this + 4) + *(int *)(this + 0xc)) < param_1) {
      CServerHandler::SendDBMWRequestIPCounter
                (*(CServerHandler **)(this + 0x14),(uchar)*this,(uchar)this[0x11]);
      *(uint *)(this + 4) = param_1;
      CMyFileLog::CMyFileLog(local_14,"Proc",0x3c);
      CMyFileLog::operator()(local_14,"./log/Secu","[IP Counter] LoadStart");
    }
    *(uint *)(this + 8) = param_1 + 0x3c;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/IPCounter.cpp](source/DNFServer/GameServer/Monitor/IPCounter.cpp)（约第 45 行）：

```cpp
void CIPCounter::Proc(unsigned int tick)
{
    if (m_min >= tick)
    {
        return;
    }
    if (m_field10 == 0)
    {
        return;
    }
    if (m_count + m_term >= tick)
    {
        return;
    }
    m_handler->SendDBMWRequestIPCounter(m_field11, m_option);
    m_count = tick;
    CMyFileLog log("Proc", 0x3c);
    log("./log/Secu", "[IP Counter] LoadStart");
    m_min = tick + 0x3c;
}
```
