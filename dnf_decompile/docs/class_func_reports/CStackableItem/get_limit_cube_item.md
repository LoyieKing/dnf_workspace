# get_limit_cube_item

`_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE`

`CStackableItem::get_limit_cube_item(std::pair<int, int>&)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850fbe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850fbe4  _ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE
#           CStackableItem::get_limit_cube_item(std::pair<int, int>&)
# range [0x0850fbe4, 0x0850fd83]
0850fbe4 +0x000:  push   %ebp
0850fbe5 +0x001:  mov    %esp,%ebp
0850fbe7 +0x003:  sub    $0x58,%esp
0850fbea +0x006:  movl   $0x0,-0x24(%ebp)
0850fbf1 +0x00d:  movl   $0x0,-0x20(%ebp)
0850fbf8 +0x014:  movl   $0x0,-0x1c(%ebp)
0850fbff +0x01b:  mov    0x8(%ebp),%eax
0850fc02 +0x01e:  lea    0x2a4(%eax),%edx
0850fc08 +0x024:  lea    -0x44(%ebp),%eax
0850fc0b +0x027:  mov    %edx,0x4(%esp)
0850fc0f +0x02b:  mov    %eax,(%esp)
0850fc12 +0x02e:  call   08517b1a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x414f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x414f
0850fc17 +0x033:  sub    $0x4,%esp
0850fc1a +0x036:  lea    -0x44(%ebp),%eax
0850fc1d +0x039:  mov    %eax,0x4(%esp)
0850fc21 +0x03d:  lea    -0x48(%ebp),%eax
0850fc24 +0x040:  mov    %eax,(%esp)
0850fc27 +0x043:  call   08517b3e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4173>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4173
0850fc2c +0x048:  jmp    0850fc62 <+0x7e>
0850fc2e +0x04a:  lea    -0x48(%ebp),%eax
0850fc31 +0x04d:  mov    %eax,(%esp)
0850fc34 +0x050:  call   08517baa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x41df>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x41df
0850fc39 +0x055:  mov    %eax,-0x10(%ebp)
0850fc3c +0x058:  mov    -0x10(%ebp),%eax
0850fc3f +0x05b:  mov    0x8(%eax),%eax
0850fc42 +0x05e:  add    %eax,-0x1c(%ebp)
0850fc45 +0x061:  lea    -0x3c(%ebp),%eax
0850fc48 +0x064:  movl   $0x0,0x8(%esp)
0850fc50 +0x06c:  lea    -0x48(%ebp),%edx
0850fc53 +0x06f:  mov    %edx,0x4(%esp)
0850fc57 +0x073:  mov    %eax,(%esp)
0850fc5a +0x076:  call   08517bb4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x41e9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x41e9
0850fc5f +0x07b:  sub    $0x4,%esp
0850fc62 +0x07e:  mov    0x8(%ebp),%eax
0850fc65 +0x081:  lea    0x2a4(%eax),%edx
0850fc6b +0x087:  lea    -0x40(%ebp),%eax
0850fc6e +0x08a:  mov    %edx,0x4(%esp)
0850fc72 +0x08e:  mov    %eax,(%esp)
0850fc75 +0x091:  call   08517b58 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x418d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x418d
0850fc7a +0x096:  sub    $0x4,%esp
0850fc7d +0x099:  lea    -0x40(%ebp),%eax
0850fc80 +0x09c:  mov    %eax,0x4(%esp)
0850fc84 +0x0a0:  lea    -0x48(%ebp),%eax
0850fc87 +0x0a3:  mov    %eax,(%esp)
0850fc8a +0x0a6:  call   08517b7e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x41b3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x41b3
0850fc8f +0x0ab:  test   %al,%al
0850fc91 +0x0ad:  jne    0850fc2e <+0x4a>
0850fc93 +0x0af:  mov    -0x1c(%ebp),%eax
0850fc96 +0x0b2:  mov    %eax,-0x38(%ebp)
0850fc99 +0x0b5:  mov    0x8(%ebp),%eax
0850fc9c +0x0b8:  mov    0x1e0(%eax),%eax
0850fca2 +0x0be:  lea    -0x38(%ebp),%edx
0850fca5 +0x0c1:  mov    %edx,0x4(%esp)
0850fca9 +0x0c5:  mov    %eax,(%esp)
0850fcac +0x0c8:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0850fcb1 +0x0cd:  mov    %eax,-0x18(%ebp)
0850fcb4 +0x0d0:  movl   $0x0,-0x14(%ebp)
0850fcbb +0x0d7:  mov    0x8(%ebp),%eax
0850fcbe +0x0da:  lea    0x2a4(%eax),%edx
0850fcc4 +0x0e0:  lea    -0x30(%ebp),%eax
0850fcc7 +0x0e3:  mov    %edx,0x4(%esp)
0850fccb +0x0e7:  mov    %eax,(%esp)
0850fcce +0x0ea:  call   08517b1a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x414f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x414f
0850fcd3 +0x0ef:  sub    $0x4,%esp
0850fcd6 +0x0f2:  lea    -0x30(%ebp),%eax
0850fcd9 +0x0f5:  mov    %eax,0x4(%esp)
0850fcdd +0x0f9:  lea    -0x34(%ebp),%eax
0850fce0 +0x0fc:  mov    %eax,(%esp)
0850fce3 +0x0ff:  call   08517b3e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4173>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4173
0850fce8 +0x104:  mov    -0x34(%ebp),%eax
0850fceb +0x107:  mov    %eax,-0x48(%ebp)
0850fcee +0x10a:  jmp    0850fd3f <+0x15b>
0850fcf0 +0x10c:  lea    -0x48(%ebp),%eax
0850fcf3 +0x10f:  mov    %eax,(%esp)
0850fcf6 +0x112:  call   08517baa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x41df>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x41df
0850fcfb +0x117:  mov    %eax,-0xc(%ebp)
0850fcfe +0x11a:  mov    -0xc(%ebp),%eax
0850fd01 +0x11d:  mov    0x8(%eax),%eax
0850fd04 +0x120:  add    %eax,-0x14(%ebp)
0850fd07 +0x123:  mov    -0x18(%ebp),%eax
0850fd0a +0x126:  cmp    -0x14(%ebp),%eax
0850fd0d +0x129:  ja     0850fd22 <+0x13e>
0850fd0f +0x12b:  mov    -0xc(%ebp),%eax
0850fd12 +0x12e:  mov    (%eax),%eax
0850fd14 +0x130:  mov    %eax,-0x24(%ebp)
0850fd17 +0x133:  mov    -0xc(%ebp),%eax
0850fd1a +0x136:  mov    0x4(%eax),%eax
0850fd1d +0x139:  mov    %eax,-0x20(%ebp)
0850fd20 +0x13c:  jmp    0850fd70 <+0x18c>
0850fd22 +0x13e:  lea    -0x28(%ebp),%eax
0850fd25 +0x141:  movl   $0x0,0x8(%esp)
0850fd2d +0x149:  lea    -0x48(%ebp),%edx
0850fd30 +0x14c:  mov    %edx,0x4(%esp)
0850fd34 +0x150:  mov    %eax,(%esp)
0850fd37 +0x153:  call   08517bb4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x41e9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x41e9
0850fd3c +0x158:  sub    $0x4,%esp
0850fd3f +0x15b:  mov    0x8(%ebp),%eax
0850fd42 +0x15e:  lea    0x2a4(%eax),%edx
0850fd48 +0x164:  lea    -0x2c(%ebp),%eax
0850fd4b +0x167:  mov    %edx,0x4(%esp)
0850fd4f +0x16b:  mov    %eax,(%esp)
0850fd52 +0x16e:  call   08517b58 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x418d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x418d
0850fd57 +0x173:  sub    $0x4,%esp
0850fd5a +0x176:  lea    -0x2c(%ebp),%eax
0850fd5d +0x179:  mov    %eax,0x4(%esp)
0850fd61 +0x17d:  lea    -0x48(%ebp),%eax
0850fd64 +0x180:  mov    %eax,(%esp)
0850fd67 +0x183:  call   08517b7e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x41b3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x41b3
0850fd6c +0x188:  test   %al,%al
0850fd6e +0x18a:  jne    0850fcf0 <+0x10c>
0850fd70 +0x18c:  mov    0xc(%ebp),%eax
0850fd73 +0x18f:  mov    -0x24(%ebp),%edx
0850fd76 +0x192:  mov    %edx,(%eax)
0850fd78 +0x194:  mov    0xc(%ebp),%eax
0850fd7b +0x197:  mov    -0x20(%ebp),%edx
0850fd7e +0x19a:  mov    %edx,0x4(%eax)
0850fd81 +0x19d:  leave
0850fd82 +0x19e:  ret
0850fd83 +0x19f:  nop
```

## 反编译 C

```c
// CStackableItem::get_limit_cube_item @ 0x850fbe4

/* CStackableItem::get_limit_cube_item(std::pair<int, int>&) */

void __thiscall CStackableItem::get_limit_cube_item(CStackableItem *this,pair *param_1)

{
  bool bVar1;
  undefined4 local_4c;
  __normal_iterator local_48 [4];
  __normal_iterator local_44 [4];
  __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
  local_40 [4];
  ulong local_3c;
  undefined4 local_38;
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
  local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  ulong local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::begin();
  __gnu_cxx::
  __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
  ::__normal_iterator<stLimitCubeResult*>
            ((__normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
              *)&local_4c,local_48);
  while( true ) {
    std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_4c,local_44);
    if (!bVar1) break;
    local_14 = __gnu_cxx::
               __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
               ::operator*((__normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
                            *)&local_4c);
    local_20 = local_20 + *(int *)(local_14 + 8);
    __gnu_cxx::
    __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
    ::operator++(local_40,(int)&local_4c);
  }
  local_3c = local_20;
  local_1c = CMTRand::randInt(*(CMTRand **)(this + 0x1e0),&local_3c);
  local_18 = 0;
  std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::begin();
  __gnu_cxx::
  __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
  ::__normal_iterator<stLimitCubeResult*>
            ((__normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
              *)&local_38,local_34);
  local_4c = local_38;
  do {
    std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_4c,local_30);
    if (!bVar1) {
LAB_0850fd70:
      *(undefined4 *)param_1 = local_28;
      *(undefined4 *)(param_1 + 4) = local_24;
      return;
    }
    local_10 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
               ::operator*((__normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
                            *)&local_4c);
    local_18 = local_18 + local_10[2];
    if (local_1c <= local_18) {
      local_28 = *local_10;
      local_24 = local_10[1];
      goto LAB_0850fd70;
    }
    __gnu_cxx::
    __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
    ::operator++(local_2c,(int)&local_4c);
  } while( true );
}
```
