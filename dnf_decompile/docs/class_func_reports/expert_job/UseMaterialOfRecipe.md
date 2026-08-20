# UseMaterialOfRecipe

`_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb`

`expert_job::UseMaterialOfRecipe(CUser*, CItem*, PacketGuard*, bool)`

| 类 | 地址 |
|---|---|
| `expert_job` | `0x0849bcfb` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849bcfb  _ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb
#           expert_job::UseMaterialOfRecipe(CUser*, CItem*, PacketGuard*, bool)
# range [0x0849bcfb, 0x0849be31]
0849bcfb +0x000:  push   %ebp
0849bcfc +0x001:  mov    %esp,%ebp
0849bcfe +0x003:  push   %esi
0849bcff +0x004:  push   %ebx
0849bd00 +0x005:  sub    $0x40,%esp
0849bd03 +0x008:  mov    0x14(%ebp),%eax
0849bd06 +0x00b:  mov    %al,-0x1c(%ebp)
0849bd09 +0x00e:  movb   $0x0,-0x9(%ebp)
0849bd0d +0x012:  cmpb   $0x0,-0x1c(%ebp)
0849bd11 +0x016:  je     0849bdc5 <+0xca>
0849bd17 +0x01c:  lea    -0x18(%ebp),%eax
0849bd1a +0x01f:  mov    %eax,(%esp)
0849bd1d +0x022:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0849bd22 +0x027:  lea    -0x18(%ebp),%eax
0849bd25 +0x02a:  mov    %eax,0x4(%esp)
0849bd29 +0x02e:  mov    0xc(%ebp),%eax
0849bd2c +0x031:  mov    %eax,(%esp)
0849bd2f +0x034:  call   0849b734 <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE>  ; expert_job::GetRecipeInputItems(CItem*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0849bd34 +0x039:  lea    -0x18(%ebp),%eax
0849bd37 +0x03c:  mov    %eax,(%esp)
0849bd3a +0x03f:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0849bd3f +0x044:  test   %al,%al
0849bd41 +0x046:  je     0849bd4f <+0x54>
0849bd43 +0x048:  mov    $0x11,%ebx
0849bd48 +0x04d:  mov    $0x0,%esi
0849bd4d +0x052:  jmp    0849bdb4 <+0xb9>
0849bd4f +0x054:  movl   $0x0,0x14(%esp)
0849bd57 +0x05c:  lea    -0x9(%ebp),%eax
0849bd5a +0x05f:  mov    %eax,0x10(%esp)
0849bd5e +0x063:  mov    0x10(%ebp),%eax
0849bd61 +0x066:  mov    %eax,0xc(%esp)
0849bd65 +0x06a:  movl   $0x0,0x8(%esp)
0849bd6d +0x072:  lea    -0x18(%ebp),%eax
0849bd70 +0x075:  mov    %eax,0x4(%esp)
0849bd74 +0x079:  mov    0x8(%ebp),%eax
0849bd77 +0x07c:  mov    %eax,(%esp)
0849bd7a +0x07f:  call   0849b957 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi>  ; expert_job::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, PacketGuard*, bool&, int)
0849bd7f +0x084:  xor    $0x1,%eax
0849bd82 +0x087:  test   %al,%al
0849bd84 +0x089:  je     0849bd92 <+0x97>
0849bd86 +0x08b:  mov    $0x11,%ebx
0849bd8b +0x090:  mov    $0x0,%esi
0849bd90 +0x095:  jmp    0849bdb4 <+0xb9>
0849bd92 +0x097:  mov    $0x1,%esi
0849bd97 +0x09c:  jmp    0849bdb4 <+0xb9>
0849bd99 +0x09e:  mov    %edx,%ebx
0849bd9b +0x0a0:  mov    %eax,%esi
0849bd9d +0x0a2:  lea    -0x18(%ebp),%eax
0849bda0 +0x0a5:  mov    %eax,(%esp)
0849bda3 +0x0a8:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0849bda8 +0x0ad:  mov    %esi,%eax
0849bdaa +0x0af:  mov    %ebx,%edx
0849bdac +0x0b1:  mov    %eax,(%esp)
0849bdaf +0x0b4:  call   08ae3750 <_Unwind_Resume>
0849bdb4 +0x0b9:  lea    -0x18(%ebp),%eax
0849bdb7 +0x0bc:  mov    %eax,(%esp)
0849bdba +0x0bf:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0849bdbf +0x0c4:  test   %esi,%esi
0849bdc1 +0x0c6:  je     0849be29 <+0x12e>
0849bdc3 +0x0c8:  jmp    0849be09 <+0x10e>
0849bdc5 +0x0ca:  mov    0xc(%ebp),%eax
0849bdc8 +0x0cd:  lea    0x174(%eax),%edx
0849bdce +0x0d3:  movl   $0x0,0x14(%esp)
0849bdd6 +0x0db:  lea    -0x9(%ebp),%eax
0849bdd9 +0x0de:  mov    %eax,0x10(%esp)
0849bddd +0x0e2:  mov    0x10(%ebp),%eax
0849bde0 +0x0e5:  mov    %eax,0xc(%esp)
0849bde4 +0x0e9:  movl   $0x0,0x8(%esp)
0849bdec +0x0f1:  mov    %edx,0x4(%esp)
0849bdf0 +0x0f5:  mov    0x8(%ebp),%eax
0849bdf3 +0x0f8:  mov    %eax,(%esp)
0849bdf6 +0x0fb:  call   0849b957 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi>  ; expert_job::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, PacketGuard*, bool&, int)
0849bdfb +0x100:  xor    $0x1,%eax
0849bdfe +0x103:  test   %al,%al
0849be00 +0x105:  je     0849be09 <+0x10e>
0849be02 +0x107:  mov    $0x11,%ebx
0849be07 +0x10c:  jmp    0849be29 <+0x12e>
0849be09 +0x10e:  movzbl -0x9(%ebp),%eax
0849be0d +0x112:  test   %al,%al
0849be0f +0x114:  je     0849be24 <+0x129>
0849be11 +0x116:  movl   $0x16,0x4(%esp)
0849be19 +0x11e:  mov    0x8(%ebp),%eax
0849be1c +0x121:  mov    %eax,(%esp)
0849be1f +0x124:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
0849be24 +0x129:  mov    $0x0,%ebx
0849be29 +0x12e:  mov    %ebx,%eax
0849be2b +0x130:  add    $0x40,%esp
0849be2e +0x133:  pop    %ebx
0849be2f +0x134:  pop    %esi
0849be30 +0x135:  pop    %ebp
0849be31 +0x136:  ret
```

## 反编译 C

```c
// expert_job::UseMaterialOfRecipe @ 0x849bcfb

/* expert_job::UseMaterialOfRecipe(CUser*, CItem*, PacketGuard*, bool) */

undefined4
expert_job::UseMaterialOfRecipe(CUser *param_1,CItem *param_2,PacketGuard *param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 unaff_EBX;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_1c [15];
  bool local_d;
  
  local_d = false;
  if (param_4) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_1c);
                    /* try { // try from 0849bd2f to 0849bd7e has its CatchHandler @ 0849bd99 */
    GetRecipeInputItems(param_2,(vector *)local_1c);
    cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar2 == '\0') {
      cVar2 = DelMaterialOfRecipe(param_1,(vector *)local_1c,0,param_3,&local_d,0);
      if (cVar2 == '\x01') {
        bVar1 = true;
      }
      else {
        unaff_EBX = 0x11;
        bVar1 = false;
      }
    }
    else {
      unaff_EBX = 0x11;
      bVar1 = false;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_1c);
    if (!bVar1) {
      return unaff_EBX;
    }
  }
  else {
    cVar2 = DelMaterialOfRecipe(param_1,(vector *)(param_2 + 0x174),0,param_3,&local_d,0);
    if (cVar2 != '\x01') {
      return 0x11;
    }
  }
  if (local_d != false) {
    CUser::send_equip(param_1,0x16);
  }
  return 0;
}
```
