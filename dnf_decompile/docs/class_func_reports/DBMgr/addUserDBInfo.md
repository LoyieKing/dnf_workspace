# addUserDBInfo

`_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE`

`DBMgr::addUserDBInfo(int, DBMgr::stUserDBInfo_t const&)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f4f9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4f9e  _ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE
#           DBMgr::addUserDBInfo(int, DBMgr::stUserDBInfo_t const&)
# range [0x083f4f9e, 0x083f5037]
083f4f9e +0x00:  push   %ebp
083f4f9f +0x01:  mov    %esp,%ebp
083f4fa1 +0x03:  sub    $0x58,%esp
083f4fa4 +0x06:  lea    -0x18(%ebp),%eax
083f4fa7 +0x09:  mov    0x10(%ebp),%edx
083f4faa +0x0c:  mov    %edx,0x8(%esp)
083f4fae +0x10:  lea    0xc(%ebp),%edx
083f4fb1 +0x13:  mov    %edx,0x4(%esp)
083f4fb5 +0x17:  mov    %eax,(%esp)
083f4fb8 +0x1a:  call   083f5bf3 <_GLOBAL__I__ZN5MySQLC2Ev+0x8f4>  ; global constructors keyed to MySQL::MySQL()+0x8f4
083f4fbd +0x1f:  sub    $0x4,%esp
083f4fc0 +0x22:  lea    -0x18(%ebp),%eax
083f4fc3 +0x25:  mov    %eax,0x4(%esp)
083f4fc7 +0x29:  lea    -0x28(%ebp),%eax
083f4fca +0x2c:  mov    %eax,(%esp)
083f4fcd +0x2f:  call   083f5c32 <_GLOBAL__I__ZN5MySQLC2Ev+0x933>  ; global constructors keyed to MySQL::MySQL()+0x933
083f4fd2 +0x34:  mov    0x8(%ebp),%eax
083f4fd5 +0x37:  lea    0xc(%eax),%ecx
083f4fd8 +0x3a:  lea    -0x34(%ebp),%eax
083f4fdb +0x3d:  lea    -0x28(%ebp),%edx
083f4fde +0x40:  mov    %edx,0x8(%esp)
083f4fe2 +0x44:  mov    %ecx,0x4(%esp)
083f4fe6 +0x48:  mov    %eax,(%esp)
083f4fe9 +0x4b:  call   083f5c6e <_GLOBAL__I__ZN5MySQLC2Ev+0x96f>  ; global constructors keyed to MySQL::MySQL()+0x96f
083f4fee +0x50:  sub    $0x4,%esp
083f4ff1 +0x53:  lea    -0x34(%ebp),%eax
083f4ff4 +0x56:  mov    %eax,0x4(%esp)
083f4ff8 +0x5a:  lea    -0x40(%ebp),%eax
083f4ffb +0x5d:  mov    %eax,(%esp)
083f4ffe +0x60:  call   083f5c9a <_GLOBAL__I__ZN5MySQLC2Ev+0x99b>  ; global constructors keyed to MySQL::MySQL()+0x99b
083f5003 +0x65:  movzbl -0x38(%ebp),%eax
083f5007 +0x69:  xor    $0x1,%eax
083f500a +0x6c:  test   %al,%al
083f500c +0x6e:  je     083f5036 <+0x98>
083f500e +0x70:  mov    0x8(%ebp),%eax
083f5011 +0x73:  lea    0xc(%eax),%edx
083f5014 +0x76:  lea    0xc(%ebp),%eax
083f5017 +0x79:  mov    %eax,0x4(%esp)
083f501b +0x7d:  mov    %edx,(%esp)
083f501e +0x80:  call   083f5cd4 <_GLOBAL__I__ZN5MySQLC2Ev+0x9d5>  ; global constructors keyed to MySQL::MySQL()+0x9d5
083f5023 +0x85:  mov    0x10(%ebp),%edx
083f5026 +0x88:  mov    (%edx),%ecx
083f5028 +0x8a:  mov    %ecx,(%eax)
083f502a +0x8c:  mov    0x4(%edx),%ecx
083f502d +0x8f:  mov    %ecx,0x4(%eax)
083f5030 +0x92:  mov    0x8(%edx),%edx
083f5033 +0x95:  mov    %edx,0x8(%eax)
083f5036 +0x98:  leave
083f5037 +0x99:  ret
```

## 反编译 C

```c
// DBMgr::addUserDBInfo @ 0x83f4f9e

/* DBMgr::addUserDBInfo(int, DBMgr::stUserDBInfo_t const&) */

void __thiscall DBMgr::addUserDBInfo(DBMgr *this,int param_1,stUserDBInfo_t *param_2)

{
  undefined4 *puVar1;
  pair<__gnu_cxx::_Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>,bool>
  local_44 [8];
  char local_3c;
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_38 [12];
  pair<int_const,DBMgr::stUserDBInfo_t> local_2c [16];
  int local_1c [6];
  
  std::make_pair<int&,DBMgr::stUserDBInfo_t_const&>(local_1c,(stUserDBInfo_t *)&param_1);
  std::pair<int_const,DBMgr::stUserDBInfo_t>::pair<int,DBMgr::stUserDBInfo_t>
            (local_2c,(pair *)local_1c);
  __gnu_cxx::
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::insert(local_38,this + 0xc);
  std::
  pair<__gnu_cxx::_Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>,bool>
  ::
  pair<__gnu_cxx::_Hashtable_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>,bool>
            (local_44,local_38);
  if (local_3c != '\x01') {
    puVar1 = (undefined4 *)
             __gnu_cxx::
             hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
             ::operator[]((hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
                           *)(this + 0xc),&param_1);
    *puVar1 = *(undefined4 *)param_2;
    puVar1[1] = *(undefined4 *)(param_2 + 4);
    puVar1[2] = *(undefined4 *)(param_2 + 8);
  }
  return;
}
```
