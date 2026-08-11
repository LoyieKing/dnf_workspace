# _ZN11CCashObject11SetLifeTimeEj

`CCashObject::SetLifeTime(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a1b2e` | `0xd` | `0x804d464` | `0xd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
 mov    %edx,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCashObject::SetLifeTime(unsigned int) */

void __thiscall CCashObject::_ZN11CCashObject11SetLifeTimeEj(CCashObject *this,uint param_1)

{
  *(uint *)this = param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/CashObject.cpp](source/DNFServer/GameServer/Monitor/CashObject.cpp)（约第 92 行）：

```cpp
void CCashObject::SetLifeTime(unsigned int lifeTime) { m_lifeTime = lifeTime; }
```
