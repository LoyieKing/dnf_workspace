# setGainItemFlag

`_ZN15CItemDictionary15setGainItemFlagEP5CUserj`

`CItemDictionary::setGainItemFlag(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d80e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d80e  _ZN15CItemDictionary15setGainItemFlagEP5CUserj
#           CItemDictionary::setGainItemFlag(CUser*, unsigned int)
# range [0x0811d80e, 0x0811d8fb]
0811d80e +0x00:  push   %ebp
0811d80f +0x01:  mov    %esp,%ebp
0811d811 +0x03:  push   %ebx
0811d812 +0x04:  sub    $0x34,%esp
0811d815 +0x07:  cmpl   $0x0,0xc(%ebp)
0811d819 +0x0b:  je     0811d8ef <+0xe1>
0811d81f +0x11:  mov    0x10(%ebp),%ebx
0811d822 +0x14:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0811d827 +0x19:  mov    %ebx,0x4(%esp)
0811d82b +0x1d:  mov    %eax,(%esp)
0811d82e +0x20:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0811d833 +0x25:  mov    %eax,-0x10(%ebp)
0811d836 +0x28:  cmpl   $0x0,-0x10(%ebp)
0811d83a +0x2c:  je     0811d84b <+0x3d>
0811d83c +0x2e:  mov    -0x10(%ebp),%eax
0811d83f +0x31:  mov    %eax,(%esp)
0811d842 +0x34:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0811d847 +0x39:  test   %al,%al
0811d849 +0x3b:  je     0811d852 <+0x44>
0811d84b +0x3d:  mov    $0x1,%eax
0811d850 +0x42:  jmp    0811d857 <+0x49>
0811d852 +0x44:  mov    $0x0,%eax
0811d857 +0x49:  test   %al,%al
0811d859 +0x4b:  jne    0811d8f2 <+0xe4>
0811d85f +0x51:  mov    0x10(%ebp),%eax
0811d862 +0x54:  mov    %eax,-0x18(%ebp)
0811d865 +0x57:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0811d86a +0x5c:  lea    0xa928(%eax),%ecx
0811d870 +0x62:  lea    -0x1c(%ebp),%eax
0811d873 +0x65:  lea    -0x18(%ebp),%edx
0811d876 +0x68:  mov    %edx,0x8(%esp)
0811d87a +0x6c:  mov    %ecx,0x4(%esp)
0811d87e +0x70:  mov    %eax,(%esp)
0811d881 +0x73:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0811d886 +0x78:  sub    $0x4,%esp
0811d889 +0x7b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0811d88e +0x80:  lea    0xa928(%eax),%edx
0811d894 +0x86:  lea    -0x14(%ebp),%eax
0811d897 +0x89:  mov    %edx,0x4(%esp)
0811d89b +0x8d:  mov    %eax,(%esp)
0811d89e +0x90:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0811d8a3 +0x95:  sub    $0x4,%esp
0811d8a6 +0x98:  lea    -0x14(%ebp),%eax
0811d8a9 +0x9b:  mov    %eax,0x4(%esp)
0811d8ad +0x9f:  lea    -0x1c(%ebp),%eax
0811d8b0 +0xa2:  mov    %eax,(%esp)
0811d8b3 +0xa5:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0811d8b8 +0xaa:  test   %al,%al
0811d8ba +0xac:  jne    0811d8f5 <+0xe7>
0811d8bc +0xae:  lea    -0x1c(%ebp),%eax
0811d8bf +0xb1:  mov    %eax,(%esp)
0811d8c2 +0xb4:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0811d8c7 +0xb9:  mov    0x4(%eax),%eax
0811d8ca +0xbc:  mov    %eax,-0xc(%ebp)
0811d8cd +0xbf:  mov    -0xc(%ebp),%eax
0811d8d0 +0xc2:  mov    %eax,0xc(%esp)
0811d8d4 +0xc6:  mov    0x10(%ebp),%eax
0811d8d7 +0xc9:  mov    %eax,0x8(%esp)
0811d8db +0xcd:  mov    0xc(%ebp),%eax
0811d8de +0xd0:  mov    %eax,0x4(%esp)
0811d8e2 +0xd4:  mov    0x8(%ebp),%eax
0811d8e5 +0xd7:  mov    %eax,(%esp)
0811d8e8 +0xda:  call   0811d8fc <_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj>  ; CItemDictionary::setItemCheckFlag(CUser*, unsigned int, unsigned int)
0811d8ed +0xdf:  jmp    0811d8f6 <+0xe8>
0811d8ef +0xe1:  nop
0811d8f0 +0xe2:  jmp    0811d8f6 <+0xe8>
0811d8f2 +0xe4:  nop
0811d8f3 +0xe5:  jmp    0811d8f6 <+0xe8>
0811d8f5 +0xe7:  nop
0811d8f6 +0xe8:  mov    -0x4(%ebp),%ebx
0811d8f9 +0xeb:  leave
0811d8fa +0xec:  ret
0811d8fb +0xed:  nop
```

## 反编译 C

```c
// CItemDictionary::setGainItemFlag @ 0x811d80e

/* CItemDictionary::setGainItemFlag(CUser*, unsigned int) */

void __thiscall CItemDictionary::setGainItemFlag(CItemDictionary *this,CUser *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  uint local_1c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  CItem *local_14;
  uint local_10;
  
  if (param_1 != (CUser *)0x0) {
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = (CItem *)CDataManager::find_item(this_00,param_2);
    if ((local_14 == (CItem *)0x0) || (cVar2 = CItem::is_stackable(local_14), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_1c = param_2;
      G_CDataManager();
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_20);
      G_CDataManager();
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_20,(_Rb_tree_iterator *)local_18);
      if (cVar2 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_20);
        local_10 = *(uint *)(iVar3 + 4);
        setItemCheckFlag(this,param_1,param_2,local_10);
      }
    }
  }
  return;
}
```
