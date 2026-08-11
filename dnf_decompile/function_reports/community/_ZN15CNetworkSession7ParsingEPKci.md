# _ZN15CNetworkSession7ParsingEPKci

`CNetworkSession::Parsing(char const*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804f1fa` | `0x7c` | `0x804f5ca` | `0x83` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,46 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN15CNetworkSession7ParsingEPKci+0x64>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN15CNetworkSession7ParsingEPKci+0x6b>
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
-add    0xc(%ebp),%eax
 mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x9,%eax
-jbe    <T> <_ZN15CNetworkSession7ParsingEPKci+0x73>
-mov    -0x10(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0x14(%ebp),%eax
+jbe    <T> <_ZN15CNetworkSession7ParsingEPKci+0x7a>
+mov    -0xc(%ebp),%eax
 mov    0x10(%ebp),%edx
 sub    %eax,%edx
-mov    -0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
+mov    -0x10(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 cmp    %eax,%edx
-jl     <T> <_ZN15CNetworkSession7ParsingEPKci+0x76>
-mov    -0xc(%ebp),%eax
+jl     <T> <_ZN15CNetworkSession7ParsingEPKci+0x7d>
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession8dispatchEP12PacketHeader>
-mov    -0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
+mov    -0x10(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
-add    %eax,-0x14(%ebp)
+add    %eax,-0xc(%ebp)
 mov    0x10(%ebp),%eax
-cmp    -0x14(%ebp),%eax
+cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN15CNetworkSession7ParsingEPKci+0xf>
-jmp    <T> <_ZN15CNetworkSession7ParsingEPKci+0x77>
+jmp    <T> <_ZN15CNetworkSession7ParsingEPKci+0x7e>
 nop
-jmp    <T> <_ZN15CNetworkSession7ParsingEPKci+0x77>
+jmp    <T> <_ZN15CNetworkSession7ParsingEPKci+0x7e>
 nop
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CNetworkSession::Parsing(char const*, int) */

int __thiscall
CNetworkSession::_ZN15CNetworkSession7ParsingEPKci(CNetworkSession *this,char *param_1,int param_2)

{
  PacketHeader *pPVar1;
  int local_18;
  
  for (local_18 = 0;
      ((local_18 < param_2 &&
       (pPVar1 = (PacketHeader *)(param_1 + local_18), 9 < (uint)(param_2 - local_18))) &&
      ((int)(uint)*(ushort *)(pPVar1 + 2) <= param_2 - local_18));
      local_18 = local_18 + (uint)*(ushort *)(pPVar1 + 2)) {
    dispatch(this,pPVar1);
  }
  return local_18;
}
```

## 3. 我们的源码函数

定义于 [source/Community/NetworkSession.cpp](source/Community/NetworkSession.cpp)（约第 91 行）：

```cpp
int CNetworkSession::Parsing(const char *data, int len) {
    // 原始：while (len > i) + 两个 break（setg 物化循环条件；len-i 先求值）
    ushort *p;
    ushort *p2;  // 原始：p2 = p 副本（mov [ebp-0xc],eax）
    int i;
    i = 0;
    while (len > i) {
        p = (ushort *)(data + i);
        p2 = p;
        if (9 >= (uint)(len - i)) {
            break;
        }
        if ((len - i) < (int)p2[1]) {
            break;
        }
        dispatch((PacketHeader *)p2);
        i += p2[1];
    }
    /**
     * some information about each packet:
     * minimum packet length is 10
     * 0x00,0x01(ushort): packet type
     * 0x02,0x03(ushort): packet length
     * 0x4, 0x05(ushort): reversed1
     * 0x06, 0x07. 0x08, 0x09(uint): reversed2
     * ...: data content
     */
    return i;
}
```
