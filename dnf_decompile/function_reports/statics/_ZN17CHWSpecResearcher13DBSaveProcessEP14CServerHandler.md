# _ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler

`CHWSpecResearcher::DBSaveProcess(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8063192` | `0xbc` | `0x80679d4` | `0xb2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x48(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x48(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x48(%eax),%eax
 cmp    $0x1d,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler+0x6c>
+jbe    <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler+0x67>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x48(%eax)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler+0x56>
+jmp    <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler+0x51>
 mov    -0xc(%ebp),%eax
 movzbl %al,%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x2,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler+0x36>
+jne    <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler+0x31>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcher9ResetSpecEv>
 mov    0x8(%ebp),%eax
 movzbl 0x68(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x68(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x68(%eax),%eax
 cmp    $0x2c,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler+0xba>
+jbe    <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler+0xb0>
 mov    0x8(%ebp),%eax
 movb   $0xf,0x68(%eax)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4c(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcher14ResetErrorSpecEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CHWSpecResearcher::DBSaveProcess(CServerHandler*) */

void __thiscall
CHWSpecResearcher::_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler
          (CHWSpecResearcher *this,CServerHandler *param_1)

{
  int local_10;
  
  this[0x48] = (CHWSpecResearcher)((char)this[0x48] + '\x01');
  if (0x1d < (byte)this[0x48]) {
    this[0x48] = (CHWSpecResearcher)0x0;
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      SendDBMWHWSpec(this,param_1,(uchar)local_10);
    }
    ResetSpec(this);
  }
  this[0x68] = (CHWSpecResearcher)((char)this[0x68] + '\x01');
  if (0x2c < (byte)this[0x68]) {
    this[0x68] = (CHWSpecResearcher)0xf;
    SendDBMWErrorLine(this,param_1);
    *(undefined4 *)(this + 0x4c) = 0;
    ResetErrorSpec(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/HWSpecResearcher.cpp](source/DNFServer/GameServer/Statics/HWSpecResearcher.cpp)（约第 75 行）：

```cpp
void CHWSpecResearcher::DBSaveProcess(CServerHandler* handler)
{
    m_field48++;
    if (0x1d < (unsigned char)m_field48)
    {
        m_field48 = 0;
        for (int i = 0; i < 3; i++)
        {
            SendDBMWHWSpec(handler, (unsigned char)i);
        }
        ResetSpec();
    }
    m_field68++;
    if (0x2c < (unsigned char)m_field68)
    {
        m_field68 = 0xf;
        SendDBMWErrorLine(handler);
        m_field4c = 0;
        ResetErrorSpec();
    }
}
```
