# isExist

`_ZNK12StageMapList7isExistEi`

`StageMapList::isExist(int) const`

| 类 | 地址 |
|---|---|
| `StageMapList` | `0x08364df6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08364df6  _ZNK12StageMapList7isExistEi
#           StageMapList::isExist(int) const
# range [0x08364df6, 0x08364e57]
08364df6 +0x00:  push   %ebp
08364df7 +0x01:  mov    %esp,%ebp
08364df9 +0x03:  sub    $0x28,%esp
08364dfc +0x06:  mov    0x8(%ebp),%eax
08364dff +0x09:  lea    0x4(%eax),%ecx
08364e02 +0x0c:  lea    -0x10(%ebp),%eax
08364e05 +0x0f:  lea    0xc(%ebp),%edx
08364e08 +0x12:  mov    %edx,0x8(%esp)
08364e0c +0x16:  mov    %ecx,0x4(%esp)
08364e10 +0x1a:  mov    %eax,(%esp)
08364e13 +0x1d:  call   08395900 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x253a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x253a0
08364e18 +0x22:  sub    $0x4,%esp
08364e1b +0x25:  mov    0x8(%ebp),%eax
08364e1e +0x28:  lea    0x4(%eax),%edx
08364e21 +0x2b:  lea    -0xc(%ebp),%eax
08364e24 +0x2e:  mov    %edx,0x4(%esp)
08364e28 +0x32:  mov    %eax,(%esp)
08364e2b +0x35:  call   0839592c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x253cc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x253cc
08364e30 +0x3a:  sub    $0x4,%esp
08364e33 +0x3d:  lea    -0xc(%ebp),%eax
08364e36 +0x40:  mov    %eax,0x4(%esp)
08364e3a +0x44:  lea    -0x10(%ebp),%eax
08364e3d +0x47:  mov    %eax,(%esp)
08364e40 +0x4a:  call   08395952 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x253f2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x253f2
08364e45 +0x4f:  test   %al,%al
08364e47 +0x51:  je     08364e50 <+0x5a>
08364e49 +0x53:  mov    $0x0,%eax
08364e4e +0x58:  jmp    08364e55 <+0x5f>
08364e50 +0x5a:  mov    $0x1,%eax
08364e55 +0x5f:  leave
08364e56 +0x60:  ret
08364e57 +0x61:  nop
```

## 反编译 C

```c
// StageMapList::isExist @ 0x8364df6

/* StageMapList::isExist(int) const */

bool StageMapList::isExist(int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>> local_14 [4];
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  local_10 [12];
  
  std::
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  ::find((int *)local_14);
  std::
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
          operator==(local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 == '\0';
}
```
