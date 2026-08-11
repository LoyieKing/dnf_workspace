# _ZN17ChannelServiceApp7TCPUser8setACCIDEj

`ChannelServiceApp::TCPUser::setACCID(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | NEAR | `0x805a88c` | `0xe` | `0x805907e` | `0xe` |

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
 mov    %edx,0x38(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void setACCID(TCPUser * this, uint n) */

void __thiscall
ChannelServiceApp::TCPUser::_ZN17ChannelServiceApp7TCPUser8setACCIDEj(TCPUser *this,uint n)

{
  this->nAccID_ = n;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h](source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h)（约第 550 行）：

```cpp
        void setACCID(unsigned int nAccID)
        {
            nAccID_ = nAccID;
        }
```
