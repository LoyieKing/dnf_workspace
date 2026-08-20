# GetItem

`_ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi`

`WongWork::CAvatarItemMgr::GetItem(AvatarDetailInfo*, int*) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f925c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f925c  _ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi
#           WongWork::CAvatarItemMgr::GetItem(AvatarDetailInfo*, int*) const
# range [0x082f925c, 0x082f9401]
082f925c +0x000:  push   %ebp
082f925d +0x001:  mov    %esp,%ebp
082f925f +0x003:  push   %ebx
082f9260 +0x004:  sub    $0x24,%esp
082f9263 +0x007:  mov    0x8(%ebp),%edx
082f9266 +0x00a:  lea    -0x10(%ebp),%eax
082f9269 +0x00d:  mov    %edx,0x4(%esp)
082f926d +0x011:  mov    %eax,(%esp)
082f9270 +0x014:  call   082fa7fa <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x62c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x62c
082f9275 +0x019:  sub    $0x4,%esp
082f9278 +0x01c:  mov    0x8(%ebp),%edx
082f927b +0x01f:  lea    -0x14(%ebp),%eax
082f927e +0x022:  mov    %edx,0x4(%esp)
082f9282 +0x026:  mov    %eax,(%esp)
082f9285 +0x029:  call   082fa820 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x652>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x652
082f928a +0x02e:  sub    $0x4,%esp
082f928d +0x031:  movl   $0x0,-0xc(%ebp)
082f9294 +0x038:  movl   $0x0,-0xc(%ebp)
082f929b +0x03f:  jmp    082f93bf <+0x163>
082f92a0 +0x044:  mov    -0xc(%ebp),%eax
082f92a3 +0x047:  imul   $0x4b,%eax,%eax
082f92a6 +0x04a:  mov    %eax,%ebx
082f92a8 +0x04c:  add    0xc(%ebp),%ebx
082f92ab +0x04f:  lea    -0x10(%ebp),%eax
082f92ae +0x052:  mov    %eax,(%esp)
082f92b1 +0x055:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f92b6 +0x05a:  mov    (%eax),%eax
082f92b8 +0x05c:  mov    %eax,(%ebx)
082f92ba +0x05e:  mov    -0xc(%ebp),%eax
082f92bd +0x061:  imul   $0x4b,%eax,%eax
082f92c0 +0x064:  mov    %eax,%ebx
082f92c2 +0x066:  add    0xc(%ebp),%ebx
082f92c5 +0x069:  lea    -0x10(%ebp),%eax
082f92c8 +0x06c:  mov    %eax,(%esp)
082f92cb +0x06f:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f92d0 +0x074:  mov    0x4(%eax),%eax
082f92d3 +0x077:  mov    %eax,(%esp)
082f92d6 +0x07a:  call   082fa1ea <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1c
082f92db +0x07f:  mov    %eax,0x4(%ebx)
082f92de +0x082:  mov    -0xc(%ebp),%eax
082f92e1 +0x085:  imul   $0x4b,%eax,%eax
082f92e4 +0x088:  mov    %eax,%ebx
082f92e6 +0x08a:  add    0xc(%ebp),%ebx
082f92e9 +0x08d:  lea    -0x10(%ebp),%eax
082f92ec +0x090:  mov    %eax,(%esp)
082f92ef +0x093:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f92f4 +0x098:  mov    0x4(%eax),%eax
082f92f7 +0x09b:  mov    %eax,(%esp)
082f92fa +0x09e:  call   082fa228 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x5a>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x5a
082f92ff +0x0a3:  mov    %eax,0x8(%ebx)
082f9302 +0x0a6:  lea    -0x10(%ebp),%eax
082f9305 +0x0a9:  mov    %eax,(%esp)
082f9308 +0x0ac:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f930d +0x0b1:  mov    0x4(%eax),%eax
082f9310 +0x0b4:  mov    %eax,(%esp)
082f9313 +0x0b7:  call   0822d202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28ac
082f9318 +0x0bc:  mov    -0xc(%ebp),%edx
082f931b +0x0bf:  imul   $0x4b,%edx,%edx
082f931e +0x0c2:  add    0xc(%ebp),%edx
082f9321 +0x0c5:  add    $0xc,%edx
082f9324 +0x0c8:  movl   $0x19,0x8(%esp)
082f932c +0x0d0:  mov    %eax,0x4(%esp)
082f9330 +0x0d4:  mov    %edx,(%esp)
082f9333 +0x0d7:  call   0807d8d0 <_init+0x1c8>
082f9338 +0x0dc:  mov    -0xc(%ebp),%eax
082f933b +0x0df:  imul   $0x4b,%eax,%eax
082f933e +0x0e2:  mov    %eax,%ebx
082f9340 +0x0e4:  add    0xc(%ebp),%ebx
082f9343 +0x0e7:  lea    -0x10(%ebp),%eax
082f9346 +0x0ea:  mov    %eax,(%esp)
082f9349 +0x0ed:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f934e +0x0f2:  mov    0x4(%eax),%eax
082f9351 +0x0f5:  mov    %eax,(%esp)
082f9354 +0x0f8:  call   082fa2ee <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x120>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x120
082f9359 +0x0fd:  mov    (%eax),%edx
082f935b +0x0ff:  mov    %edx,0x29(%ebx)
082f935e +0x102:  mov    0x4(%eax),%edx
082f9361 +0x105:  mov    %edx,0x2d(%ebx)
082f9364 +0x108:  mov    0x8(%eax),%edx
082f9367 +0x10b:  mov    %edx,0x31(%ebx)
082f936a +0x10e:  mov    0xc(%eax),%edx
082f936d +0x111:  mov    %edx,0x35(%ebx)
082f9370 +0x114:  mov    0x10(%eax),%edx
082f9373 +0x117:  mov    %edx,0x39(%ebx)
082f9376 +0x11a:  mov    0x14(%eax),%edx
082f9379 +0x11d:  mov    %edx,0x3d(%ebx)
082f937c +0x120:  mov    0x18(%eax),%edx
082f937f +0x123:  mov    %edx,0x41(%ebx)
082f9382 +0x126:  movzwl 0x1c(%eax),%eax
082f9386 +0x12a:  mov    %ax,0x45(%ebx)
082f938a +0x12e:  mov    -0xc(%ebp),%eax
082f938d +0x131:  imul   $0x4b,%eax,%eax
082f9390 +0x134:  mov    %eax,%ebx
082f9392 +0x136:  add    0xc(%ebp),%ebx
082f9395 +0x139:  lea    -0x10(%ebp),%eax
082f9398 +0x13c:  mov    %eax,(%esp)
082f939b +0x13f:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f93a0 +0x144:  mov    0x4(%eax),%eax
082f93a3 +0x147:  mov    %eax,(%esp)
082f93a6 +0x14a:  call   082fa342 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x174>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x174
082f93ab +0x14f:  mov    (%eax),%eax
082f93ad +0x151:  mov    %eax,0x47(%ebx)
082f93b0 +0x154:  lea    -0x10(%ebp),%eax
082f93b3 +0x157:  mov    %eax,(%esp)
082f93b6 +0x15a:  call   082fa85a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x68c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x68c
082f93bb +0x15f:  addl   $0x1,-0xc(%ebp)
082f93bf +0x163:  lea    -0x14(%ebp),%eax
082f93c2 +0x166:  mov    %eax,0x4(%esp)
082f93c6 +0x16a:  lea    -0x10(%ebp),%eax
082f93c9 +0x16d:  mov    %eax,(%esp)
082f93cc +0x170:  call   082fa846 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x678>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x678
082f93d1 +0x175:  test   %al,%al
082f93d3 +0x177:  je     082f93e2 <+0x186>
082f93d5 +0x179:  cmpl   $0x72,-0xc(%ebp)
082f93d9 +0x17d:  jg     082f93e2 <+0x186>
082f93db +0x17f:  mov    $0x1,%eax
082f93e0 +0x184:  jmp    082f93e7 <+0x18b>
082f93e2 +0x186:  mov    $0x0,%eax
082f93e7 +0x18b:  test   %al,%al
082f93e9 +0x18d:  jne    082f92a0 <+0x44>
082f93ef +0x193:  mov    0x10(%ebp),%eax
082f93f2 +0x196:  mov    -0xc(%ebp),%edx
082f93f5 +0x199:  mov    %edx,(%eax)
082f93f7 +0x19b:  mov    $0x1,%eax
082f93fc +0x1a0:  mov    -0x4(%ebp),%ebx
082f93ff +0x1a3:  leave
082f9400 +0x1a4:  ret
082f9401 +0x1a5:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::GetItem @ 0x82f925c

/* WongWork::CAvatarItemMgr::GetItem(AvatarDetailInfo*, int*) const */

undefined4 __thiscall
WongWork::CAvatarItemMgr::GetItem(CAvatarItemMgr *this,AvatarDetailInfo *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char *__src;
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_18 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_14 [4];
  int local_10;
  
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::begin(local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::end(local_18);
  local_10 = 0;
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14,(_Rb_tree_const_iterator *)local_18);
    if ((cVar2 == '\0') || (0x72 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = local_10 * 0x4b;
    puVar4 = (undefined4 *)
             std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                       ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                        local_14);
    *(undefined4 *)(param_1 + iVar3) = *puVar4;
    iVar3 = local_10 * 0x4b;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    uVar6 = Avatar_Item::GetExpireDate(*(Avatar_Item **)(iVar5 + 4));
    *(undefined4 *)(param_1 + iVar3 + 4) = uVar6;
    iVar3 = local_10 * 0x4b;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    uVar6 = Avatar_Item::GetRegistTime(*(Avatar_Item **)(iVar5 + 4));
    *(undefined4 *)(param_1 + iVar3 + 8) = uVar6;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    __src = (char *)Avatar_Item::GetIPGAgencyNo(*(Avatar_Item **)(iVar3 + 4));
    strncpy((char *)(param_1 + local_10 * 0x4b + 0xc),__src,0x19);
    iVar3 = local_10;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    puVar4 = (undefined4 *)Avatar_Item::getJewelSocketData(*(Avatar_Item **)(iVar5 + 4));
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x29) = *puVar4;
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x2d) = puVar4[1];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x31) = puVar4[2];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x35) = puVar4[3];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x39) = puVar4[4];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x3d) = puVar4[5];
    *(undefined4 *)(param_1 + iVar3 * 0x4b + 0x41) = puVar4[6];
    *(undefined2 *)(param_1 + iVar3 * 0x4b + 0x45) = *(undefined2 *)(puVar4 + 7);
    iVar3 = local_10 * 0x4b;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)
                       local_14);
    puVar4 = (undefined4 *)Avatar_Item::getExnansionInfoRef(*(Avatar_Item **)(iVar5 + 4));
    *(undefined4 *)(param_1 + iVar3 + 0x47) = *puVar4;
    std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator++
              ((_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> *)local_14);
    local_10 = local_10 + 1;
  }
  *param_2 = local_10;
  return 1;
}
```
