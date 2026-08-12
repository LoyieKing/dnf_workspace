# _ZN18CFrameCountHandler11SaveProcessEi

`CFrameCountHandler::SaveProcess(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8055c46` | `0x87` | `0x80e50f0` | `0x87` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,41 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
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
+setne  %bl
+test   %bl,%bl
 je     <T> <_ZN18CFrameCountHandler11SaveProcessEi+0x80>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%ebx
 movl   $0xb8,0x8(%esp)
 movl   $&_ZZN18CFrameCountHandler11SaveProcessEiE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Thread(%2d) / FPS(%02d) / DFC(%02d)",0x8(%esp)
 movl   $"./log/frame",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x28(%eax)
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
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

定义于 [source/DNFServer/GameServer/DBMW/DNFTickHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTickHandler.cpp)（约第 41 行）：

```cpp
void CFrameCountHandler::SaveProcess(int n)
{
    ++m_field28;
    register bool b = m_field28 != 0;
    if (b)
    {
        DNF_LOG_SCOPE_LINE(0xb8, "./log/frame", "Thread(%2d) / FPS(%02d) / DFC(%02d)", n, m_field18, m_field4);
        m_field28 = 0;
    }
}
```
