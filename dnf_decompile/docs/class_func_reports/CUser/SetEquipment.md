# SetEquipment

`_ZN5CUser12SetEquipmentEiPviS0_`

`CUser::SetEquipment(int, void*, int, void*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865da4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865da4e  _ZN5CUser12SetEquipmentEiPviS0_
#           CUser::SetEquipment(int, void*, int, void*)
# range [0x0865da4e, 0x0865db6b]
0865da4e +0x000:  push   %ebp
0865da4f +0x001:  mov    %esp,%ebp
0865da51 +0x003:  push   %ebx
0865da52 +0x004:  sub    $0x24,%esp
0865da55 +0x007:  mov    0x18(%ebp),%eax
0865da58 +0x00a:  mov    %eax,-0x14(%ebp)
0865da5b +0x00d:  mov    0x10(%ebp),%eax
0865da5e +0x010:  mov    %eax,-0x10(%ebp)
0865da61 +0x013:  movl   $0x0,-0xc(%ebp)
0865da68 +0x01a:  jmp    0865db1a <+0xcc>
0865da6d +0x01f:  mov    -0xc(%ebp),%eax
0865da70 +0x022:  imul   $0x3d,%eax,%eax
0865da73 +0x025:  add    -0x10(%ebp),%eax
0865da76 +0x028:  mov    0x2(%eax),%eax
0865da79 +0x02b:  test   %eax,%eax
0865da7b +0x02d:  je     0865dab5 <+0x67>
0865da7d +0x02f:  mov    -0xc(%ebp),%eax
0865da80 +0x032:  imul   $0x3d,%eax,%eax
0865da83 +0x035:  add    -0x10(%ebp),%eax
0865da86 +0x038:  mov    %eax,(%esp)
0865da89 +0x03b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0865da8e +0x040:  test   %eax,%eax
0865da90 +0x042:  jle    0865dab5 <+0x67>
0865da92 +0x044:  mov    -0xc(%ebp),%eax
0865da95 +0x047:  imul   $0x3d,%eax,%eax
0865da98 +0x04a:  add    -0x10(%ebp),%eax
0865da9b +0x04d:  mov    %eax,(%esp)
0865da9e +0x050:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0865daa3 +0x055:  mov    %eax,%ebx
0865daa5 +0x057:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0865daaa +0x05c:  cmp    %eax,%ebx
0865daac +0x05e:  jge    0865dab5 <+0x67>
0865daae +0x060:  mov    $0x1,%eax
0865dab3 +0x065:  jmp    0865daba <+0x6c>
0865dab5 +0x067:  mov    $0x0,%eax
0865daba +0x06c:  test   %al,%al
0865dabc +0x06e:  je     0865db16 <+0xc8>
0865dabe +0x070:  mov    -0x14(%ebp),%eax
0865dac1 +0x073:  mov    (%eax),%ebx
0865dac3 +0x075:  mov    0xc(%ebp),%eax
0865dac6 +0x078:  mov    0x8(%ebp),%edx
0865dac9 +0x07b:  add    $0x796e8,%edx
0865dacf +0x081:  mov    %eax,0x4(%esp)
0865dad3 +0x085:  mov    %edx,(%esp)
0865dad6 +0x088:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865dadb +0x08d:  mov    (%eax),%edx
0865dadd +0x08f:  mov    -0x14(%ebp),%eax
0865dae0 +0x092:  mov    %edx,0x4(%eax,%ebx,4)
0865dae4 +0x096:  mov    -0x14(%ebp),%eax
0865dae7 +0x099:  mov    (%eax),%eax
0865dae9 +0x09b:  mov    -0xc(%ebp),%edx
0865daec +0x09e:  mov    %edx,%ecx
0865daee +0x0a0:  mov    -0x14(%ebp),%edx
0865daf1 +0x0a3:  mov    %cl,0x5a4(%edx,%eax,1)
0865daf8 +0x0aa:  mov    -0xc(%ebp),%eax
0865dafb +0x0ad:  imul   $0x3d,%eax,%eax
0865dafe +0x0b0:  add    -0x10(%ebp),%eax
0865db01 +0x0b3:  mov    %eax,(%esp)
0865db04 +0x0b6:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0865db09 +0x0bb:  mov    -0x14(%ebp),%eax
0865db0c +0x0be:  mov    (%eax),%eax
0865db0e +0x0c0:  lea    0x1(%eax),%edx
0865db11 +0x0c3:  mov    -0x14(%ebp),%eax
0865db14 +0x0c6:  mov    %edx,(%eax)
0865db16 +0x0c8:  addl   $0x1,-0xc(%ebp)
0865db1a +0x0cc:  cmpl   $0x9,-0xc(%ebp)
0865db1e +0x0d0:  setle  %al
0865db21 +0x0d3:  test   %al,%al
0865db23 +0x0d5:  jne    0865da6d <+0x1f>
0865db29 +0x0db:  mov    0xc(%ebp),%eax
0865db2c +0x0de:  mov    0x8(%ebp),%edx
0865db2f +0x0e1:  add    $0x796e8,%edx
0865db35 +0x0e7:  mov    %eax,0x4(%esp)
0865db39 +0x0eb:  mov    %edx,(%esp)
0865db3c +0x0ee:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0865db41 +0x0f3:  lea    0xda(%eax),%edx
0865db47 +0x0f9:  mov    0x14(%ebp),%eax
0865db4a +0x0fc:  mov    %eax,0xc(%esp)
0865db4e +0x100:  mov    0x10(%ebp),%eax
0865db51 +0x103:  mov    %eax,0x8(%esp)
0865db55 +0x107:  movl   $0x0,0x4(%esp)
0865db5d +0x10f:  mov    %edx,(%esp)
0865db60 +0x112:  call   084fb11a <_ZN10CInventory12SetInvenDataEiPvi>  ; CInventory::SetInvenData(int, void*, int)
0865db65 +0x117:  add    $0x24,%esp
0865db68 +0x11a:  pop    %ebx
0865db69 +0x11b:  pop    %ebp
0865db6a +0x11c:  ret
0865db6b +0x11d:  nop
```

## 反编译 C

```c
// CUser::SetEquipment @ 0x865da4e

/* CUser::SetEquipment(int, void*, int, void*) */

void __thiscall CUser::SetEquipment(CUser *this,int param_1,void *param_2,int param_3,void *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_10;
  
  local_10 = 0;
  do {
    if (9 < local_10) {
      iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      CInventory::SetInvenData((CInventory *)(iVar4 + 0xda),0,param_2,param_3);
      return;
    }
    if (*(int *)((int)param_2 + local_10 * 0x3d + 2) == 0) {
LAB_0865dab5:
      bVar1 = false;
    }
    else {
      iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_10 * 0x3d + (int)param_2));
      if (iVar4 < 1) goto LAB_0865dab5;
      iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_10 * 0x3d + (int)param_2));
      iVar2 = OS_API::GetDateTimeTick();
      if (iVar2 <= iVar4) goto LAB_0865dab5;
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = *(int *)param_4;
      puVar3 = (undefined4 *)
               std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                         ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                          param_1);
      *(undefined4 *)((int)param_4 + iVar4 * 4 + 4) = *puVar3;
      *(char *)((int)param_4 + *(int *)param_4 + 0x5a4) = (char)local_10;
      Inven_Item::reset((Inven_Item *)(local_10 * 0x3d + (int)param_2));
      *(int *)param_4 = *(int *)param_4 + 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
