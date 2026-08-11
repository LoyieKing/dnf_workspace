# _ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify

`FrameLagCollector::PopMonitoringSpecData(Packet_Frame_Lag_Spec_Delete_Notify*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8066e0c` | `0xe4` | `0x806008a` | `0xe1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,69 +1,70 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEC1Ev>
-movb   $0x1,-0xa(%ebp)
+sub    $0x28,%esp
+movb   $0x0,-0xa(%ebp)
+movb   $0x1,-0x9(%ebp)
+jmp    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0xad>
 movb   $0x0,-0x9(%ebp)
-jmp    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0xb5>
-movb   $0x0,-0xa(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x54(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0x87>
+jmp    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0x7f>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEptEv>
-mov    0x4(%eax),%edx
+add    $0x4,%eax
+add    $0x8,%eax
+mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 cmp    %eax,%edx
 sete   %al
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0x7c>
+je     <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0x74>
 mov    0x8(%ebp),%eax
 lea    0x54(%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
+movb   $0x1,-0x9(%ebp)
 movb   $0x1,-0xa(%ebp)
-movb   $0x1,-0x9(%ebp)
+jmp    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0xad>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x54(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18MonitoringSpecCaseEEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0x42>
+jne    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0x31>
+cmpb   $0x0,-0x9(%ebp)
+setne  %al
+test   %al,%al
+jne    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0x13>
 cmpb   $0x0,-0xa(%ebp)
-jne    <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0x1e>
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0xdd>
+je     <T> <_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify+0xda>
 mov    0xc(%ebp),%eax
 lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE5eraseERS5_>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::PopMonitoringSpecData(Packet_Frame_Lag_Spec_Delete_Notify*) */

undefined4 __thiscall
FrameLagCollector::
_ZN17FrameLagCollector21PopMonitoringSpecDataEP35Packet_Frame_Lag_Spec_Delete_Notify
          (FrameLagCollector *this,Packet_Frame_Lag_Spec_Delete_Notify *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
  local_14 [6];
  char local_e;
  char local_d;
  
  std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
  _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>> *
                    )&local_18);
  local_e = '\x01';
  local_d = '\0';
  while (local_e != '\0') {
    local_e = '\0';
    std::
    map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
    ::begin((map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
             *)local_20);
    local_18 = local_20[0];
    while( true ) {
      std::
      map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                          *)&local_18,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>
                          *)&local_18);
      if (*(int *)(iVar2 + 4) == *(int *)(param_1 + 10)) {
        std::
        map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
        ::erase((map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
                 *)(this + 0x54),local_18);
        local_e = '\x01';
        local_d = '\x01';
      }
      std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>> *)
                 &local_18);
    }
  }
  if (local_d != '\0') {
    std::
    map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
    ::erase((int *)(this + 0x70));
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 199 行）：

```cpp
int FrameLagCollector::PopMonitoringSpecData(Packet_Frame_Lag_Spec_Delete_Notify* pkt)
{
    char erased = 0;
    char again = 1;
    while (again != 0)
    {
        again = 0;
        for (std::map<int, MonitoringSpecCase>::iterator it = m_monitor.begin();
             it != m_monitor.end(); ++it)
        {
            if (*(int*)((char*)&it->second + 0x8) == *(int*)((char*)pkt + 10))
            {
                m_monitor.erase(it);
                again = 1;
                erased = 1;
                break;
            }
        }
    }
    if (erased != 0)
    {
        m_data.erase(*(int*)((char*)pkt + 10));
    }
    return 0;
}
```
