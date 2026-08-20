# verifyMaterialItemByRule

`_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj`

`EventClassify::CObjectBringUp::verifyMaterialItemByRule(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CObjectBringUp` | `0x0810fcea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810fcea  _ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj
#           EventClassify::CObjectBringUp::verifyMaterialItemByRule(CUser*, unsigned int)
# range [0x0810fcea, 0x0810fe19]
0810fcea +0x000:  push   %ebp
0810fceb +0x001:  mov    %esp,%ebp
0810fced +0x003:  push   %ebx
0810fcee +0x004:  sub    $0x24,%esp
0810fcf1 +0x007:  mov    0x8(%ebp),%eax
0810fcf4 +0x00a:  mov    0x1c(%eax),%eax
0810fcf7 +0x00d:  movzbl 0xc(%eax),%eax
0810fcfb +0x011:  test   %al,%al
0810fcfd +0x013:  je     0810fd91 <+0xa7>
0810fd03 +0x019:  movl   $0x0,-0xc(%ebp)
0810fd0a +0x020:  mov    0x8(%ebp),%eax
0810fd0d +0x023:  mov    0x1c(%eax),%eax
0810fd10 +0x026:  add    $0x10,%eax
0810fd13 +0x029:  mov    %eax,(%esp)
0810fd16 +0x02c:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0810fd1b +0x031:  mov    %eax,%ebx
0810fd1d +0x033:  mov    0xc(%ebp),%eax
0810fd20 +0x036:  mov    %eax,(%esp)
0810fd23 +0x039:  call   08110d12 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x224>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x224
0810fd28 +0x03e:  movzbl %al,%eax
0810fd2b +0x041:  cmp    %eax,%ebx
0810fd2d +0x043:  setbe  %al
0810fd30 +0x046:  test   %al,%al
0810fd32 +0x048:  je     0810fd4d <+0x63>
0810fd34 +0x04a:  mov    0x8(%ebp),%eax
0810fd37 +0x04d:  mov    0x1c(%eax),%eax
0810fd3a +0x050:  add    $0x10,%eax
0810fd3d +0x053:  mov    %eax,(%esp)
0810fd40 +0x056:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0810fd45 +0x05b:  sub    $0x1,%eax
0810fd48 +0x05e:  mov    %eax,-0xc(%ebp)
0810fd4b +0x061:  jmp    0810fd5f <+0x75>
0810fd4d +0x063:  mov    0xc(%ebp),%eax
0810fd50 +0x066:  mov    %eax,(%esp)
0810fd53 +0x069:  call   08110d12 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x224>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x224
0810fd58 +0x06e:  movzbl %al,%eax
0810fd5b +0x071:  mov    %eax,-0xc(%ebp)
0810fd5e +0x074:  nop
0810fd5f +0x075:  mov    0x8(%ebp),%eax
0810fd62 +0x078:  mov    0x1c(%eax),%eax
0810fd65 +0x07b:  lea    0x10(%eax),%edx
0810fd68 +0x07e:  mov    -0xc(%ebp),%eax
0810fd6b +0x081:  mov    %eax,0x4(%esp)
0810fd6f +0x085:  mov    %edx,(%esp)
0810fd72 +0x088:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810fd77 +0x08d:  mov    (%eax),%eax
0810fd79 +0x08f:  cmp    0x10(%ebp),%eax
0810fd7c +0x092:  setne  %al
0810fd7f +0x095:  test   %al,%al
0810fd81 +0x097:  je     0810fe0f <+0x125>
0810fd87 +0x09d:  mov    $0x0,%eax
0810fd8c +0x0a2:  jmp    0810fe14 <+0x12a>
0810fd91 +0x0a7:  mov    0x8(%ebp),%eax
0810fd94 +0x0aa:  mov    0x1c(%eax),%eax
0810fd97 +0x0ad:  lea    0x10(%eax),%edx
0810fd9a +0x0b0:  lea    -0x14(%ebp),%eax
0810fd9d +0x0b3:  mov    %edx,0x4(%esp)
0810fda1 +0x0b7:  mov    %eax,(%esp)
0810fda4 +0x0ba:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0810fda9 +0x0bf:  sub    $0x4,%esp
0810fdac +0x0c2:  jmp    0810fdd7 <+0xed>
0810fdae +0x0c4:  lea    -0x14(%ebp),%eax
0810fdb1 +0x0c7:  mov    %eax,(%esp)
0810fdb4 +0x0ca:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0810fdb9 +0x0cf:  mov    (%eax),%eax
0810fdbb +0x0d1:  cmp    0x10(%ebp),%eax
0810fdbe +0x0d4:  sete   %al
0810fdc1 +0x0d7:  test   %al,%al
0810fdc3 +0x0d9:  je     0810fdcc <+0xe2>
0810fdc5 +0x0db:  mov    $0x1,%eax
0810fdca +0x0e0:  jmp    0810fe14 <+0x12a>
0810fdcc +0x0e2:  lea    -0x14(%ebp),%eax
0810fdcf +0x0e5:  mov    %eax,(%esp)
0810fdd2 +0x0e8:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0810fdd7 +0x0ed:  mov    0x8(%ebp),%eax
0810fdda +0x0f0:  mov    0x1c(%eax),%eax
0810fddd +0x0f3:  lea    0x10(%eax),%edx
0810fde0 +0x0f6:  lea    -0x10(%ebp),%eax
0810fde3 +0x0f9:  mov    %edx,0x4(%esp)
0810fde7 +0x0fd:  mov    %eax,(%esp)
0810fdea +0x100:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0810fdef +0x105:  sub    $0x4,%esp
0810fdf2 +0x108:  lea    -0x10(%ebp),%eax
0810fdf5 +0x10b:  mov    %eax,0x4(%esp)
0810fdf9 +0x10f:  lea    -0x14(%ebp),%eax
0810fdfc +0x112:  mov    %eax,(%esp)
0810fdff +0x115:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0810fe04 +0x11a:  test   %al,%al
0810fe06 +0x11c:  jne    0810fdae <+0xc4>
0810fe08 +0x11e:  mov    $0x0,%eax
0810fe0d +0x123:  jmp    0810fe14 <+0x12a>
0810fe0f +0x125:  mov    $0x1,%eax
0810fe14 +0x12a:  mov    -0x4(%ebp),%ebx
0810fe17 +0x12d:  leave
0810fe18 +0x12e:  ret
0810fe19 +0x12f:  nop
```

## 反编译 C

```c
// EventClassify::CObjectBringUp::verifyMaterialItemByRule @ 0x810fcea

/* EventClassify::CObjectBringUp::verifyMaterialItemByRule(CUser*, unsigned int) */

undefined4 __thiscall
EventClassify::CObjectBringUp::verifyMaterialItemByRule
          (CObjectBringUp *this,CUser *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  uint local_10;
  
  if (*(char *)(*(int *)(this + 0x1c) + 0xc) == '\0') {
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator!=(local_18,local_14);
      if (!bVar1) break;
      puVar5 = (uint *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator*(local_18);
      if (*puVar5 == param_2) {
        return 1;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_18);
    }
    uVar6 = 0;
  }
  else {
    local_10 = 0;
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x10));
    uVar3 = CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)param_1);
    if ((uVar3 & 0xff) < uVar2) {
      local_10 = CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)param_1);
      local_10 = local_10 & 0xff;
    }
    else {
      iVar4 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x10));
      local_10 = iVar4 - 1;
    }
    puVar5 = (uint *)std::vector<int,std::allocator<int>>::operator[]
                               ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x10),
                                local_10);
    if (*puVar5 == param_2) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
