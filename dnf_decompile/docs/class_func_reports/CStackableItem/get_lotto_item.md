# get_lotto_item

`_ZN14CStackableItem14get_lotto_itemEPc`

`CStackableItem::get_lotto_item(char*)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850ebfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850ebfc  _ZN14CStackableItem14get_lotto_itemEPc
#           CStackableItem::get_lotto_item(char*)
# range [0x0850ebfc, 0x0850edd9]
0850ebfc +0x000:  push   %ebp
0850ebfd +0x001:  mov    %esp,%ebp
0850ebff +0x003:  sub    $0x68,%esp
0850ec02 +0x006:  mov    0xc(%ebp),%eax
0850ec05 +0x009:  mov    %eax,-0x1c(%ebp)
0850ec08 +0x00c:  movl   $0xffffffff,-0x18(%ebp)
0850ec0f +0x013:  movl   $&_ZL14gUnicodeBuffer+0xe174,-0x34(%ebp)
0850ec16 +0x01a:  mov    0x8(%ebp),%eax
0850ec19 +0x01d:  mov    0x1e0(%eax),%eax
0850ec1f +0x023:  lea    -0x34(%ebp),%edx
0850ec22 +0x026:  mov    %edx,0x4(%esp)
0850ec26 +0x02a:  mov    %eax,(%esp)
0850ec29 +0x02d:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0850ec2e +0x032:  mov    %eax,-0x14(%ebp)
0850ec31 +0x035:  movl   $0x0,-0x10(%ebp)
0850ec38 +0x03c:  lea    -0x38(%ebp),%eax
0850ec3b +0x03f:  mov    %eax,(%esp)
0850ec3e +0x042:  call   085176cc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d01>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d01
0850ec43 +0x047:  movl   $0x1,-0xc(%ebp)
0850ec4a +0x04e:  mov    0x8(%ebp),%eax
0850ec4d +0x051:  lea    0x1d4(%eax),%edx
0850ec53 +0x057:  lea    -0x30(%ebp),%eax
0850ec56 +0x05a:  mov    %edx,0x4(%esp)
0850ec5a +0x05e:  mov    %eax,(%esp)
0850ec5d +0x061:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0850ec62 +0x066:  sub    $0x4,%esp
0850ec65 +0x069:  lea    -0x30(%ebp),%eax
0850ec68 +0x06c:  mov    %eax,0x4(%esp)
0850ec6c +0x070:  lea    -0x3c(%ebp),%eax
0850ec6f +0x073:  mov    %eax,(%esp)
0850ec72 +0x076:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
0850ec77 +0x07b:  lea    -0x44(%ebp),%eax
0850ec7a +0x07e:  mov    %eax,(%esp)
0850ec7d +0x081:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0850ec82 +0x086:  mov    0x8(%ebp),%eax
0850ec85 +0x089:  lea    0x1c4(%eax),%edx
0850ec8b +0x08f:  lea    -0x4c(%ebp),%eax
0850ec8e +0x092:  mov    %edx,0x4(%esp)
0850ec92 +0x096:  mov    %eax,(%esp)
0850ec95 +0x099:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0850ec9a +0x09e:  sub    $0x4,%esp
0850ec9d +0x0a1:  mov    -0x4c(%ebp),%eax
0850eca0 +0x0a4:  mov    %eax,-0x38(%ebp)
0850eca3 +0x0a7:  jmp    0850ed1b <+0x11f>
0850eca5 +0x0a9:  lea    -0x38(%ebp),%eax
0850eca8 +0x0ac:  mov    %eax,(%esp)
0850ecab +0x0af:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0850ecb0 +0x0b4:  mov    0x4(%eax),%edx
0850ecb3 +0x0b7:  mov    (%eax),%eax
0850ecb5 +0x0b9:  mov    %eax,-0x28(%ebp)
0850ecb8 +0x0bc:  mov    %edx,-0x24(%ebp)
0850ecbb +0x0bf:  lea    -0x28(%ebp),%eax
0850ecbe +0x0c2:  mov    %eax,0x4(%esp)
0850ecc2 +0x0c6:  lea    -0x44(%ebp),%eax
0850ecc5 +0x0c9:  mov    %eax,(%esp)
0850ecc8 +0x0cc:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
0850eccd +0x0d1:  mov    -0x40(%ebp),%eax
0850ecd0 +0x0d4:  add    %eax,-0x10(%ebp)
0850ecd3 +0x0d7:  mov    -0x10(%ebp),%eax
0850ecd6 +0x0da:  cmp    -0x14(%ebp),%eax
0850ecd9 +0x0dd:  jle    0850ecf3 <+0xf7>
0850ecdb +0x0df:  mov    -0x44(%ebp),%eax
0850ecde +0x0e2:  mov    %eax,-0x18(%ebp)
0850ece1 +0x0e5:  lea    -0x3c(%ebp),%eax
0850ece4 +0x0e8:  mov    %eax,(%esp)
0850ece7 +0x0eb:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0850ecec +0x0f0:  mov    (%eax),%eax
0850ecee +0x0f2:  mov    %eax,-0xc(%ebp)
0850ecf1 +0x0f5:  jmp    0850ed50 <+0x154>
0850ecf3 +0x0f7:  lea    -0x20(%ebp),%eax
0850ecf6 +0x0fa:  movl   $0x0,0x8(%esp)
0850ecfe +0x102:  lea    -0x38(%ebp),%edx
0850ed01 +0x105:  mov    %edx,0x4(%esp)
0850ed05 +0x109:  mov    %eax,(%esp)
0850ed08 +0x10c:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
0850ed0d +0x111:  sub    $0x4,%esp
0850ed10 +0x114:  lea    -0x3c(%ebp),%eax
0850ed13 +0x117:  mov    %eax,(%esp)
0850ed16 +0x11a:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
0850ed1b +0x11f:  mov    0x8(%ebp),%eax
0850ed1e +0x122:  lea    0x1c4(%eax),%edx
0850ed24 +0x128:  lea    -0x2c(%ebp),%eax
0850ed27 +0x12b:  mov    %edx,0x4(%esp)
0850ed2b +0x12f:  mov    %eax,(%esp)
0850ed2e +0x132:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0850ed33 +0x137:  sub    $0x4,%esp
0850ed36 +0x13a:  lea    -0x2c(%ebp),%eax
0850ed39 +0x13d:  mov    %eax,0x4(%esp)
0850ed3d +0x141:  lea    -0x38(%ebp),%eax
0850ed40 +0x144:  mov    %eax,(%esp)
0850ed43 +0x147:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0850ed48 +0x14c:  test   %al,%al
0850ed4a +0x14e:  jne    0850eca5 <+0xa9>
0850ed50 +0x154:  cmpl   $0x0,-0x18(%ebp)
0850ed54 +0x158:  jne    0850ed71 <+0x175>
0850ed56 +0x15a:  cmpl   $0x0,-0xc(%ebp)
0850ed5a +0x15e:  jle    0850ed71 <+0x175>
0850ed5c +0x160:  mov    -0x1c(%ebp),%eax
0850ed5f +0x163:  movl   $0x0,0x2(%eax)
0850ed66 +0x16a:  mov    -0x1c(%ebp),%eax
0850ed69 +0x16d:  mov    -0xc(%ebp),%edx
0850ed6c +0x170:  mov    %edx,0x7(%eax)
0850ed6f +0x173:  jmp    0850edd8 <+0x1dc>
0850ed71 +0x175:  cmpl   $0xffffffff,-0x18(%ebp)
0850ed75 +0x179:  jne    0850eda9 <+0x1ad>
0850ed77 +0x17b:  mov    0x8(%ebp),%eax
0850ed7a +0x17e:  mov    0x1c0(%eax),%eax
0850ed80 +0x184:  mov    %eax,-0x18(%ebp)
0850ed83 +0x187:  mov    0x8(%ebp),%eax
0850ed86 +0x18a:  mov    0x1d0(%eax),%eax
0850ed8c +0x190:  mov    %eax,-0xc(%ebp)
0850ed8f +0x193:  cmpl   $0x0,-0x18(%ebp)
0850ed93 +0x197:  jne    0850eda9 <+0x1ad>
0850ed95 +0x199:  mov    -0x18(%ebp),%edx
0850ed98 +0x19c:  mov    -0x1c(%ebp),%eax
0850ed9b +0x19f:  mov    %edx,0x2(%eax)
0850ed9e +0x1a2:  mov    -0x1c(%ebp),%eax
0850eda1 +0x1a5:  mov    -0xc(%ebp),%edx
0850eda4 +0x1a8:  mov    %edx,0x7(%eax)
0850eda7 +0x1ab:  jmp    0850edd8 <+0x1dc>
0850eda9 +0x1ad:  mov    -0x18(%ebp),%edx
0850edac +0x1b0:  mov    -0x1c(%ebp),%eax
0850edaf +0x1b3:  mov    %edx,0x2(%eax)
0850edb2 +0x1b6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850edb7 +0x1bb:  mov    0xc(%eax),%eax
0850edba +0x1be:  mov    -0xc(%ebp),%edx
0850edbd +0x1c1:  mov    %edx,0xc(%esp)
0850edc1 +0x1c5:  mov    -0x1c(%ebp),%edx
0850edc4 +0x1c8:  mov    %edx,0x8(%esp)
0850edc8 +0x1cc:  movl   $0x2,0x4(%esp)
0850edd0 +0x1d4:  mov    %eax,(%esp)
0850edd3 +0x1d7:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0850edd8 +0x1dc:  leave
0850edd9 +0x1dd:  ret
```

## 反编译 C

```c
// CStackableItem::get_lotto_item @ 0x850ebfc

/* CStackableItem::get_lotto_item(char*) */

void __thiscall CStackableItem::get_lotto_item(CStackableItem *this,char *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_48;
  int local_44;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_40 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_3c [4];
  ulong local_38;
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = param_1;
  local_1c = -1;
  local_38 = 100000;
  local_18 = CMTRand::randInt(*(CMTRand **)(this + 0x1e0),&local_38);
  local_14 = 0;
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator(local_3c);
  local_10 = 1;
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_40,local_34);
  std::pair<int,int>::pair((pair<int,int> *)&local_48);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  do {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_3c,local_30);
    if (!bVar1) {
LAB_0850ed50:
      if ((local_1c == 0) && (0 < local_10)) {
        local_20[2] = '\0';
        local_20[3] = '\0';
        local_20[4] = '\0';
        local_20[5] = '\0';
        *(int *)(local_20 + 7) = local_10;
      }
      else {
        if (local_1c == -1) {
          local_1c = *(int *)(this + 0x1c0);
          local_10 = *(int *)(this + 0x1d0);
          if (local_1c == 0) {
            local_20[2] = '\0';
            local_20[3] = '\0';
            local_20[4] = '\0';
            local_20[5] = '\0';
            *(int *)(local_20 + 7) = local_10;
            return;
          }
        }
        *(int *)(local_20 + 2) = local_1c;
        iVar4 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar4 + 0xc),2,local_20,local_10);
      }
      return;
    }
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
             ::operator*(local_3c);
    local_28 = puVar2[1];
    local_2c = *puVar2;
    std::pair<int,int>::operator=((pair<int,int> *)&local_48,(pair *)&local_2c);
    local_14 = local_14 + local_44;
    if (local_18 < local_14) {
      local_1c = local_48;
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_40);
      local_10 = *piVar3;
      goto LAB_0850ed50;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_24,(int)local_3c);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_40);
  } while( true );
}
```
