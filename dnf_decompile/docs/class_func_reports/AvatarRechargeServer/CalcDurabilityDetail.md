# CalcDurabilityDetail

`_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE`

`AvatarRechargeServer::CalcDurabilityDetail(CUser*, int, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x081902e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081902e8  _ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE
#           AvatarRechargeServer::CalcDurabilityDetail(CUser*, int, std::vector<int, std::allocator<int> >&)
# range [0x081902e8, 0x08190415]
081902e8 +0x000:  push   %ebp
081902e9 +0x001:  mov    %esp,%ebp
081902eb +0x003:  push   %ebx
081902ec +0x004:  sub    $0x24,%esp
081902ef +0x007:  mov    0x10(%ebp),%ebx
081902f2 +0x00a:  mov    0xc(%ebp),%eax
081902f5 +0x00d:  mov    %eax,(%esp)
081902f8 +0x010:  call   0819340a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x72>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x72
081902fd +0x015:  mov    %ebx,0x8(%esp)
08190301 +0x019:  movl   $0x0,0x4(%esp)
08190309 +0x021:  mov    %eax,(%esp)
0819030c +0x024:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08190311 +0x029:  mov    %eax,-0x14(%ebp)
08190314 +0x02c:  mov    -0x14(%ebp),%eax
08190317 +0x02f:  mov    %eax,(%esp)
0819031a +0x032:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0819031f +0x037:  test   %al,%al
08190321 +0x039:  jne    0819032f <+0x47>
08190323 +0x03b:  mov    -0x14(%ebp),%eax
08190326 +0x03e:  movzwl 0xf(%eax),%eax
0819032a +0x042:  test   %ax,%ax
0819032d +0x045:  jne    08190336 <+0x4e>
0819032f +0x047:  mov    $0x1,%eax
08190334 +0x04c:  jmp    0819033b <+0x53>
08190336 +0x04e:  mov    $0x0,%eax
0819033b +0x053:  test   %al,%al
0819033d +0x055:  je     08190349 <+0x61>
0819033f +0x057:  mov    $0x0,%eax
08190344 +0x05c:  jmp    0819040f <+0x127>
08190349 +0x061:  mov    0xc(%ebp),%eax
0819034c +0x064:  mov    %eax,(%esp)
0819034f +0x067:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08190354 +0x06c:  mov    %eax,(%esp)
08190357 +0x06f:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
0819035c +0x074:  mov    %eax,-0x10(%ebp)
0819035f +0x077:  movw   $0x0,-0xa(%ebp)
08190365 +0x07d:  mov    0x8(%ebp),%eax
08190368 +0x080:  movzbl 0x58(%eax),%eax
0819036c +0x084:  xor    $0x1,%eax
0819036f +0x087:  test   %al,%al
08190371 +0x089:  je     0819038e <+0xa6>
08190373 +0x08b:  mov    -0x14(%ebp),%eax
08190376 +0x08e:  mov    0x7(%eax),%eax
08190379 +0x091:  mov    %eax,0x4(%esp)
0819037d +0x095:  mov    -0x10(%ebp),%eax
08190380 +0x098:  mov    %eax,(%esp)
08190383 +0x09b:  call   082f9f9e <_ZN8WongWork14CAvatarItemMgr19GetEmblemReduceRateEi>  ; WongWork::CAvatarItemMgr::GetEmblemReduceRate(int)
08190388 +0x0a0:  mov    %ax,-0xa(%ebp)
0819038c +0x0a4:  jmp    08190398 <+0xb0>
0819038e +0x0a6:  mov    0x8(%ebp),%eax
08190391 +0x0a9:  mov    0x54(%eax),%eax
08190394 +0x0ac:  mov    %ax,-0xa(%ebp)
08190398 +0x0b0:  cmpw   $0x0,-0xa(%ebp)
0819039d +0x0b5:  jle    0819040a <+0x122>
0819039f +0x0b7:  mov    -0x14(%ebp),%eax
081903a2 +0x0ba:  movzwl 0xf(%eax),%eax
081903a6 +0x0be:  test   %ax,%ax
081903a9 +0x0c1:  je     0819040a <+0x122>
081903ab +0x0c3:  movl   $0x3e8,(%esp)
081903b2 +0x0ca:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
081903b7 +0x0cf:  movswl -0xa(%ebp),%edx
081903bb +0x0d3:  cmp    %edx,%eax
081903bd +0x0d5:  setl   %al
081903c0 +0x0d8:  test   %al,%al
081903c2 +0x0da:  je     0819040a <+0x122>
081903c4 +0x0dc:  mov    -0x14(%ebp),%eax
081903c7 +0x0df:  movzwl 0xf(%eax),%eax
081903cb +0x0e3:  lea    -0x1(%eax),%edx
081903ce +0x0e6:  mov    -0x14(%ebp),%eax
081903d1 +0x0e9:  mov    %dx,0xf(%eax)
081903d5 +0x0ed:  mov    -0x14(%ebp),%eax
081903d8 +0x0f0:  movzwl 0xf(%eax),%eax
081903dc +0x0f4:  movzwl %ax,%edx
081903df +0x0f7:  mov    -0x14(%ebp),%eax
081903e2 +0x0fa:  mov    0x7(%eax),%eax
081903e5 +0x0fd:  mov    %edx,0x8(%esp)
081903e9 +0x101:  mov    %eax,0x4(%esp)
081903ed +0x105:  mov    -0x10(%ebp),%eax
081903f0 +0x108:  mov    %eax,(%esp)
081903f3 +0x10b:  call   082fa008 <_ZN8WongWork14CAvatarItemMgr15UpdateEnduranceEii>  ; WongWork::CAvatarItemMgr::UpdateEndurance(int, int)
081903f8 +0x110:  lea    0x10(%ebp),%eax
081903fb +0x113:  mov    %eax,0x4(%esp)
081903ff +0x117:  mov    0x14(%ebp),%eax
08190402 +0x11a:  mov    %eax,(%esp)
08190405 +0x11d:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0819040a +0x122:  mov    $0x1,%eax
0819040f +0x127:  add    $0x24,%esp
08190412 +0x12a:  pop    %ebx
08190413 +0x12b:  pop    %ebp
08190414 +0x12c:  ret
08190415 +0x12d:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::CalcDurabilityDetail @ 0x81902e8

/* AvatarRechargeServer::CalcDurabilityDetail(CUser*, int, std::vector<int, std::allocator<int> >&)
    */

undefined4 __thiscall
AvatarRechargeServer::CalcDurabilityDetail
          (AvatarRechargeServer *this,CUser *param_1,int param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  CInventory *pCVar3;
  Inven_Item *this_00;
  undefined4 uVar4;
  CAvatarItemMgr *this_01;
  int iVar5;
  short local_e;
  
  iVar5 = param_2;
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)param_1);
  this_00 = (Inven_Item *)CInventory::GetInvenRef(pCVar3,0,iVar5);
  cVar2 = Inven_Item::isEmpty(this_00);
  if ((cVar2 == '\0') && (*(short *)(this_00 + 0xf) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    this_01 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar3);
    if (this[0x58] == (AvatarRechargeServer)0x1) {
      local_e = (short)*(undefined4 *)(this + 0x54);
    }
    else {
      local_e = WongWork::CAvatarItemMgr::GetEmblemReduceRate((int)this_01);
    }
    if ((0 < local_e) && (*(short *)(this_00 + 0xf) != 0)) {
      iVar5 = get_rand_int(1000);
      if (iVar5 < local_e) {
        *(short *)(this_00 + 0xf) = *(short *)(this_00 + 0xf) + -1;
        WongWork::CAvatarItemMgr::UpdateEndurance
                  (this_01,*(int *)(this_00 + 7),(uint)*(ushort *)(this_00 + 0xf));
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_3,&param_2);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
