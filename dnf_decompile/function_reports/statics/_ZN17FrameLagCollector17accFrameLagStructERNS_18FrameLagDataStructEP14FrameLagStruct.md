# _ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct

`FrameLagCollector::accFrameLagStruct(FrameLagCollector::FrameLagDataStruct&, FrameLagStruct*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8067f1a` | `0x420` | `0x8061158` | `0x4b7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,356 +1,431 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x24,%esp
+sub    $0x2c,%esp
 movl   $0x0,-0x18(%ebp)
-jmp    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x409>
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-add    0x10(%ebp),%eax
+jmp    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x4a0>
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
 movzwl (%eax),%eax
 test   %ax,%ax
-jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x90>
-mov    -0x18(%ebp),%edx
-mov    -0x18(%ebp),%ecx
-mov    0xc(%ebp),%eax
-add    $0xc,%ecx
-mov    0x8(%eax,%ecx,4),%ecx
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ebx
-mov    %ebx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-add    0x10(%ebp),%eax
+jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0xa4>
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0xe,%edx
+shl    $0x2,%edx
+lea    (%eax,%edx,1),%edx
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%ecx
+add    $0xe,%ecx
+shl    $0x2,%ecx
+add    %ecx,%eax
+mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+lea    (%ebx,%eax,1),%eax
 movzwl (%eax),%eax
 cwtl
-add    %eax,%ecx
-mov    0xc(%ebp),%eax
-add    $0xc,%edx
-mov    %ecx,0x8(%eax,%edx,4)
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-lea    0x9(%eax),%ecx
+lea    (%ecx,%eax,1),%eax
+mov    %eax,(%edx)
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0x9,%edx
+add    %edx,%edx
+add    $0x1,%edx
+shl    $0x3,%edx
+add    %edx,%eax
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%ecx
+add    $0x9,%ecx
+add    %ecx,%ecx
+add    $0x1,%ecx
+shl    $0x3,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x1,%eax
+add    %eax,%eax
+lea    (%edx,%eax,1),%eax
+movzwl (%eax),%eax
+test   %ax,%ax
+jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x139>
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
+add    $0x14,%eax
+shl    $0x2,%eax
+add    %eax,%edx
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%eax
+add    $0x14,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x1,%eax
+add    %eax,%eax
+lea    (%ebx,%eax,1),%eax
+movzwl (%eax),%eax
+cwtl
+lea    (%ecx,%eax,1),%eax
+mov    %eax,(%edx)
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+shl    $0x4,%edx
+add    $0x9c,%edx
+add    %edx,%eax
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%ecx
+shl    $0x4,%ecx
+add    $0x9c,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+add    %eax,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x1,%eax
+shl    $0x2,%eax
+lea    (%edx,%eax,1),%eax
+movzwl (%eax),%eax
+test   %ax,%ax
+jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x1c8>
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0x1a,%edx
+shl    $0x2,%edx
+lea    (%eax,%edx,1),%edx
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%ecx
+add    $0x1a,%ecx
+shl    $0x2,%ecx
+add    %ecx,%eax
+mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+add    %eax,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x1,%eax
+shl    $0x2,%eax
+lea    (%ebx,%eax,1),%eax
+movzwl (%eax),%eax
+cwtl
+lea    (%ecx,%eax,1),%eax
+mov    %eax,(%edx)
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0xa,%edx
+shl    $0x4,%edx
+add    %edx,%eax
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%ecx
+add    $0xa,%ecx
 shl    $0x4,%ecx
 add    %ecx,%edx
-add    $0x8,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0xc(%ebp),%ecx
-add    $0x9,%eax
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x8,%eax
+mov    (%edx),%edx
+add    $0x1,%edx
 mov    %edx,(%eax)
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-mov    %edx,%edi
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x6,%eax
+lea    (%edx,%eax,1),%eax
+movzwl (%eax),%eax
+test   %ax,%ax
+jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x259>
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
+add    $0x20,%eax
+shl    $0x2,%eax
+add    %eax,%edx
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%eax
+add    $0x20,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
 sub    %eax,%edi
 mov    %edi,%eax
-add    0x10(%ebp),%eax
-movzwl 0x2(%eax),%eax
-test   %ax,%ax
-jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x10c>
-mov    -0x18(%ebp),%edx
-mov    -0x18(%ebp),%ecx
-mov    0xc(%ebp),%eax
-add    $0x14,%ecx
-mov    (%eax,%ecx,4),%ecx
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ebx
-mov    %ebx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-add    0x10(%ebp),%eax
-movzwl 0x2(%eax),%eax
+add    $0x6,%eax
+lea    (%ebx,%eax,1),%eax
+movzwl (%eax),%eax
 cwtl
-add    %eax,%ecx
-mov    0xc(%ebp),%eax
-add    $0x14,%edx
-mov    %ecx,(%eax,%edx,4)
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %eax,%ecx
+lea    (%ecx,%eax,1),%eax
+mov    %eax,(%edx)
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+shl    $0x4,%edx
+add    $0xa4,%edx
+add    %edx,%eax
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%ecx
 shl    $0x4,%ecx
+add    $0xa4,%ecx
 add    %ecx,%edx
-add    $0x9c,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0xc(%ebp),%ecx
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x9c,%eax
-mov    %edx,(%eax)
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-mov    %edx,%edi
-sub    %eax,%edi
-mov    %edi,%eax
-add    0x10(%ebp),%eax
-movzwl 0x4(%eax),%eax
-test   %ax,%ax
-jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x18a>
-mov    -0x18(%ebp),%edx
-mov    -0x18(%ebp),%ecx
-mov    0xc(%ebp),%eax
-add    $0x18,%ecx
-mov    0x8(%eax,%ecx,4),%ecx
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ebx
-mov    %ebx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-add    0x10(%ebp),%eax
-movzwl 0x4(%eax),%eax
-cwtl
-add    %eax,%ecx
-mov    0xc(%ebp),%eax
-add    $0x18,%edx
-mov    %ecx,0x8(%eax,%edx,4)
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %eax,%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xa0,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0xc(%ebp),%ecx
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xa0,%eax
-mov    %edx,(%eax)
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-mov    %edx,%edi
-sub    %eax,%edi
-mov    %edi,%eax
-add    0x10(%ebp),%eax
-movzwl 0x6(%eax),%eax
-test   %ax,%ax
-jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x206>
-mov    -0x18(%ebp),%edx
-mov    -0x18(%ebp),%ecx
-mov    0xc(%ebp),%eax
-add    $0x20,%ecx
-mov    (%eax,%ecx,4),%ecx
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ebx
-mov    %ebx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-add    0x10(%ebp),%eax
-movzwl 0x6(%eax),%eax
-cwtl
-add    %eax,%ecx
-mov    0xc(%ebp),%eax
-add    $0x20,%edx
-mov    %ecx,(%eax,%edx,4)
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %eax,%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xa4,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0xc(%ebp),%ecx
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xa4,%eax
+mov    (%edx),%edx
+add    $0x1,%edx
 mov    %edx,(%eax)
 movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x3e2>
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%edi
-mov    0xc(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-mov    0x10(%ebx,%eax,8),%eax
-mov    %eax,%ebx
-mov    -0x18(%ebp),%ecx
-mov    0xc(%ebp),%eax
-mov    0x4(%eax,%ecx,4),%eax
+jmp    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x46a>
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x20,%eax
+shl    $0x3,%eax
+add    %eax,%ecx
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0x1,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%ebx
+mov    0xc(%ebp),%esi
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x20,%eax
+shl    $0x3,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
 imul   %ebx,%eax
-mov    %eax,%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-mov    %ebx,0x10(%ecx,%eax,8)
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%edi
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-flds   0x14(%ebx,%eax,8)
-mov    -0x18(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0x4(%eax,%edx,4),%eax
+mov    %eax,(%ecx)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x1e,%eax
+shl    $0x3,%eax
+add    $0x14,%eax
+add    %eax,%ecx
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0x1,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
 mov    $0x0,%edx
 mov    %eax,-0x28(%ebp)
 mov    %edx,-0x24(%ebp)
 fildll -0x28(%ebp)
+mov    0xc(%ebp),%ebx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x1e,%eax
+shl    $0x3,%eax
+add    $0x14,%eax
+lea    (%ebx,%eax,1),%eax
+flds   (%eax)
 fmulp  %st,%st(1)
-mov    0xc(%ebp),%edx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-fstps  0x14(%edx,%eax,8)
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%edi
+fstps  (%ecx)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x20,%eax
+shl    $0x3,%eax
+add    %eax,%ecx
 mov    0xc(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-mov    0x10(%ebx,%eax,8),%ebx
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ecx
-mov    %ecx,%edi
-sub    %eax,%edi
-mov    %edi,%eax
-add    0x10(%ebp),%eax
-mov    -0x14(%ebp),%ecx
-mov    0x8(%eax,%ecx,8),%eax
-add    %eax,%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-mov    %ebx,0x10(%ecx,%eax,8)
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%edi
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x20,%eax
+shl    $0x3,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%ebx
+mov    0x10(%ebp),%esi
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+mov    -0x14(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x1,%eax
+shl    $0x3,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %eax,(%ecx)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x1e,%eax
+shl    $0x3,%eax
+add    $0x14,%eax
+add    %eax,%ecx
 mov    0xc(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-flds   0x14(%ebx,%eax,8)
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ecx
-mov    %ecx,%ebx
-sub    %eax,%ebx
-mov    %ebx,%eax
-add    0x10(%ebp),%eax
-mov    -0x14(%ebp),%ecx
-flds   0xc(%eax,%ecx,8)
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x1e,%eax
+shl    $0x3,%eax
+add    $0x14,%eax
+lea    (%ebx,%eax,1),%eax
+flds   (%eax)
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+mov    -0x14(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+shl    $0x3,%eax
+add    $0xc,%eax
+lea    (%ebx,%eax,1),%eax
+flds   (%eax)
 faddp  %st,%st(1)
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-fstps  0x14(%ecx,%eax,8)
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%edi
+fstps  (%ecx)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x20,%eax
+shl    $0x3,%eax
+add    %eax,%ecx
 mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-mov    0x10(%ebx,%eax,8),%eax
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x20,%eax
+shl    $0x3,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
 mov    -0x18(%ebp),%ebx
-mov    0xc(%ebp),%edx
-mov    0x4(%edx,%ebx,4),%edx
-add    $0x1,%edx
-mov    %edx,-0x2c(%ebp)
+add    $0x1,%ebx
+shl    $0x2,%ebx
+add    %ebx,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,-0x34(%ebp)
 mov    $0x0,%edx
-divl   -0x2c(%ebp)
-mov    %eax,%ebx
-mov    0xc(%ebp),%edx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-mov    %ebx,0x10(%edx,%eax,8)
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%edi
+divl   -0x34(%ebp)
+mov    %eax,(%ecx)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x1e,%eax
+shl    $0x3,%eax
+add    $0x14,%eax
+add    %eax,%ecx
 mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-flds   0x14(%ebx,%eax,8)
-mov    -0x18(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0x4(%eax,%edx,4),%eax
-add    $0x1,%eax
-mov    $0x0,%edx
-mov    %eax,-0x28(%ebp)
-mov    %edx,-0x24(%ebp)
-fildll -0x28(%ebp)
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0x14(%ebp),%eax
+add    $0x1e,%eax
+shl    $0x3,%eax
+add    $0x14,%eax
+lea    (%ebx,%eax,1),%eax
+flds   (%eax)
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0x1,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+add    $0x1,%eax
+mov    %eax,-0x2c(%ebp)
+fildl  -0x2c(%ebp)
 fdivrp %st,%st(1)
-mov    0xc(%ebp),%edx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-fstps  0x14(%edx,%eax,8)
+fstps  (%ecx)
 addl   $0x1,-0x14(%ebp)
 cmpl   $0x5,-0x14(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x212>
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    0x4(%edx,%eax,4),%edx
-lea    0x1(%edx),%ecx
-mov    0xc(%ebp),%edx
-mov    %ecx,0x4(%edx,%eax,4)
+jne    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x265>
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+add    $0x1,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%ecx
+add    $0x1,%ecx
+shl    $0x2,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
 addl   $0x1,-0x18(%ebp)
 cmpl   $0x5,-0x18(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x15>
-add    $0x24,%esp
+add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::accFrameLagStruct(FrameLagCollector::FrameLagDataStruct&, FrameLagStruct*) */

void __thiscall
FrameLagCollector::
_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct
          (FrameLagCollector *this,FrameLagDataStruct *param_1,FrameLagStruct *param_2)

{
  int local_1c;
  int local_18;
  
  for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
    if (0 < *(short *)(param_2 + local_1c * 0x38)) {
      *(int *)(param_1 + (local_1c + 0xc) * 4 + 8) =
           *(int *)(param_1 + (local_1c + 0xc) * 4 + 8) + (int)*(short *)(param_2 + local_1c * 0x38)
      ;
      *(int *)(param_1 + (local_1c + 9) * 0x10 + 8) =
           *(int *)(param_1 + (local_1c + 9) * 0x10 + 8) + 1;
    }
    if (0 < *(short *)(param_2 + local_1c * 0x38 + 2)) {
      *(int *)(param_1 + (local_1c + 0x14) * 4) =
           *(int *)(param_1 + (local_1c + 0x14) * 4) +
           (int)*(short *)(param_2 + local_1c * 0x38 + 2);
      *(int *)(param_1 + local_1c * 0x10 + 0x9c) = *(int *)(param_1 + local_1c * 0x10 + 0x9c) + 1;
    }
    if (0 < *(short *)(param_2 + local_1c * 0x38 + 4)) {
      *(int *)(param_1 + (local_1c + 0x18) * 4 + 8) =
           *(int *)(param_1 + (local_1c + 0x18) * 4 + 8) +
           (int)*(short *)(param_2 + local_1c * 0x38 + 4);
      *(int *)(param_1 + local_1c * 0x10 + 0xa0) = *(int *)(param_1 + local_1c * 0x10 + 0xa0) + 1;
    }
    if (0 < *(short *)(param_2 + local_1c * 0x38 + 6)) {
      *(int *)(param_1 + (local_1c + 0x20) * 4) =
           *(int *)(param_1 + (local_1c + 0x20) * 4) +
           (int)*(short *)(param_2 + local_1c * 0x38 + 6);
      *(int *)(param_1 + local_1c * 0x10 + 0xa4) = *(int *)(param_1 + local_1c * 0x10 + 0xa4) + 1;
    }
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
      *(int *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x10) =
           *(int *)(param_1 + local_1c * 4 + 4) *
           *(int *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x10);
      *(float *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x14) =
           (float)*(uint *)(param_1 + local_1c * 4 + 4) *
           *(float *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x14);
      *(int *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x10) =
           *(int *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x10) +
           *(int *)(param_2 + local_18 * 8 + local_1c * 0x38 + 8);
      *(float *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x14) =
           *(float *)(param_2 + local_18 * 8 + local_1c * 0x38 + 0xc) +
           *(float *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x14);
      *(uint *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x10) =
           *(uint *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x10) /
           (*(int *)(param_1 + local_1c * 4 + 4) + 1U);
      *(float *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x14) =
           *(float *)(param_1 + (local_1c * 7 + local_18 + 0x1e) * 8 + 0x14) /
           (float)(*(int *)(param_1 + local_1c * 4 + 4) + 1);
    }
    *(int *)(param_1 + local_1c * 4 + 4) = *(int *)(param_1 + local_1c * 4 + 4) + 1;
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Statics/FrameLagCollector.cpp, source/DNFServer/GameServer/Statics/DNFDBServer.h, source/DNFServer/GameServer/Statics/DNFGameServer.h, source/DNFServer/GameServer/Statics/DNFManagerServer.h, source/DNFServer/GameServer/Statics/DNFServerConfig.h, source/DNFServer/GameServer/Statics/DNFServerHandler.h, source/DNFServer/GameServer/Statics/DNFTableBase.h, source/DNFServer/GameServer/Statics/FrameLagCollector.cpp 等 259 个文件*
