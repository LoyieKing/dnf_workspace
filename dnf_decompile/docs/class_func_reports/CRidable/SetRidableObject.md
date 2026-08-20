# SetRidableObject

`_ZN8CRidable16SetRidableObjectER13RidableScript`

`CRidable::SetRidableObject(RidableScript&)`

| 类 | 地址 |
|---|---|
| `CRidable` | `0x082fe6d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fe6d0  _ZN8CRidable16SetRidableObjectER13RidableScript
#           CRidable::SetRidableObject(RidableScript&)
# range [0x082fe6d0, 0x082fe9c7]
082fe6d0 +0x000:  push   %ebp
082fe6d1 +0x001:  mov    %esp,%ebp
082fe6d3 +0x003:  push   %esi
082fe6d4 +0x004:  push   %ebx
082fe6d5 +0x005:  sub    $0x100,%esp
082fe6db +0x00b:  mov    0xc(%ebp),%eax
082fe6de +0x00e:  mov    (%eax),%eax
082fe6e0 +0x010:  test   %eax,%eax
082fe6e2 +0x012:  jle    082fe9bc <+0x2ec>
082fe6e8 +0x018:  lea    -0xc4(%ebp),%eax
082fe6ee +0x01e:  mov    %eax,(%esp)
082fe6f1 +0x021:  call   0830e9ba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x59f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x59f
082fe6f6 +0x026:  lea    -0xdc(%ebp),%eax
082fe6fc +0x02c:  mov    %eax,(%esp)
082fe6ff +0x02f:  call   0830e468 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x4d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x4d
082fe704 +0x034:  mov    0xc(%ebp),%eax
082fe707 +0x037:  movzbl 0x4(%eax),%edx
082fe70b +0x03b:  mov    0x8(%ebp),%eax
082fe70e +0x03e:  mov    %dl,0x18(%eax)
082fe711 +0x041:  mov    0xc(%ebp),%eax
082fe714 +0x044:  mov    (%eax),%edx
082fe716 +0x046:  mov    0x8(%ebp),%eax
082fe719 +0x049:  mov    %edx,0x1c(%eax)
082fe71c +0x04c:  mov    0xc(%ebp),%eax
082fe71f +0x04f:  mov    (%eax),%ebx
082fe721 +0x051:  mov    0xc(%ebp),%eax
082fe724 +0x054:  add    $0x8,%eax
082fe727 +0x057:  mov    %eax,(%esp)
082fe72a +0x05a:  call   0830f3ee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xfd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xfd3
082fe72f +0x05f:  cmp    %eax,%ebx
082fe731 +0x061:  setge  %al
082fe734 +0x064:  test   %al,%al
082fe736 +0x066:  je     082fe81c <+0x14c>
082fe73c +0x06c:  movl   $0x0,-0xc(%ebp)
082fe743 +0x073:  jmp    082fe7fb <+0x12b>
082fe748 +0x078:  mov    -0xc(%ebp),%eax
082fe74b +0x07b:  mov    0xc(%ebp),%edx
082fe74e +0x07e:  add    $0x8,%edx
082fe751 +0x081:  mov    %eax,0x4(%esp)
082fe755 +0x085:  mov    %edx,(%esp)
082fe758 +0x088:  call   0830f410 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xff5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xff5
082fe75d +0x08d:  mov    (%eax),%edx
082fe75f +0x08f:  mov    %edx,0x4(%esp)
082fe763 +0x093:  mov    0x4(%eax),%edx
082fe766 +0x096:  mov    %edx,0x8(%esp)
082fe76a +0x09a:  mov    0x8(%eax),%edx
082fe76d +0x09d:  mov    %edx,0xc(%esp)
082fe771 +0x0a1:  mov    0xc(%eax),%edx
082fe774 +0x0a4:  mov    %edx,0x10(%esp)
082fe778 +0x0a8:  mov    0x10(%eax),%edx
082fe77b +0x0ab:  mov    %edx,0x14(%esp)
082fe77f +0x0af:  mov    0x14(%eax),%eax
082fe782 +0x0b2:  mov    %eax,0x18(%esp)
082fe786 +0x0b6:  lea    -0xc4(%ebp),%eax
082fe78c +0x0bc:  mov    %eax,(%esp)
082fe78f +0x0bf:  call   0830e9d8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x5bd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x5bd
082fe794 +0x0c4:  movl   $0x4,-0xac(%ebp)
082fe79e +0x0ce:  lea    -0xc4(%ebp),%eax
082fe7a4 +0x0d4:  mov    %eax,0x8(%esp)
082fe7a8 +0x0d8:  lea    -0xc4(%ebp),%eax
082fe7ae +0x0de:  add    $0x8,%eax
082fe7b1 +0x0e1:  mov    %eax,0x4(%esp)
082fe7b5 +0x0e5:  lea    -0x80(%ebp),%eax
082fe7b8 +0x0e8:  mov    %eax,(%esp)
082fe7bb +0x0eb:  call   0830f42a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x100f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x100f
082fe7c0 +0x0f0:  lea    -0x80(%ebp),%eax
082fe7c3 +0x0f3:  mov    %eax,0x4(%esp)
082fe7c7 +0x0f7:  lea    -0xa0(%ebp),%eax
082fe7cd +0x0fd:  mov    %eax,(%esp)
082fe7d0 +0x100:  call   0830f47c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1061>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1061
082fe7d5 +0x105:  mov    0x8(%ebp),%edx
082fe7d8 +0x108:  lea    -0xa8(%ebp),%eax
082fe7de +0x10e:  lea    -0xa0(%ebp),%ecx
082fe7e4 +0x114:  mov    %ecx,0x8(%esp)
082fe7e8 +0x118:  mov    %edx,0x4(%esp)
082fe7ec +0x11c:  mov    %eax,(%esp)
082fe7ef +0x11f:  call   0830f4d0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x10b5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x10b5
082fe7f4 +0x124:  sub    $0x4,%esp
082fe7f7 +0x127:  addl   $0x1,-0xc(%ebp)
082fe7fb +0x12b:  mov    0xc(%ebp),%eax
082fe7fe +0x12e:  add    $0x8,%eax
082fe801 +0x131:  mov    %eax,(%esp)
082fe804 +0x134:  call   0830f3ee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xfd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xfd3
082fe809 +0x139:  cmp    -0xc(%ebp),%eax
082fe80c +0x13c:  setg   %al
082fe80f +0x13f:  test   %al,%al
082fe811 +0x141:  jne    082fe748 <+0x78>
082fe817 +0x147:  jmp    082fe9bd <+0x2ed>
082fe81c +0x14c:  movl   $0x0,-0x10(%ebp)
082fe823 +0x153:  mov    0xc(%ebp),%eax
082fe826 +0x156:  add    $0x8,%eax
082fe829 +0x159:  mov    %eax,0x4(%esp)
082fe82d +0x15d:  lea    -0xe8(%ebp),%eax
082fe833 +0x163:  mov    %eax,(%esp)
082fe836 +0x166:  call   0830f4fc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x10e1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x10e1
082fe83b +0x16b:  jmp    082fe979 <+0x2a9>
082fe840 +0x170:  lea    -0x60(%ebp),%eax
082fe843 +0x173:  lea    -0xe8(%ebp),%edx
082fe849 +0x179:  mov    %edx,0x4(%esp)
082fe84d +0x17d:  mov    %eax,(%esp)
082fe850 +0x180:  call   0830f5d4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x11b9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x11b9
082fe855 +0x185:  sub    $0x4,%esp
082fe858 +0x188:  lea    -0x5c(%ebp),%eax
082fe85b +0x18b:  lea    -0xe8(%ebp),%edx
082fe861 +0x191:  mov    %edx,0x4(%esp)
082fe865 +0x195:  mov    %eax,(%esp)
082fe868 +0x198:  call   0830f5b0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1195>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1195
082fe86d +0x19d:  sub    $0x4,%esp
082fe870 +0x1a0:  mov    -0x60(%ebp),%eax
082fe873 +0x1a3:  mov    %eax,0x4(%esp)
082fe877 +0x1a7:  mov    -0x5c(%ebp),%eax
082fe87a +0x1aa:  mov    %eax,(%esp)
082fe87d +0x1ad:  call   0830f5fa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x11df>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x11df
082fe882 +0x1b2:  lea    -0xe8(%ebp),%eax
082fe888 +0x1b8:  mov    %eax,(%esp)
082fe88b +0x1bb:  call   0830f6c2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x12a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x12a7
082fe890 +0x1c0:  mov    (%eax),%edx
082fe892 +0x1c2:  mov    %edx,-0xdc(%ebp)
082fe898 +0x1c8:  mov    0x4(%eax),%edx
082fe89b +0x1cb:  mov    %edx,-0xd8(%ebp)
082fe8a1 +0x1d1:  mov    0x8(%eax),%edx
082fe8a4 +0x1d4:  mov    %edx,-0xd4(%ebp)
082fe8aa +0x1da:  mov    0xc(%eax),%edx
082fe8ad +0x1dd:  mov    %edx,-0xd0(%ebp)
082fe8b3 +0x1e3:  mov    0x10(%eax),%edx
082fe8b6 +0x1e6:  mov    %edx,-0xcc(%ebp)
082fe8bc +0x1ec:  mov    0x14(%eax),%eax
082fe8bf +0x1ef:  mov    %eax,-0xc8(%ebp)
082fe8c5 +0x1f5:  lea    -0xe8(%ebp),%eax
082fe8cb +0x1fb:  mov    %eax,(%esp)
082fe8ce +0x1fe:  call   0830f70e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x12f3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x12f3
082fe8d3 +0x203:  mov    -0xd0(%ebp),%eax
082fe8d9 +0x209:  mov    %eax,-0xb8(%ebp)
082fe8df +0x20f:  mov    -0xcc(%ebp),%eax
082fe8e5 +0x215:  mov    %eax,-0xb4(%ebp)
082fe8eb +0x21b:  mov    -0xdc(%ebp),%eax
082fe8f1 +0x221:  mov    %eax,-0xc4(%ebp)
082fe8f7 +0x227:  mov    -0xd8(%ebp),%eax
082fe8fd +0x22d:  mov    %eax,-0xc0(%ebp)
082fe903 +0x233:  mov    -0xd4(%ebp),%eax
082fe909 +0x239:  mov    %eax,-0xbc(%ebp)
082fe90f +0x23f:  mov    -0xc8(%ebp),%eax
082fe915 +0x245:  mov    %eax,-0xb0(%ebp)
082fe91b +0x24b:  movl   $0x4,-0xac(%ebp)
082fe925 +0x255:  lea    -0xc4(%ebp),%eax
082fe92b +0x25b:  mov    %eax,0x8(%esp)
082fe92f +0x25f:  lea    -0xc4(%ebp),%eax
082fe935 +0x265:  add    $0x8,%eax
082fe938 +0x268:  mov    %eax,0x4(%esp)
082fe93c +0x26c:  lea    -0x30(%ebp),%eax
082fe93f +0x26f:  mov    %eax,(%esp)
082fe942 +0x272:  call   0830f42a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x100f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x100f
082fe947 +0x277:  lea    -0x30(%ebp),%eax
082fe94a +0x27a:  mov    %eax,0x4(%esp)
082fe94e +0x27e:  lea    -0x50(%ebp),%eax
082fe951 +0x281:  mov    %eax,(%esp)
082fe954 +0x284:  call   0830f47c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1061>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1061
082fe959 +0x289:  mov    0x8(%ebp),%edx
082fe95c +0x28c:  lea    -0x58(%ebp),%eax
082fe95f +0x28f:  lea    -0x50(%ebp),%ecx
082fe962 +0x292:  mov    %ecx,0x8(%esp)
082fe966 +0x296:  mov    %edx,0x4(%esp)
082fe96a +0x29a:  mov    %eax,(%esp)
082fe96d +0x29d:  call   0830f4d0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x10b5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x10b5
082fe972 +0x2a2:  sub    $0x4,%esp
082fe975 +0x2a5:  addl   $0x1,-0x10(%ebp)
082fe979 +0x2a9:  mov    0xc(%ebp),%eax
082fe97c +0x2ac:  mov    (%eax),%eax
082fe97e +0x2ae:  cmp    -0x10(%ebp),%eax
082fe981 +0x2b1:  setg   %al
082fe984 +0x2b4:  test   %al,%al
082fe986 +0x2b6:  jne    082fe840 <+0x170>
082fe98c +0x2bc:  jmp    082fe9ac <+0x2dc>
082fe98e +0x2be:  mov    %edx,%ebx
082fe990 +0x2c0:  mov    %eax,%esi
082fe992 +0x2c2:  lea    -0xe8(%ebp),%eax
082fe998 +0x2c8:  mov    %eax,(%esp)
082fe99b +0x2cb:  call   0830f2da <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xebf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xebf
082fe9a0 +0x2d0:  mov    %esi,%eax
082fe9a2 +0x2d2:  mov    %ebx,%edx
082fe9a4 +0x2d4:  mov    %eax,(%esp)
082fe9a7 +0x2d7:  call   08ae3750 <_Unwind_Resume>
082fe9ac +0x2dc:  lea    -0xe8(%ebp),%eax
082fe9b2 +0x2e2:  mov    %eax,(%esp)
082fe9b5 +0x2e5:  call   0830f2da <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xebf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xebf
082fe9ba +0x2ea:  jmp    082fe9bd <+0x2ed>
082fe9bc +0x2ec:  nop
082fe9bd +0x2ed:  lea    -0x8(%ebp),%esp
082fe9c0 +0x2f0:  add    $0x0,%esp
082fe9c3 +0x2f3:  pop    %ebx
082fe9c4 +0x2f4:  pop    %esi
082fe9c5 +0x2f5:  pop    %ebp
082fe9c6 +0x2f6:  ret
082fe9c7 +0x2f7:  nop
```

## 反编译 C

```c
// CRidable::SetRidableObject @ 0x82fe6d0

/* CRidable::SetRidableObject(RidableScript&) */

void __thiscall CRidable::SetRidableObject(CRidable *this,RidableScript *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  vector<RidableObject,std::allocator<RidableObject>> local_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  pair local_ac [8];
  pair<int_const,DungeonRidableObject> local_a4 [32];
  pair<int,DungeonRidableObject> local_84 [32];
  undefined4 local_64;
  undefined4 local_60;
  pair local_5c [8];
  pair<int_const,DungeonRidableObject> local_54 [32];
  pair<int,DungeonRidableObject> local_34 [32];
  int local_14;
  uint local_10;
  
  if (0 < *(int *)param_1) {
    DungeonRidableObject::DungeonRidableObject((DungeonRidableObject *)&local_c8);
    RidableObject::RidableObject((RidableObject *)&local_e0);
    this[0x18] = *(CRidable *)(param_1 + 4);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)param_1;
    iVar3 = *(int *)param_1;
    iVar1 = std::vector<RidableObject,std::allocator<RidableObject>>::size
                      ((vector<RidableObject,std::allocator<RidableObject>> *)(param_1 + 8));
    if (iVar3 < iVar1) {
      local_14 = 0;
      std::vector<RidableObject,std::allocator<RidableObject>>::vector
                (local_ec,(vector *)(param_1 + 8));
      for (; local_14 < *(int *)param_1; local_14 = local_14 + 1) {
                    /* try { // try from 082fe850 to 082fe971 has its CatchHandler @ 082fe98e */
        std::vector<RidableObject,std::allocator<RidableObject>>::end();
        std::vector<RidableObject,std::allocator<RidableObject>>::begin();
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<RidableObject*,std::vector<RidableObject,std::allocator<RidableObject>>>>
                  (local_60,local_64);
        puVar2 = (undefined4 *)std::vector<RidableObject,std::allocator<RidableObject>>::back();
        local_e0 = *puVar2;
        local_dc = puVar2[1];
        local_d8 = puVar2[2];
        local_d4 = puVar2[3];
        local_d0 = puVar2[4];
        local_cc = puVar2[5];
        std::vector<RidableObject,std::allocator<RidableObject>>::pop_back(local_ec);
        local_bc = local_d4;
        local_b8 = local_d0;
        local_c8 = local_e0;
        local_c4 = local_dc;
        local_c0 = local_d8;
        local_b4 = local_cc;
        local_b0 = 4;
        std::pair<int,DungeonRidableObject>::pair<int&,DungeonRidableObject&>
                  (local_34,&local_c0,(DungeonRidableObject *)&local_c8);
        std::pair<int_const,DungeonRidableObject>::pair<int,DungeonRidableObject>(local_54,local_34)
        ;
        std::
        map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
        ::insert(local_5c);
      }
      std::vector<RidableObject,std::allocator<RidableObject>>::~vector(local_ec);
    }
    else {
      local_10 = 0;
      while (iVar3 = std::vector<RidableObject,std::allocator<RidableObject>>::size
                               ((vector<RidableObject,std::allocator<RidableObject>> *)(param_1 + 8)
                               ), (int)local_10 < iVar3) {
        puVar2 = (undefined4 *)
                 std::vector<RidableObject,std::allocator<RidableObject>>::operator[]
                           ((vector<RidableObject,std::allocator<RidableObject>> *)(param_1 + 8),
                            local_10);
        DungeonRidableObject::operator=
                  ((DungeonRidableObject *)&local_c8,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4]
                   ,puVar2[5]);
        local_b0 = 4;
        std::pair<int,DungeonRidableObject>::pair<int&,DungeonRidableObject&>
                  (local_84,&local_c0,(DungeonRidableObject *)&local_c8);
        std::pair<int_const,DungeonRidableObject>::pair<int,DungeonRidableObject>(local_a4,local_84)
        ;
        std::
        map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
        ::insert(local_ac);
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}
```
