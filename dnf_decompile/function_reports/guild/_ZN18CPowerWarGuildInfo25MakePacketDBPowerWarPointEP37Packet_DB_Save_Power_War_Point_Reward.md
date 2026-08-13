# _ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward

`CPowerWarGuildInfo::MakePacketDBPowerWarPoint(Packet_DB_Save_Power_War_Point_Reward*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa4bc` | `0x17a` | `0x80a0b9c` | `0x188` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,110 +1,115 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP21STDBSavePowerWarPointSaIS1_EE4sizeEv>
 mov    %eax,-0x1c(%ebp)
 movl   $0x0,-0x18(%ebp)
 movl   $0x0,-0x14(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x170>
+je     <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x17e>
+cmpl   $0xfa,-0x1c(%ebp)
+ja     <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x42>
+mov    -0x1c(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x49>
+movl   $0xfa,-0x18(%ebp)
+mov    0xc(%ebp),%eax
+add    $0xf,%eax
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP21STDBSavePowerWarPointSaIS1_EE5beginEv>
 sub    $0x4,%esp
-mov    -0x1c(%ebp),%eax
-cmp    $0xfa,%eax
-jbe    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x5c>
-movl   $0xfa,-0x18(%ebp)
-jmp    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x62>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    0xc(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x132>
-mov    -0x18(%ebp),%eax
-cmp    -0x14(%ebp),%eax
-jl     <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x166>
+jmp    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x12b>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP21STDBSavePowerWarPointSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%edx
 mov    -0x14(%ebp),%eax
 shl    $0x3,%eax
-add    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    (%edx),%edx
-mov    %edx,(%eax)
+add    %eax,%edx
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    -0x14(%ebp),%eax
-shl    $0x3,%eax
+add    %eax,%eax
+add    $0x1,%eax
+shl    $0x2,%eax
 add    -0x10(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    0x4(%edx),%edx
-mov    %edx,0x4(%eax)
+mov    %edx,(%eax)
 mov    -0xc(%ebp),%eax
 mov    0x4(%eax),%esi
 mov    -0xc(%ebp),%eax
 mov    (%eax),%ebx
 movl   $0x16b,0x8(%esp)
 movl   $&_ZZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_RewardE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"INTERVAL SAVE - GUILD:%d, POINT:%d",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo25DeleteDBSavePowerWarPointEP21STDBSavePowerWarPoint>
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%ecx
 lea    -0x3c(%ebp),%eax
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP21STDBSavePowerWarPointSaIS1_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS1_S3_EE>
 sub    $0x4,%esp
 mov    -0x3c(%ebp),%eax
 mov    %eax,-0x2c(%ebp)
 addl   $0x1,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP21STDBSavePowerWarPointSaIS1_EE3endEv>
 sub    $0x4,%esp
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP21STDBSavePowerWarPointSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-jne    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x70>
-jmp    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x167>
-nop
+je     <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x168>
+mov    -0x14(%ebp),%eax
+cmp    -0x18(%ebp),%eax
+jg     <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x168>
+mov    $0x1,%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x16d>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward+0x6f>
+mov    -0x18(%ebp),%edx
 mov    0xc(%ebp),%eax
-mov    -0x18(%ebp),%edx
 mov    %edx,0xb(%eax)
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::MakePacketDBPowerWarPoint(Packet_DB_Save_Power_War_Point_Reward*) */

void __thiscall
CPowerWarGuildInfo::
_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward
          (CPowerWarGuildInfo *this,Packet_DB_Save_Power_War_Point_Reward *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 local_40 [4];
  undefined4 local_30;
  __normal_iterator local_2c [4];
  CMyFileLog local_28 [8];
  uint local_20;
  uint local_1c;
  int local_18;
  Packet_DB_Save_Power_War_Point_Reward *local_14;
  STDBSavePowerWarPoint *local_10;
  
  local_20 = std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::size
                       ((vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>> *)
                        (this + 0x28));
  local_1c = 0;
  local_18 = 0;
  if (local_20 != 0) {
    std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::begin();
    if (local_20 < 0xfb) {
      local_1c = local_20;
    }
    else {
      local_1c = 0xfa;
    }
    local_14 = param_1 + 0xf;
    while( true ) {
      std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::end();
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,local_2c);
      if ((!bVar3) || ((int)local_1c < local_18)) break;
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<STDBSavePowerWarPoint**,std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>>
                      ::operator*((__normal_iterator<STDBSavePowerWarPoint**,std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>>
                                   *)&local_30);
      local_10 = (STDBSavePowerWarPoint *)*piVar4;
      *(undefined4 *)(local_14 + local_18 * 8) = *(undefined4 *)local_10;
      *(undefined4 *)(local_14 + local_18 * 8 + 4) = *(undefined4 *)(local_10 + 4);
      uVar1 = *(undefined4 *)(local_10 + 4);
      uVar2 = *(undefined4 *)local_10;
      CMyFileLog::CMyFileLog(local_28,"MakePacketDBPowerWarPoint",0x16b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/Power","INTERVAL SAVE - GUILD:%d, POINT:%d",uVar2,uVar1);
      DeleteDBSavePowerWarPoint(this,local_10);
      std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::erase
                (local_40,this + 0x28,local_30);
      local_30 = local_40[0];
      local_18 = local_18 + 1;
    }
    *(uint *)(param_1 + 0xb) = local_1c;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 288 行）：

```cpp
void CPowerWarGuildInfo::MakePacketDBPowerWarPoint(Packet_DB_Save_Power_War_Point_Reward* pkt)
{
    size_t n = m_vec2.size();
    int count = 0;
    int i = 0;
    if (n != 0)
    {
        if (n <= 0xfa)
        {
            count = (int)n;
        }
        else
        {
            count = 0xfa;
        }
        char* out = (char*)pkt + 0xf;
        for (std::vector<STDBSavePowerWarPoint*>::iterator it = m_vec2.begin();
             it != m_vec2.end() && i <= count; )
        {
            STDBSavePowerWarPoint* p = *it;
            *(unsigned int*)(out + i * 8) = p->m_field[0];
            *(unsigned int*)(out + i * 8 + 4) = p->m_field[1];
            DNF_LOG_SCOPE_LINE(0x16b,"./log/Power", "INTERVAL SAVE - GUILD:%d, POINT:%d",
                p->m_field[0], p->m_field[1]);
            DeleteDBSavePowerWarPoint(p);
            it = m_vec2.erase(it);
            i++;
        }
        pkt->m_b = (unsigned int)count;
    }
}
```
