# _ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler

`FrameLagCollector::SaveFrameLagData(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80675dc` | `0x63e` | `0x80608d4` | `0x5af` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,433 +1,431 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x1fc,%esp
+sub    $0x1e4,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x21>
+je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x1f>
 mov    $0x2,%eax
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x633>
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5aa>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x10(%eax)
 mov    0x8(%ebp),%eax
-mov    0x10(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x88(%eax),%eax
+mov    0x88(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
 cmp    %eax,%edx
-jl     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5f6>
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x4b>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5aa>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 mov    0x6c(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x65>
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x69>
 mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x633>
-lea    -0x1af(%ebp),%eax
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5aa>
+lea    -0x1a7(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN42Packet_Frame_Lag_Statistic_Write_Lag_IndexC1Ev>
+lea    -0x1a7(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-mov    %al,-0x1a5(%ebp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
+mov    %al,(%ebx)
+movl   $0x0,(%esp)
 call   <T> <time>
-mov    -0x30(%ebp),%eax
-mov    %eax,-0x38(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEC1Ev>
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
+lea    0xb(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
 lea    0x70(%eax),%edx
-lea    -0x1bc(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0x1bc(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5ba>
-lea    -0x34(%ebp),%eax
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x534>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    (%eax),%eax
-mov    %eax,-0x1a4(%ebp)
-lea    -0x34(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x24(%ebp),%eax
+lea    0xb(%eax),%ebx
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,-0x1a0(%ebp)
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x121>
-mov    -0x24(%ebp),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x24(%ebp),%edx
-add    $0x8,%edx
-movzwl 0x10(%eax,%edx,2),%eax
-lea    0x8(%ebx),%edx
-mov    %ax,-0x1ac(%ebp,%edx,2)
-addl   $0x1,-0x24(%ebp)
-cmpl   $0x7,-0x24(%ebp)
+mov    (%eax),%eax
+mov    %eax,(%ebx)
+mov    -0x24(%ebp),%eax
+lea    0xf(%eax),%edx
+mov    -0x18(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x12b>
+mov    -0x14(%ebp),%eax
+add    %eax,%eax
+add    $0x13,%eax
+add    -0x24(%ebp),%eax
+mov    -0x18(%ebp),%edx
+mov    -0x14(%ebp),%ecx
+add    $0x10,%ecx
+add    %ecx,%ecx
+add    %ecx,%edx
+movzwl (%edx),%edx
+mov    %dx,(%eax)
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x7,-0x14(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0xf9>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x30(%eax),%eax
-test   %eax,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x15a>
-movw   $0xffff,-0x18c(%ebp)
-movw   $0xffff,-0x18a(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x25c>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x34(%eax),%eax
-mov    %eax,-0x1c0(%ebp)
-fildl  -0x1c0(%ebp)
-fstpl  -0x1e0(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x30(%eax),%eax
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x109>
+mov    -0x18(%ebp),%eax
+add    $0x30,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x15d>
+mov    -0x24(%ebp),%eax
+add    $0x23,%eax
+movw   $0xffff,(%eax)
+mov    -0x24(%ebp),%eax
+add    $0x25,%eax
+movw   $0xffff,(%eax)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x231>
+mov    -0x24(%ebp),%eax
+lea    0x23(%eax),%ecx
+mov    -0x18(%ebp),%eax
+add    $0x34,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1ac(%ebp)
+fildl  -0x1ac(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0x30,%eax
+mov    (%eax),%eax
 mov    $0x0,%edx
-mov    %eax,-0x1c8(%ebp)
-mov    %edx,-0x1c4(%ebp)
-fildll -0x1c8(%ebp)
-fdivrl -0x1e0(%ebp)
-fnstcw -0x1ca(%ebp)
-movzwl -0x1ca(%ebp),%eax
+mov    %eax,-0x1b8(%ebp)
+mov    %edx,-0x1b4(%ebp)
+fildll -0x1b8(%ebp)
+fdivrp %st,%st(1)
+fldl   &data#78e7013f(.rodata)
+faddp  %st,%st(1)
+fnstcw -0x1ba(%ebp)
+movzwl -0x1ba(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x1cc(%ebp)
-fldcw  -0x1cc(%ebp)
-fistps -0x1ce(%ebp)
-fldcw  -0x1ca(%ebp)
-movzwl -0x1ce(%ebp),%eax
-mov    %ax,-0x18c(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x38(%eax),%eax
-mov    %eax,-0x1c0(%ebp)
-fildl  -0x1c0(%ebp)
-fstpl  -0x1d8(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x30(%eax),%eax
+mov    %ax,-0x1bc(%ebp)
+fldcw  -0x1bc(%ebp)
+fistps -0x1be(%ebp)
+fldcw  -0x1ba(%ebp)
+movzwl -0x1be(%ebp),%eax
+mov    %ax,(%ecx)
+mov    -0x24(%ebp),%eax
+lea    0x25(%eax),%ecx
+mov    -0x18(%ebp),%eax
+add    $0x38,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1ac(%ebp)
+fildl  -0x1ac(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0x30,%eax
+mov    (%eax),%eax
 mov    $0x0,%edx
-mov    %eax,-0x1c8(%ebp)
-mov    %edx,-0x1c4(%ebp)
-fildll -0x1c8(%ebp)
-fdivrl -0x1d8(%ebp)
-fnstcw -0x1ca(%ebp)
-movzwl -0x1ca(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0x1cc(%ebp)
-fldcw  -0x1cc(%ebp)
-fistps -0x1ce(%ebp)
-fldcw  -0x1ca(%ebp)
-movzwl -0x1ce(%ebp),%eax
-mov    %ax,-0x18a(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x561>
-mov    -0x20(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-movw   $0x0,0x7(%eax)
-mov    -0x20(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-movw   $0x0,0x9(%eax)
-mov    -0x20(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-movw   $0x0,0xb(%eax)
-mov    -0x20(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-movw   $0x0,0xd(%eax)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
+mov    %eax,-0x1b8(%ebp)
+mov    %edx,-0x1b4(%ebp)
+fildll -0x1b8(%ebp)
+fdivrp %st,%st(1)
+fldl   &data#78e7013f(.rodata)
+faddp  %st,%st(1)
+fldcw  -0x1bc(%ebp)
+fistps -0x1be(%ebp)
+fldcw  -0x1ba(%ebp)
+movzwl -0x1be(%ebp),%eax
+mov    %ax,(%ecx)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x4e6>
+mov    -0x10(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x27,%eax
+add    -0x24(%ebp),%eax
+movw   $0x0,(%eax)
+mov    -0x10(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x29,%eax
+add    -0x24(%ebp),%eax
+movw   $0x0,(%eax)
+mov    -0x10(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x2b,%eax
+add    -0x24(%ebp),%eax
+movw   $0x0,(%eax)
+mov    -0x10(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x2d,%eax
+add    -0x24(%ebp),%eax
+movw   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
 add    $0x9,%edx
 shl    $0x4,%edx
-add    %edx,%eax
-add    $0xc,%eax
-mov    (%eax),%eax
-test   %eax,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x36c>
-mov    -0x20(%ebp),%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
 add    $0xc,%edx
-mov    0xc(%eax,%edx,4),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-add    $0x9,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x31e>
+mov    -0x10(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x27,%eax
+add    -0x24(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
+add    $0xf,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    -0x18(%ebp),%edx
+mov    -0x10(%ebp),%ebx
+add    $0x9,%ebx
+shl    $0x4,%ebx
+add    $0xc,%ebx
+add    %ebx,%edx
+mov    (%edx),%edx
+mov    %edx,-0x1cc(%ebp)
+mov    %eax,%edx
+sar    $0x1f,%edx
+idivl  -0x1cc(%ebp)
+mov    %ax,(%ecx)
+mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
+add    $0xa,%edx
 shl    $0x4,%edx
 add    %edx,%eax
-add    $0xc,%eax
-mov    (%eax),%eax
-mov    %eax,-0x1ec(%ebp)
-mov    %ebx,%edx
+mov    (%eax),%eax
+test   %eax,%eax
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x381>
+mov    -0x10(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x29,%eax
+add    -0x24(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
+add    $0x15,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    -0x18(%ebp),%edx
+mov    -0x10(%ebp),%ebx
+add    $0xa,%ebx
+shl    $0x4,%ebx
+add    %ebx,%edx
+mov    (%edx),%edx
+mov    %edx,-0x1cc(%ebp)
+mov    %eax,%edx
+sar    $0x1f,%edx
+idivl  -0x1cc(%ebp)
+mov    %ax,(%ecx)
+mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
+shl    $0x4,%edx
+add    $0xa4,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x3ea>
+mov    -0x10(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x2b,%eax
+add    -0x24(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
+add    $0x1b,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    -0x18(%ebp),%edx
+mov    -0x10(%ebp),%ebx
+shl    $0x4,%ebx
+add    $0xa4,%ebx
+add    %ebx,%edx
+mov    (%edx),%edx
+mov    %edx,-0x1cc(%ebp)
+mov    %eax,%edx
+sar    $0x1f,%edx
+idivl  -0x1cc(%ebp)
+mov    %ax,(%ecx)
+mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
+shl    $0x4,%edx
+add    $0xa8,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x453>
+mov    -0x10(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x2d,%eax
+add    -0x24(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
+add    $0x21,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    -0x18(%ebp),%edx
+mov    -0x10(%ebp),%ebx
+shl    $0x4,%ebx
+add    $0xa8,%ebx
+add    %ebx,%edx
+mov    (%edx),%edx
+mov    %edx,-0x1cc(%ebp)
+mov    %eax,%edx
+sar    $0x1f,%edx
+idivl  -0x1cc(%ebp)
+mov    %ax,(%ecx)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x4d3>
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
-sar    $0x1f,%edx
-idivl  -0x1ec(%ebp)
-mov    %eax,%ecx
-mov    %esi,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-mov    %cx,0x7(%eax)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa0,%eax
-mov    (%eax),%eax
-test   %eax,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x3f2>
-mov    -0x20(%ebp),%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-add    $0x14,%edx
-mov    0x4(%eax,%edx,4),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa0,%eax
-mov    (%eax),%eax
-mov    %eax,-0x1ec(%ebp)
-mov    %ebx,%edx
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0xc(%ebp),%eax
+add    $0x4,%eax
+shl    $0x3,%eax
+add    $0x2f,%eax
+add    -0x24(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x18(%ebp),%ebx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
-sar    $0x1f,%edx
-idivl  -0x1ec(%ebp)
-mov    %eax,%ecx
-mov    %esi,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-mov    %cx,0x9(%eax)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa4,%eax
-mov    (%eax),%eax
-test   %eax,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x478>
-mov    -0x20(%ebp),%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-add    $0x18,%edx
-mov    0xc(%eax,%edx,4),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa4,%eax
-mov    (%eax),%eax
-mov    %eax,-0x1ec(%ebp)
-mov    %ebx,%edx
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0xc(%ebp),%eax
+add    $0x1e,%eax
+shl    $0x3,%eax
+add    $0x14,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,(%ecx)
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
-sar    $0x1f,%edx
-idivl  -0x1ec(%ebp)
-mov    %eax,%ecx
-mov    %esi,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-mov    %cx,0xb(%eax)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa8,%eax
-mov    (%eax),%eax
-test   %eax,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x4fe>
-mov    -0x20(%ebp),%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-add    $0x20,%edx
-mov    0x4(%eax,%edx,4),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa8,%eax
-mov    (%eax),%eax
-mov    %eax,-0x1ec(%ebp)
-mov    %ebx,%edx
+shl    $0x3,%eax
+sub    %edx,%eax
+add    -0xc(%ebp),%eax
+add    $0x4,%eax
+shl    $0x3,%eax
+add    $0x33,%eax
+add    -0x24(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x18(%ebp),%ebx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
-sar    $0x1f,%edx
-idivl  -0x1ec(%ebp)
-mov    %eax,%ecx
-mov    %esi,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-mov    %cx,0xd(%eax)
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x552>
-mov    -0x20(%ebp),%ebx
-mov    -0x1c(%ebp),%edi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    %eax,%ecx
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%esi
-mov    %ebx,%eax
-shl    $0x3,%eax
-sub    %ebx,%eax
-add    %edi,%eax
-lea    0x4(%eax),%ebx
-mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-mov    0x18(%ecx,%eax,8),%edx
-mov    0x14(%ecx,%eax,8),%eax
-mov    %eax,-0x1a0(%ebp,%ebx,8)
-mov    %edx,-0x19c(%ebp,%ebx,8)
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x5,-0x1c(%ebp)
+add    -0xc(%ebp),%eax
+add    $0x21,%eax
+shl    $0x3,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,(%ecx)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x5,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x507>
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x5,-0x20(%ebp)
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x45c>
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x5,-0x10(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x268>
-lea    -0x1af(%ebp),%eax
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x23d>
+lea    -0x1a7(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-add    $0x4,%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x70(%eax),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0xc9>
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0xca>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x6c(%eax)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+movl   $0x0,(%esp)
 call   <T> <time>
-mov    0x8(%ebp),%eax
-mov    0x8c(%eax),%edx
-mov    -0x2c(%ebp),%eax
-cmp    %eax,%edx
-jg     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x621>
-mov    0x8(%ebp),%eax
-mov    0x90(%eax),%edx
-mov    -0x2c(%ebp),%eax
-cmp    %eax,%edx
-jge    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x62e>
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x8c(%eax),%eax
+cmp    -0x1c(%ebp),%eax
+jg     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x59b>
+mov    0x8(%ebp),%eax
+mov    0x90(%eax),%eax
+cmp    -0x1c(%ebp),%eax
+jge    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5a8>
 mov    0x8(%ebp),%eax
 movl   $0x1e,0x88(%eax)
-mov    $0x0,%eax
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5aa>
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::SaveFrameLagData(CServerHandler*) */

undefined4 __thiscall
FrameLagCollector::_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler
          (FrameLagCollector *this,CServerHandler *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1c0 [3];
  Packet_Frame_Lag_Statistic_Write_Lag_Index local_1b3 [3];
  undefined2 auStack_1b0 [3];
  undefined1 local_1a9;
  undefined4 local_1a8;
  undefined4 local_1a4 [5];
  short local_190;
  short local_18e;
  undefined2 auStack_18c [168];
  time_t local_3c;
  undefined4 local_38;
  time_t local_34;
  int local_30;
  map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
  local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  
  if (*(int *)(this + 4) == 2) {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    if (*(int *)(this + 0x88) <= *(int *)(this + 0x10)) {
      *(undefined4 *)(this + 0x10) = 0;
      if (*(int *)(this + 0x6c) == 0) {
        return 0;
      }
      Packet_Frame_Lag_Statistic_Write_Lag_Index::Packet_Frame_Lag_Statistic_Write_Lag_Index
                (local_1b3);
      local_1a9 = CServerHandler::GetServerGroupNo(param_1);
      time(&local_34);
      local_3c = local_34;
      std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
      _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                         *)&local_38);
      std::
      map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
      ::begin((map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
               *)local_1c0);
      local_38 = local_1c0[0];
      while( true ) {
        std::
        map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
        ::end(local_2c);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                operator!=((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                            *)&local_38,(_Rb_tree_iterator *)local_2c);
        if (cVar1 == '\0') break;
        puVar3 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                 ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                               *)&local_38);
        local_1a8 = *puVar3;
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                            *)&local_38);
        local_1a4[0] = *(undefined4 *)(iVar4 + 4);
        for (local_28 = 0; iVar4 = local_28, local_28 < 8; local_28 = local_28 + 1) {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          auStack_1b0[iVar4 + 8] = *(undefined2 *)(iVar5 + 0x10 + (local_28 + 8) * 2);
        }
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                            *)&local_38);
        if (*(int *)(iVar4 + 0x30) == 0) {
          local_190 = -1;
          local_18e = -1;
        }
        else {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = *(int *)(iVar4 + 0x34);
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          local_190 = (short)ROUND((double)iVar4 / (double)*(uint *)(iVar5 + 0x30));
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = *(int *)(iVar4 + 0x38);
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          local_18e = (short)ROUND((double)iVar4 / (double)*(uint *)(iVar5 + 0x30));
        }
        for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
          auStack_18c[local_24 * 0x1c] = 0;
          auStack_18c[local_24 * 0x1c + 1] = 0;
          auStack_18c[local_24 * 0x1c + 2] = 0;
          auStack_18c[local_24 * 0x1c + 3] = 0;
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = local_24;
          if (0 < *(int *)(iVar5 + (local_24 + 9) * 0x10 + 0xc)) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar5 = *(int *)(iVar5 + 0xc + (local_24 + 0xc) * 4);
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            auStack_18c[iVar4 * 0x1c] =
                 (short)(iVar5 / *(int *)(iVar6 + (local_24 + 9) * 0x10 + 0xc));
          }
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = local_24;
          if (0 < *(int *)(iVar5 + local_24 * 0x10 + 0xa0)) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar5 = *(int *)(iVar5 + 4 + (local_24 + 0x14) * 4);
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            auStack_18c[iVar4 * 0x1c + 1] =
                 (short)(iVar5 / *(int *)(iVar6 + local_24 * 0x10 + 0xa0));
          }
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = local_24;
          if (0 < *(int *)(iVar5 + local_24 * 0x10 + 0xa4)) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar5 = *(int *)(iVar5 + 0xc + (local_24 + 0x18) * 4);
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            auStack_18c[iVar4 * 0x1c + 2] =
                 (short)(iVar5 / *(int *)(iVar6 + local_24 * 0x10 + 0xa4));
          }
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = local_24;
          if (0 < *(int *)(iVar5 + local_24 * 0x10 + 0xa8)) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar5 = *(int *)(iVar5 + 4 + (local_24 + 0x20) * 4);
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            auStack_18c[iVar4 * 0x1c + 3] =
                 (short)(iVar5 / *(int *)(iVar6 + local_24 * 0x10 + 0xa8));
          }
          for (local_20 = 0; iVar5 = local_20, iVar4 = local_24, local_20 < 6;
              local_20 = local_20 + 1) {
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar4 = iVar4 * 7 + iVar5 + 4;
            iVar5 = local_24 * 7 + local_20 + 0x1e;
            uVar2 = *(undefined4 *)(iVar6 + 0x18 + iVar5 * 8);
            local_1a4[iVar4 * 2] = *(undefined4 *)(iVar6 + 0x14 + iVar5 * 8);
            local_1a4[iVar4 * 2 + 1] = uVar2;
          }
        }
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1b3);
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                            *)&local_38);
        FrameLagDataStruct::init((FrameLagDataStruct *)(iVar4 + 4));
        DNFFLib::Sleep_Ext(0,1);
        std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
        operator++((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>> *)
                   &local_38);
      }
      *(undefined4 *)(this + 0x6c) = 0;
    }
    time(&local_30);
    if ((local_30 < *(int *)(this + 0x8c)) || (*(int *)(this + 0x90) < local_30)) {
      *(undefined4 *)(this + 0x88) = 0x1e;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 354 行）：

```cpp
int FrameLagCollector::SaveFrameLagData(CServerHandler* handler)
{
    if (m_field4 != 2)
    {
        return 2;
    }
    m_field10++;
    if (!(m_collectInterval <= m_field10))
    {
        return 0;
    }
    m_field10 = 0;
    if (m_field6c == 0)
    {
        return 0;
    }
    Packet_Frame_Lag_Statistic_Write_Lag_Index pkt;
    char* pb = (char*)&pkt;
    pb[10] = (char)handler->GetServerGroupNo();
    time_t now = time(0);
    *(time_t*)(pb + 0xb) = now;
    for (std::map<int, FrameLagDataStruct>::iterator it = m_data.begin();
         it != m_data.end(); ++it)
    {
        FrameLagDataStruct* v = &it->second;
        *(int*)(pb + 0xb) = it->first;
        *(int*)(pb + 0xf) = *(int*)((char*)v + 4);
        for (int i = 0; i < 8; i++)
        {
            *(short*)(pb + 0x13 + i * 2) = *(short*)((char*)v + 0x10 + (i + 8) * 2);
        }
        if (*(int*)((char*)v + 0x30) == 0)
        {
            *(short*)(pb + 0x23) = -1;
            *(short*)(pb + 0x25) = -1;
        }
        else
        {
            *(short*)(pb + 0x23) = (short)((double)(*(int*)((char*)v + 0x34)) /
                                           (double)(*(unsigned int*)((char*)v + 0x30)) + 0.5);
            *(short*)(pb + 0x25) = (short)((double)(*(int*)((char*)v + 0x38)) /
                                           (double)(*(unsigned int*)((char*)v + 0x30)) + 0.5);
        }
        for (int i = 0; i < 6; i++)
        {
            *(short*)(pb + 0x27 + i * 0x1c + 0) = 0;
            *(short*)(pb + 0x27 + i * 0x1c + 2) = 0;
            *(short*)(pb + 0x27 + i * 0x1c + 4) = 0;
            *(short*)(pb + 0x27 + i * 0x1c + 6) = 0;
            if (0 < *(int*)((char*)v + (i + 9) * 0x10 + 0xc))
            {
                *(short*)(pb + 0x27 + i * 0x1c + 0) =
                    (short)(*(int*)((char*)v + 0xc + (i + 0xc) * 4) /
                            *(int*)((char*)v + (i + 9) * 0x10 + 0xc));
            }
            if (0 < *(int*)((char*)v + i * 0x10 + 0xa0))
            {
                *(short*)(pb + 0x27 + i * 0x1c + 2) =
                    (short)(*(int*)((char*)v + 4 + (i + 0x14) * 4) /
                            *(int*)((char*)v + i * 0x10 + 0xa0));
            }
            if (0 < *(int*)((char*)v + i * 0x10 + 0xa4))
            {
                *(short*)(pb + 0x27 + i * 0x1c + 4) =
                    (short)(*(int*)((char*)v + 0xc + (i + 0x18) * 4) /
                            *(int*)((char*)v + i * 0x10 + 0xa4));
            }
            if (0 < *(int*)((char*)v + i * 0x10 + 0xa8))
            {
                *(short*)(pb + 0x27 + i * 0x1c + 6) =
                    (short)(*(int*)((char*)v + 4 + (i + 0x20) * 4) /
                            *(int*)((char*)v + i * 0x10 + 0xa8));
            }
            for (int j = 0; j < 6; j++)
            {
                *(int*)(pb + 0x2f + (i * 7 + j + 4) * 8) =
                    *(int*)((char*)v + 0x14 + (i * 7 + j + 0x1e) * 8);
                *(int*)(pb + 0x33 + (i * 7 + j + 4) * 8) =
                    *(int*)((char*)v + 0x18 + (i * 7 + j + 0x1e) * 8);
            }
        }
        handler->SendToDB((PacketHeader*)&pkt);
        v->init();
        DNFFLib::Sleep_Ext(0, 1);
    }
    m_field6c = 0;
    time_t t2 = time(0);
    if (t2 < m_field8c || m_field90 < t2)
    {
        m_collectInterval = 0x1e;
    }
}
```
