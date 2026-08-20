# Connect

`_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE`

`CDBConnector::Connect(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >)`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec760  _ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE
#           CDBConnector::Connect(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >)
# range [0x080ec760, 0x080ec8f7]
080ec760 +0x000:  push   %ebp
080ec761 +0x001:  mov    %esp,%ebp
080ec763 +0x003:  push   %edi
080ec764 +0x004:  push   %esi
080ec765 +0x005:  push   %ebx
080ec766 +0x006:  sub    $0x5c,%esp
080ec769 +0x009:  lea    -0x30(%ebp),%eax
080ec76c +0x00c:  mov    0xc(%ebp),%edx
080ec76f +0x00f:  mov    %edx,0x4(%esp)
080ec773 +0x013:  mov    %eax,(%esp)
080ec776 +0x016:  call   080ece6a <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x14f>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x14f
080ec77b +0x01b:  sub    $0x4,%esp
080ec77e +0x01e:  jmp    080ec8b9 <+0x159>
080ec783 +0x023:  lea    -0x30(%ebp),%eax
080ec786 +0x026:  mov    %eax,(%esp)
080ec789 +0x029:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec78e +0x02e:  mov    (%eax),%eax
080ec790 +0x030:  test   %eax,%eax
080ec792 +0x032:  je     080ec7a6 <+0x46>
080ec794 +0x034:  lea    -0x30(%ebp),%eax
080ec797 +0x037:  mov    %eax,(%esp)
080ec79a +0x03a:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec79f +0x03f:  mov    (%eax),%eax
080ec7a1 +0x041:  cmp    $0x5,%eax
080ec7a4 +0x044:  jne    080ec7ad <+0x4d>
080ec7a6 +0x046:  mov    $0x1,%eax
080ec7ab +0x04b:  jmp    080ec7b2 <+0x52>
080ec7ad +0x04d:  mov    $0x0,%eax
080ec7b2 +0x052:  test   %al,%al
080ec7b4 +0x054:  jne    080ec8ad <+0x14d>
080ec7ba +0x05a:  lea    -0x30(%ebp),%eax
080ec7bd +0x05d:  mov    %eax,(%esp)
080ec7c0 +0x060:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec7c5 +0x065:  add    $0x46,%eax
080ec7c8 +0x068:  mov    %eax,-0x40(%ebp)
080ec7cb +0x06b:  lea    -0x30(%ebp),%eax
080ec7ce +0x06e:  mov    %eax,(%esp)
080ec7d1 +0x071:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec7d6 +0x076:  add    $0x1c,%eax
080ec7d9 +0x079:  mov    %eax,-0x3c(%ebp)
080ec7dc +0x07c:  lea    -0x30(%ebp),%eax
080ec7df +0x07f:  mov    %eax,(%esp)
080ec7e2 +0x082:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec7e7 +0x087:  mov    0x18(%eax),%edi
080ec7ea +0x08a:  lea    -0x30(%ebp),%eax
080ec7ed +0x08d:  mov    %eax,(%esp)
080ec7f0 +0x090:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec7f5 +0x095:  add    $0x4,%eax
080ec7f8 +0x098:  mov    %eax,%esi
080ec7fa +0x09a:  lea    -0x30(%ebp),%eax
080ec7fd +0x09d:  mov    %eax,(%esp)
080ec800 +0x0a0:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec805 +0x0a5:  mov    (%eax),%eax
080ec807 +0x0a7:  mov    %eax,%ebx
080ec809 +0x0a9:  movl   $0x1,0x14(%esp)
080ec811 +0x0b1:  movl   $0x1,0x10(%esp)
080ec819 +0x0b9:  movl   $0x9,0xc(%esp)
080ec821 +0x0c1:  movl   $0x4e,0x8(%esp)
080ec829 +0x0c9:  movl   $&_ZZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEEE19__PRETTY_FUNCTION__,0x4(%esp)
080ec831 +0x0d1:  lea    -0x28(%ebp),%eax
080ec834 +0x0d4:  mov    %eax,(%esp)
080ec837 +0x0d7:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
080ec83c +0x0dc:  mov    -0x40(%ebp),%eax
080ec83f +0x0df:  mov    %eax,0x18(%esp)
080ec843 +0x0e3:  mov    -0x3c(%ebp),%eax
080ec846 +0x0e6:  mov    %eax,0x14(%esp)
080ec84a +0x0ea:  mov    %edi,0x10(%esp)
080ec84e +0x0ee:  mov    %esi,0xc(%esp)
080ec852 +0x0f2:  mov    %ebx,0x8(%esp)
080ec856 +0x0f6:  movl   $"\t\t- Open(type:%2d, %s/%d/%s/%s",0x4(%esp)
080ec85e +0x0fe:  lea    -0x28(%ebp),%eax
080ec861 +0x101:  mov    %eax,(%esp)
080ec864 +0x104:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080ec869 +0x109:  lea    -0x30(%ebp),%eax
080ec86c +0x10c:  mov    %eax,(%esp)
080ec86f +0x10f:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec874 +0x114:  lea    0x4(%eax),%ebx
080ec877 +0x117:  lea    -0x30(%ebp),%eax
080ec87a +0x11a:  mov    %eax,(%esp)
080ec87d +0x11d:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec882 +0x122:  mov    (%eax),%eax
080ec884 +0x124:  mov    %ebx,0xc(%esp)
080ec888 +0x128:  movl   $0x0,0x8(%esp)
080ec890 +0x130:  mov    %eax,0x4(%esp)
080ec894 +0x134:  mov    0x8(%ebp),%eax
080ec897 +0x137:  mov    %eax,(%esp)
080ec89a +0x13a:  call   080ec6da <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo>  ; CDBConnector::Open(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&)
080ec89f +0x13f:  xor    $0x1,%eax
080ec8a2 +0x142:  test   %al,%al
080ec8a4 +0x144:  je     080ec8ae <+0x14e>
080ec8a6 +0x146:  mov    $0x0,%eax
080ec8ab +0x14b:  jmp    080ec8ed <+0x18d>
080ec8ad +0x14d:  nop
080ec8ae +0x14e:  lea    -0x30(%ebp),%eax
080ec8b1 +0x151:  mov    %eax,(%esp)
080ec8b4 +0x154:  call   080ececa <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1af>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1af
080ec8b9 +0x159:  lea    -0x2c(%ebp),%eax
080ec8bc +0x15c:  mov    0xc(%ebp),%edx
080ec8bf +0x15f:  mov    %edx,0x4(%esp)
080ec8c3 +0x163:  mov    %eax,(%esp)
080ec8c6 +0x166:  call   080ece90 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x175>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x175
080ec8cb +0x16b:  sub    $0x4,%esp
080ec8ce +0x16e:  lea    -0x2c(%ebp),%eax
080ec8d1 +0x171:  mov    %eax,0x4(%esp)
080ec8d5 +0x175:  lea    -0x30(%ebp),%eax
080ec8d8 +0x178:  mov    %eax,(%esp)
080ec8db +0x17b:  call   080eceb6 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x19b>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x19b
080ec8e0 +0x180:  test   %al,%al
080ec8e2 +0x182:  jne    080ec783 <+0x23>
080ec8e8 +0x188:  mov    $0x1,%eax
080ec8ed +0x18d:  lea    -0xc(%ebp),%esp
080ec8f0 +0x190:  add    $0x0,%esp
080ec8f3 +0x193:  pop    %ebx
080ec8f4 +0x194:  pop    %esi
080ec8f5 +0x195:  pop    %edi
080ec8f6 +0x196:  pop    %ebp
080ec8f7 +0x197:  ret
```

## 反编译 C

```c
// CDBConnector::Connect @ 0x80ec760

/* CDBConnector::Connect(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>,
   std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >) */

undefined4 CDBConnector::Connect(CDBConnector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_34 [4];
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_30 [4];
  cMyTrace local_2c [28];
  
  std::
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  ::begin(local_34);
  do {
    std::
    map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
    ::end(local_30);
    cVar4 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                       local_34,(_Rb_tree_iterator *)local_30);
    if (cVar4 == '\0') {
      return 1;
    }
    piVar5 = (int *)std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::
                    operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>
                                *)local_34);
    if ((*piVar5 == 0) ||
       (piVar5 = (int *)std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::
                        operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>
                                    *)local_34), *piVar5 == 5)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      iVar6 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      iVar7 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      iVar8 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      uVar1 = *(undefined4 *)(iVar8 + 0x18);
      iVar8 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      puVar9 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                          local_34);
      uVar2 = *puVar9;
      cMyTrace::cMyTrace(local_2c,"bool CDBConnector::Connect(DBConnInfo)",0x4e,9,true,true);
      cMyTrace::operator()
                (local_2c,"\t\t- Open(type:%2d, %s/%d/%s/%s",uVar2,iVar8 + 4,uVar1,iVar7 + 0x1c,
                 iVar6 + 0x46);
      iVar6 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      puVar9 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                          local_34);
      cVar4 = Open(param_1,*puVar9,0,iVar6 + 4);
      if (cVar4 != '\x01') {
        return 0;
      }
    }
    std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)local_34);
  } while( true );
}
```
