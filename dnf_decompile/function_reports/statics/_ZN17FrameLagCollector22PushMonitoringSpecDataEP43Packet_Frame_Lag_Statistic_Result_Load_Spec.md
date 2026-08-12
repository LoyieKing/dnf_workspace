# _ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec

`FrameLagCollector::PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Load_Spec*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8066ef0` | `0x274` | `0x806006e` | `0x31e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,190 +1,267 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x29c,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x1,%eax
 je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x21>
 mov    $0x3,%eax
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x269>
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x313>
 mov    0x8(%ebp),%eax
 movzbl 0x18(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x264>
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x3f>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x313>
+mov    0xc(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE3endEv>
 sub    $0x4,%esp
-mov    0xc(%ebp),%eax
-lea    0xb(%eax),%ecx
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0x20(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    0x8(%ebp),%eax
+lea    0x1c(%eax),%ecx
+lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE4findERS3_>
 sub    $0x4,%esp
+lea    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKicEEeqERKS3_>
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x264>
-mov    0xc(%ebp),%eax
-lea    0xb(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0x1c,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0xa1>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x313>
+mov    0x8(%ebp),%eax
+lea    0x1c(%eax),%edx
+lea    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEEixERS3_>
 movb   $0x1,(%eax)
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x21f>
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x2c5>
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
+add    $0x4,%edx
+shl    $0x2,%edx
+add    $0x3,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+cmp    $0xffffffff,%eax
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x2d6>
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
+add    $0x8,%edx
+shl    $0x2,%edx
+add    $0xb,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x4c(%eax),%eax
+cmp    -0x1c(%ebp),%eax
+jge    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x111>
+mov    0x8(%ebp),%eax
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x4,%edx
-mov    0x3(%eax,%edx,4),%eax
-cmp    $0xffffffff,%eax
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x230>
-mov    0x8(%ebp),%eax
-mov    0x4c(%eax),%edx
-mov    -0x1c(%ebp),%ecx
-mov    0xc(%ebp),%eax
-add    $0x8,%ecx
-mov    0xb(%eax,%ecx,4),%eax
-cmp    %eax,%edx
-jge    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0xf2>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x8,%edx
-mov    0xb(%eax,%edx,4),%edx
-mov    0x8(%ebp),%eax
 mov    %edx,0x4c(%eax)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x10,%edx
-mov    0x3(%eax,%edx,4),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x1c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    0xc(%ebp),%edx
-movzbl 0x5b(%edx,%eax,1),%eax
-mov    %al,-0x40(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-movzbl 0x61(%edx,%eax,1),%eax
-mov    %al,-0x3f(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x18,%edx
-mov    0x7(%eax,%edx,4),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x1c,%edx
-mov    0xf(%eax,%edx,4),%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x48,%edx
-movzwl 0x7(%eax,%edx,2),%eax
-mov    %ax,-0x34(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x28,%edx
-mov    0x3(%eax,%edx,4),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2c,%edx
-mov    0xb(%eax,%edx,4),%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x68,%edx
-movzwl 0x3(%eax,%edx,2),%eax
-mov    %ax,-0x28(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-movzbl 0xdf(%edx,%eax,1),%eax
-mov    %al,-0x26(%ebp)
-mov    -0x1c(%ebp),%eax
-add    $0x4,%eax
-shl    $0x2,%eax
-add    0xc(%ebp),%eax
-lea    0x3(%eax),%edx
-mov    0x8(%ebp),%eax
-add    $0x54,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    -0x20(%ebp),%ecx
+add    $0x10,%ecx
+shl    $0x2,%ecx
+add    $0x3,%ecx
+add    %ecx,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+lea    -0x50(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x5b,%ecx
+add    %ecx,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,(%edx)
+lea    -0x50(%ebp),%eax
+lea    0x8(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x18,%ecx
+shl    $0x2,%ecx
+add    $0x7,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x50(%ebp),%eax
+lea    0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x1c,%ecx
+shl    $0x2,%ecx
+add    $0xf,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x50(%ebp),%eax
+lea    0x10(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x48,%ecx
+add    %ecx,%ecx
+add    $0x7,%ecx
+add    %ecx,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,(%edx)
+lea    -0x50(%ebp),%eax
+lea    0x14(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x28,%ecx
+shl    $0x2,%ecx
+add    $0x3,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x50(%ebp),%eax
+lea    0x18(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x2c,%ecx
+shl    $0x2,%ecx
+add    $0xb,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x50(%ebp),%eax
+lea    0x1c(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+add    $0x68,%ecx
+add    %ecx,%ecx
+add    $0x3,%ecx
+add    %ecx,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,(%edx)
+mov    0x8(%ebp),%eax
+lea    0x54(%eax),%edx
+lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEEixERS5_>
+mov    -0x50(%ebp),%edx
+mov    %edx,(%eax)
+mov    -0x4c(%ebp),%edx
+mov    %edx,0x4(%eax)
+mov    -0x48(%ebp),%edx
+mov    %edx,0x8(%eax)
 mov    -0x44(%ebp),%edx
-mov    %edx,(%eax)
+mov    %edx,0xc(%eax)
 mov    -0x40(%ebp),%edx
-mov    %edx,0x4(%eax)
+mov    %edx,0x10(%eax)
 mov    -0x3c(%ebp),%edx
-mov    %edx,0x8(%eax)
+mov    %edx,0x14(%eax)
 mov    -0x38(%ebp),%edx
-mov    %edx,0xc(%eax)
+mov    %edx,0x18(%eax)
 mov    -0x34(%ebp),%edx
-mov    %edx,0x10(%eax)
-mov    -0x30(%ebp),%edx
-mov    %edx,0x14(%eax)
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x18(%eax)
-mov    -0x28(%ebp),%edx
 mov    %edx,0x1c(%eax)
-lea    -0x28c(%ebp),%eax
+lea    -0x298(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector18FrameLagDataStructC1Ev>
-mov    0x8(%ebp),%eax
-lea    0x70(%eax),%edx
-lea    -0x44(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    0x8(%ebp),%edx
+add    $0x70,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEEixERS5_>
-mov    %eax,%edx
-lea    -0x28c(%ebp),%ebx
-mov    $0x92,%eax
-mov    %edx,%edi
+lea    -0x298(%ebp),%edx
+mov    $0x248,%ebx
+mov    %eax,%ecx
+and    $0x1,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x273>
+movzbl (%edx),%ecx
+mov    %cl,(%eax)
+add    $0x1,%eax
+add    $0x1,%edx
+sub    $0x1,%ebx
+mov    %eax,%ecx
+and    $0x2,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x28b>
+movzwl (%edx),%ecx
+mov    %cx,(%eax)
+add    $0x2,%eax
+add    $0x2,%edx
+sub    $0x2,%ebx
+mov    %ebx,%ecx
+shr    $0x2,%ecx
+mov    %eax,%edi
+mov    %edx,%esi
+rep movsl %ds:(%esi),%es:(%edi)
+mov    %esi,%edx
+mov    %edi,%eax
+mov    $0x0,%ecx
 mov    %ebx,%esi
-mov    %eax,%ecx
-rep movsl %ds:(%esi),%es:(%edi)
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x5,-0x1c(%ebp)
+and    $0x2,%esi
+test   %esi,%esi
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x2b3>
+movzwl (%edx,%ecx,1),%esi
+mov    %si,(%eax,%ecx,1)
+add    $0x2,%ecx
+and    $0x1,%ebx
+test   %ebx,%ebx
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x2c1>
+movzbl (%edx,%ecx,1),%edx
+mov    %dl,(%eax,%ecx,1)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x5,-0x20(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0xb2>
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x231>
+jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0xc5>
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x2d7>
 nop
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIicSt4lessIiESaISt4pairIKicEEE4sizeEv>
-mov    0xc(%ebp),%edx
-mov    0xf(%edx),%edx
-cmp    %edx,%eax
+mov    %eax,%edx
+mov    0xc(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
+cmp    %eax,%edx
 sete   %al
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x264>
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x30e>
 mov    0x8(%ebp),%eax
 movl   $0x2,0x4(%eax)
 movl   $"============FirstSpecLoad Complete!!!==========",(%esp)
 call   <T> <puts>
 mov    $0x0,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Load_Spec*) */

undefined4 __thiscall
FrameLagCollector::
_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec
          (FrameLagCollector *this,Packet_Frame_Lag_Statistic_Result_Load_Spec *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  FrameLagDataStruct *pFVar7;
  byte bVar8;
  FrameLagDataStruct local_290 [584];
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> local_28 [4];
  _Rb_tree_iterator<std::pair<int_const,char>> local_24 [4];
  int local_20;
  
  bVar8 = 0;
  if (*(int *)(this + 4) == 1) {
    if (this[0x18] == *(FrameLagCollector *)(param_1 + 10)) {
      std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::end(local_28);
      std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::find
                ((int *)local_24);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,char>>::operator==
                        (local_24,(_Rb_tree_iterator *)local_28);
      if (cVar1 != '\0') {
        puVar3 = (undefined1 *)
                 std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::
                 operator[]((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>
                             *)(this + 0x1c),(int *)(param_1 + 0xb));
        *puVar3 = 1;
        local_20 = 0;
        while ((local_20 < 6 && (*(int *)(param_1 + (local_20 + 4) * 4 + 3) != -1))) {
          if (*(int *)(this + 0x4c) < *(int *)(param_1 + (local_20 + 8) * 4 + 0xb)) {
            *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + (local_20 + 8) * 4 + 0xb);
          }
          local_48 = *(int *)(param_1 + (local_20 + 0x10) * 4 + 3);
          local_44._0_2_ = CONCAT11(param_1[local_20 + 0x61],param_1[local_20 + 0x5b]);
          local_40 = *(int *)(param_1 + (local_20 + 0x18) * 4 + 7);
          local_3c = *(int *)(param_1 + (local_20 + 0x1c) * 4 + 0xf);
          local_38 = CONCAT22(local_38._2_2_,*(undefined2 *)(param_1 + (local_20 + 0x48) * 2 + 7));
          local_34 = *(int *)(param_1 + (local_20 + 0x28) * 4 + 3);
          local_30 = *(int *)(param_1 + (local_20 + 0x2c) * 4 + 0xb);
          local_2c._0_3_ =
               CONCAT12(param_1[local_20 + 0xdf],
                        *(undefined2 *)(param_1 + (local_20 + 0x68) * 2 + 3));
          piVar4 = (int *)std::
                          map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
                          ::operator[]((map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
                                        *)(this + 0x54),(int *)(param_1 + (local_20 + 4) * 4 + 3));
          *piVar4 = local_48;
          piVar4[1] = local_44;
          piVar4[2] = local_40;
          piVar4[3] = local_3c;
          piVar4[4] = local_38;
          piVar4[5] = local_34;
          piVar4[6] = local_30;
          piVar4[7] = local_2c;
          FrameLagDataStruct::FrameLagDataStruct(local_290);
          puVar5 = (undefined4 *)
                   std::
                   map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
                   ::operator[]((map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
                                 *)(this + 0x70),&local_48);
          pFVar7 = local_290;
          for (iVar6 = 0x92; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar5 = *(undefined4 *)pFVar7;
            pFVar7 = pFVar7 + ((uint)bVar8 * -2 + 1) * 4;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          }
          local_20 = local_20 + 1;
        }
        iVar6 = std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::size
                          ((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> *
                           )(this + 0x1c));
        if (iVar6 == *(int *)(param_1 + 0xf)) {
          *(undefined4 *)(this + 4) = 2;
          puts("============FirstSpecLoad Complete!!!==========");
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 224 行）：

```cpp
int FrameLagCollector::PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Load_Spec* pkt)
{
    if (m_field4 != 1)
    {
        return 3;
    }
    if (m_field18 != *(char*)((char*)pkt + 0xa))
    {
        return 0;
    }
    int specId = *(int*)((char*)pkt + 0xb);
    if (m_map1c.find(specId) == m_map1c.end())
    {
        return 0;
    }
    m_map1c[specId] = 1;
    for (int i = 0; i <= 5; i++)
    {
        int sid = *(int*)((char*)pkt + (i + 4) * 4 + 3);
        if (sid == -1)
        {
            break;
        }
        int ts = *(int*)((char*)pkt + (i + 8) * 4 + 0xb);
        if (m_field4c < ts)
        {
            m_field4c = ts;
        }
        MonitoringSpecCase mc;
        *(int*)((char*)&mc + 0x0) = *(int*)((char*)pkt + (i + 0x10) * 4 + 3);
        *(int*)((char*)&mc + 0x4) = *(unsigned char*)((char*)pkt + 0x5b + i);
        *(int*)((char*)&mc + 0x8) = *(int*)((char*)pkt + (i + 0x18) * 4 + 7);
        *(int*)((char*)&mc + 0xc) = *(int*)((char*)pkt + (i + 0x1c) * 4 + 0xf);
        *(int*)((char*)&mc + 0x10) = *(unsigned short*)((char*)pkt + (i + 0x48) * 2 + 7);
        *(int*)((char*)&mc + 0x14) = *(int*)((char*)pkt + (i + 0x28) * 4 + 3);
        *(int*)((char*)&mc + 0x18) = *(int*)((char*)pkt + (i + 0x2c) * 4 + 0xb);
        *(int*)((char*)&mc + 0x1c) = *(unsigned short*)((char*)pkt + (i + 0x68) * 2 + 3);
        m_monitor[sid] = mc;
        FrameLagDataStruct fd;
        m_data[*(int*)((char*)&mc + 0x0)] = fd;
    }
    if ((int)m_map1c.size() == *(int*)((char*)pkt + 0xf))
    {
        m_field4 = 2;
        puts("============FirstSpecLoad Complete!!!==========");
    }
    return 0;
}
```
