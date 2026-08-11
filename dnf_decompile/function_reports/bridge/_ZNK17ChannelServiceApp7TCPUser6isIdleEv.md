# _ZNK17ChannelServiceApp7TCPUser6isIdleEv

`ChannelServiceApp::TCPUser::isIdle() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x805ee2c` | `0x7b` | `0x8054794` | `0x7b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8TManagerIN17ChannelServiceApp14ChannelServiceEE10getManagerEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp14ChannelService7getTickEv>
 mov    %eax,-0x18(%ebp)
 mov    %edx,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x140058(%eax),%ecx
 mov    0x14005c(%eax),%ebx
 mov    -0x18(%ebp),%eax
 mov    -0x14(%ebp),%edx
 sub    %ecx,%eax
 sbb    %ebx,%edx
 mov    %eax,-0x10(%ebp)
 mov    %edx,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x14005c(%eax),%edx
 mov    0x140058(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x70>
+je     <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x69>
 cmpl   $0x0,-0xc(%ebp)
-js     <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x70>
+jg     <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x70>
 cmpl   $0x0,-0xc(%ebp)
-jg     <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x69>
+js     <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x69>
 cmpl   $0x124f80,-0x10(%ebp)
-jbe    <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x70>
+ja     <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x70>
+mov    $0x0,%eax
+jmp    <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x75>
 mov    $0x1,%eax
-jmp    <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv+0x75>
-mov    $0x0,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool isIdle(TCPUser * this) */

bool __thiscall ChannelServiceApp::TCPUser::_ZNK17ChannelServiceApp7TCPUser6isIdleEv(TCPUser *this)

{
  uint uVar1;
  bool bVar2;
  ChannelService *this_00;
  int iVar3;
  __int64 _Var4;
  uint local_1c;
  int local_18;
  
                    /* Unresolved local var: __int64 now@[???]
                       Unresolved local var: __int64 gap@[???] */
  this_00 = TManager<ChannelServiceApp::ChannelService>::getManager
                      (&this->super_TManager<ChannelServiceApp::ChannelService>);
  _Var4 = ChannelService::getTick(this_00);
  uVar1 = (uint)this->tickLast_;
  local_1c = (uint)_Var4;
  local_18 = (int)((ulonglong)_Var4 >> 0x20);
  iVar3 = (local_18 - *(int *)((int)&this->tickLast_ + 4)) - (uint)(local_1c < uVar1);
  if ((((int)this->tickLast_ == 0 && *(int *)((int)&this->tickLast_ + 4) == 0) || (iVar3 < 0)) ||
     ((iVar3 < 1 && (local_1c - uVar1 < 0x124f81)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 69 行）：

```cpp
bool ChannelServiceApp::TCPUser::isIdle() const
{
    __int64 now = TManager<ChannelService>::getManager()->getTick();
    __int64 gap = now - tickLast_;
    if (tickLast_ == 0 || gap <= 0x124f80)
    {
        return false;
    }
    return true;
}
```
