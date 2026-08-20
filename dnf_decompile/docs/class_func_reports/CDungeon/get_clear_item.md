# get_clear_item

`_ZNK8CDungeon14get_clear_itemEv`

`CDungeon::get_clear_item() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834c8c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834c8c0  _ZNK8CDungeon14get_clear_itemEv
#           CDungeon::get_clear_item() const
# range [0x0834c8c0, 0x0834c95b]
0834c8c0 +0x00:  push   %ebp
0834c8c1 +0x01:  mov    %esp,%ebp
0834c8c3 +0x03:  sub    $0x38,%esp
0834c8c6 +0x06:  movl   $0x0,-0xc(%ebp)
0834c8cd +0x0d:  lea    -0x18(%ebp),%eax
0834c8d0 +0x10:  mov    %eax,(%esp)
0834c8d3 +0x13:  call   080c6e9c <_GLOBAL__I_g_ServerString_+0x407>  ; global constructors keyed to g_ServerString_+0x407
0834c8d8 +0x18:  movl   $0x64,(%esp)
0834c8df +0x1f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834c8e4 +0x24:  add    $0x1,%eax
0834c8e7 +0x27:  mov    %eax,-0x14(%ebp)
0834c8ea +0x2a:  mov    0x8(%ebp),%eax
0834c8ed +0x2d:  lea    0x1c(%eax),%ecx
0834c8f0 +0x30:  lea    -0x1c(%ebp),%eax
0834c8f3 +0x33:  lea    -0x14(%ebp),%edx
0834c8f6 +0x36:  mov    %edx,0x8(%esp)
0834c8fa +0x3a:  mov    %ecx,0x4(%esp)
0834c8fe +0x3e:  mov    %eax,(%esp)
0834c901 +0x41:  call   0838a3b6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e56>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e56
0834c906 +0x46:  sub    $0x4,%esp
0834c909 +0x49:  mov    -0x1c(%ebp),%eax
0834c90c +0x4c:  mov    %eax,-0x18(%ebp)
0834c90f +0x4f:  mov    0x8(%ebp),%eax
0834c912 +0x52:  lea    0x1c(%eax),%edx
0834c915 +0x55:  lea    -0x10(%ebp),%eax
0834c918 +0x58:  mov    %edx,0x4(%esp)
0834c91c +0x5c:  mov    %eax,(%esp)
0834c91f +0x5f:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
0834c924 +0x64:  sub    $0x4,%esp
0834c927 +0x67:  lea    -0x10(%ebp),%eax
0834c92a +0x6a:  mov    %eax,0x4(%esp)
0834c92e +0x6e:  lea    -0x18(%ebp),%eax
0834c931 +0x71:  mov    %eax,(%esp)
0834c934 +0x74:  call   080c7d34 <_GLOBAL__I_g_ServerString_+0x129f>  ; global constructors keyed to g_ServerString_+0x129f
0834c939 +0x79:  test   %al,%al
0834c93b +0x7b:  je     0834c946 <+0x86>
0834c93d +0x7d:  movl   $0xfffffffe,-0xc(%ebp)
0834c944 +0x84:  jmp    0834c957 <+0x97>
0834c946 +0x86:  lea    -0x18(%ebp),%eax
0834c949 +0x89:  mov    %eax,(%esp)
0834c94c +0x8c:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0834c951 +0x91:  mov    0x4(%eax),%eax
0834c954 +0x94:  mov    %eax,-0xc(%ebp)
0834c957 +0x97:  mov    -0xc(%ebp),%eax
0834c95a +0x9a:  leave
0834c95b +0x9b:  ret
```

## 反编译 C

```c
// CDungeon::get_clear_item @ 0x834c8c0

/* CDungeon::get_clear_item() const */

undefined4 __thiscall CDungeon::get_clear_item(CDungeon *this)

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
  local_18 = get_rand_int(100);
  local_18 = local_18 + 1;
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
