# _ZN20CDNFUserInOutCounter12ProcessWriteEv

`CDNFUserInOutCounter::ProcessWrite()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x804ddc0` | `0x4e` | `0x8058a52` | `0x4d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x324d8(%eax),%eax
-lea    0x1(%eax),%edx
+add    $0x1,%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x324d8(%eax)
 mov    0x8(%ebp),%eax
-movzbl 0x324d8(%eax),%edx
-movzbl &_ZL26USER_IN_OUT_WRITE_LOG_TIME,%eax
+movzbl 0x324d8(%eax),%eax
+mov    %eax,%edx
+movzbl &USER_IN_OUT_WRITE_LOG_TIME,%eax
 cmp    %al,%dl
-seta   %al
-test   %al,%al
-je     <T> <_ZN20CDNFUserInOutCounter12ProcessWriteEv+0x4c>
+jbe    <T> <_ZN20CDNFUserInOutCounter12ProcessWriteEv+0x4b>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20CDNFUserInOutCounter8WriteLogEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20CDNFUserInOutCounter5ResetEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDNFUserInOutCounter::ProcessWrite() */

void __thiscall
CDNFUserInOutCounter::_ZN20CDNFUserInOutCounter12ProcessWriteEv(CDNFUserInOutCounter *this)

{
  this[0x324d8] = (CDNFUserInOutCounter)((char)this[0x324d8] + '\x01');
  if ((byte)USER_IN_OUT_WRITE_LOG_TIME < (byte)this[0x324d8]) {
    WriteLog(this);
    Reset(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUserInOutCounter.cpp](source/DNFServer/GameServer/COServer/DNFUserInOutCounter.cpp)（约第 47 行）：

```cpp
void CDNFUserInOutCounter::ProcessWrite()
{
    m_tick = (char)(m_tick + 1);
    if ((unsigned char)m_tick > (unsigned char)USER_IN_OUT_WRITE_LOG_TIME)
    {
        WriteLog();
        Reset();
    }
}
```
