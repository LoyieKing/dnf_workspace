# CheckKillMonster

`_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE`

`Quest::CheckKillMonster(int, int, int, ENUM_QUEST_ENEMY_TYPE, std::vector<MonsterKillItem, std::allocator<MonsterKillItem> >&) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x083535d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083535d6  _ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE
#           Quest::CheckKillMonster(int, int, int, ENUM_QUEST_ENEMY_TYPE, std::vector<MonsterKillItem, std::allocator<MonsterKillItem> >&) const
# range [0x083535d6, 0x083536f1]
083535d6 +0x000:  push   %ebp
083535d7 +0x001:  mov    %esp,%ebp
083535d9 +0x003:  sub    $0x48,%esp
083535dc +0x006:  mov    0x8(%ebp),%eax
083535df +0x009:  add    $0x54,%eax
083535e2 +0x00c:  mov    %eax,(%esp)
083535e5 +0x00f:  call   08390ebc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2095c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2095c
083535ea +0x014:  test   %al,%al
083535ec +0x016:  je     083535f8 <+0x22>
083535ee +0x018:  mov    $0x0,%eax
083535f3 +0x01d:  jmp    083536f0 <+0x11a>
083535f8 +0x022:  mov    0x8(%ebp),%eax
083535fb +0x025:  add    $0x54,%eax
083535fe +0x028:  mov    %eax,(%esp)
08353601 +0x02b:  call   08390f00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x209a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x209a0
08353606 +0x030:  mov    %eax,0x4(%esp)
0835360a +0x034:  mov    0x1c(%ebp),%eax
0835360d +0x037:  mov    %eax,(%esp)
08353610 +0x03a:  call   08390f1c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x209bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x209bc
08353615 +0x03f:  movl   $0x0,-0xc(%ebp)
0835361c +0x046:  jmp    083536b4 <+0xde>
08353621 +0x04b:  mov    -0xc(%ebp),%eax
08353624 +0x04e:  mov    0x8(%ebp),%edx
08353627 +0x051:  add    $0x54,%edx
0835362a +0x054:  mov    %eax,0x4(%esp)
0835362e +0x058:  mov    %edx,(%esp)
08353631 +0x05b:  call   08391040 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20ae0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20ae0
08353636 +0x060:  mov    (%eax),%edx
08353638 +0x062:  mov    %edx,-0x2c(%ebp)
0835363b +0x065:  mov    0x4(%eax),%edx
0835363e +0x068:  mov    %edx,-0x28(%ebp)
08353641 +0x06b:  mov    0x8(%eax),%edx
08353644 +0x06e:  mov    %edx,-0x24(%ebp)
08353647 +0x071:  mov    0xc(%eax),%edx
0835364a +0x074:  mov    %edx,-0x20(%ebp)
0835364d +0x077:  mov    0x10(%eax),%edx
08353650 +0x07a:  mov    %edx,-0x1c(%ebp)
08353653 +0x07d:  mov    0x14(%eax),%edx
08353656 +0x080:  mov    %edx,-0x18(%ebp)
08353659 +0x083:  mov    0x18(%eax),%edx
0835365c +0x086:  mov    %edx,-0x14(%ebp)
0835365f +0x089:  mov    0x1c(%eax),%eax
08353662 +0x08c:  mov    %eax,-0x10(%ebp)
08353665 +0x08f:  mov    -0x20(%ebp),%eax
08353668 +0x092:  cmp    $0xffffffff,%eax
0835366b +0x095:  je     08353675 <+0x9f>
0835366d +0x097:  mov    -0x20(%ebp),%eax
08353670 +0x09a:  cmp    0x10(%ebp),%eax
08353673 +0x09d:  jne    083536a9 <+0xd3>
08353675 +0x09f:  mov    -0x24(%ebp),%eax
08353678 +0x0a2:  cmp    $0xffffffff,%eax
0835367b +0x0a5:  je     08353685 <+0xaf>
0835367d +0x0a7:  mov    -0x24(%ebp),%eax
08353680 +0x0aa:  cmp    0xc(%ebp),%eax
08353683 +0x0ad:  jne    083536ac <+0xd6>
08353685 +0x0af:  mov    -0x2c(%ebp),%eax
08353688 +0x0b2:  cmp    0x18(%ebp),%eax
0835368b +0x0b5:  jne    083536af <+0xd9>
0835368d +0x0b7:  mov    -0x28(%ebp),%eax
08353690 +0x0ba:  cmp    0x14(%ebp),%eax
08353693 +0x0bd:  jne    083536b0 <+0xda>
08353695 +0x0bf:  lea    -0x2c(%ebp),%eax
08353698 +0x0c2:  mov    %eax,0x4(%esp)
0835369c +0x0c6:  mov    0x1c(%ebp),%eax
0835369f +0x0c9:  mov    %eax,(%esp)
083536a2 +0x0cc:  call   08391052 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20af2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20af2
083536a7 +0x0d1:  jmp    083536b0 <+0xda>
083536a9 +0x0d3:  nop
083536aa +0x0d4:  jmp    083536b0 <+0xda>
083536ac +0x0d6:  nop
083536ad +0x0d7:  jmp    083536b0 <+0xda>
083536af +0x0d9:  nop
083536b0 +0x0da:  addl   $0x1,-0xc(%ebp)
083536b4 +0x0de:  mov    0x8(%ebp),%eax
083536b7 +0x0e1:  add    $0x54,%eax
083536ba +0x0e4:  mov    %eax,(%esp)
083536bd +0x0e7:  call   08390f00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x209a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x209a0
083536c2 +0x0ec:  cmp    -0xc(%ebp),%eax
083536c5 +0x0ef:  setg   %al
083536c8 +0x0f2:  test   %al,%al
083536ca +0x0f4:  jne    08353621 <+0x4b>
083536d0 +0x0fa:  mov    0x1c(%ebp),%eax
083536d3 +0x0fd:  mov    %eax,(%esp)
083536d6 +0x100:  call   08390f00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x209a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x209a0
083536db +0x105:  test   %eax,%eax
083536dd +0x107:  sete   %al
083536e0 +0x10a:  test   %al,%al
083536e2 +0x10c:  je     083536eb <+0x115>
083536e4 +0x10e:  mov    $0x0,%eax
083536e9 +0x113:  jmp    083536f0 <+0x11a>
083536eb +0x115:  mov    $0x1,%eax
083536f0 +0x11a:  leave
083536f1 +0x11b:  ret
```

## 反编译 C

```c
// Quest::CheckKillMonster @ 0x83535d6

/* Quest::CheckKillMonster(int, int, int, ENUM_QUEST_ENEMY_TYPE, std::vector<MonsterKillItem,
   std::allocator<MonsterKillItem> >&) const */

undefined4 __thiscall
Quest::CheckKillMonster
          (Quest *this,int param_1,int param_2,int param_3,int param_5,
          vector<MonsterKillItem,std::allocator<MonsterKillItem>> *param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  cVar1 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::empty();
  if (cVar1 == '\0') {
    uVar3 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::size
                      ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)(this + 0x54));
    std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::reserve(param_6,uVar3);
    local_10 = 0;
    while (iVar5 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::size
                             ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)
                              (this + 0x54)), (int)local_10 < iVar5) {
      piVar4 = (int *)std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::operator[]
                                ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)
                                 (this + 0x54),local_10);
      local_30 = *piVar4;
      local_2c = piVar4[1];
      local_28 = piVar4[2];
      local_24 = piVar4[3];
      local_20 = piVar4[4];
      local_1c = piVar4[5];
      local_18 = piVar4[6];
      local_14 = piVar4[7];
      if ((((local_24 == -1) || (local_24 == param_2)) &&
          ((local_28 == -1 || (local_28 == param_1)))) &&
         ((local_30 == param_5 && (local_2c == param_3)))) {
        std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::push_back
                  (param_6,(MonsterKillItem *)&local_30);
      }
      local_10 = local_10 + 1;
    }
    iVar5 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::size(param_6);
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
