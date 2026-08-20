# InsertValueStatistic

`_ZN15CValueStatistic20InsertValueStatisticEv`

`CValueStatistic::InsertValueStatistic()`

| 类 | 地址 |
|---|---|
| `CValueStatistic` | `0x0860d8a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860d8a4  _ZN15CValueStatistic20InsertValueStatisticEv
#           CValueStatistic::InsertValueStatistic()
# range [0x0860d8a4, 0x0860da16]
0860d8a4 +0x000:  push   %ebp
0860d8a5 +0x001:  mov    %esp,%ebp
0860d8a7 +0x003:  push   %ebx
0860d8a8 +0x004:  sub    $0xc4,%esp
0860d8ae +0x00a:  mov    0x8(%ebp),%edx
0860d8b1 +0x00d:  lea    -0x24(%ebp),%eax
0860d8b4 +0x010:  mov    %edx,0x4(%esp)
0860d8b8 +0x014:  mov    %eax,(%esp)
0860d8bb +0x017:  call   086113d0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x144e>  ; global constructors keyed to Statistics::Statistics()+0x144e
0860d8c0 +0x01c:  sub    $0x4,%esp
0860d8c3 +0x01f:  jmp    0860d9de <+0x13a>
0860d8c8 +0x024:  lea    -0x24(%ebp),%eax
0860d8cb +0x027:  mov    %eax,(%esp)
0860d8ce +0x02a:  call   0861130c <_GLOBAL__I__ZN10StatisticsC2Ev+0x138a>  ; global constructors keyed to Statistics::Statistics()+0x138a
0860d8d3 +0x02f:  mov    (%eax),%eax
0860d8d5 +0x031:  mov    %eax,-0x1c(%ebp)
0860d8d8 +0x034:  lea    -0x24(%ebp),%eax
0860d8db +0x037:  mov    %eax,(%esp)
0860d8de +0x03a:  call   0861130c <_GLOBAL__I__ZN10StatisticsC2Ev+0x138a>  ; global constructors keyed to Statistics::Statistics()+0x138a
0860d8e3 +0x03f:  add    $0x4,%eax
0860d8e6 +0x042:  mov    %eax,-0x18(%ebp)
0860d8e9 +0x045:  movl   $0x1,-0x14(%ebp)
0860d8f0 +0x04c:  jmp    0860d9b9 <+0x115>
0860d8f5 +0x051:  movb   $0x0,-0xd(%ebp)
0860d8f9 +0x055:  movl   $0x0,-0xc(%ebp)
0860d900 +0x05c:  jmp    0860d928 <+0x84>
0860d902 +0x05e:  mov    -0x14(%ebp),%eax
0860d905 +0x061:  mov    -0xc(%ebp),%ebx
0860d908 +0x064:  mov    -0x18(%ebp),%ecx
0860d90b +0x067:  add    %eax,%eax
0860d90d +0x069:  mov    %eax,%edx
0860d90f +0x06b:  shl    $0x4,%edx
0860d912 +0x06e:  sub    %eax,%edx
0860d914 +0x070:  lea    (%edx,%ebx,1),%eax
0860d917 +0x073:  mov    (%ecx,%eax,4),%eax
0860d91a +0x076:  test   %eax,%eax
0860d91c +0x078:  je     0860d924 <+0x80>
0860d91e +0x07a:  movb   $0x1,-0xd(%ebp)
0860d922 +0x07e:  jmp    0860d933 <+0x8f>
0860d924 +0x080:  addl   $0x1,-0xc(%ebp)
0860d928 +0x084:  cmpl   $0x1d,-0xc(%ebp)
0860d92c +0x088:  setle  %al
0860d92f +0x08b:  test   %al,%al
0860d931 +0x08d:  jne    0860d902 <+0x5e>
0860d933 +0x08f:  movzbl -0xd(%ebp),%eax
0860d937 +0x093:  xor    $0x1,%eax
0860d93a +0x096:  test   %al,%al
0860d93c +0x098:  jne    0860d9b4 <+0x110>
0860d93e +0x09a:  lea    -0xaa(%ebp),%eax
0860d944 +0x0a0:  mov    %eax,(%esp)
0860d947 +0x0a3:  call   086100ca <_GLOBAL__I__ZN10StatisticsC2Ev+0x148>  ; global constructors keyed to Statistics::Statistics()+0x148
0860d94c +0x0a8:  mov    -0x14(%ebp),%eax
0860d94f +0x0ab:  mov    %eax,-0xa0(%ebp)
0860d955 +0x0b1:  mov    -0x14(%ebp),%eax
0860d958 +0x0b4:  shl    $0x3,%eax
0860d95b +0x0b7:  mov    %eax,%edx
0860d95d +0x0b9:  shl    $0x4,%edx
0860d960 +0x0bc:  sub    %eax,%edx
0860d962 +0x0be:  mov    %edx,%eax
0860d964 +0x0c0:  add    -0x18(%ebp),%eax
0860d967 +0x0c3:  movl   $0x78,0x8(%esp)
0860d96f +0x0cb:  mov    %eax,0x4(%esp)
0860d973 +0x0cf:  lea    -0xaa(%ebp),%eax
0860d979 +0x0d5:  add    $0xe,%eax
0860d97c +0x0d8:  mov    %eax,(%esp)
0860d97f +0x0db:  call   0807d8a0 <_init+0x198>
0860d984 +0x0e0:  lea    -0xaa(%ebp),%ebx
0860d98a +0x0e6:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0860d98f +0x0eb:  mov    -0x1c(%ebp),%edx
0860d992 +0x0ee:  mov    %edx,0x4(%esp)
0860d996 +0x0f2:  mov    %eax,(%esp)
0860d999 +0x0f5:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860d99e +0x0fa:  movl   $0x86,0x8(%esp)
0860d9a6 +0x102:  mov    %ebx,0x4(%esp)
0860d9aa +0x106:  mov    %eax,(%esp)
0860d9ad +0x109:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860d9b2 +0x10e:  jmp    0860d9b5 <+0x111>
0860d9b4 +0x110:  nop
0860d9b5 +0x111:  addl   $0x1,-0x14(%ebp)
0860d9b9 +0x115:  cmpl   $0x46,-0x14(%ebp)
0860d9bd +0x119:  setle  %al
0860d9c0 +0x11c:  test   %al,%al
0860d9c2 +0x11e:  jne    0860d8f5 <+0x51>
0860d9c8 +0x124:  mov    -0x18(%ebp),%eax
0860d9cb +0x127:  mov    %eax,(%esp)
0860d9ce +0x12a:  call   08610320 <_GLOBAL__I__ZN10StatisticsC2Ev+0x39e>  ; global constructors keyed to Statistics::Statistics()+0x39e
0860d9d3 +0x12f:  lea    -0x24(%ebp),%eax
0860d9d6 +0x132:  mov    %eax,(%esp)
0860d9d9 +0x135:  call   086113f6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1474>  ; global constructors keyed to Statistics::Statistics()+0x1474
0860d9de +0x13a:  mov    0x8(%ebp),%edx
0860d9e1 +0x13d:  lea    -0x20(%ebp),%eax
0860d9e4 +0x140:  mov    %edx,0x4(%esp)
0860d9e8 +0x144:  mov    %eax,(%esp)
0860d9eb +0x147:  call   086112d2 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1350>  ; global constructors keyed to Statistics::Statistics()+0x1350
0860d9f0 +0x14c:  sub    $0x4,%esp
0860d9f3 +0x14f:  lea    -0x20(%ebp),%eax
0860d9f6 +0x152:  mov    %eax,0x4(%esp)
0860d9fa +0x156:  lea    -0x24(%ebp),%eax
0860d9fd +0x159:  mov    %eax,(%esp)
0860da00 +0x15c:  call   086112f8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1376>  ; global constructors keyed to Statistics::Statistics()+0x1376
0860da05 +0x161:  test   %al,%al
0860da07 +0x163:  jne    0860d8c8 <+0x24>
0860da0d +0x169:  mov    $0x1,%eax
0860da12 +0x16e:  mov    -0x4(%ebp),%ebx
0860da15 +0x171:  leave
0860da16 +0x172:  ret
```

## 反编译 C

```c
// CValueStatistic::InsertValueStatistic @ 0x860d8a4

/* CValueStatistic::InsertValueStatistic() */

undefined4 CValueStatistic::InsertValueStatistic(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  CStatisticServerProxy *this;
  Packet_Value_Statistic local_ae [10];
  int local_a4;
  undefined1 auStack_a0 [120];
  map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
  local_28 [4];
  map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
  local_24 [4];
  undefined4 local_20;
  stValueStatistic *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  std::
  map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
  ::begin(local_28);
  do {
    std::
    map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
    ::end(local_24);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      return 1;
    }
    puVar2 = (undefined4 *)
             std::
             _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
             ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                           *)local_28);
    local_20 = *puVar2;
    iVar3 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
            ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                          *)local_28);
    local_1c = (stValueStatistic *)(iVar3 + 4);
    for (local_18 = 1; local_18 < 0x47; local_18 = local_18 + 1) {
      local_11 = '\0';
      for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
        if (*(int *)(local_1c + (local_18 * 0x1e + local_10) * 4) != 0) {
          local_11 = '\x01';
          break;
        }
      }
      if (local_11 == '\x01') {
        Packet_Value_Statistic::Packet_Value_Statistic(local_ae);
        local_a4 = local_18;
        memcpy(auStack_a0,local_1c + local_18 * 0x78,0x78);
        this = (CStatisticServerProxy *)
               CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                         (GlobalData::s_statistic_proxy_mgr,local_20);
        CStatisticServerProxy::SendPacket(this,(char *)local_ae,0x86);
      }
    }
    stValueStatistic::reset(local_1c);
    std::_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>::
    operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                *)local_28);
  } while( true );
}
```
