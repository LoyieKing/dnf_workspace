# box_item_index

`_ZNK4CMap14box_item_indexESt4listISt4pairIiiESaIS2_EE`

`CMap::box_item_index(std::list<std::pair<int, int>, std::allocator<std::pair<int, int> > >) const`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834ebda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ebda  _ZNK4CMap14box_item_indexESt4listISt4pairIiiESaIS2_EE
#           CMap::box_item_index(std::list<std::pair<int, int>, std::allocator<std::pair<int, int> > >) const
# range [0x0834ebda, 0x0834eca9]
0834ebda +0x00:  push   %ebp
0834ebdb +0x01:  mov    %esp,%ebp
0834ebdd +0x03:  sub    $0x48,%esp
0834ebe0 +0x06:  movl   $0x64,(%esp)
0834ebe7 +0x0d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834ebec +0x12:  add    $0x1,%eax
0834ebef +0x15:  mov    %eax,-0x10(%ebp)
0834ebf2 +0x18:  movl   $0x0,-0xc(%ebp)
0834ebf9 +0x1f:  lea    -0x24(%ebp),%eax
0834ebfc +0x22:  mov    0xc(%ebp),%edx
0834ebff +0x25:  mov    %edx,0x4(%esp)
0834ec03 +0x29:  mov    %eax,(%esp)
0834ec06 +0x2c:  call   0838ba56 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b4f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b4f6
0834ec0b +0x31:  sub    $0x4,%esp
0834ec0e +0x34:  lea    -0x2c(%ebp),%eax
0834ec11 +0x37:  mov    %eax,(%esp)
0834ec14 +0x3a:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0834ec19 +0x3f:  jmp    0834ec73 <+0x99>
0834ec1b +0x41:  lea    -0x24(%ebp),%eax
0834ec1e +0x44:  mov    %eax,(%esp)
0834ec21 +0x47:  call   0838bab4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b554>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b554
0834ec26 +0x4c:  mov    0x4(%eax),%edx
0834ec29 +0x4f:  mov    (%eax),%eax
0834ec2b +0x51:  mov    %eax,-0x1c(%ebp)
0834ec2e +0x54:  mov    %edx,-0x18(%ebp)
0834ec31 +0x57:  lea    -0x1c(%ebp),%eax
0834ec34 +0x5a:  mov    %eax,0x4(%esp)
0834ec38 +0x5e:  lea    -0x2c(%ebp),%eax
0834ec3b +0x61:  mov    %eax,(%esp)
0834ec3e +0x64:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
0834ec43 +0x69:  mov    -0x28(%ebp),%eax
0834ec46 +0x6c:  add    %eax,-0xc(%ebp)
0834ec49 +0x6f:  mov    -0x10(%ebp),%eax
0834ec4c +0x72:  cmp    -0xc(%ebp),%eax
0834ec4f +0x75:  jge    0834ec56 <+0x7c>
0834ec51 +0x77:  mov    -0x2c(%ebp),%eax
0834ec54 +0x7a:  jmp    0834eca7 <+0xcd>
0834ec56 +0x7c:  lea    -0x14(%ebp),%eax
0834ec59 +0x7f:  movl   $0x0,0x8(%esp)
0834ec61 +0x87:  lea    -0x24(%ebp),%edx
0834ec64 +0x8a:  mov    %edx,0x4(%esp)
0834ec68 +0x8e:  mov    %eax,(%esp)
0834ec6b +0x91:  call   0838bac2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b562>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b562
0834ec70 +0x96:  sub    $0x4,%esp
0834ec73 +0x99:  lea    -0x20(%ebp),%eax
0834ec76 +0x9c:  mov    0xc(%ebp),%edx
0834ec79 +0x9f:  mov    %edx,0x4(%esp)
0834ec7d +0xa3:  mov    %eax,(%esp)
0834ec80 +0xa6:  call   0838ba7c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b51c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b51c
0834ec85 +0xab:  sub    $0x4,%esp
0834ec88 +0xae:  lea    -0x20(%ebp),%eax
0834ec8b +0xb1:  mov    %eax,0x4(%esp)
0834ec8f +0xb5:  lea    -0x24(%ebp),%eax
0834ec92 +0xb8:  mov    %eax,(%esp)
0834ec95 +0xbb:  call   0838baa0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b540>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b540
0834ec9a +0xc0:  test   %al,%al
0834ec9c +0xc2:  jne    0834ec1b <+0x41>
0834eca2 +0xc8:  mov    $0xfffffffe,%eax
0834eca7 +0xcd:  leave
0834eca8 +0xce:  ret
0834eca9 +0xcf:  nop
```

## 反编译 C

```c
// CMap::box_item_index @ 0x834ebda

/* CMap::box_item_index(std::list<std::pair<int, int>, std::allocator<std::pair<int, int> > >) const
    */

undefined4 CMap::box_item_index(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  int local_2c;
  _List_iterator<std::pair<int,int>> local_28 [4];
  _List_iterator local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  _List_iterator<std::pair<int,int>> local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = get_rand_int(100);
  local_14 = local_14 + 1;
  local_10 = 0;
  std::list<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::pair<int,int>::pair((pair<int,int> *)&local_30);
  while( true ) {
    std::list<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    cVar1 = std::_List_iterator<std::pair<int,int>>::operator!=(local_28,local_24);
    if (cVar1 == '\0') {
      return 0xfffffffe;
    }
    puVar2 = (undefined4 *)std::_List_iterator<std::pair<int,int>>::operator*(local_28);
    local_1c = puVar2[1];
    local_20 = *puVar2;
    std::pair<int,int>::operator=((pair<int,int> *)&local_30,(pair *)&local_20);
    local_10 = local_10 + local_2c;
    if (local_14 < local_10) break;
    std::_List_iterator<std::pair<int,int>>::operator++(local_18,(int)local_28);
  }
  return local_30;
}
```
