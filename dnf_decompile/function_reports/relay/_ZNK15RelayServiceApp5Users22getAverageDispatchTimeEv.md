# _ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv

`RelayServiceApp::Users::getAverageDispatchTime() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x8052362` | `0x3f` | `0x8052798` | `0x45` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0xc,%esp
+sub    $0x1c,%esp
 mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv+0x2f>
+je     <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv+0x32>
 mov    0x8(%ebp),%eax
 mov    0x28(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    0x2c(%edx),%edx
-mov    %edx,-0xc(%ebp)
+mov    %edx,-0x1c(%ebp)
 mov    %eax,%edx
 sar    $0x1f,%edx
-idivl  -0xc(%ebp)
+idivl  -0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
+fildl  -0x14(%ebp)
+fstps  -0x4(%ebp)
+jmp    <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv+0x3a>
+mov    $0x0,%eax
 mov    %eax,-0x4(%ebp)
-fildl  -0x4(%ebp)
-jmp    <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv+0x31>
-fldz
-fstps  -0x8(%ebp)
-mov    -0x8(%ebp),%eax
-mov    %eax,-0x8(%ebp)
-flds   -0x8(%ebp)
+mov    -0x4(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+flds   -0x18(%ebp)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::Users::getAverageDispatchTime() const */

longdouble __thiscall
RelayServiceApp::Users::_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv(Users *this)

{
  float fVar1;
  
  if (*(int *)(this + 0x2c) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)(*(int *)(this + 0x28) / *(int *)(this + 0x2c));
  }
  return (longdouble)fVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/RelayService.h](source/DNFServer/GameServer/Relay/RelayService.h)（约第 149 行）：

```cpp
    float getAverageDispatchTime() const
    {
        volatile float f;
        if (m_dispatchCount != 0)
        {
            f = (float)(m_totalDispatchTime / m_dispatchCount);
        }
        else
        {
            f = 0.0f;
        }
        return f;
    }
```
