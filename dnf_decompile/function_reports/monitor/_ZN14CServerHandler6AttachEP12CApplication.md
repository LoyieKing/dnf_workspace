# _ZN14CServerHandler6AttachEP12CApplication

`CServerHandler::Attach(CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8079e40` | `0x14` | `0x807fafe` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,9 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN14CServerHandler6AttachEP12CApplication+0x12>
-mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x20(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::Attach(CApplication*) */

void __thiscall
CServerHandler::_ZN14CServerHandler6AttachEP12CApplication
          (CServerHandler *this,CApplication *param_1)

{
  if (param_1 != (CApplication *)0x0) {
    *(CApplication **)(this + 0x20) = param_1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFServerHandler.cpp](source/DNFServer/GameServer/COServer/DNFServerHandler.cpp)（约第 20 行）：

```cpp
void CServerHandler::Attach(CApplication* app)
{
    if (app != 0)
    {
        m_app = app;
    }
}
```
