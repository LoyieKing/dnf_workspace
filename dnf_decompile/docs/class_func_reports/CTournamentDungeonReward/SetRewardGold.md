# SetRewardGold

`_ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf`

`CTournamentDungeonReward::SetRewardGold(WongWork::stGenerateResult_t&, float)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284b8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284b8e  _ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf
#           CTournamentDungeonReward::SetRewardGold(WongWork::stGenerateResult_t&, float)
# range [0x08284b8e, 0x08284ca9]
08284b8e +0x000:  push   %ebp
08284b8f +0x001:  mov    %esp,%ebp
08284b91 +0x003:  push   %esi
08284b92 +0x004:  push   %ebx
08284b93 +0x005:  sub    $0x30,%esp
08284b96 +0x008:  movl   $0x0,-0x10(%ebp)
08284b9d +0x00f:  jmp    08284c91 <+0x103>
08284ba2 +0x014:  movl   $0x0,-0xc(%ebp)
08284ba9 +0x01b:  jmp    08284c7e <+0xf0>
08284bae +0x020:  mov    -0x10(%ebp),%edx
08284bb1 +0x023:  mov    -0xc(%ebp),%ecx
08284bb4 +0x026:  mov    0x8(%ebp),%ebx
08284bb7 +0x029:  mov    %ecx,%eax
08284bb9 +0x02b:  add    %eax,%eax
08284bbb +0x02d:  add    %ecx,%eax
08284bbd +0x02f:  lea    0x0(,%eax,4),%ecx
08284bc4 +0x036:  mov    %edx,%eax
08284bc6 +0x038:  add    %eax,%eax
08284bc8 +0x03a:  add    %edx,%eax
08284bca +0x03c:  shl    $0x3,%eax
08284bcd +0x03f:  lea    (%ecx,%eax,1),%eax
08284bd0 +0x042:  lea    (%ebx,%eax,1),%eax
08284bd3 +0x045:  add    $0x8,%eax
08284bd6 +0x048:  mov    (%eax),%eax
08284bd8 +0x04a:  test   %eax,%eax
08284bda +0x04c:  jne    08284c7a <+0xec>
08284be0 +0x052:  mov    0xc(%ebp),%edx
08284be3 +0x055:  lea    -0x18(%ebp),%eax
08284be6 +0x058:  mov    %edx,0x4(%esp)
08284bea +0x05c:  mov    %eax,(%esp)
08284bed +0x05f:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08284bf2 +0x064:  sub    $0x4,%esp
08284bf5 +0x067:  mov    0xc(%ebp),%edx
08284bf8 +0x06a:  lea    -0x14(%ebp),%eax
08284bfb +0x06d:  mov    %edx,0x4(%esp)
08284bff +0x071:  mov    %eax,(%esp)
08284c02 +0x074:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
08284c07 +0x079:  sub    $0x4,%esp
08284c0a +0x07c:  lea    -0x14(%ebp),%eax
08284c0d +0x07f:  mov    %eax,0x4(%esp)
08284c11 +0x083:  lea    -0x18(%ebp),%eax
08284c14 +0x086:  mov    %eax,(%esp)
08284c17 +0x089:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
08284c1c +0x08e:  test   %al,%al
08284c1e +0x090:  je     08284c7a <+0xec>
08284c20 +0x092:  mov    -0x10(%ebp),%ebx
08284c23 +0x095:  mov    -0xc(%ebp),%esi
08284c26 +0x098:  lea    -0x18(%ebp),%eax
08284c29 +0x09b:  mov    %eax,(%esp)
08284c2c +0x09e:  call   08237a86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd130>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd130
08284c31 +0x0a3:  mov    0x7(%eax),%eax
08284c34 +0x0a6:  mov    %eax,-0x1c(%ebp)
08284c37 +0x0a9:  fildl  -0x1c(%ebp)
08284c3a +0x0ac:  fmuls  0x10(%ebp)
08284c3d +0x0af:  fnstcw -0x1e(%ebp)
08284c40 +0x0b2:  movzwl -0x1e(%ebp),%eax
08284c44 +0x0b6:  mov    $0xc,%ah
08284c46 +0x0b8:  mov    %ax,-0x20(%ebp)
08284c4a +0x0bc:  fldcw  -0x20(%ebp)
08284c4d +0x0bf:  fistpl -0x1c(%ebp)
08284c50 +0x0c2:  fldcw  -0x1e(%ebp)
08284c53 +0x0c5:  mov    -0x1c(%ebp),%edx
08284c56 +0x0c8:  mov    0x8(%ebp),%ecx
08284c59 +0x0cb:  mov    %esi,%eax
08284c5b +0x0cd:  add    %eax,%eax
08284c5d +0x0cf:  add    %esi,%eax
08284c5f +0x0d1:  lea    0x0(,%eax,4),%esi
08284c66 +0x0d8:  mov    %ebx,%eax
08284c68 +0x0da:  add    %eax,%eax
08284c6a +0x0dc:  add    %ebx,%eax
08284c6c +0x0de:  shl    $0x3,%eax
08284c6f +0x0e1:  lea    (%esi,%eax,1),%eax
08284c72 +0x0e4:  lea    (%ecx,%eax,1),%eax
08284c75 +0x0e7:  add    $0xc,%eax
08284c78 +0x0ea:  mov    %edx,(%eax)
08284c7a +0x0ec:  addl   $0x1,-0xc(%ebp)
08284c7e +0x0f0:  cmpl   $0x1,-0xc(%ebp)
08284c82 +0x0f4:  setle  %al
08284c85 +0x0f7:  test   %al,%al
08284c87 +0x0f9:  jne    08284bae <+0x20>
08284c8d +0x0ff:  addl   $0x1,-0x10(%ebp)
08284c91 +0x103:  cmpl   $0x1,-0x10(%ebp)
08284c95 +0x107:  setle  %al
08284c98 +0x10a:  test   %al,%al
08284c9a +0x10c:  jne    08284ba2 <+0x14>
08284ca0 +0x112:  lea    -0x8(%ebp),%esp
08284ca3 +0x115:  add    $0x0,%esp
08284ca6 +0x118:  pop    %ebx
08284ca7 +0x119:  pop    %esi
08284ca8 +0x11a:  pop    %ebp
08284ca9 +0x11b:  ret
```

## 反编译 C

```c
// CTournamentDungeonReward::SetRewardGold @ 0x8284b8e

/* CTournamentDungeonReward::SetRewardGold(WongWork::stGenerateResult_t&, float) */

void __thiscall
CTournamentDungeonReward::SetRewardGold
          (CTournamentDungeonReward *this,stGenerateResult_t *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      if (*(int *)(this + local_10 * 0xc + local_14 * 0x18 + 8) == 0) {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
        bVar3 = __gnu_cxx::operator!=(local_1c,local_18);
        iVar2 = local_10;
        iVar1 = local_14;
        if (bVar3) {
          iVar4 = __gnu_cxx::
                  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                  ::operator->(local_1c);
          *(int *)(this + iVar2 * 0xc + iVar1 * 0x18 + 0xc) =
               (int)ROUND((float)*(int *)(iVar4 + 7) * param_2);
        }
      }
    }
  }
  return;
}
```
