# _onBoosterItemUseResult

`_ZN25Dispatcher_UseBoosterItem23_onBoosterItemUseResultEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi`

`Dispatcher_UseBoosterItem::_onBoosterItemUseResult(CUser*, std::vector<Inven_Item, std::allocator<Inven_Item> >&, int)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseBoosterItem` | `0x082099bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082099bc  _ZN25Dispatcher_UseBoosterItem23_onBoosterItemUseResultEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi
#           Dispatcher_UseBoosterItem::_onBoosterItemUseResult(CUser*, std::vector<Inven_Item, std::allocator<Inven_Item> >&, int)
# range [0x082099bc, 0x08209a5d]
082099bc +0x00:  push   %ebp
082099bd +0x01:  mov    %esp,%ebp
082099bf +0x03:  sub    $0x28,%esp
082099c2 +0x06:  lea    -0x10(%ebp),%eax
082099c5 +0x09:  mov    0x10(%ebp),%edx
082099c8 +0x0c:  mov    %edx,0x4(%esp)
082099cc +0x10:  mov    %eax,(%esp)
082099cf +0x13:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
082099d4 +0x18:  sub    $0x4,%esp
082099d7 +0x1b:  lea    -0x10(%ebp),%eax
082099da +0x1e:  mov    %eax,0x4(%esp)
082099de +0x22:  lea    -0x14(%ebp),%eax
082099e1 +0x25:  mov    %eax,(%esp)
082099e4 +0x28:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
082099e9 +0x2d:  lea    -0xc(%ebp),%eax
082099ec +0x30:  mov    0x10(%ebp),%edx
082099ef +0x33:  mov    %edx,0x4(%esp)
082099f3 +0x37:  mov    %eax,(%esp)
082099f6 +0x3a:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
082099fb +0x3f:  sub    $0x4,%esp
082099fe +0x42:  lea    -0xc(%ebp),%eax
08209a01 +0x45:  mov    %eax,0x4(%esp)
08209a05 +0x49:  lea    -0x18(%ebp),%eax
08209a08 +0x4c:  mov    %eax,(%esp)
08209a0b +0x4f:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
08209a10 +0x54:  jmp    08209a45 <+0x89>
08209a12 +0x56:  lea    -0x14(%ebp),%eax
08209a15 +0x59:  mov    %eax,(%esp)
08209a18 +0x5c:  call   08152b48 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x247d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x247d
08209a1d +0x61:  mov    0x14(%ebp),%edx
08209a20 +0x64:  mov    %edx,0xc(%esp)
08209a24 +0x68:  mov    %eax,0x8(%esp)
08209a28 +0x6c:  mov    0xc(%ebp),%eax
08209a2b +0x6f:  mov    %eax,0x4(%esp)
08209a2f +0x73:  mov    0x8(%ebp),%eax
08209a32 +0x76:  mov    %eax,(%esp)
08209a35 +0x79:  call   08209b0e <_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi>  ; Dispatcher_UseBoosterItem::sendBroadCastItems(CUser*, Inven_Item const&, int)
08209a3a +0x7e:  lea    -0x14(%ebp),%eax
08209a3d +0x81:  mov    %eax,(%esp)
08209a40 +0x84:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
08209a45 +0x89:  lea    -0x18(%ebp),%eax
08209a48 +0x8c:  mov    %eax,0x4(%esp)
08209a4c +0x90:  lea    -0x14(%ebp),%eax
08209a4f +0x93:  mov    %eax,(%esp)
08209a52 +0x96:  call   08152b06 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x243b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x243b
08209a57 +0x9b:  test   %al,%al
08209a59 +0x9d:  jne    08209a12 <+0x56>
08209a5b +0x9f:  leave
08209a5c +0xa0:  ret
08209a5d +0xa1:  nop
```

## 反编译 C

```c
// Dispatcher_UseBoosterItem::_onBoosterItemUseResult @ 0x82099bc

/* Dispatcher_UseBoosterItem::_onBoosterItemUseResult(CUser*, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&, int) */

void __thiscall
Dispatcher_UseBoosterItem::_onBoosterItemUseResult
          (Dispatcher_UseBoosterItem *this,CUser *param_1,vector *param_2,int param_3)

{
  bool bVar1;
  Inven_Item *pIVar2;
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_1c [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_18,local_14);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_1c,local_10);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) break;
    pIVar2 = (Inven_Item *)
             __gnu_cxx::
             __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
             ::operator*(local_18);
    sendBroadCastItems(this,param_1,pIVar2,param_3);
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_18);
  }
  return;
}
```
