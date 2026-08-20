# GetServerType

`_ZN5DBMgr13GetServerTypeEi`

`DBMgr::GetServerType(int)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f4f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4f10  _ZN5DBMgr13GetServerTypeEi
#           DBMgr::GetServerType(int)
# range [0x083f4f10, 0x083f4f9d]
083f4f10 +0x00:  push   %ebp
083f4f11 +0x01:  mov    %esp,%ebp
083f4f13 +0x03:  sub    $0x38,%esp
083f4f16 +0x06:  mov    0x8(%ebp),%eax
083f4f19 +0x09:  lea    0xc(%eax),%ecx
083f4f1c +0x0c:  lea    -0x20(%ebp),%eax
083f4f1f +0x0f:  lea    0xc(%ebp),%edx
083f4f22 +0x12:  mov    %edx,0x8(%esp)
083f4f26 +0x16:  mov    %ecx,0x4(%esp)
083f4f2a +0x1a:  mov    %eax,(%esp)
083f4f2d +0x1d:  call   083f5b5e <_GLOBAL__I__ZN5MySQLC2Ev+0x85f>  ; global constructors keyed to MySQL::MySQL()+0x85f
083f4f32 +0x22:  sub    $0x4,%esp
083f4f35 +0x25:  lea    -0x20(%ebp),%eax
083f4f38 +0x28:  mov    %eax,0x4(%esp)
083f4f3c +0x2c:  lea    -0x28(%ebp),%eax
083f4f3f +0x2f:  mov    %eax,(%esp)
083f4f42 +0x32:  call   083f5b8a <_GLOBAL__I__ZN5MySQLC2Ev+0x88b>  ; global constructors keyed to MySQL::MySQL()+0x88b
083f4f47 +0x37:  mov    0x8(%ebp),%eax
083f4f4a +0x3a:  lea    0xc(%eax),%edx
083f4f4d +0x3d:  lea    -0x10(%ebp),%eax
083f4f50 +0x40:  mov    %edx,0x4(%esp)
083f4f54 +0x44:  mov    %eax,(%esp)
083f4f57 +0x47:  call   083f5ba6 <_GLOBAL__I__ZN5MySQLC2Ev+0x8a7>  ; global constructors keyed to MySQL::MySQL()+0x8a7
083f4f5c +0x4c:  sub    $0x4,%esp
083f4f5f +0x4f:  lea    -0x10(%ebp),%eax
083f4f62 +0x52:  mov    %eax,0x4(%esp)
083f4f66 +0x56:  lea    -0x18(%ebp),%eax
083f4f69 +0x59:  mov    %eax,(%esp)
083f4f6c +0x5c:  call   083f5b8a <_GLOBAL__I__ZN5MySQLC2Ev+0x88b>  ; global constructors keyed to MySQL::MySQL()+0x88b
083f4f71 +0x61:  lea    -0x18(%ebp),%eax
083f4f74 +0x64:  mov    %eax,0x4(%esp)
083f4f78 +0x68:  lea    -0x28(%ebp),%eax
083f4f7b +0x6b:  mov    %eax,(%esp)
083f4f7e +0x6e:  call   083f5bcc <_GLOBAL__I__ZN5MySQLC2Ev+0x8cd>  ; global constructors keyed to MySQL::MySQL()+0x8cd
083f4f83 +0x73:  test   %al,%al
083f4f85 +0x75:  je     083f4f97 <+0x87>
083f4f87 +0x77:  lea    -0x28(%ebp),%eax
083f4f8a +0x7a:  mov    %eax,(%esp)
083f4f8d +0x7d:  call   083f5be0 <_GLOBAL__I__ZN5MySQLC2Ev+0x8e1>  ; global constructors keyed to MySQL::MySQL()+0x8e1
083f4f92 +0x82:  mov    0xc(%eax),%eax
083f4f95 +0x85:  jmp    083f4f9c <+0x8c>
083f4f97 +0x87:  mov    $0x0,%eax
083f4f9c +0x8c:  leave
083f4f9d +0x8d:  ret
```

## 反编译 C

```c
// DBMgr::GetServerType @ 0x83f4f10

/* DBMgr::GetServerType(int) */

undefined4 DBMgr::GetServerType(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_2c [8];
  _Hashtable_iterator local_24 [8];
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_1c [8];
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_14 [16];
  
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
          ::operator!=(local_2c,(_Hashtable_const_iterator *)local_1c);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
            ::operator->(local_2c);
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
  return uVar3;
}
```
