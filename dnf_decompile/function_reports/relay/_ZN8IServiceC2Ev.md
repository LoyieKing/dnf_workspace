# _ZN8IServiceC2Ev

`IService::IService()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804d4a4` | `0xe` | `0x8057916` | `0xf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
+mov    $&_ZTV8IService+0x8,%edx
 mov    0x8(%ebp),%eax
-movl   $&_ZTV8IService+0x8,(%eax)
+mov    %edx,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* IService::IService() */

void __thiscall IService::_ZN8IServiceC2Ev(IService *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_08070e08;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Service.cpp](source/ChannelOld/DNFChannelBridge/Service.cpp)（约第 89 行）：

```cpp
inline IService::IService()
{
}
```
