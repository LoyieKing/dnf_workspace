# Send_APC_Info

`_ZN22TowerOfDespair_APC_Mgr13Send_APC_InfoERK9TOD_LayerP5CUser`

`TowerOfDespair_APC_Mgr::Send_APC_Info(TOD_Layer const&, CUser*)`

| 类 | 地址 |
|---|---|
| `TowerOfDespair_APC_Mgr` | `0x085feee4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085feee4  _ZN22TowerOfDespair_APC_Mgr13Send_APC_InfoERK9TOD_LayerP5CUser
#           TowerOfDespair_APC_Mgr::Send_APC_Info(TOD_Layer const&, CUser*)
# range [0x085feee4, 0x085ff01f]
085feee4 +0x000:  push   %ebp
085feee5 +0x001:  mov    %esp,%ebp
085feee7 +0x003:  push   %edi
085feee8 +0x004:  push   %esi
085feee9 +0x005:  push   %ebx
085feeea +0x006:  sub    $0x5c,%esp
085feeed +0x009:  lea    -0x34(%ebp),%eax
085feef0 +0x00c:  mov    %eax,(%esp)
085feef3 +0x00f:  call   085ff170 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x93>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x93
085feef8 +0x014:  mov    0x8(%ebp),%edx
085feefb +0x017:  lea    -0x30(%ebp),%eax
085feefe +0x01a:  mov    %edx,0x4(%esp)
085fef02 +0x01e:  mov    %eax,(%esp)
085fef05 +0x021:  call   085ff1aa <_GLOBAL__I__ZN9TOD_LayerC2Et+0xcd>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xcd
085fef0a +0x026:  sub    $0x4,%esp
085fef0d +0x029:  mov    0x8(%ebp),%edx
085fef10 +0x02c:  lea    -0x3c(%ebp),%eax
085fef13 +0x02f:  mov    0xc(%ebp),%ecx
085fef16 +0x032:  mov    %ecx,0x8(%esp)
085fef1a +0x036:  mov    %edx,0x4(%esp)
085fef1e +0x03a:  mov    %eax,(%esp)
085fef21 +0x03d:  call   085ff17e <_GLOBAL__I__ZN9TOD_LayerC2Et+0xa1>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xa1
085fef26 +0x042:  sub    $0x4,%esp
085fef29 +0x045:  mov    -0x3c(%ebp),%eax
085fef2c +0x048:  mov    %eax,-0x34(%ebp)
085fef2f +0x04b:  lea    -0x30(%ebp),%eax
085fef32 +0x04e:  mov    %eax,0x4(%esp)
085fef36 +0x052:  lea    -0x34(%ebp),%eax
085fef39 +0x055:  mov    %eax,(%esp)
085fef3c +0x058:  call   085ff1d0 <_GLOBAL__I__ZN9TOD_LayerC2Et+0xf3>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xf3
085fef41 +0x05d:  test   %al,%al
085fef43 +0x05f:  je     085fefcc <+0xe8>
085fef49 +0x065:  lea    -0x34(%ebp),%eax
085fef4c +0x068:  mov    %eax,(%esp)
085fef4f +0x06b:  call   085ff1e4 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x107>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x107
085fef54 +0x070:  lea    0x4(%eax),%edx
085fef57 +0x073:  mov    0x10(%ebp),%eax
085fef5a +0x076:  mov    %eax,0x8(%esp)
085fef5e +0x07a:  mov    0xc(%ebp),%eax
085fef61 +0x07d:  mov    %eax,0x4(%esp)
085fef65 +0x081:  mov    %edx,(%esp)
085fef68 +0x084:  call   085febca <_ZN15SendingAPC_Info13Send_APC_InfoERK9TOD_LayerP5CUser>  ; SendingAPC_Info::Send_APC_Info(TOD_Layer const&, CUser*)
085fef6d +0x089:  lea    -0x34(%ebp),%eax
085fef70 +0x08c:  mov    %eax,(%esp)
085fef73 +0x08f:  call   085ff1e4 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x107>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x107
085fef78 +0x094:  add    $0x4,%eax
085fef7b +0x097:  mov    %eax,(%esp)
085fef7e +0x09a:  call   085ff12c <_GLOBAL__I__ZN9TOD_LayerC2Et+0x4f>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x4f
085fef83 +0x09f:  mov    %eax,%esi
085fef85 +0x0a1:  mov    0xc(%ebp),%eax
085fef88 +0x0a4:  mov    %eax,(%esp)
085fef8b +0x0a7:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085fef90 +0x0ac:  movzwl %ax,%edi
085fef93 +0x0af:  mov    0x10(%ebp),%eax
085fef96 +0x0b2:  mov    %eax,(%esp)
085fef99 +0x0b5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085fef9e +0x0ba:  mov    %eax,%ebx
085fefa0 +0x0bc:  lea    -0x29(%ebp),%eax
085fefa3 +0x0bf:  mov    %eax,(%esp)
085fefa6 +0x0c2:  call   0822ad5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x404>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x404
085fefab +0x0c7:  mov    %esi,0x10(%esp)
085fefaf +0x0cb:  mov    %edi,0xc(%esp)
085fefb3 +0x0cf:  mov    %ebx,0x8(%esp)
085fefb7 +0x0d3:  movl   $"TOD:sending [%d] toUser, layer [%d] : clone : [%d]",0x4(%esp)
085fefbf +0x0db:  lea    -0x29(%ebp),%eax
085fefc2 +0x0de:  mov    %eax,(%esp)
085fefc5 +0x0e1:  call   0822ad60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x40a
085fefca +0x0e6:  jmp    085ff014 <+0x130>
085fefcc +0x0e8:  mov    0xc(%ebp),%eax
085fefcf +0x0eb:  mov    %eax,(%esp)
085fefd2 +0x0ee:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085fefd7 +0x0f3:  movzwl %ax,%ebx
085fefda +0x0f6:  movl   $0x5,0xc(%esp)
085fefe2 +0x0fe:  movl   $0xa1,0x8(%esp)
085fefea +0x106:  movl   $&_ZZN22TowerOfDespair_APC_Mgr13Send_APC_InfoERK9TOD_LayerP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085feff2 +0x10e:  lea    -0x28(%ebp),%eax
085feff5 +0x111:  mov    %eax,(%esp)
085feff8 +0x114:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085feffd +0x119:  mov    %ebx,0x8(%esp)
085ff001 +0x11d:  movl   $"TOD:invalid layer %d",0x4(%esp)
085ff009 +0x125:  lea    -0x28(%ebp),%eax
085ff00c +0x128:  mov    %eax,(%esp)
085ff00f +0x12b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085ff014 +0x130:  lea    -0xc(%ebp),%esp
085ff017 +0x133:  add    $0x0,%esp
085ff01a +0x136:  pop    %ebx
085ff01b +0x137:  pop    %esi
085ff01c +0x138:  pop    %edi
085ff01d +0x139:  pop    %ebp
085ff01e +0x13a:  ret
085ff01f +0x13b:  nop
```

## 反编译 C

```c
// TowerOfDespair_APC_Mgr::Send_APC_Info @ 0x85feee4

/* TowerOfDespair_APC_Mgr::Send_APC_Info(TOD_Layer const&, CUser*) */

void __thiscall
TowerOfDespair_APC_Mgr::Send_APC_Info
          (TowerOfDespair_APC_Mgr *this,TOD_Layer *param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  local_34 [7];
  cMyTraceNoop local_2d;
  cMyTrace local_2c [28];
  
  std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_38);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::end(local_34);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::find((TOD_Layer *)local_40);
  local_38 = local_40[0];
  cVar1 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator!=
                    ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_38,
                     (_Rb_tree_iterator *)local_34);
  if (cVar1 == '\0') {
    uVar4 = TOD_Layer::GetLayer(param_1);
    cMyTrace::cMyTrace(local_2c,
                       "void TowerOfDespair_APC_Mgr::Send_APC_Info(const TOD_Layer&, CUser*)",0xa1,5
                      );
    cMyTrace::operator()(local_2c,"TOD:invalid layer %d",uVar4 & 0xffff);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator->
                      ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_38);
    SendingAPC_Info::Send_APC_Info((SendingAPC_Info *)(iVar2 + 4),param_1,param_2);
    iVar2 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator->
                      ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_38);
    uVar3 = SendingAPC_Info::get_user_charac_no((SendingAPC_Info *)(iVar2 + 4));
    uVar4 = TOD_Layer::GetLayer(param_1);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    cMyTraceNoop::cMyTraceNoop(&local_2d);
    cMyTraceNoop::operator()
              ((char *)&local_2d,"TOD:sending [%d] toUser, layer [%d] : clone : [%d]",uVar5,
               uVar4 & 0xffff,uVar3);
  }
  return;
}
```
