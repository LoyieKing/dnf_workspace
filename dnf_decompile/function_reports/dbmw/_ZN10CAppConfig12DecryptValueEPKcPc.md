# _ZN10CAppConfig12DecryptValueEPKcPc

`CAppConfig::DecryptValue(char const*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8069f70` | `0xaf` | `0x806a3e0` | `0xaf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %ebx
 sub    $0x90,%esp
 lea    -0x48(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x10,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
 lea    -0x88(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x10,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
+lea    -0x88(%ebp),%eax
 movl   $0x18,0x8(%esp)
-lea    -0x88(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CAppConfig12DecryptValueEPKcPc+0x5f>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CAppConfig12DecryptValueEPKcPc+0xa5>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
+movl   $0x18,0xc(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,0x8(%esp)
 lea    -0x88(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
-movl   $0x18,0xc(%esp)
-lea    -0x48(%ebp),%edx
-mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN4CTEA7DecryptEPKcPcj>
 movl   $0x14,0x8(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    $0x1,%eax
 add    $0x90,%esp
 pop    %ebx
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::DecryptValue(char const*, char*) */

bool __thiscall
CAppConfig::_ZN10CAppConfig12DecryptValueEPKcPc(CAppConfig *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uchar *puVar4;
  uchar local_8c [64];
  char local_4c [64];
  
  pcVar3 = local_4c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  puVar4 = local_8c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4 = puVar4 + 4;
  }
  cVar1 = DNFFLib::Hex2Binary(param_1,local_8c,0x18);
  if (cVar1 == '\x01') {
    CTEA::Decrypt((CTEA *)(this + 4),(char *)local_8c,local_4c,0x18);
    strncpy(param_2,local_4c,0x14);
  }
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFAppConfig.cpp](source/DNFServer/GameServer/DBMW/DNFAppConfig.cpp)（约第 66 行）：

```cpp
bool CAppConfig::DecryptValue(const char* value, char* dst)
{
    char buf1[0x40] = {0};
    char buf2[0x40] = {0};
    if (!DNFFLib::Hex2Binary(value, (unsigned char*)buf2, 0x18))
        return 0;
    m_cipher.Decrypt(buf2, buf1, 0x18);
    strncpy(dst, buf1, 0x14);
    return 1;
}
```
