# CDataManager / SlangFilter 生命周期分析与 ABI 安全切片

## 结论

本切片只修复 `CDataManager::destroy()` 对 `m_invalidChar.m_slangFilter` 的释放入口，不改类成员布局、虚表顺序或公开函数签名。该对象在原始二进制中通过 vtable `+4` 调用 deleting destructor；重建代码此前调用空的非虚 `SlangFilter::Destroy()`，会导致堆对象及其 FlexLexer 状态泄漏。

## 证据

- `CDataManager::~CDataManager()` 先调用 `destroy()`，随后才逆序析构从 `+0x2c` 到 `+0xb658` 的内嵌对象：`class_func_reports/CDataManager/~CDataManager.md`。
- `destroy()` 对堆指针采用“判空、析构、operator delete、置零”，覆盖 `+0x00/+0x04/+0x08/+0x0c/+0x10/+0x14/+0x18`、`+0x20/+0x24/+0x28`、`+0x8cc0`、`+0x86f4` 等字段：`class_func_reports/CDataManager/destroy.md`。
- `+0x86f4` 的原始指令读取对象 vptr，再取 vtable `+4` 并间接调用；随后将成员写零。这是 deleting destructor 语义，不是名为 `Destroy()` 的普通成员函数。
- `SlangFilter` 构造先构造 `FlexLexer`，再写入派生类 vptr；析构恢复派生 vptr 后调用 `FlexLexer` 析构。D0 deleting destructor 还会调用 `operator delete`：`class_func_reports/SlangFilter/SlangFilter.md`、`class_func_reports/SlangFilter/~SlangFilter.md`。
- `is_clean()` 内部另行 `new 0xbc` 创建 `istrstream`，完成扫描后经其虚表销毁；该临时对象不属于 `SlangFilter` 长期成员：`class_func_reports/SlangFilter/is_clean.md`。
- 当前重建 TU 的 `SlangFilter::f0()` 与 `Destroy()` 是后续批次空桩；没有独立 report 证明它们是原始释放路径，不能据此实现 `delete this`。

## 核心指针生命周期

| 成员区域 | 所有权 | 释放方式 | 释放后 |
|---|---|---|---|
| `+0x00..+0x18` | CDataManager 拥有的管理器堆对象 | 各自析构后 `operator delete` | 写 `0` | 
| `+0x20/+0x24/+0x28` | CDataManager 拥有 | 具体析构后 delete | 写 `0` |
| `+0x86f4` | CDataManager 拥有的多态堆对象 | vtable `+4` deleting destructor | 写 `0` |
| `+0x8cc0` | CDataManager 拥有的堆对象 | 多态析构后 delete | 写 `0` |
| `+0xbxxx` 内嵌脚本对象 | CDataManager 内嵌存储 | 仅由析构函数逆序析构 | 不 delete、不清零 |
| `SlangFilter::is_clean()` 的 `istrstream` | 临时局部堆对象 | 扫描结束经虚析构释放 | 不写回成员 |

`destroy()` 当前释放顺序应保持原始顺序，不能把内嵌对象加入其中。所有权状态应满足：构造初始化为空；成功创建后立即写入；释放后立即置零；重复调用只命中空指针分支。

## 已实施切片

`CDataManager.cpp` 已将：

```cpp
((SlangFilter*)m_invalidChar.m_slangFilter)->Destroy();
```

改为：

```cpp
delete (SlangFilter*)m_invalidChar.m_slangFilter;
m_invalidChar.m_slangFilter = 0;
```

这与原始 vtable `+4` 行为一致，避免把堆对象交给空的兼容桩，也不引入 ABI 变化。

## f0 / Destroy 处理边界

- `f0()`：目前没有新版独立 report，不实现推测性的状态清理。
- `Destroy()`：保留已有符号以兼容当前源码调用面，但不实现 `delete this`，也不显式调用析构函数；对象分配来源未知时这样做会产生栈对象误删或重复析构风险。
- 真实释放入口统一由拥有者 `CDataManager::destroy()` 使用 `delete` 负责。

## 验收

1. 连续调用 `CDataManager::destroy()` 两次不得 double-free。
2. `m_invalidChar.m_slangFilter` 首次释放后为 `0`，第二次不再调用析构。
3. `CDataManager` 的 `sizeof`、关键 `offsetof`、虚表布局不变。
4. 栈上构造 `SlangFilter` 后正常离开作用域；堆上构造则由 `delete` 释放。
5. 后续只有取得 `f0/Destroy` 的独立汇编 report 后，才补充其真实语义。
