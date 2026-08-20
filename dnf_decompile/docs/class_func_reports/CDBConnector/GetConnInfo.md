# GetConnInfo

`_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE`

`CDBConnector::GetConnInfo(std::map<ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, ENUM_SERVER_GROUP> > >&, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >&)`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec9ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec9ca  _ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE
#           CDBConnector::GetConnInfo(std::map<ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, ENUM_SERVER_GROUP> > >&, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >&)
# range [0x080ec9ca, 0x080eca6b]
080ec9ca +0x00:  push   %ebp
080ec9cb +0x01:  mov    %esp,%ebp
080ec9cd +0x03:  push   %ebx
080ec9ce +0x04:  sub    $0x24,%esp
080ec9d1 +0x07:  lea    -0x10(%ebp),%eax
080ec9d4 +0x0a:  mov    0xc(%ebp),%edx
080ec9d7 +0x0d:  mov    %edx,0x4(%esp)
080ec9db +0x11:  mov    %eax,(%esp)
080ec9de +0x14:  call   080ecef6 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1db>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1db
080ec9e3 +0x19:  sub    $0x4,%esp
080ec9e6 +0x1c:  jmp    080eca36 <+0x6c>
080ec9e8 +0x1e:  lea    -0x10(%ebp),%eax
080ec9eb +0x21:  mov    %eax,(%esp)
080ec9ee +0x24:  call   080ecf74 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x259>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x259
080ec9f3 +0x29:  mov    0x4(%eax),%ebx
080ec9f6 +0x2c:  lea    -0x10(%ebp),%eax
080ec9f9 +0x2f:  mov    %eax,(%esp)
080ec9fc +0x32:  call   080ecf74 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x259>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x259
080eca01 +0x37:  mov    (%eax),%eax
080eca03 +0x39:  mov    0x10(%ebp),%edx
080eca06 +0x3c:  mov    %edx,0xc(%esp)
080eca0a +0x40:  mov    %ebx,0x8(%esp)
080eca0e +0x44:  mov    %eax,0x4(%esp)
080eca12 +0x48:  mov    0x8(%ebp),%eax
080eca15 +0x4b:  mov    %eax,(%esp)
080eca18 +0x4e:  call   080eca6c <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE>  ; CDBConnector::QueryConnInfo(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >&)
080eca1d +0x53:  xor    $0x1,%eax
080eca20 +0x56:  test   %al,%al
080eca22 +0x58:  je     080eca2b <+0x61>
080eca24 +0x5a:  mov    $0x0,%eax
080eca29 +0x5f:  jmp    080eca66 <+0x9c>
080eca2b +0x61:  lea    -0x10(%ebp),%eax
080eca2e +0x64:  mov    %eax,(%esp)
080eca31 +0x67:  call   080ecf56 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x23b>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x23b
080eca36 +0x6c:  lea    -0xc(%ebp),%eax
080eca39 +0x6f:  mov    0xc(%ebp),%edx
080eca3c +0x72:  mov    %edx,0x4(%esp)
080eca40 +0x76:  mov    %eax,(%esp)
080eca43 +0x79:  call   080ecf1c <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x201>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x201
080eca48 +0x7e:  sub    $0x4,%esp
080eca4b +0x81:  lea    -0xc(%ebp),%eax
080eca4e +0x84:  mov    %eax,0x4(%esp)
080eca52 +0x88:  lea    -0x10(%ebp),%eax
080eca55 +0x8b:  mov    %eax,(%esp)
080eca58 +0x8e:  call   080ecf42 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x227>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x227
080eca5d +0x93:  test   %al,%al
080eca5f +0x95:  jne    080ec9e8 <+0x1e>
080eca61 +0x97:  mov    $0x1,%eax
080eca66 +0x9c:  mov    -0x4(%ebp),%ebx
080eca69 +0x9f:  leave
080eca6a +0xa0:  ret
080eca6b +0xa1:  nop
```

## 反编译 C

```c
// CDBConnector::GetConnInfo @ 0x80ec9ca

/* CDBConnector::GetConnInfo(std::map<ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP,
   std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const,
   ENUM_SERVER_GROUP> > >&, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo,
   std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> >
   >&) */

undefined4 __thiscall CDBConnector::GetConnInfo(CDBConnector *this,map *param_1,map *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  local_14 [4];
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  local_10 [8];
  
  std::
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
    ::end(local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>::
            operator!=((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>> *)
                       local_14,(_Rb_tree_iterator *)local_10);
    if (cVar2 == '\0') {
      return 1;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>::
            operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>> *)
                       local_14);
    uVar1 = *(undefined4 *)(iVar3 + 4);
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>::
             operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>> *)
                        local_14);
    cVar2 = QueryConnInfo(this,*puVar4,uVar1,param_2);
    if (cVar2 != '\x01') break;
    std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>::operator++
              ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>> *)local_14)
    ;
  }
  return 0;
}
```
