# _ZN7CSignalC1Ev

`CSignal::CSignal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804c808` | `0x18` | `0x807f4f2` | `0xe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV7CSignal+0x8,(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSignal::CSignal() */

void __thiscall CSignal::_ZN7CSignalC1Ev(CSignal *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_08111300;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/COServer/DNFUser1Sig.cpp, source/DNFServer/GameServer/DBMW/DNFSegmentationFaultSig.cpp, source/DNFServer/GameServer/DBMW/DNFSystemFailSig.cpp, source/DNFServer/GameServer/DBMW/DNFTerminateSig.cpp, source/DNFServer/GameServer/DBMW/DNFUser1Sig.cpp, source/DNFServer/GameServer/Guild/DNFSegmentationFaultSig.cpp, source/DNFServer/GameServer/Guild/DNFSystemFailSig.cpp, source/DNFServer/GameServer/Guild/DNFTerminateSig.cpp 等 658 个文件*
