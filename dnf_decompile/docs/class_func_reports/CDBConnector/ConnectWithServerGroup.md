# ConnectWithServerGroup

`_ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE`

`CDBConnector::ConnectWithServerGroup(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >)`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec8f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec8f8  _ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE
#           CDBConnector::ConnectWithServerGroup(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >)
# range [0x080ec8f8, 0x080ec9c9]
080ec8f8 +0x00:  push   %ebp
080ec8f9 +0x01:  mov    %esp,%ebp
080ec8fb +0x03:  push   %esi
080ec8fc +0x04:  push   %ebx
080ec8fd +0x05:  sub    $0x20,%esp
080ec900 +0x08:  lea    -0x10(%ebp),%eax
080ec903 +0x0b:  mov    0xc(%ebp),%edx
080ec906 +0x0e:  mov    %edx,0x4(%esp)
080ec90a +0x12:  mov    %eax,(%esp)
080ec90d +0x15:  call   080ece6a <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x14f>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x14f
080ec912 +0x1a:  sub    $0x4,%esp
080ec915 +0x1d:  jmp    080ec98c <+0x94>
080ec917 +0x1f:  lea    -0x10(%ebp),%eax
080ec91a +0x22:  mov    %eax,(%esp)
080ec91d +0x25:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec922 +0x2a:  mov    (%eax),%eax
080ec924 +0x2c:  test   %eax,%eax
080ec926 +0x2e:  sete   %al
080ec929 +0x31:  test   %al,%al
080ec92b +0x33:  jne    080ec980 <+0x88>
080ec92d +0x35:  lea    -0x10(%ebp),%eax
080ec930 +0x38:  mov    %eax,(%esp)
080ec933 +0x3b:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec938 +0x40:  lea    0x4(%eax),%esi
080ec93b +0x43:  lea    -0x10(%ebp),%eax
080ec93e +0x46:  mov    %eax,(%esp)
080ec941 +0x49:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec946 +0x4e:  mov    0x168(%eax),%eax
080ec94c +0x54:  mov    %eax,%ebx
080ec94e +0x56:  lea    -0x10(%ebp),%eax
080ec951 +0x59:  mov    %eax,(%esp)
080ec954 +0x5c:  call   080ecee8 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1cd>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1cd
080ec959 +0x61:  mov    (%eax),%eax
080ec95b +0x63:  mov    %esi,0xc(%esp)
080ec95f +0x67:  mov    %ebx,0x8(%esp)
080ec963 +0x6b:  mov    %eax,0x4(%esp)
080ec967 +0x6f:  mov    0x8(%ebp),%eax
080ec96a +0x72:  mov    %eax,(%esp)
080ec96d +0x75:  call   080ec6da <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo>  ; CDBConnector::Open(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&)
080ec972 +0x7a:  xor    $0x1,%eax
080ec975 +0x7d:  test   %al,%al
080ec977 +0x7f:  je     080ec981 <+0x89>
080ec979 +0x81:  mov    $0x0,%eax
080ec97e +0x86:  jmp    080ec9c0 <+0xc8>
080ec980 +0x88:  nop
080ec981 +0x89:  lea    -0x10(%ebp),%eax
080ec984 +0x8c:  mov    %eax,(%esp)
080ec987 +0x8f:  call   080ececa <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1af>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1af
080ec98c +0x94:  lea    -0xc(%ebp),%eax
080ec98f +0x97:  mov    0xc(%ebp),%edx
080ec992 +0x9a:  mov    %edx,0x4(%esp)
080ec996 +0x9e:  mov    %eax,(%esp)
080ec999 +0xa1:  call   080ece90 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x175>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x175
080ec99e +0xa6:  sub    $0x4,%esp
080ec9a1 +0xa9:  lea    -0xc(%ebp),%eax
080ec9a4 +0xac:  mov    %eax,0x4(%esp)
080ec9a8 +0xb0:  lea    -0x10(%ebp),%eax
080ec9ab +0xb3:  mov    %eax,(%esp)
080ec9ae +0xb6:  call   080eceb6 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x19b>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x19b
080ec9b3 +0xbb:  test   %al,%al
080ec9b5 +0xbd:  jne    080ec917 <+0x1f>
080ec9bb +0xc3:  mov    $0x1,%eax
080ec9c0 +0xc8:  lea    -0x8(%ebp),%esp
080ec9c3 +0xcb:  add    $0x0,%esp
080ec9c6 +0xce:  pop    %ebx
080ec9c7 +0xcf:  pop    %esi
080ec9c8 +0xd0:  pop    %ebp
080ec9c9 +0xd1:  ret
```

## 反编译 C

```c
// CDBConnector::ConnectWithServerGroup @ 0x80ec8f8

/* CDBConnector::ConnectWithServerGroup(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo,
   std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> >
   >) */

undefined4 CDBConnector::ConnectWithServerGroup(CDBConnector *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_14 [4];
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_10 [4];
  
  std::
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  ::begin(local_14);
  do {
    std::
    map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
    ::end(local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                       local_14,(_Rb_tree_iterator *)local_10);
    if (cVar2 == '\0') {
      return 1;
    }
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::
                    operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>
                                *)local_14);
    if (*piVar3 != 0) {
      iVar4 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_14);
      iVar5 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_14);
      uVar1 = *(undefined4 *)(iVar5 + 0x168);
      puVar6 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                          local_14);
      cVar2 = Open(param_1,*puVar6,uVar1,iVar4 + 4);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)local_14);
  } while( true );
}
```
