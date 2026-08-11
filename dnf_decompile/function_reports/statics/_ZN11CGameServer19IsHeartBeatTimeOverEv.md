# _ZN11CGameServer19IsHeartBeatTimeOverEv

`CGameServer::IsHeartBeatTimeOver()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80652ac` | `0x58` | `0x8051dca` | `0x4e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movzbl 0xb(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0xb(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0xb(%eax),%eax
 test   %al,%al
-sete   %al
-test   %al,%al
-je     <T> <_ZN11CGameServer19IsHeartBeatTimeOverEv+0x51>
+jne    <T> <_ZN11CGameServer19IsHeartBeatTimeOverEv+0x47>
 mov    0x8(%ebp),%eax
 movzbl 0xc(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0xc(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0xc(%eax),%eax
 cmp    $0x14,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN11CGameServer19IsHeartBeatTimeOverEv+0x4a>
+jbe    <T> <_ZN11CGameServer19IsHeartBeatTimeOverEv+0x40>
 mov    $0x1,%eax
-jmp    <T> <_ZN11CGameServer19IsHeartBeatTimeOverEv+0x56>
+jmp    <T> <_ZN11CGameServer19IsHeartBeatTimeOverEv+0x4c>
 mov    0x8(%ebp),%eax
 movb   $0x14,0xb(%eax)
 mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGameServer::IsHeartBeatTimeOver() */

undefined4 __thiscall CGameServer::_ZN11CGameServer19IsHeartBeatTimeOverEv(CGameServer *this)

{
  this[0xb] = (CGameServer)((char)this[0xb] + -1);
  if (this[0xb] == (CGameServer)0x0) {
    this[0xc] = (CGameServer)((char)this[0xc] + '\x01');
    if (0x14 < (byte)this[0xc]) {
      return 1;
    }
    this[0xb] = (CGameServer)0x14;
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFGameServer.cpp](source/DNFServer/GameServer/COServer/DNFGameServer.cpp)（约第 37 行）：

```cpp
int CGameServer::IsHeartBeatTimeOver()
{
    m_heartBeatCount = (char)(m_heartBeatCount - 1);
    if (m_heartBeatCount == 0)
    {
        m_heartBeatOver = (char)(m_heartBeatOver + 1);
        if (0x14 < m_heartBeatOver)
        {
            return 1;
        }
        m_heartBeatCount = 0x1e;
    }
    return 0;
}
```
