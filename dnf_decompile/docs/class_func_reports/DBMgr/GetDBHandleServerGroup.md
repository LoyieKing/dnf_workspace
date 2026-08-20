# GetDBHandleServerGroup

`_ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP`

`DBMgr::GetDBHandleServerGroup(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f506c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f506c  _ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP
#           DBMgr::GetDBHandleServerGroup(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
# range [0x083f506c, 0x083f514f]
083f506c +0x00:  push   %ebp
083f506d +0x01:  mov    %esp,%ebp
083f506f +0x03:  sub    $0x38,%esp
083f5072 +0x06:  mov    0x10(%ebp),%eax
083f5075 +0x09:  test   %eax,%eax
083f5077 +0x0b:  jne    083f5127 <+0xbb>
083f507d +0x11:  mov    0x8(%ebp),%eax
083f5080 +0x14:  lea    0x4(%eax),%ecx
083f5083 +0x17:  mov    0x8(%ebp),%eax
083f5086 +0x1a:  lea    0xc(%eax),%edx
083f5089 +0x1d:  lea    -0x20(%ebp),%eax
083f508c +0x20:  mov    %ecx,0x8(%esp)
083f5090 +0x24:  mov    %edx,0x4(%esp)
083f5094 +0x28:  mov    %eax,(%esp)
083f5097 +0x2b:  call   083f5b5e <_GLOBAL__I__ZN5MySQLC2Ev+0x85f>  ; global constructors keyed to MySQL::MySQL()+0x85f
083f509c +0x30:  sub    $0x4,%esp
083f509f +0x33:  lea    -0x20(%ebp),%eax
083f50a2 +0x36:  mov    %eax,0x4(%esp)
083f50a6 +0x3a:  lea    -0x28(%ebp),%eax
083f50a9 +0x3d:  mov    %eax,(%esp)
083f50ac +0x40:  call   083f5b8a <_GLOBAL__I__ZN5MySQLC2Ev+0x88b>  ; global constructors keyed to MySQL::MySQL()+0x88b
083f50b1 +0x45:  mov    0x8(%ebp),%eax
083f50b4 +0x48:  lea    0xc(%eax),%edx
083f50b7 +0x4b:  lea    -0x10(%ebp),%eax
083f50ba +0x4e:  mov    %edx,0x4(%esp)
083f50be +0x52:  mov    %eax,(%esp)
083f50c1 +0x55:  call   083f5ba6 <_GLOBAL__I__ZN5MySQLC2Ev+0x8a7>  ; global constructors keyed to MySQL::MySQL()+0x8a7
083f50c6 +0x5a:  sub    $0x4,%esp
083f50c9 +0x5d:  lea    -0x10(%ebp),%eax
083f50cc +0x60:  mov    %eax,0x4(%esp)
083f50d0 +0x64:  lea    -0x18(%ebp),%eax
083f50d3 +0x67:  mov    %eax,(%esp)
083f50d6 +0x6a:  call   083f5b8a <_GLOBAL__I__ZN5MySQLC2Ev+0x88b>  ; global constructors keyed to MySQL::MySQL()+0x88b
083f50db +0x6f:  lea    -0x18(%ebp),%eax
083f50de +0x72:  mov    %eax,0x4(%esp)
083f50e2 +0x76:  lea    -0x28(%ebp),%eax
083f50e5 +0x79:  mov    %eax,(%esp)
083f50e8 +0x7c:  call   083f5d3a <_GLOBAL__I__ZN5MySQLC2Ev+0xa3b>  ; global constructors keyed to MySQL::MySQL()+0xa3b
083f50ed +0x81:  test   %al,%al
083f50ef +0x83:  je     083f5116 <+0xaa>
083f50f1 +0x85:  mov    0x8(%ebp),%eax
083f50f4 +0x88:  mov    0x4(%eax),%eax
083f50f7 +0x8b:  cmp    $0xffffffff,%eax
083f50fa +0x8e:  jne    083f510f <+0xa3>
083f50fc +0x90:  mov    0x8(%ebp),%eax
083f50ff +0x93:  mov    (%eax),%edx
083f5101 +0x95:  mov    0xc(%ebp),%eax
083f5104 +0x98:  imul   $0x4208c,%eax,%eax
083f510a +0x9e:  lea    (%edx,%eax,1),%eax
083f510d +0xa1:  jmp    083f5114 <+0xa8>
083f510f +0xa3:  mov    $0x0,%eax
083f5114 +0xa8:  jmp    083f514d <+0xe1>
083f5116 +0xaa:  lea    -0x28(%ebp),%eax
083f5119 +0xad:  mov    %eax,(%esp)
083f511c +0xb0:  call   083f5be0 <_GLOBAL__I__ZN5MySQLC2Ev+0x8e1>  ; global constructors keyed to MySQL::MySQL()+0x8e1
083f5121 +0xb5:  mov    0xc(%eax),%eax
083f5124 +0xb8:  mov    %eax,0x10(%ebp)
083f5127 +0xbb:  mov    0x8(%ebp),%eax
083f512a +0xbe:  lea    0x20(%eax),%edx
083f512d +0xc1:  lea    0x10(%ebp),%eax
083f5130 +0xc4:  mov    %eax,0x4(%esp)
083f5134 +0xc8:  mov    %edx,(%esp)
083f5137 +0xcb:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f513c +0xd0:  lea    0xc(%ebp),%edx
083f513f +0xd3:  mov    %edx,0x4(%esp)
083f5143 +0xd7:  mov    %eax,(%esp)
083f5146 +0xda:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f514b +0xdf:  mov    (%eax),%eax
083f514d +0xe1:  leave
083f514e +0xe2:  ret
083f514f +0xe3:  nop
```

## 反编译 C

```c
// DBMgr::GetDBHandleServerGroup @ 0x83f506c

/* DBMgr::GetDBHandleServerGroup(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP) */

int __thiscall DBMgr::GetDBHandleServerGroup(DBMgr *this,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  *this_00;
  int *piVar3;
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_2c [8];
  _Hashtable_iterator local_24 [8];
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_1c [8];
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_14 [16];
  
  if (param_3 == 0) {
    __gnu_cxx::
    hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::find((int *)local_24);
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::_Hashtable_const_iterator(local_2c,local_24);
    __gnu_cxx::
    hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::end(local_14);
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::_Hashtable_const_iterator(local_1c,(_Hashtable_iterator *)local_14);
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
            ::operator==(local_2c,(_Hashtable_const_iterator *)local_1c);
    if (cVar1 != '\0') {
      if (*(int *)(this + 4) == -1) {
        return *(int *)this + param_2 * 0x4208c;
      }
      return 0;
    }
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
            ::operator->(local_2c);
    param_3 = *(int *)(iVar2 + 0xc);
  }
  this_00 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
             *)std::
               map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
               ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                             *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_3);
  piVar3 = (int *)std::
                  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                  ::operator[](this_00,(ENUM_DB_HANDLE_IDX *)&param_2);
  return *piVar3;
}
```
