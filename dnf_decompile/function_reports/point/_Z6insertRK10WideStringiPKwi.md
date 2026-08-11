# _Z6insertRK10WideStringiPKwi

`insert(WideString const&, int, wchar_t const*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x809bbb0` | `0x180` | `0x80a7a4a` | `0x17a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,111 +1,114 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%ebx
 cmpl   $0x0,0x10(%ebp)
 js     <T> <_Z6insertRK10WideStringiPKwi+0x22>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 cmp    0x10(%ebp),%eax
 jge    <T> <_Z6insertRK10WideStringiPKwi+0x46>
 movl   $"WideString insert(const WideString&, int32, const wchar*, int32)",0xc(%esp)
 movl $L,0x8(%esp)
 movl   $"../../Include/Core/Strings.cpp",0x4(%esp)
 movl   $"0 <= pos && pos <= str.length()",(%esp)
 call   <T> <__assert_fail>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_Z6insertRK10WideStringiPKwi+0x77>
 mov    %ebx,%eax
 mov    0x18(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EPKwi>
-jmp    <T> <_Z6insertRK10WideStringiPKwi+0x172>
+jmp    <T> <_Z6insertRK10WideStringiPKwi+0x16c>
 cmpl   $0x0,0x18(%ebp)
 jne    <T> <_Z6insertRK10WideStringiPKwi+0x93>
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1ERKS_>
-jmp    <T> <_Z6insertRK10WideStringiPKwi+0x172>
+jmp    <T> <_Z6insertRK10WideStringiPKwi+0x16c>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 add    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
 mov    %eax,-0x1c(%ebp)
 mov    0x10(%ebp),%eax
-lea    0x0(,%eax,4),%edi
+shl    $0x2,%eax
+mov    %eax,%edi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
 mov    %eax,%esi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    %edi,0x8(%esp)
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x18(%ebp),%eax
-lea    0x0(,%eax,4),%esi
+shl    $0x2,%eax
+mov    %eax,%esi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    0x10(%ebp),%edx
 shl    $0x2,%edx
 lea    (%eax,%edx,1),%edx
 mov    %esi,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 sub    0x10(%ebp),%eax
-lea    0x0(,%eax,4),%edi
+shl    $0x2,%eax
+mov    %eax,%esi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
 mov    0x10(%ebp),%edx
 shl    $0x2,%edx
-lea    (%eax,%edx,1),%esi
+lea    (%eax,%edx,1),%edi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
+mov    0x10(%ebp),%ecx
 mov    0x18(%ebp),%edx
-mov    0x10(%ebp),%ecx
 lea    (%ecx,%edx,1),%edx
 shl    $0x2,%edx
 add    %edx,%eax
-mov    %edi,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    %esi,0x8(%esp)
+mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    %ebx,%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EP14WideStringData>
 mov    %ebx,%eax
 mov    %ebx,%eax
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

WideString *
insert(WideString *__return_storage_ptr__,WideString *str,int32 pos,wchar *src,int32 srcLength)

{
  int32 iVar1;
  WideStringData *this;
  wchar *pwVar2;
  wchar *pwVar3;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (-1 < pos) {
    iVar1 = WideString::length(str);
    if (pos <= iVar1) {
      iVar1 = WideString::length(str);
      if (iVar1 == 0) {
        WideString::WideString(__return_storage_ptr__,src,srcLength);
      }
      else if (srcLength == 0) {
        WideString::WideString(__return_storage_ptr__,str);
      }
      else {
        iVar1 = WideString::length(str);
        this = WideStringData::createTerminated(iVar1 + srcLength);
        pwVar2 = WideString::c_str(str);
        pwVar3 = WideStringData::getBuffer(this);
        memcpy(pwVar3,pwVar2,pos * 4);
        pwVar2 = WideStringData::getBuffer(this);
        memcpy(pwVar2 + pos,src,srcLength * 4);
        iVar1 = WideString::length(str);
        pwVar2 = WideString::c_str(str);
        pwVar3 = WideStringData::getBuffer(this);
        memcpy(pwVar3 + pos + srcLength,pwVar2 + pos,(iVar1 - pos) * 4);
        WideString::WideString(__return_storage_ptr__,this);
      }
      return __return_storage_ptr__;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("0 <= pos && pos <= str.length()","../../Include/Core/Strings.cpp",0x70f,
                "WideString insert(const WideString&, int32, const wchar*, int32)");
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/Library/Include/Core/Strings.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
