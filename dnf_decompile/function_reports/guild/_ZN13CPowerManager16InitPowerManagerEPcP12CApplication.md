# _ZN13CPowerManager16InitPowerManagerEPcP12CApplication

`CPowerManager::InitPowerManager(char*, CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a387e` | `0x23` | `0x8099ade` | `0x25` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x4(%eax)
+lea    0x4(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,(%edx)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager15LoadPowerWarCfgEPc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::InitPowerManager(char*, CApplication*) */

void __thiscall
CPowerManager::_ZN13CPowerManager16InitPowerManagerEPcP12CApplication
          (CPowerManager *this,char *param_1,CApplication *param_2)

{
  *(CApplication **)(this + 4) = param_2;
  LoadPowerWarCfg(this,param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 117 行）：

```cpp
void CPowerManager::InitPowerManager(char* path, CApplication* app)
{
    *(CApplication**)((char*)this + 4) = app;
    LoadPowerWarCfg(path);
}
```
