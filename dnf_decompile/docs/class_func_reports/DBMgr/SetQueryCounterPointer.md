# SetQueryCounterPointer

`_ZN5DBMgr22SetQueryCounterPointerEP13CQueryCounter`

`DBMgr::SetQueryCounterPointer(CQueryCounter*)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f5150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f5150  _ZN5DBMgr22SetQueryCounterPointerEP13CQueryCounter
#           DBMgr::SetQueryCounterPointer(CQueryCounter*)
# range [0x083f5150, 0x083f523d]
083f5150 +0x00:  push   %ebp
083f5151 +0x01:  mov    %esp,%ebp
083f5153 +0x03:  sub    $0x38,%esp
083f5156 +0x06:  mov    0x8(%ebp),%eax
083f5159 +0x09:  lea    0x20(%eax),%edx
083f515c +0x0c:  lea    -0x18(%ebp),%eax
083f515f +0x0f:  mov    %edx,0x4(%esp)
083f5163 +0x13:  mov    %eax,(%esp)
083f5166 +0x16:  call   083f57da <_GLOBAL__I__ZN5MySQLC2Ev+0x4db>  ; global constructors keyed to MySQL::MySQL()+0x4db
083f516b +0x1b:  sub    $0x4,%esp
083f516e +0x1e:  jmp    083f520a <+0xba>
083f5173 +0x23:  lea    -0x18(%ebp),%eax
083f5176 +0x26:  mov    %eax,(%esp)
083f5179 +0x29:  call   083f5858 <_GLOBAL__I__ZN5MySQLC2Ev+0x559>  ; global constructors keyed to MySQL::MySQL()+0x559
083f517e +0x2e:  lea    0x4(%eax),%edx
083f5181 +0x31:  lea    -0x1c(%ebp),%eax
083f5184 +0x34:  mov    %edx,0x4(%esp)
083f5188 +0x38:  mov    %eax,(%esp)
083f518b +0x3b:  call   083f5866 <_GLOBAL__I__ZN5MySQLC2Ev+0x567>  ; global constructors keyed to MySQL::MySQL()+0x567
083f5190 +0x40:  sub    $0x4,%esp
083f5193 +0x43:  jmp    083f51c9 <+0x79>
083f5195 +0x45:  lea    -0x1c(%ebp),%eax
083f5198 +0x48:  mov    %eax,(%esp)
083f519b +0x4b:  call   083f58e4 <_GLOBAL__I__ZN5MySQLC2Ev+0x5e5>  ; global constructors keyed to MySQL::MySQL()+0x5e5
083f51a0 +0x50:  mov    0x4(%eax),%eax
083f51a3 +0x53:  mov    %eax,-0xc(%ebp)
083f51a6 +0x56:  cmpl   $0x0,-0xc(%ebp)
083f51aa +0x5a:  je     083f51be <+0x6e>
083f51ac +0x5c:  mov    0xc(%ebp),%eax
083f51af +0x5f:  mov    %eax,0x4(%esp)
083f51b3 +0x63:  mov    -0xc(%ebp),%eax
083f51b6 +0x66:  mov    %eax,(%esp)
083f51b9 +0x69:  call   083f531c <_GLOBAL__I__ZN5MySQLC2Ev+0x1d>  ; global constructors keyed to MySQL::MySQL()+0x1d
083f51be +0x6e:  lea    -0x1c(%ebp),%eax
083f51c1 +0x71:  mov    %eax,(%esp)
083f51c4 +0x74:  call   083f58c6 <_GLOBAL__I__ZN5MySQLC2Ev+0x5c7>  ; global constructors keyed to MySQL::MySQL()+0x5c7
083f51c9 +0x79:  lea    -0x18(%ebp),%eax
083f51cc +0x7c:  mov    %eax,(%esp)
083f51cf +0x7f:  call   083f5858 <_GLOBAL__I__ZN5MySQLC2Ev+0x559>  ; global constructors keyed to MySQL::MySQL()+0x559
083f51d4 +0x84:  lea    0x4(%eax),%edx
083f51d7 +0x87:  lea    -0x10(%ebp),%eax
083f51da +0x8a:  mov    %edx,0x4(%esp)
083f51de +0x8e:  mov    %eax,(%esp)
083f51e1 +0x91:  call   083f588c <_GLOBAL__I__ZN5MySQLC2Ev+0x58d>  ; global constructors keyed to MySQL::MySQL()+0x58d
083f51e6 +0x96:  sub    $0x4,%esp
083f51e9 +0x99:  lea    -0x10(%ebp),%eax
083f51ec +0x9c:  mov    %eax,0x4(%esp)
083f51f0 +0xa0:  lea    -0x1c(%ebp),%eax
083f51f3 +0xa3:  mov    %eax,(%esp)
083f51f6 +0xa6:  call   083f58b2 <_GLOBAL__I__ZN5MySQLC2Ev+0x5b3>  ; global constructors keyed to MySQL::MySQL()+0x5b3
083f51fb +0xab:  test   %al,%al
083f51fd +0xad:  jne    083f5195 <+0x45>
083f51ff +0xaf:  lea    -0x18(%ebp),%eax
083f5202 +0xb2:  mov    %eax,(%esp)
083f5205 +0xb5:  call   083f583a <_GLOBAL__I__ZN5MySQLC2Ev+0x53b>  ; global constructors keyed to MySQL::MySQL()+0x53b
083f520a +0xba:  mov    0x8(%ebp),%eax
083f520d +0xbd:  lea    0x20(%eax),%edx
083f5210 +0xc0:  lea    -0x14(%ebp),%eax
083f5213 +0xc3:  mov    %edx,0x4(%esp)
083f5217 +0xc7:  mov    %eax,(%esp)
083f521a +0xca:  call   083f5800 <_GLOBAL__I__ZN5MySQLC2Ev+0x501>  ; global constructors keyed to MySQL::MySQL()+0x501
083f521f +0xcf:  sub    $0x4,%esp
083f5222 +0xd2:  lea    -0x14(%ebp),%eax
083f5225 +0xd5:  mov    %eax,0x4(%esp)
083f5229 +0xd9:  lea    -0x18(%ebp),%eax
083f522c +0xdc:  mov    %eax,(%esp)
083f522f +0xdf:  call   083f5826 <_GLOBAL__I__ZN5MySQLC2Ev+0x527>  ; global constructors keyed to MySQL::MySQL()+0x527
083f5234 +0xe4:  test   %al,%al
083f5236 +0xe6:  jne    083f5173 <+0x23>
083f523c +0xec:  leave
083f523d +0xed:  ret
```

## 反编译 C

```c
// DBMgr::SetQueryCounterPointer @ 0x83f5150

/* DBMgr::SetQueryCounterPointer(CQueryCounter*) */

void __thiscall DBMgr::SetQueryCounterPointer(DBMgr *this,CQueryCounter *param_1)

{
  char cVar1;
  int iVar2;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  local_20 [4];
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  local_1c [4];
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  local_18 [4];
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  local_14 [4];
  MySQL *local_10;
  
  std::
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                  *)local_1c);
    std::
    map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
    ::begin(local_20);
    while( true ) {
      std::
      _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
      ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                    *)local_1c);
      std::
      map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20);
      local_10 = *(MySQL **)(iVar2 + 4);
      if (local_10 != (MySQL *)0x0) {
        MySQL::SetQueryCounter(local_10,param_1);
      }
      std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20);
    }
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                  *)local_1c);
  }
  return;
}
```
