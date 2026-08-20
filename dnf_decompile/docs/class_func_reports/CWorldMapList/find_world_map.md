# find_world_map

`_ZNK13CWorldMapList14find_world_mapEi`

`CWorldMapList::find_world_map(int) const`

| 类 | 地址 |
|---|---|
| `CWorldMapList` | `0x083647a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083647a2  _ZNK13CWorldMapList14find_world_mapEi
#           CWorldMapList::find_world_map(int) const
# range [0x083647a2, 0x08364817]
083647a2 +0x00:  push   %ebp
083647a3 +0x01:  mov    %esp,%ebp
083647a5 +0x03:  sub    $0x38,%esp
083647a8 +0x06:  lea    -0x10(%ebp),%eax
083647ab +0x09:  mov    %eax,(%esp)
083647ae +0x0c:  call   083953e4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24e84>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24e84
083647b3 +0x11:  mov    0x8(%ebp),%edx
083647b6 +0x14:  lea    -0x1c(%ebp),%eax
083647b9 +0x17:  lea    0xc(%ebp),%ecx
083647bc +0x1a:  mov    %ecx,0x8(%esp)
083647c0 +0x1e:  mov    %edx,0x4(%esp)
083647c4 +0x22:  mov    %eax,(%esp)
083647c7 +0x25:  call   083953f2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24e92>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24e92
083647cc +0x2a:  sub    $0x4,%esp
083647cf +0x2d:  mov    -0x1c(%ebp),%eax
083647d2 +0x30:  mov    %eax,-0x10(%ebp)
083647d5 +0x33:  mov    0x8(%ebp),%edx
083647d8 +0x36:  lea    -0xc(%ebp),%eax
083647db +0x39:  mov    %edx,0x4(%esp)
083647df +0x3d:  mov    %eax,(%esp)
083647e2 +0x40:  call   0839541e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24ebe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24ebe
083647e7 +0x45:  sub    $0x4,%esp
083647ea +0x48:  lea    -0xc(%ebp),%eax
083647ed +0x4b:  mov    %eax,0x4(%esp)
083647f1 +0x4f:  lea    -0x10(%ebp),%eax
083647f4 +0x52:  mov    %eax,(%esp)
083647f7 +0x55:  call   08395444 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24ee4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24ee4
083647fc +0x5a:  test   %al,%al
083647fe +0x5c:  je     08364807 <+0x65>
08364800 +0x5e:  mov    $0x0,%eax
08364805 +0x63:  jmp    08364815 <+0x73>
08364807 +0x65:  lea    -0x10(%ebp),%eax
0836480a +0x68:  mov    %eax,(%esp)
0836480d +0x6b:  call   08395458 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24ef8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24ef8
08364812 +0x70:  mov    0x4(%eax),%eax
08364815 +0x73:  leave
08364816 +0x74:  ret
08364817 +0x75:  nop
```

## 反编译 C

```c
// CWorldMapList::find_world_map @ 0x83647a2

/* CWorldMapList::find_world_map(int) const */

undefined4 CWorldMapList::find_world_map(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20 [3];
  int local_14;
  map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>> local_10 [12];
  
  std::_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>> *)&local_14);
  std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::find
            (local_20);
  local_14 = local_20[0];
  std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>>::operator==
                    ((_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>> *)&local_14,
                     (_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>> *)&local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
