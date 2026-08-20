# AddDBLogItem

`_ZN5CUser12AddDBLogItemEjj20ENUM_DBLOG_ITEM_TYPE`

`CUser::AddDBLogItem(unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086893ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086893ac  _ZN5CUser12AddDBLogItemEjj20ENUM_DBLOG_ITEM_TYPE
#           CUser::AddDBLogItem(unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)
# range [0x086893ac, 0x08689493]
086893ac +0x00:  push   %ebp
086893ad +0x01:  mov    %esp,%ebp
086893af +0x03:  sub    $0x38,%esp
086893b2 +0x06:  mov    0x8(%ebp),%eax
086893b5 +0x09:  lea    0x8cf74(%eax),%edx
086893bb +0x0f:  lea    -0x14(%ebp),%eax
086893be +0x12:  mov    %edx,0x4(%esp)
086893c2 +0x16:  mov    %eax,(%esp)
086893c5 +0x19:  call   0869c7c4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9019>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9019
086893ca +0x1e:  sub    $0x4,%esp
086893cd +0x21:  jmp    0868941c <+0x70>
086893cf +0x23:  lea    -0x14(%ebp),%eax
086893d2 +0x26:  mov    %eax,(%esp)
086893d5 +0x29:  call   0869c86e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x90c3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x90c3
086893da +0x2e:  mov    (%eax),%eax
086893dc +0x30:  cmp    0xc(%ebp),%eax
086893df +0x33:  sete   %al
086893e2 +0x36:  test   %al,%al
086893e4 +0x38:  je     086893ff <+0x53>
086893e6 +0x3a:  lea    -0x14(%ebp),%eax
086893e9 +0x3d:  mov    %eax,(%esp)
086893ec +0x40:  call   0869c86e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x90c3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x90c3
086893f1 +0x45:  mov    0x4(%eax),%edx
086893f4 +0x48:  add    0x10(%ebp),%edx
086893f7 +0x4b:  mov    %edx,0x4(%eax)
086893fa +0x4e:  jmp    08689492 <+0xe6>
086893ff +0x53:  lea    -0xc(%ebp),%eax
08689402 +0x56:  movl   $0x0,0x8(%esp)
0868940a +0x5e:  lea    -0x14(%ebp),%edx
0868940d +0x61:  mov    %edx,0x4(%esp)
08689411 +0x65:  mov    %eax,(%esp)
08689414 +0x68:  call   0869c83a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x908f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x908f
08689419 +0x6d:  sub    $0x4,%esp
0868941c +0x70:  mov    0x8(%ebp),%eax
0868941f +0x73:  lea    0x8cf74(%eax),%edx
08689425 +0x79:  lea    -0x10(%ebp),%eax
08689428 +0x7c:  mov    %edx,0x4(%esp)
0868942c +0x80:  mov    %eax,(%esp)
0868942f +0x83:  call   0869c7e8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x903d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x903d
08689434 +0x88:  sub    $0x4,%esp
08689437 +0x8b:  lea    -0x10(%ebp),%eax
0868943a +0x8e:  mov    %eax,0x4(%esp)
0868943e +0x92:  lea    -0x14(%ebp),%eax
08689441 +0x95:  mov    %eax,(%esp)
08689444 +0x98:  call   0869c80e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9063>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9063
08689449 +0x9d:  test   %al,%al
0868944b +0x9f:  jne    086893cf <+0x23>
0868944d +0xa1:  movl   $0xc,0x8(%esp)
08689455 +0xa9:  movl   $0x0,0x4(%esp)
0868945d +0xb1:  lea    -0x20(%ebp),%eax
08689460 +0xb4:  mov    %eax,(%esp)
08689463 +0xb7:  call   0807dcc0 <_init+0x5b8>
08689468 +0xbc:  mov    0xc(%ebp),%eax
0868946b +0xbf:  mov    %eax,-0x20(%ebp)
0868946e +0xc2:  mov    0x10(%ebp),%eax
08689471 +0xc5:  mov    %eax,-0x1c(%ebp)
08689474 +0xc8:  mov    0x14(%ebp),%eax
08689477 +0xcb:  mov    %eax,-0x18(%ebp)
0868947a +0xce:  mov    0x8(%ebp),%eax
0868947d +0xd1:  lea    0x8cf74(%eax),%edx
08689483 +0xd7:  lea    -0x20(%ebp),%eax
08689486 +0xda:  mov    %eax,0x4(%esp)
0868948a +0xde:  mov    %edx,(%esp)
0868948d +0xe1:  call   0869c878 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x90cd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x90cd
08689492 +0xe6:  leave
08689493 +0xe7:  ret
```

## 反编译 C

```c
// CUser::AddDBLogItem @ 0x86893ac

/* CUser::AddDBLogItem(unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE) */

void __thiscall CUser::AddDBLogItem(CUser *this,int param_1,int param_2,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_24;
  int local_20;
  undefined4 local_1c;
  __normal_iterator<CUser::_DBLogItemInfo*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<CUser::_DBLogItemInfo*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
  local_10 [12];
  
  std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>::begin();
  while( true ) {
    std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      memset(&local_24,0,0xc);
      local_24 = param_1;
      local_20 = param_2;
      local_1c = param_4;
      std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>::push_back
                ((vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>> *)
                 (this + 0x8cf74),(_DBLogItemInfo *)&local_24);
      return;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<CUser::_DBLogItemInfo*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
                    ::operator->(local_18);
    if (*piVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<CUser::_DBLogItemInfo*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
    ::operator++(local_10,(int)local_18);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<CUser::_DBLogItemInfo*,std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>>
          ::operator->(local_18);
  *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + param_2;
  return;
}
```
