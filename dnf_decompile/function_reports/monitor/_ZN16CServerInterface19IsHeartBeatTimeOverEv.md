# _ZN16CServerInterface19IsHeartBeatTimeOverEv

`CServerInterface::IsHeartBeatTimeOver()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807c2a8` | `0x58` | `0x808298c` | `0x67` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
+sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x9(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x9(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x9(%eax),%eax
 test   %al,%al
 sete   %al
-test   %al,%al
-je     <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x51>
+mov    %al,-0x2(%ebp)
+cmpb   $0x0,-0x2(%ebp)
+je     <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x60>
 mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
-lea    0x1(%eax),%edx
+add    $0x1,%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0xa(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    $0x14,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x4a>
+setg   %al
+mov    %al,-0x1(%ebp)
+cmpb   $0x0,-0x1(%ebp)
+je     <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x59>
 mov    $0x1,%eax
-jmp    <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x56>
+jmp    <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x65>
 mov    0x8(%ebp),%eax
 movb   $0x14,0x9(%eax)
 mov    $0x0,%eax
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerInterface::IsHeartBeatTimeOver() */

undefined4 __thiscall
CServerInterface::_ZN16CServerInterface19IsHeartBeatTimeOverEv(CServerInterface *this)

{
  this[9] = (CServerInterface)((char)this[9] + -1);
  if (this[9] == (CServerInterface)0x0) {
    this[10] = (CServerInterface)((char)this[10] + '\x01');
    if (0x14 < (byte)this[10]) {
      return 1;
    }
    this[9] = (CServerInterface)0x14;
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerInterface.cpp](source/DNFServer/GameServer/Monitor/DNFServerInterface.cpp)（约第 91 行）：

```cpp
char CServerInterface::IsHeartBeatTimeOver()
{
    m_heart = m_heart - 1;
    bool zero = (m_heart == 0);
    if (zero)
    {
        m_padA[0] = m_padA[0] + 1;
        bool over = (m_padA[0] > 0x14);
        if (over)
        {
            return 1;
        }
        m_heart = 0x14;
    }
    return 0;
}
```
