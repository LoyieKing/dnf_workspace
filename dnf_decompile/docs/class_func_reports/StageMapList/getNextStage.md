# getNextStage

`_ZNK12StageMapList12getNextStageEiRb`

`StageMapList::getNextStage(int, bool&) const`

| 类 | 地址 |
|---|---|
| `StageMapList` | `0x08364e58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08364e58  _ZNK12StageMapList12getNextStageEiRb
#           StageMapList::getNextStage(int, bool&) const
# range [0x08364e58, 0x08364f2d]
08364e58 +0x00:  push   %ebp
08364e59 +0x01:  mov    %esp,%ebp
08364e5b +0x03:  sub    $0x28,%esp
08364e5e +0x06:  mov    0x8(%ebp),%eax
08364e61 +0x09:  lea    0x4(%eax),%ecx
08364e64 +0x0c:  lea    -0x14(%ebp),%eax
08364e67 +0x0f:  lea    0xc(%ebp),%edx
08364e6a +0x12:  mov    %edx,0x8(%esp)
08364e6e +0x16:  mov    %ecx,0x4(%esp)
08364e72 +0x1a:  mov    %eax,(%esp)
08364e75 +0x1d:  call   08395900 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x253a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x253a0
08364e7a +0x22:  sub    $0x4,%esp
08364e7d +0x25:  mov    0x8(%ebp),%eax
08364e80 +0x28:  lea    0x4(%eax),%edx
08364e83 +0x2b:  lea    -0x10(%ebp),%eax
08364e86 +0x2e:  mov    %edx,0x4(%esp)
08364e8a +0x32:  mov    %eax,(%esp)
08364e8d +0x35:  call   0839592c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x253cc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x253cc
08364e92 +0x3a:  sub    $0x4,%esp
08364e95 +0x3d:  lea    -0x10(%ebp),%eax
08364e98 +0x40:  mov    %eax,0x4(%esp)
08364e9c +0x44:  lea    -0x14(%ebp),%eax
08364e9f +0x47:  mov    %eax,(%esp)
08364ea2 +0x4a:  call   08395952 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x253f2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x253f2
08364ea7 +0x4f:  test   %al,%al
08364ea9 +0x51:  je     08364eb2 <+0x5a>
08364eab +0x53:  mov    $0x0,%eax
08364eb0 +0x58:  jmp    08364f2c <+0xd4>
08364eb2 +0x5a:  lea    -0x14(%ebp),%eax
08364eb5 +0x5d:  mov    %eax,(%esp)
08364eb8 +0x60:  call   08395966 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25406>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25406
08364ebd +0x65:  lea    0xc(%eax),%ecx
08364ec0 +0x68:  mov    0x8(%ebp),%eax
08364ec3 +0x6b:  lea    0x4(%eax),%edx
08364ec6 +0x6e:  lea    -0x18(%ebp),%eax
08364ec9 +0x71:  mov    %ecx,0x8(%esp)
08364ecd +0x75:  mov    %edx,0x4(%esp)
08364ed1 +0x79:  mov    %eax,(%esp)
08364ed4 +0x7c:  call   08395900 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x253a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x253a0
08364ed9 +0x81:  sub    $0x4,%esp
08364edc +0x84:  mov    0x8(%ebp),%eax
08364edf +0x87:  lea    0x4(%eax),%edx
08364ee2 +0x8a:  lea    -0xc(%ebp),%eax
08364ee5 +0x8d:  mov    %edx,0x4(%esp)
08364ee9 +0x91:  mov    %eax,(%esp)
08364eec +0x94:  call   0839592c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x253cc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x253cc
08364ef1 +0x99:  sub    $0x4,%esp
08364ef4 +0x9c:  lea    -0xc(%ebp),%eax
08364ef7 +0x9f:  mov    %eax,0x4(%esp)
08364efb +0xa3:  lea    -0x18(%ebp),%eax
08364efe +0xa6:  mov    %eax,(%esp)
08364f01 +0xa9:  call   08395974 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25414>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25414
08364f06 +0xae:  test   %al,%al
08364f08 +0xb0:  je     08364f1e <+0xc6>
08364f0a +0xb2:  lea    -0x18(%ebp),%eax
08364f0d +0xb5:  mov    %eax,(%esp)
08364f10 +0xb8:  call   08395966 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25406>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25406
08364f15 +0xbd:  movzbl 0x10(%eax),%edx
08364f19 +0xc1:  mov    0x10(%ebp),%eax
08364f1c +0xc4:  mov    %dl,(%eax)
08364f1e +0xc6:  lea    -0x14(%ebp),%eax
08364f21 +0xc9:  mov    %eax,(%esp)
08364f24 +0xcc:  call   08395966 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25406>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25406
08364f29 +0xd1:  mov    0xc(%eax),%eax
08364f2c +0xd4:  leave
08364f2d +0xd5:  ret
```

## 反编译 C

```c
// StageMapList::getNextStage @ 0x8364e58

/* StageMapList::getNextStage(int, bool&) const */

undefined4 __thiscall StageMapList::getNextStage(StageMapList *this,int param_1,bool *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>> local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>> local_18 [4];
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  local_14 [4];
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  local_10 [12];
  
  std::
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  ::find((int *)local_18);
  std::
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
          operator==(local_18,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::operator->
              (local_18);
    std::
    map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
    ::find((int *)local_1c);
    std::
    map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
            operator!=(local_1c,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
              operator->(local_1c);
      *param_2 = *(bool *)(iVar3 + 0x10);
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
            operator->(local_18);
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
