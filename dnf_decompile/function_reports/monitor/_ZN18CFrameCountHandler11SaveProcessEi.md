# _ZN18CFrameCountHandler11SaveProcessEi

`CFrameCountHandler::SaveProcess(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804d04e` | `0x87` | `0x808688e` | `0x7b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,41 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x30,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x28(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x28(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x28(%eax),%eax
 test   %al,%al
-setne  %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler11SaveProcessEi+0x80>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
+je     <T> <_ZN18CFrameCountHandler11SaveProcessEi+0x79>
 movl   $0xb8,0x8(%esp)
 movl   $"SaveProcess",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Thread(%2d) / FPS(%02d) / DFC(%02d)",0x8(%esp)
 movl   $"./log/frame",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x28(%eax)
-add    $0x30,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CFrameCountHandler::SaveProcess(int) */

void __thiscall
CFrameCountHandler::_ZN18CFrameCountHandler11SaveProcessEi(CFrameCountHandler *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_14 [8];
  
  this[0x28] = (CFrameCountHandler)((char)this[0x28] + '\x01');
  if (this[0x28] != (CFrameCountHandler)0x0) {
    uVar1 = *(undefined4 *)(this + 4);
    uVar2 = *(undefined4 *)(this + 0x18);
    CMyFileLog::CMyFileLog(local_14,"SaveProcess",0xb8);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/frame","Thread(%2d) / FPS(%02d) / DFC(%02d)",param_1,uVar2,uVar1);
    this[0x28] = (CFrameCountHandler)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFTickHandler.cpp](source/DNFServer/GameServer/COServer/DNFTickHandler.cpp)（约第 106 行）：

```cpp
void CFrameCountHandler::SaveProcess(int interval)
{
    m_writeTick = (char)(m_writeTick + 1);
    if (m_writeTick != 0)
    {
        DNF_LOG_SCOPE_LINE(0xb8, "./log/frame", "Thread(%2d) / FPS(%02d) / DFC(%02d)", interval, m_fps, m_tick);
        m_writeTick = 0;
    }
}
```
