# get_clear_item

`_ZNK8CDungeon14get_clear_itemEi`

`CDungeon::get_clear_item(int) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834c95c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834c95c  _ZNK8CDungeon14get_clear_itemEi
#           CDungeon::get_clear_item(int) const
# range [0x0834c95c, 0x0834c9ef]
0834c95c +0x00:  push   %ebp
0834c95d +0x01:  mov    %esp,%ebp
0834c95f +0x03:  sub    $0x38,%esp
0834c962 +0x06:  movl   $0x0,-0xc(%ebp)
0834c969 +0x0d:  lea    -0x18(%ebp),%eax
0834c96c +0x10:  mov    %eax,(%esp)
0834c96f +0x13:  call   080c6e9c <_GLOBAL__I_g_ServerString_+0x407>  ; global constructors keyed to g_ServerString_+0x407
0834c974 +0x18:  mov    0xc(%ebp),%eax
0834c977 +0x1b:  add    $0x1,%eax
0834c97a +0x1e:  mov    %eax,-0x14(%ebp)
0834c97d +0x21:  mov    0x8(%ebp),%eax
0834c980 +0x24:  lea    0x1c(%eax),%ecx
0834c983 +0x27:  lea    -0x1c(%ebp),%eax
0834c986 +0x2a:  lea    -0x14(%ebp),%edx
0834c989 +0x2d:  mov    %edx,0x8(%esp)
0834c98d +0x31:  mov    %ecx,0x4(%esp)
0834c991 +0x35:  mov    %eax,(%esp)
0834c994 +0x38:  call   0838a3b6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e56>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e56
0834c999 +0x3d:  sub    $0x4,%esp
0834c99c +0x40:  mov    -0x1c(%ebp),%eax
0834c99f +0x43:  mov    %eax,-0x18(%ebp)
0834c9a2 +0x46:  mov    0x8(%ebp),%eax
0834c9a5 +0x49:  lea    0x1c(%eax),%edx
0834c9a8 +0x4c:  lea    -0x10(%ebp),%eax
0834c9ab +0x4f:  mov    %edx,0x4(%esp)
0834c9af +0x53:  mov    %eax,(%esp)
0834c9b2 +0x56:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
0834c9b7 +0x5b:  sub    $0x4,%esp
0834c9ba +0x5e:  lea    -0x10(%ebp),%eax
0834c9bd +0x61:  mov    %eax,0x4(%esp)
0834c9c1 +0x65:  lea    -0x18(%ebp),%eax
0834c9c4 +0x68:  mov    %eax,(%esp)
0834c9c7 +0x6b:  call   080c7d34 <_GLOBAL__I_g_ServerString_+0x129f>  ; global constructors keyed to g_ServerString_+0x129f
0834c9cc +0x70:  test   %al,%al
0834c9ce +0x72:  je     0834c9d9 <+0x7d>
0834c9d0 +0x74:  movl   $0xfffffffe,-0xc(%ebp)
0834c9d7 +0x7b:  jmp    0834c9ea <+0x8e>
0834c9d9 +0x7d:  lea    -0x18(%ebp),%eax
0834c9dc +0x80:  mov    %eax,(%esp)
0834c9df +0x83:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0834c9e4 +0x88:  mov    0x4(%eax),%eax
0834c9e7 +0x8b:  mov    %eax,-0xc(%ebp)
0834c9ea +0x8e:  mov    -0xc(%ebp),%eax
0834c9ed +0x91:  leave
0834c9ee +0x92:  ret
0834c9ef +0x93:  nop
```

## 反编译 C

```c
// CDungeon::get_clear_item @ 0x834c95c

/* CDungeon::get_clear_item(int) const */

undefined4 __thiscall CDungeon::get_clear_item(CDungeon *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c);
  local_18 = param_1 + 1;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::lower_bound
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_20,
             (int *)(this + 0x1c));
  local_1c = local_20;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator==
                    ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c,
                     (_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c);
    local_10 = *(undefined4 *)(iVar2 + 4);
  }
  else {
    local_10 = 0xfffffffe;
  }
  return local_10;
}
```
