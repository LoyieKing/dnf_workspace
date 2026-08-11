# _ZN3App10readConfigEv

`App::readConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804a068` | `0x47` | `0x804dd84` | `0x40` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 movl   $"Called readConfig",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3App11load_scriptEv>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3App10readConfigEv+0x39>
+je     <T> <_ZN3App10readConfigEv+0x32>
 movl   $"ERROR readConfig()",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN3App10readConfigEv+0x45>
+jmp    <T> <_ZN3App10readConfigEv+0x3e>
 movl   $"OK readConfig()",(%esp)
 call   <T> <puts>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* App::readConfig() */

void __thiscall App::_ZN3App10readConfigEv(App *this)

{
  char cVar1;
  
  puts("Called readConfig");
  cVar1 = load_script(this);
  if (cVar1 == '\x01') {
    puts("OK readConfig()");
  }
  else {
    puts("ERROR readConfig()");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/DNFRelayServer.cpp](source/DNFServer/GameServer/Relay/DNFRelayServer.cpp)（约第 92 行）：

```cpp
void App::readConfig()
{
    puts("Called readConfig");
    if (!load_script())
    {
        puts("ERROR readConfig()");
    }
    else
    {
        puts("OK readConfig()");
    }
}
```
