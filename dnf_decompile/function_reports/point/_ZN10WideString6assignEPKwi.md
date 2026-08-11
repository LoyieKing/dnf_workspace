# _ZN10WideString6assignEPKwi

`WideString::assign(wchar_t const*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x809b412` | `0x68` | `0x80a2dd4` | `0x66` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0x10(%ebp)
 jne    <T> <_ZN10WideString6assignEPKwi+0x1a>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideString5clearEv>
-jmp    <T> <_ZN10WideString6assignEPKwi+0x62>
+jmp    <T> <_ZN10WideString6assignEPKwi+0x60>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
 mov    %eax,-0xc(%ebp)
 mov    0x10(%ebp),%eax
-lea    0x0(,%eax,4),%ebx
+shl    $0x2,%eax
+mov    %eax,%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    %ebx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideString11replaceDataEP14WideStringData>
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void assign(WideString * this, wchar * src, int32 srcLength) */

void __thiscall WideString::_ZN10WideString6assignEPKwi(WideString *this,wchar *src,int32 srcLength)

{
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (srcLength == 0) {
    _ZN10WideString5clearEv(this);
  }
  else {
    this_00 = WideStringData::createTerminated(srcLength);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,srcLength * 4);
    replaceData(this,this_00);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/Library/Include/Core/Strings.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
