# _ZN12CApplication19UpdateMiniCraneSeedEv

`CApplication::UpdateMiniCraneSeed()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8065eec` | `0x81` | `0x8053a46` | `0x46` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
+sub    $0x28,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
-lea    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0x38(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x34(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x30(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0x2c(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0x28(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0x24(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0x20(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0x1c(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x18(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x14(%ebp)
-mov    0x28(%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
 cmp    $0x6,%eax
-jne    <T> <_ZN12CApplication19UpdateMiniCraneSeedEv+0x7f>
+jne    <T> <_ZN12CApplication19UpdateMiniCraneSeedEv+0x44>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22SetMiniCraneRandomSeedEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication23SendMiniCraneRandomSeedEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::UpdateMiniCraneSeed() */

void __thiscall CApplication::_ZN12CApplication19UpdateMiniCraneSeedEv(CApplication *this)

{
  tm *ptVar1;
  time_t local_10 [3];
  
  local_10[0] = time((time_t *)0x0);
  ptVar1 = localtime(local_10);
  if (ptVar1->tm_hour == 6) {
    SetMiniCraneRandomSeed(this);
    SendMiniCraneRandomSeed(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 1115 行）：

```cpp
void CApplication::UpdateMiniCraneSeed()
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    if (pt->tm_hour == 6)
    {
        SetMiniCraneRandomSeed();
        SendMiniCraneRandomSeed();
    }
}
```
